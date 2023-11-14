def rotate_lights(direction, no_of_rotations, lights):
    n = len(lights)

    if direction == 0:
        no_of_rotations %= n
        rotated_lights = lights[no_of_rotations:] + lights[:no_of_rotations]
    elif direction == 1:
        no_of_rotations %= n
        rotated_lights = lights[-no_of_rotations:] + lights[:-no_of_rotations]
    else:
        print("Invalid direction")

    return rotated_lights

def main():
    T = int(input())

    for _ in range(T):
        direction, no_of_rotations, N = map(int, input().split())
        lights = list(map(int, input().split()))

        rotated_lights = rotate_lights(direction, no_of_rotations, lights)
        print(" ".join(map(str, rotated_lights)))

if __name__ == "__main__":
    main()
