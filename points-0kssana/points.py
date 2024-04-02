from typing import List, Tuple
import math

Point = Tuple[float, float]


def dist(a, b):
    return math.hypot(a[0] - b[0], a[1] - b[1])

def merge(points):
    if len(points) > 1:
        mid = len(points) // 2
        left = points[:mid]
        right = points[mid:]
        merge(left)
        merge(right)
        iter_left = iter_right = iter_points = 0
        while iter_left < len(left) and iter_right < len(right):
            if left[iter_left][1] < right[iter_right][1]:
                points[iter_points] = left[iter_left]
                iter_left += 1
            else:
                points[iter_points] = right[iter_right]
                iter_right += 1
            iter_points += 1
        while iter_left < len(left):
            points[iter_points] = left[iter_left]
            iter_left += 1
            iter_points += 1
        while iter_right < len(right):
            points[iter_points] = right[iter_right]
            iter_right += 1
            iter_points += 1
        return points


def find_min(points):
    ans = (10**100, -1, -1)
    for i in range(len(points)):
        for j in range(i + 1, len(points)):
            if ans[0] > dist(points[i], points[j]):
                ans = (dist(points[i], points[j]), points[i], points[j])
    return ans

def closest_pair_of_points(points: List[Point]) \
        -> Tuple[float, Point, Point]:
    points = sorted(points)
    if len(points) <= 3:
        ans = find_min(points)
        points = sorted (points, key = lambda point: point[1])
        return ans
    else:
        mid = len(points) // 2
        middle_x = points[mid][0]
        ans = min(closest_pair_of_points(points[:mid]), closest_pair_of_points(points[mid:]))
        points = merge(points)
        min_distance = ans[0]

        close_points = list(filter(lambda point: (abs(point[0] - middle_x) < min_distance), points))
        for i in range(len(close_points)):
            for j in range(i - 1, -1, -1):
                point1 = close_points[i]
                point2 = close_points[j]
                if point1[1] - point2[1] > min_distance:
                    break
                ans = min(ans, (dist(point1, point2), point1, point2))
        return ans