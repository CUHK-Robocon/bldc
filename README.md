# VESC Firmware for CUHK Robotics Team

An open source motor controller firmware tailor-made for the CUHK Robotics Team, based on v6.05 of Benjamin Vedder's `bldc` project.

Read more about Benjamin Vedder's project at [https://vesc-project.com/](https://vesc-project.com/).

## Supported boards

Check the supported boards by typing `make`

```
[Firmware]
     fw   - Build firmware for default target
                            supported boards are: 100_250 100_250_no_limits 100_500...
```

The current main development target is `60`.

## Prerequisites

For this project, development is done mainly on Linux. Thus, Windows & macOS instructions are removed as they are not actively tested. However, Windows & macOS are supported by Benjamin's original project, check out his project for more info.

### Linux (Ubuntu)

- Tools: `git`, `wget`, `make`
- For Ubuntu:
  ```bash
  sudo apt update
  sudo apt install git wget build-essential
  ```

## Development Environment Setup

### Linux (Ubuntu)

1. `git clone https://github.com/CUHK-Robocon/bldc.git`
2. `cd bldc`
3. `make arm_sdk_install`
4. `make 60` (check available targets with `make` as described above)

Check `build/60` for binaries.
