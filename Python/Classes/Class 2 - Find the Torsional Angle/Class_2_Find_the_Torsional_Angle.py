import math

class Points(object):
    def __init__(self, x, y, z):
        # Constructor
        self.x, self.y, self.z = x,y,z

    def __sub__(self, no):
        return Points(self.x - no.x, self.y - no.y, self.z - no.z)

    def dot(self, no):
        # Compute the dot product (https://en.wikipedia.org/wiki/Dot_product)
        return (self.x * no.x + self.y * no.y + self.z * no.z)

    def cross(self, no):
        # Compute the cross product (https://en.wikipedia.org/wiki/Cross_product#Coordinate_notation, the s1,s2,s3 part)
        x_component = (self.y * no.z) - (self.z * no.y)
        y_component = (self.z * no.x) - (self.x * no.z)
        z_component = (self.x * no.y) - (self.y * no.x)
        return Points(x_component, y_component, z_component)

    def absolute(self):
        return pow((self.x ** 2 + self.y ** 2 + self.z ** 2), 0.5)

if __name__ == '__main__':
    points = list()
    for i in range(4):
        a = list(map(float, input().split()))
        points.append(a)

    a, b, c, d = Points(*points[0]), Points(*points[1]), Points(*points[2]), Points(*points[3])
    x = (b - a).cross(c - b)
    y = (c - b).cross(d - c)
    angle = math.acos(x.dot(y) / (x.absolute() * y.absolute()))

    print("%.2f" % math.degrees(angle))