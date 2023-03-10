# Keychron Q2 QMK

This repo is for me to compile [QMK][] firmware for my [Keychron Q2][]
keyboard.

Huge thanks to [QMK-on-K6][] for outlining this process!

## Q2 Keymap

My Q2 keymap is at [`keyboards/keychron/q2/keymaps/ansi-josh/keymap.c`](./keyboards/keychron/q2/ansi_encoder/keymaps/josh/keymap.c).
It is a copy of the [`keychron/q2/ansi_encoder:keychron`][Keychron Q2 Default Keymap] files.

See the [releases](https://github.com/itspriddle/q2-qmk/releases) page for
tagged builds.

## My Setup

- Map the <kbd>Esc</kbd> key to <kbd>\`~</kbd>.
- Map <kbd>Caps Lock</kbd> to <kbd>Esc</kbd>.
- Map <kbd>Fn1+Caps Lock</kbd> to <kbd>Caps Lock</kbd> for the rare moments I
  want to YELL.
- Map <kbd>Del</kbd> (immediately under the knob) to <kbd>Home</kbd> to match
  the [keycaps][Keychron Keycaps] I have.
- Map <kbd>Home</kbd> to <kbd>Page Up</kbd> to match my keycaps.
- On Mac:
    - Turning the knob with no modifiers adjusts volume.
    - Holding <kbd>Ctrl</kbd> and turning the knob clockwise sends
      <kbd>Ctrl+Mouse Wheel Up</kbd>. Counter-clockwise sends <kbd>Ctrl+Mouse
      Wheel Down</kbd>. This zooms in and out on macOS (with an Accessibility
      setting enabled).
    - Holding <kbd>Fn1</kbd> and turning the knob adjusts brightness
      on a second display.
    - Holding <kbd>Fn2</kbd> and turning the knob adjusts brightness on the
      primary display.
    - Holding <kbd>Fn1</kbd> and pressing the knob maxes out the brightness on
      a secondary display (by sending 16x brightness up calls).

## GitHub Workflow

Make changes to `keymap.c` and then commit/push them to GitHub. If a build
passes, the compiled firmware will be uploaded as a build artifact. It can be
downloaded from the view build page on GitHub. These uploads will be deleted
eventually, so do not rely on being able to download them forever.

When the firmware reaches a good saving point, uploading a git tag will
trigger a build and upload the compiled firmware as a release asset. These
files stay on GitHub for the life of the project.

To see how to do this Linux, see
[`.github/workflows/build.yml`](./.github/workflows/build.yml).

## Installing Firmware

1. Install [QMK Toolbox][] and launch it.
2. Unplug the Q2. Hold <kbd>Esc</kbd> and <kbd>Ctrl</kbd> and plug the
   keyboard in. If you see "DFU device connected" in QMK Toolbox, move on to
   step 3.
     - If you do not, you need to manually put the keyboard in DFU mode.
       Follow [these steps][Keychron Q2 Reset] but stop short of uploading any
       firmware (since you're about to upload your own).
       Unplug it again. Remove the spacebar. Press and hold the small button
       that is visible in the left opening on the case. Plug the keyboard in
       again.
3. Click "Open" and upload the `.bin` file that GitHub Actions generated.
4. Click the "Flash" button.

[QMK]: https://qmk.fm
[QMK Toolbox]: https://github.com/qmk/qmk_toolbox
[Keychron Q2]: https://www.keychron.com/pages/keychron-q2-customizable-mechanical-keyboard
[Keychron Q2 Reset]: https://www.keychron.com/blogs/archived/how-to-factory-reset-or-flash-your-qmk-via-enabled-keychron-q2-keyboard
[QMK-on-K6]: https://github.com/CanUnesi/QMK-on-K6/blob/main/README.md
[Keychron Q2 Default Keymap]: https://github.com/qmk/qmk_firmware/tree/2133cc1/keyboards/keychron/q2/ansi_encoder/keymaps/keychron
[Keychron Keycaps]: https://www.keychron.com/collections/all-keycaps/products/keychron-oem-profile-pbt-retro-keycap-set?variant=32352277528665
