#pragma once
// IWYU pragma private; include "UnityEngine/KeyCode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KeyCode)
// Forward declare root types
namespace UnityEngine {
struct KeyCode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::KeyCode);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.KeyCode
struct CORDL_TYPE KeyCode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __KeyCode_Unwrapped
  enum struct __KeyCode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Backspace = static_cast<int32_t>(0x8),
    __E_Delete = static_cast<int32_t>(0x7f),
    __E_Tab = static_cast<int32_t>(0x9),
    __E_Clear = static_cast<int32_t>(0xc),
    __E_Return = static_cast<int32_t>(0xd),
    __E_Pause = static_cast<int32_t>(0x13),
    __E_Escape = static_cast<int32_t>(0x1b),
    __E_Space = static_cast<int32_t>(0x20),
    __E_Keypad0 = static_cast<int32_t>(0x100),
    __E_Keypad1 = static_cast<int32_t>(0x101),
    __E_Keypad2 = static_cast<int32_t>(0x102),
    __E_Keypad3 = static_cast<int32_t>(0x103),
    __E_Keypad4 = static_cast<int32_t>(0x104),
    __E_Keypad5 = static_cast<int32_t>(0x105),
    __E_Keypad6 = static_cast<int32_t>(0x106),
    __E_Keypad7 = static_cast<int32_t>(0x107),
    __E_Keypad8 = static_cast<int32_t>(0x108),
    __E_Keypad9 = static_cast<int32_t>(0x109),
    __E_KeypadPeriod = static_cast<int32_t>(0x10a),
    __E_KeypadDivide = static_cast<int32_t>(0x10b),
    __E_KeypadMultiply = static_cast<int32_t>(0x10c),
    __E_KeypadMinus = static_cast<int32_t>(0x10d),
    __E_KeypadPlus = static_cast<int32_t>(0x10e),
    __E_KeypadEnter = static_cast<int32_t>(0x10f),
    __E_KeypadEquals = static_cast<int32_t>(0x110),
    __E_UpArrow = static_cast<int32_t>(0x111),
    __E_DownArrow = static_cast<int32_t>(0x112),
    __E_RightArrow = static_cast<int32_t>(0x113),
    __E_LeftArrow = static_cast<int32_t>(0x114),
    __E_Insert = static_cast<int32_t>(0x115),
    __E_Home = static_cast<int32_t>(0x116),
    __E_End = static_cast<int32_t>(0x117),
    __E_PageUp = static_cast<int32_t>(0x118),
    __E_PageDown = static_cast<int32_t>(0x119),
    __E_F1 = static_cast<int32_t>(0x11a),
    __E_F2 = static_cast<int32_t>(0x11b),
    __E_F3 = static_cast<int32_t>(0x11c),
    __E_F4 = static_cast<int32_t>(0x11d),
    __E_F5 = static_cast<int32_t>(0x11e),
    __E_F6 = static_cast<int32_t>(0x11f),
    __E_F7 = static_cast<int32_t>(0x120),
    __E_F8 = static_cast<int32_t>(0x121),
    __E_F9 = static_cast<int32_t>(0x122),
    __E_F10 = static_cast<int32_t>(0x123),
    __E_F11 = static_cast<int32_t>(0x124),
    __E_F12 = static_cast<int32_t>(0x125),
    __E_F13 = static_cast<int32_t>(0x126),
    __E_F14 = static_cast<int32_t>(0x127),
    __E_F15 = static_cast<int32_t>(0x128),
    __E_Alpha0 = static_cast<int32_t>(0x30),
    __E_Alpha1 = static_cast<int32_t>(0x31),
    __E_Alpha2 = static_cast<int32_t>(0x32),
    __E_Alpha3 = static_cast<int32_t>(0x33),
    __E_Alpha4 = static_cast<int32_t>(0x34),
    __E_Alpha5 = static_cast<int32_t>(0x35),
    __E_Alpha6 = static_cast<int32_t>(0x36),
    __E_Alpha7 = static_cast<int32_t>(0x37),
    __E_Alpha8 = static_cast<int32_t>(0x38),
    __E_Alpha9 = static_cast<int32_t>(0x39),
    __E_Exclaim = static_cast<int32_t>(0x21),
    __E_DoubleQuote = static_cast<int32_t>(0x22),
    __E_Hash = static_cast<int32_t>(0x23),
    __E_Dollar = static_cast<int32_t>(0x24),
    __E_Percent = static_cast<int32_t>(0x25),
    __E_Ampersand = static_cast<int32_t>(0x26),
    __E_Quote = static_cast<int32_t>(0x27),
    __E_LeftParen = static_cast<int32_t>(0x28),
    __E_RightParen = static_cast<int32_t>(0x29),
    __E_Asterisk = static_cast<int32_t>(0x2a),
    __E_Plus = static_cast<int32_t>(0x2b),
    __E_Comma = static_cast<int32_t>(0x2c),
    __E_Minus = static_cast<int32_t>(0x2d),
    __E_Period = static_cast<int32_t>(0x2e),
    __E_Slash = static_cast<int32_t>(0x2f),
    __E_Colon = static_cast<int32_t>(0x3a),
    __E_Semicolon = static_cast<int32_t>(0x3b),
    __E_Less = static_cast<int32_t>(0x3c),
    __E_Equals = static_cast<int32_t>(0x3d),
    __E_Greater = static_cast<int32_t>(0x3e),
    __E_Question = static_cast<int32_t>(0x3f),
    __E_At = static_cast<int32_t>(0x40),
    __E_LeftBracket = static_cast<int32_t>(0x5b),
    __E_Backslash = static_cast<int32_t>(0x5c),
    __E_RightBracket = static_cast<int32_t>(0x5d),
    __E_Caret = static_cast<int32_t>(0x5e),
    __E_Underscore = static_cast<int32_t>(0x5f),
    __E_BackQuote = static_cast<int32_t>(0x60),
    __E_A = static_cast<int32_t>(0x61),
    __E_B = static_cast<int32_t>(0x62),
    __E_C = static_cast<int32_t>(0x63),
    __E_D = static_cast<int32_t>(0x64),
    __E_E = static_cast<int32_t>(0x65),
    __E_F = static_cast<int32_t>(0x66),
    __E_G = static_cast<int32_t>(0x67),
    __E_H = static_cast<int32_t>(0x68),
    __E_I = static_cast<int32_t>(0x69),
    __E_J = static_cast<int32_t>(0x6a),
    __E_K = static_cast<int32_t>(0x6b),
    __E_L = static_cast<int32_t>(0x6c),
    __E_M = static_cast<int32_t>(0x6d),
    __E_N = static_cast<int32_t>(0x6e),
    __E_O = static_cast<int32_t>(0x6f),
    __E_P = static_cast<int32_t>(0x70),
    __E_Q = static_cast<int32_t>(0x71),
    __E_R = static_cast<int32_t>(0x72),
    __E_S = static_cast<int32_t>(0x73),
    __E_T = static_cast<int32_t>(0x74),
    __E_U = static_cast<int32_t>(0x75),
    __E_V = static_cast<int32_t>(0x76),
    __E_W = static_cast<int32_t>(0x77),
    __E_X = static_cast<int32_t>(0x78),
    __E_Y = static_cast<int32_t>(0x79),
    __E_Z = static_cast<int32_t>(0x7a),
    __E_LeftCurlyBracket = static_cast<int32_t>(0x7b),
    __E_Pipe = static_cast<int32_t>(0x7c),
    __E_RightCurlyBracket = static_cast<int32_t>(0x7d),
    __E_Tilde = static_cast<int32_t>(0x7e),
    __E_Numlock = static_cast<int32_t>(0x12c),
    __E_CapsLock = static_cast<int32_t>(0x12d),
    __E_ScrollLock = static_cast<int32_t>(0x12e),
    __E_RightShift = static_cast<int32_t>(0x12f),
    __E_LeftShift = static_cast<int32_t>(0x130),
    __E_RightControl = static_cast<int32_t>(0x131),
    __E_LeftControl = static_cast<int32_t>(0x132),
    __E_RightAlt = static_cast<int32_t>(0x133),
    __E_LeftAlt = static_cast<int32_t>(0x134),
    __E_LeftMeta = static_cast<int32_t>(0x136),
    __E_LeftCommand = static_cast<int32_t>(0x136),
    __E_LeftApple = static_cast<int32_t>(0x136),
    __E_LeftWindows = static_cast<int32_t>(0x137),
    __E_RightMeta = static_cast<int32_t>(0x135),
    __E_RightCommand = static_cast<int32_t>(0x135),
    __E_RightApple = static_cast<int32_t>(0x135),
    __E_RightWindows = static_cast<int32_t>(0x138),
    __E_AltGr = static_cast<int32_t>(0x139),
    __E_Help = static_cast<int32_t>(0x13b),
    __E_Print = static_cast<int32_t>(0x13c),
    __E_SysReq = static_cast<int32_t>(0x13d),
    __E_Break = static_cast<int32_t>(0x13e),
    __E_Menu = static_cast<int32_t>(0x13f),
    __E_Mouse0 = static_cast<int32_t>(0x143),
    __E_Mouse1 = static_cast<int32_t>(0x144),
    __E_Mouse2 = static_cast<int32_t>(0x145),
    __E_Mouse3 = static_cast<int32_t>(0x146),
    __E_Mouse4 = static_cast<int32_t>(0x147),
    __E_Mouse5 = static_cast<int32_t>(0x148),
    __E_Mouse6 = static_cast<int32_t>(0x149),
    __E_JoystickButton0 = static_cast<int32_t>(0x14a),
    __E_JoystickButton1 = static_cast<int32_t>(0x14b),
    __E_JoystickButton2 = static_cast<int32_t>(0x14c),
    __E_JoystickButton3 = static_cast<int32_t>(0x14d),
    __E_JoystickButton4 = static_cast<int32_t>(0x14e),
    __E_JoystickButton5 = static_cast<int32_t>(0x14f),
    __E_JoystickButton6 = static_cast<int32_t>(0x150),
    __E_JoystickButton7 = static_cast<int32_t>(0x151),
    __E_JoystickButton8 = static_cast<int32_t>(0x152),
    __E_JoystickButton9 = static_cast<int32_t>(0x153),
    __E_JoystickButton10 = static_cast<int32_t>(0x154),
    __E_JoystickButton11 = static_cast<int32_t>(0x155),
    __E_JoystickButton12 = static_cast<int32_t>(0x156),
    __E_JoystickButton13 = static_cast<int32_t>(0x157),
    __E_JoystickButton14 = static_cast<int32_t>(0x158),
    __E_JoystickButton15 = static_cast<int32_t>(0x159),
    __E_JoystickButton16 = static_cast<int32_t>(0x15a),
    __E_JoystickButton17 = static_cast<int32_t>(0x15b),
    __E_JoystickButton18 = static_cast<int32_t>(0x15c),
    __E_JoystickButton19 = static_cast<int32_t>(0x15d),
    __E_Joystick1Button0 = static_cast<int32_t>(0x15e),
    __E_Joystick1Button1 = static_cast<int32_t>(0x15f),
    __E_Joystick1Button2 = static_cast<int32_t>(0x160),
    __E_Joystick1Button3 = static_cast<int32_t>(0x161),
    __E_Joystick1Button4 = static_cast<int32_t>(0x162),
    __E_Joystick1Button5 = static_cast<int32_t>(0x163),
    __E_Joystick1Button6 = static_cast<int32_t>(0x164),
    __E_Joystick1Button7 = static_cast<int32_t>(0x165),
    __E_Joystick1Button8 = static_cast<int32_t>(0x166),
    __E_Joystick1Button9 = static_cast<int32_t>(0x167),
    __E_Joystick1Button10 = static_cast<int32_t>(0x168),
    __E_Joystick1Button11 = static_cast<int32_t>(0x169),
    __E_Joystick1Button12 = static_cast<int32_t>(0x16a),
    __E_Joystick1Button13 = static_cast<int32_t>(0x16b),
    __E_Joystick1Button14 = static_cast<int32_t>(0x16c),
    __E_Joystick1Button15 = static_cast<int32_t>(0x16d),
    __E_Joystick1Button16 = static_cast<int32_t>(0x16e),
    __E_Joystick1Button17 = static_cast<int32_t>(0x16f),
    __E_Joystick1Button18 = static_cast<int32_t>(0x170),
    __E_Joystick1Button19 = static_cast<int32_t>(0x171),
    __E_Joystick2Button0 = static_cast<int32_t>(0x172),
    __E_Joystick2Button1 = static_cast<int32_t>(0x173),
    __E_Joystick2Button2 = static_cast<int32_t>(0x174),
    __E_Joystick2Button3 = static_cast<int32_t>(0x175),
    __E_Joystick2Button4 = static_cast<int32_t>(0x176),
    __E_Joystick2Button5 = static_cast<int32_t>(0x177),
    __E_Joystick2Button6 = static_cast<int32_t>(0x178),
    __E_Joystick2Button7 = static_cast<int32_t>(0x179),
    __E_Joystick2Button8 = static_cast<int32_t>(0x17a),
    __E_Joystick2Button9 = static_cast<int32_t>(0x17b),
    __E_Joystick2Button10 = static_cast<int32_t>(0x17c),
    __E_Joystick2Button11 = static_cast<int32_t>(0x17d),
    __E_Joystick2Button12 = static_cast<int32_t>(0x17e),
    __E_Joystick2Button13 = static_cast<int32_t>(0x17f),
    __E_Joystick2Button14 = static_cast<int32_t>(0x180),
    __E_Joystick2Button15 = static_cast<int32_t>(0x181),
    __E_Joystick2Button16 = static_cast<int32_t>(0x182),
    __E_Joystick2Button17 = static_cast<int32_t>(0x183),
    __E_Joystick2Button18 = static_cast<int32_t>(0x184),
    __E_Joystick2Button19 = static_cast<int32_t>(0x185),
    __E_Joystick3Button0 = static_cast<int32_t>(0x186),
    __E_Joystick3Button1 = static_cast<int32_t>(0x187),
    __E_Joystick3Button2 = static_cast<int32_t>(0x188),
    __E_Joystick3Button3 = static_cast<int32_t>(0x189),
    __E_Joystick3Button4 = static_cast<int32_t>(0x18a),
    __E_Joystick3Button5 = static_cast<int32_t>(0x18b),
    __E_Joystick3Button6 = static_cast<int32_t>(0x18c),
    __E_Joystick3Button7 = static_cast<int32_t>(0x18d),
    __E_Joystick3Button8 = static_cast<int32_t>(0x18e),
    __E_Joystick3Button9 = static_cast<int32_t>(0x18f),
    __E_Joystick3Button10 = static_cast<int32_t>(0x190),
    __E_Joystick3Button11 = static_cast<int32_t>(0x191),
    __E_Joystick3Button12 = static_cast<int32_t>(0x192),
    __E_Joystick3Button13 = static_cast<int32_t>(0x193),
    __E_Joystick3Button14 = static_cast<int32_t>(0x194),
    __E_Joystick3Button15 = static_cast<int32_t>(0x195),
    __E_Joystick3Button16 = static_cast<int32_t>(0x196),
    __E_Joystick3Button17 = static_cast<int32_t>(0x197),
    __E_Joystick3Button18 = static_cast<int32_t>(0x198),
    __E_Joystick3Button19 = static_cast<int32_t>(0x199),
    __E_Joystick4Button0 = static_cast<int32_t>(0x19a),
    __E_Joystick4Button1 = static_cast<int32_t>(0x19b),
    __E_Joystick4Button2 = static_cast<int32_t>(0x19c),
    __E_Joystick4Button3 = static_cast<int32_t>(0x19d),
    __E_Joystick4Button4 = static_cast<int32_t>(0x19e),
    __E_Joystick4Button5 = static_cast<int32_t>(0x19f),
    __E_Joystick4Button6 = static_cast<int32_t>(0x1a0),
    __E_Joystick4Button7 = static_cast<int32_t>(0x1a1),
    __E_Joystick4Button8 = static_cast<int32_t>(0x1a2),
    __E_Joystick4Button9 = static_cast<int32_t>(0x1a3),
    __E_Joystick4Button10 = static_cast<int32_t>(0x1a4),
    __E_Joystick4Button11 = static_cast<int32_t>(0x1a5),
    __E_Joystick4Button12 = static_cast<int32_t>(0x1a6),
    __E_Joystick4Button13 = static_cast<int32_t>(0x1a7),
    __E_Joystick4Button14 = static_cast<int32_t>(0x1a8),
    __E_Joystick4Button15 = static_cast<int32_t>(0x1a9),
    __E_Joystick4Button16 = static_cast<int32_t>(0x1aa),
    __E_Joystick4Button17 = static_cast<int32_t>(0x1ab),
    __E_Joystick4Button18 = static_cast<int32_t>(0x1ac),
    __E_Joystick4Button19 = static_cast<int32_t>(0x1ad),
    __E_Joystick5Button0 = static_cast<int32_t>(0x1ae),
    __E_Joystick5Button1 = static_cast<int32_t>(0x1af),
    __E_Joystick5Button2 = static_cast<int32_t>(0x1b0),
    __E_Joystick5Button3 = static_cast<int32_t>(0x1b1),
    __E_Joystick5Button4 = static_cast<int32_t>(0x1b2),
    __E_Joystick5Button5 = static_cast<int32_t>(0x1b3),
    __E_Joystick5Button6 = static_cast<int32_t>(0x1b4),
    __E_Joystick5Button7 = static_cast<int32_t>(0x1b5),
    __E_Joystick5Button8 = static_cast<int32_t>(0x1b6),
    __E_Joystick5Button9 = static_cast<int32_t>(0x1b7),
    __E_Joystick5Button10 = static_cast<int32_t>(0x1b8),
    __E_Joystick5Button11 = static_cast<int32_t>(0x1b9),
    __E_Joystick5Button12 = static_cast<int32_t>(0x1ba),
    __E_Joystick5Button13 = static_cast<int32_t>(0x1bb),
    __E_Joystick5Button14 = static_cast<int32_t>(0x1bc),
    __E_Joystick5Button15 = static_cast<int32_t>(0x1bd),
    __E_Joystick5Button16 = static_cast<int32_t>(0x1be),
    __E_Joystick5Button17 = static_cast<int32_t>(0x1bf),
    __E_Joystick5Button18 = static_cast<int32_t>(0x1c0),
    __E_Joystick5Button19 = static_cast<int32_t>(0x1c1),
    __E_Joystick6Button0 = static_cast<int32_t>(0x1c2),
    __E_Joystick6Button1 = static_cast<int32_t>(0x1c3),
    __E_Joystick6Button2 = static_cast<int32_t>(0x1c4),
    __E_Joystick6Button3 = static_cast<int32_t>(0x1c5),
    __E_Joystick6Button4 = static_cast<int32_t>(0x1c6),
    __E_Joystick6Button5 = static_cast<int32_t>(0x1c7),
    __E_Joystick6Button6 = static_cast<int32_t>(0x1c8),
    __E_Joystick6Button7 = static_cast<int32_t>(0x1c9),
    __E_Joystick6Button8 = static_cast<int32_t>(0x1ca),
    __E_Joystick6Button9 = static_cast<int32_t>(0x1cb),
    __E_Joystick6Button10 = static_cast<int32_t>(0x1cc),
    __E_Joystick6Button11 = static_cast<int32_t>(0x1cd),
    __E_Joystick6Button12 = static_cast<int32_t>(0x1ce),
    __E_Joystick6Button13 = static_cast<int32_t>(0x1cf),
    __E_Joystick6Button14 = static_cast<int32_t>(0x1d0),
    __E_Joystick6Button15 = static_cast<int32_t>(0x1d1),
    __E_Joystick6Button16 = static_cast<int32_t>(0x1d2),
    __E_Joystick6Button17 = static_cast<int32_t>(0x1d3),
    __E_Joystick6Button18 = static_cast<int32_t>(0x1d4),
    __E_Joystick6Button19 = static_cast<int32_t>(0x1d5),
    __E_Joystick7Button0 = static_cast<int32_t>(0x1d6),
    __E_Joystick7Button1 = static_cast<int32_t>(0x1d7),
    __E_Joystick7Button2 = static_cast<int32_t>(0x1d8),
    __E_Joystick7Button3 = static_cast<int32_t>(0x1d9),
    __E_Joystick7Button4 = static_cast<int32_t>(0x1da),
    __E_Joystick7Button5 = static_cast<int32_t>(0x1db),
    __E_Joystick7Button6 = static_cast<int32_t>(0x1dc),
    __E_Joystick7Button7 = static_cast<int32_t>(0x1dd),
    __E_Joystick7Button8 = static_cast<int32_t>(0x1de),
    __E_Joystick7Button9 = static_cast<int32_t>(0x1df),
    __E_Joystick7Button10 = static_cast<int32_t>(0x1e0),
    __E_Joystick7Button11 = static_cast<int32_t>(0x1e1),
    __E_Joystick7Button12 = static_cast<int32_t>(0x1e2),
    __E_Joystick7Button13 = static_cast<int32_t>(0x1e3),
    __E_Joystick7Button14 = static_cast<int32_t>(0x1e4),
    __E_Joystick7Button15 = static_cast<int32_t>(0x1e5),
    __E_Joystick7Button16 = static_cast<int32_t>(0x1e6),
    __E_Joystick7Button17 = static_cast<int32_t>(0x1e7),
    __E_Joystick7Button18 = static_cast<int32_t>(0x1e8),
    __E_Joystick7Button19 = static_cast<int32_t>(0x1e9),
    __E_Joystick8Button0 = static_cast<int32_t>(0x1ea),
    __E_Joystick8Button1 = static_cast<int32_t>(0x1eb),
    __E_Joystick8Button2 = static_cast<int32_t>(0x1ec),
    __E_Joystick8Button3 = static_cast<int32_t>(0x1ed),
    __E_Joystick8Button4 = static_cast<int32_t>(0x1ee),
    __E_Joystick8Button5 = static_cast<int32_t>(0x1ef),
    __E_Joystick8Button6 = static_cast<int32_t>(0x1f0),
    __E_Joystick8Button7 = static_cast<int32_t>(0x1f1),
    __E_Joystick8Button8 = static_cast<int32_t>(0x1f2),
    __E_Joystick8Button9 = static_cast<int32_t>(0x1f3),
    __E_Joystick8Button10 = static_cast<int32_t>(0x1f4),
    __E_Joystick8Button11 = static_cast<int32_t>(0x1f5),
    __E_Joystick8Button12 = static_cast<int32_t>(0x1f6),
    __E_Joystick8Button13 = static_cast<int32_t>(0x1f7),
    __E_Joystick8Button14 = static_cast<int32_t>(0x1f8),
    __E_Joystick8Button15 = static_cast<int32_t>(0x1f9),
    __E_Joystick8Button16 = static_cast<int32_t>(0x1fa),
    __E_Joystick8Button17 = static_cast<int32_t>(0x1fb),
    __E_Joystick8Button18 = static_cast<int32_t>(0x1fc),
    __E_Joystick8Button19 = static_cast<int32_t>(0x1fd),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __KeyCode_Unwrapped() const noexcept {
    return static_cast<__KeyCode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyCode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr KeyCode(int32_t value__) noexcept;

  /// @brief Field A value: I32(97)
  static ::UnityEngine::KeyCode const A;

  /// @brief Field Alpha0 value: I32(48)
  static ::UnityEngine::KeyCode const Alpha0;

  /// @brief Field Alpha1 value: I32(49)
  static ::UnityEngine::KeyCode const Alpha1;

  /// @brief Field Alpha2 value: I32(50)
  static ::UnityEngine::KeyCode const Alpha2;

  /// @brief Field Alpha3 value: I32(51)
  static ::UnityEngine::KeyCode const Alpha3;

  /// @brief Field Alpha4 value: I32(52)
  static ::UnityEngine::KeyCode const Alpha4;

  /// @brief Field Alpha5 value: I32(53)
  static ::UnityEngine::KeyCode const Alpha5;

  /// @brief Field Alpha6 value: I32(54)
  static ::UnityEngine::KeyCode const Alpha6;

  /// @brief Field Alpha7 value: I32(55)
  static ::UnityEngine::KeyCode const Alpha7;

  /// @brief Field Alpha8 value: I32(56)
  static ::UnityEngine::KeyCode const Alpha8;

  /// @brief Field Alpha9 value: I32(57)
  static ::UnityEngine::KeyCode const Alpha9;

  /// @brief Field AltGr value: I32(313)
  static ::UnityEngine::KeyCode const AltGr;

  /// @brief Field Ampersand value: I32(38)
  static ::UnityEngine::KeyCode const Ampersand;

  /// @brief Field Asterisk value: I32(42)
  static ::UnityEngine::KeyCode const Asterisk;

  /// @brief Field At value: I32(64)
  static ::UnityEngine::KeyCode const At;

  /// @brief Field B value: I32(98)
  static ::UnityEngine::KeyCode const B;

  /// @brief Field BackQuote value: I32(96)
  static ::UnityEngine::KeyCode const BackQuote;

  /// @brief Field Backslash value: I32(92)
  static ::UnityEngine::KeyCode const Backslash;

  /// @brief Field Backspace value: I32(8)
  static ::UnityEngine::KeyCode const Backspace;

  /// @brief Field Break value: I32(318)
  static ::UnityEngine::KeyCode const Break;

  /// @brief Field C value: I32(99)
  static ::UnityEngine::KeyCode const C;

  /// @brief Field CapsLock value: I32(301)
  static ::UnityEngine::KeyCode const CapsLock;

  /// @brief Field Caret value: I32(94)
  static ::UnityEngine::KeyCode const Caret;

  /// @brief Field Clear value: I32(12)
  static ::UnityEngine::KeyCode const Clear;

  /// @brief Field Colon value: I32(58)
  static ::UnityEngine::KeyCode const Colon;

  /// @brief Field Comma value: I32(44)
  static ::UnityEngine::KeyCode const Comma;

  /// @brief Field D value: I32(100)
  static ::UnityEngine::KeyCode const D;

  /// @brief Field Delete value: I32(127)
  static ::UnityEngine::KeyCode const Delete;

  /// @brief Field Dollar value: I32(36)
  static ::UnityEngine::KeyCode const Dollar;

  /// @brief Field DoubleQuote value: I32(34)
  static ::UnityEngine::KeyCode const DoubleQuote;

  /// @brief Field DownArrow value: I32(274)
  static ::UnityEngine::KeyCode const DownArrow;

  /// @brief Field E value: I32(101)
  static ::UnityEngine::KeyCode const E;

  /// @brief Field End value: I32(279)
  static ::UnityEngine::KeyCode const End;

  /// @brief Field Equals value: I32(61)
  static ::UnityEngine::KeyCode const Equals;

  /// @brief Field Escape value: I32(27)
  static ::UnityEngine::KeyCode const Escape;

  /// @brief Field Exclaim value: I32(33)
  static ::UnityEngine::KeyCode const Exclaim;

  /// @brief Field F value: I32(102)
  static ::UnityEngine::KeyCode const F;

  /// @brief Field F1 value: I32(282)
  static ::UnityEngine::KeyCode const F1;

  /// @brief Field F10 value: I32(291)
  static ::UnityEngine::KeyCode const F10;

  /// @brief Field F11 value: I32(292)
  static ::UnityEngine::KeyCode const F11;

  /// @brief Field F12 value: I32(293)
  static ::UnityEngine::KeyCode const F12;

  /// @brief Field F13 value: I32(294)
  static ::UnityEngine::KeyCode const F13;

  /// @brief Field F14 value: I32(295)
  static ::UnityEngine::KeyCode const F14;

  /// @brief Field F15 value: I32(296)
  static ::UnityEngine::KeyCode const F15;

  /// @brief Field F2 value: I32(283)
  static ::UnityEngine::KeyCode const F2;

  /// @brief Field F3 value: I32(284)
  static ::UnityEngine::KeyCode const F3;

  /// @brief Field F4 value: I32(285)
  static ::UnityEngine::KeyCode const F4;

  /// @brief Field F5 value: I32(286)
  static ::UnityEngine::KeyCode const F5;

  /// @brief Field F6 value: I32(287)
  static ::UnityEngine::KeyCode const F6;

  /// @brief Field F7 value: I32(288)
  static ::UnityEngine::KeyCode const F7;

  /// @brief Field F8 value: I32(289)
  static ::UnityEngine::KeyCode const F8;

  /// @brief Field F9 value: I32(290)
  static ::UnityEngine::KeyCode const F9;

  /// @brief Field G value: I32(103)
  static ::UnityEngine::KeyCode const G;

  /// @brief Field Greater value: I32(62)
  static ::UnityEngine::KeyCode const Greater;

  /// @brief Field H value: I32(104)
  static ::UnityEngine::KeyCode const H;

  /// @brief Field Hash value: I32(35)
  static ::UnityEngine::KeyCode const Hash;

  /// @brief Field Help value: I32(315)
  static ::UnityEngine::KeyCode const Help;

  /// @brief Field Home value: I32(278)
  static ::UnityEngine::KeyCode const Home;

  /// @brief Field I value: I32(105)
  static ::UnityEngine::KeyCode const I;

  /// @brief Field Insert value: I32(277)
  static ::UnityEngine::KeyCode const Insert;

  /// @brief Field J value: I32(106)
  static ::UnityEngine::KeyCode const J;

  /// @brief Field Joystick1Button0 value: I32(350)
  static ::UnityEngine::KeyCode const Joystick1Button0;

  /// @brief Field Joystick1Button1 value: I32(351)
  static ::UnityEngine::KeyCode const Joystick1Button1;

  /// @brief Field Joystick1Button10 value: I32(360)
  static ::UnityEngine::KeyCode const Joystick1Button10;

  /// @brief Field Joystick1Button11 value: I32(361)
  static ::UnityEngine::KeyCode const Joystick1Button11;

  /// @brief Field Joystick1Button12 value: I32(362)
  static ::UnityEngine::KeyCode const Joystick1Button12;

  /// @brief Field Joystick1Button13 value: I32(363)
  static ::UnityEngine::KeyCode const Joystick1Button13;

  /// @brief Field Joystick1Button14 value: I32(364)
  static ::UnityEngine::KeyCode const Joystick1Button14;

  /// @brief Field Joystick1Button15 value: I32(365)
  static ::UnityEngine::KeyCode const Joystick1Button15;

  /// @brief Field Joystick1Button16 value: I32(366)
  static ::UnityEngine::KeyCode const Joystick1Button16;

  /// @brief Field Joystick1Button17 value: I32(367)
  static ::UnityEngine::KeyCode const Joystick1Button17;

  /// @brief Field Joystick1Button18 value: I32(368)
  static ::UnityEngine::KeyCode const Joystick1Button18;

  /// @brief Field Joystick1Button19 value: I32(369)
  static ::UnityEngine::KeyCode const Joystick1Button19;

  /// @brief Field Joystick1Button2 value: I32(352)
  static ::UnityEngine::KeyCode const Joystick1Button2;

  /// @brief Field Joystick1Button3 value: I32(353)
  static ::UnityEngine::KeyCode const Joystick1Button3;

  /// @brief Field Joystick1Button4 value: I32(354)
  static ::UnityEngine::KeyCode const Joystick1Button4;

  /// @brief Field Joystick1Button5 value: I32(355)
  static ::UnityEngine::KeyCode const Joystick1Button5;

  /// @brief Field Joystick1Button6 value: I32(356)
  static ::UnityEngine::KeyCode const Joystick1Button6;

  /// @brief Field Joystick1Button7 value: I32(357)
  static ::UnityEngine::KeyCode const Joystick1Button7;

  /// @brief Field Joystick1Button8 value: I32(358)
  static ::UnityEngine::KeyCode const Joystick1Button8;

  /// @brief Field Joystick1Button9 value: I32(359)
  static ::UnityEngine::KeyCode const Joystick1Button9;

  /// @brief Field Joystick2Button0 value: I32(370)
  static ::UnityEngine::KeyCode const Joystick2Button0;

  /// @brief Field Joystick2Button1 value: I32(371)
  static ::UnityEngine::KeyCode const Joystick2Button1;

  /// @brief Field Joystick2Button10 value: I32(380)
  static ::UnityEngine::KeyCode const Joystick2Button10;

  /// @brief Field Joystick2Button11 value: I32(381)
  static ::UnityEngine::KeyCode const Joystick2Button11;

  /// @brief Field Joystick2Button12 value: I32(382)
  static ::UnityEngine::KeyCode const Joystick2Button12;

  /// @brief Field Joystick2Button13 value: I32(383)
  static ::UnityEngine::KeyCode const Joystick2Button13;

  /// @brief Field Joystick2Button14 value: I32(384)
  static ::UnityEngine::KeyCode const Joystick2Button14;

  /// @brief Field Joystick2Button15 value: I32(385)
  static ::UnityEngine::KeyCode const Joystick2Button15;

  /// @brief Field Joystick2Button16 value: I32(386)
  static ::UnityEngine::KeyCode const Joystick2Button16;

  /// @brief Field Joystick2Button17 value: I32(387)
  static ::UnityEngine::KeyCode const Joystick2Button17;

  /// @brief Field Joystick2Button18 value: I32(388)
  static ::UnityEngine::KeyCode const Joystick2Button18;

  /// @brief Field Joystick2Button19 value: I32(389)
  static ::UnityEngine::KeyCode const Joystick2Button19;

  /// @brief Field Joystick2Button2 value: I32(372)
  static ::UnityEngine::KeyCode const Joystick2Button2;

  /// @brief Field Joystick2Button3 value: I32(373)
  static ::UnityEngine::KeyCode const Joystick2Button3;

  /// @brief Field Joystick2Button4 value: I32(374)
  static ::UnityEngine::KeyCode const Joystick2Button4;

  /// @brief Field Joystick2Button5 value: I32(375)
  static ::UnityEngine::KeyCode const Joystick2Button5;

  /// @brief Field Joystick2Button6 value: I32(376)
  static ::UnityEngine::KeyCode const Joystick2Button6;

  /// @brief Field Joystick2Button7 value: I32(377)
  static ::UnityEngine::KeyCode const Joystick2Button7;

  /// @brief Field Joystick2Button8 value: I32(378)
  static ::UnityEngine::KeyCode const Joystick2Button8;

  /// @brief Field Joystick2Button9 value: I32(379)
  static ::UnityEngine::KeyCode const Joystick2Button9;

  /// @brief Field Joystick3Button0 value: I32(390)
  static ::UnityEngine::KeyCode const Joystick3Button0;

  /// @brief Field Joystick3Button1 value: I32(391)
  static ::UnityEngine::KeyCode const Joystick3Button1;

  /// @brief Field Joystick3Button10 value: I32(400)
  static ::UnityEngine::KeyCode const Joystick3Button10;

  /// @brief Field Joystick3Button11 value: I32(401)
  static ::UnityEngine::KeyCode const Joystick3Button11;

  /// @brief Field Joystick3Button12 value: I32(402)
  static ::UnityEngine::KeyCode const Joystick3Button12;

  /// @brief Field Joystick3Button13 value: I32(403)
  static ::UnityEngine::KeyCode const Joystick3Button13;

  /// @brief Field Joystick3Button14 value: I32(404)
  static ::UnityEngine::KeyCode const Joystick3Button14;

  /// @brief Field Joystick3Button15 value: I32(405)
  static ::UnityEngine::KeyCode const Joystick3Button15;

  /// @brief Field Joystick3Button16 value: I32(406)
  static ::UnityEngine::KeyCode const Joystick3Button16;

  /// @brief Field Joystick3Button17 value: I32(407)
  static ::UnityEngine::KeyCode const Joystick3Button17;

  /// @brief Field Joystick3Button18 value: I32(408)
  static ::UnityEngine::KeyCode const Joystick3Button18;

  /// @brief Field Joystick3Button19 value: I32(409)
  static ::UnityEngine::KeyCode const Joystick3Button19;

  /// @brief Field Joystick3Button2 value: I32(392)
  static ::UnityEngine::KeyCode const Joystick3Button2;

  /// @brief Field Joystick3Button3 value: I32(393)
  static ::UnityEngine::KeyCode const Joystick3Button3;

  /// @brief Field Joystick3Button4 value: I32(394)
  static ::UnityEngine::KeyCode const Joystick3Button4;

  /// @brief Field Joystick3Button5 value: I32(395)
  static ::UnityEngine::KeyCode const Joystick3Button5;

  /// @brief Field Joystick3Button6 value: I32(396)
  static ::UnityEngine::KeyCode const Joystick3Button6;

  /// @brief Field Joystick3Button7 value: I32(397)
  static ::UnityEngine::KeyCode const Joystick3Button7;

  /// @brief Field Joystick3Button8 value: I32(398)
  static ::UnityEngine::KeyCode const Joystick3Button8;

  /// @brief Field Joystick3Button9 value: I32(399)
  static ::UnityEngine::KeyCode const Joystick3Button9;

  /// @brief Field Joystick4Button0 value: I32(410)
  static ::UnityEngine::KeyCode const Joystick4Button0;

  /// @brief Field Joystick4Button1 value: I32(411)
  static ::UnityEngine::KeyCode const Joystick4Button1;

  /// @brief Field Joystick4Button10 value: I32(420)
  static ::UnityEngine::KeyCode const Joystick4Button10;

  /// @brief Field Joystick4Button11 value: I32(421)
  static ::UnityEngine::KeyCode const Joystick4Button11;

  /// @brief Field Joystick4Button12 value: I32(422)
  static ::UnityEngine::KeyCode const Joystick4Button12;

  /// @brief Field Joystick4Button13 value: I32(423)
  static ::UnityEngine::KeyCode const Joystick4Button13;

  /// @brief Field Joystick4Button14 value: I32(424)
  static ::UnityEngine::KeyCode const Joystick4Button14;

  /// @brief Field Joystick4Button15 value: I32(425)
  static ::UnityEngine::KeyCode const Joystick4Button15;

  /// @brief Field Joystick4Button16 value: I32(426)
  static ::UnityEngine::KeyCode const Joystick4Button16;

  /// @brief Field Joystick4Button17 value: I32(427)
  static ::UnityEngine::KeyCode const Joystick4Button17;

  /// @brief Field Joystick4Button18 value: I32(428)
  static ::UnityEngine::KeyCode const Joystick4Button18;

  /// @brief Field Joystick4Button19 value: I32(429)
  static ::UnityEngine::KeyCode const Joystick4Button19;

  /// @brief Field Joystick4Button2 value: I32(412)
  static ::UnityEngine::KeyCode const Joystick4Button2;

  /// @brief Field Joystick4Button3 value: I32(413)
  static ::UnityEngine::KeyCode const Joystick4Button3;

  /// @brief Field Joystick4Button4 value: I32(414)
  static ::UnityEngine::KeyCode const Joystick4Button4;

  /// @brief Field Joystick4Button5 value: I32(415)
  static ::UnityEngine::KeyCode const Joystick4Button5;

  /// @brief Field Joystick4Button6 value: I32(416)
  static ::UnityEngine::KeyCode const Joystick4Button6;

  /// @brief Field Joystick4Button7 value: I32(417)
  static ::UnityEngine::KeyCode const Joystick4Button7;

  /// @brief Field Joystick4Button8 value: I32(418)
  static ::UnityEngine::KeyCode const Joystick4Button8;

  /// @brief Field Joystick4Button9 value: I32(419)
  static ::UnityEngine::KeyCode const Joystick4Button9;

  /// @brief Field Joystick5Button0 value: I32(430)
  static ::UnityEngine::KeyCode const Joystick5Button0;

  /// @brief Field Joystick5Button1 value: I32(431)
  static ::UnityEngine::KeyCode const Joystick5Button1;

  /// @brief Field Joystick5Button10 value: I32(440)
  static ::UnityEngine::KeyCode const Joystick5Button10;

  /// @brief Field Joystick5Button11 value: I32(441)
  static ::UnityEngine::KeyCode const Joystick5Button11;

  /// @brief Field Joystick5Button12 value: I32(442)
  static ::UnityEngine::KeyCode const Joystick5Button12;

  /// @brief Field Joystick5Button13 value: I32(443)
  static ::UnityEngine::KeyCode const Joystick5Button13;

  /// @brief Field Joystick5Button14 value: I32(444)
  static ::UnityEngine::KeyCode const Joystick5Button14;

  /// @brief Field Joystick5Button15 value: I32(445)
  static ::UnityEngine::KeyCode const Joystick5Button15;

  /// @brief Field Joystick5Button16 value: I32(446)
  static ::UnityEngine::KeyCode const Joystick5Button16;

  /// @brief Field Joystick5Button17 value: I32(447)
  static ::UnityEngine::KeyCode const Joystick5Button17;

  /// @brief Field Joystick5Button18 value: I32(448)
  static ::UnityEngine::KeyCode const Joystick5Button18;

  /// @brief Field Joystick5Button19 value: I32(449)
  static ::UnityEngine::KeyCode const Joystick5Button19;

  /// @brief Field Joystick5Button2 value: I32(432)
  static ::UnityEngine::KeyCode const Joystick5Button2;

  /// @brief Field Joystick5Button3 value: I32(433)
  static ::UnityEngine::KeyCode const Joystick5Button3;

  /// @brief Field Joystick5Button4 value: I32(434)
  static ::UnityEngine::KeyCode const Joystick5Button4;

  /// @brief Field Joystick5Button5 value: I32(435)
  static ::UnityEngine::KeyCode const Joystick5Button5;

  /// @brief Field Joystick5Button6 value: I32(436)
  static ::UnityEngine::KeyCode const Joystick5Button6;

  /// @brief Field Joystick5Button7 value: I32(437)
  static ::UnityEngine::KeyCode const Joystick5Button7;

  /// @brief Field Joystick5Button8 value: I32(438)
  static ::UnityEngine::KeyCode const Joystick5Button8;

  /// @brief Field Joystick5Button9 value: I32(439)
  static ::UnityEngine::KeyCode const Joystick5Button9;

  /// @brief Field Joystick6Button0 value: I32(450)
  static ::UnityEngine::KeyCode const Joystick6Button0;

  /// @brief Field Joystick6Button1 value: I32(451)
  static ::UnityEngine::KeyCode const Joystick6Button1;

  /// @brief Field Joystick6Button10 value: I32(460)
  static ::UnityEngine::KeyCode const Joystick6Button10;

  /// @brief Field Joystick6Button11 value: I32(461)
  static ::UnityEngine::KeyCode const Joystick6Button11;

  /// @brief Field Joystick6Button12 value: I32(462)
  static ::UnityEngine::KeyCode const Joystick6Button12;

  /// @brief Field Joystick6Button13 value: I32(463)
  static ::UnityEngine::KeyCode const Joystick6Button13;

  /// @brief Field Joystick6Button14 value: I32(464)
  static ::UnityEngine::KeyCode const Joystick6Button14;

  /// @brief Field Joystick6Button15 value: I32(465)
  static ::UnityEngine::KeyCode const Joystick6Button15;

  /// @brief Field Joystick6Button16 value: I32(466)
  static ::UnityEngine::KeyCode const Joystick6Button16;

  /// @brief Field Joystick6Button17 value: I32(467)
  static ::UnityEngine::KeyCode const Joystick6Button17;

  /// @brief Field Joystick6Button18 value: I32(468)
  static ::UnityEngine::KeyCode const Joystick6Button18;

  /// @brief Field Joystick6Button19 value: I32(469)
  static ::UnityEngine::KeyCode const Joystick6Button19;

  /// @brief Field Joystick6Button2 value: I32(452)
  static ::UnityEngine::KeyCode const Joystick6Button2;

  /// @brief Field Joystick6Button3 value: I32(453)
  static ::UnityEngine::KeyCode const Joystick6Button3;

  /// @brief Field Joystick6Button4 value: I32(454)
  static ::UnityEngine::KeyCode const Joystick6Button4;

  /// @brief Field Joystick6Button5 value: I32(455)
  static ::UnityEngine::KeyCode const Joystick6Button5;

  /// @brief Field Joystick6Button6 value: I32(456)
  static ::UnityEngine::KeyCode const Joystick6Button6;

  /// @brief Field Joystick6Button7 value: I32(457)
  static ::UnityEngine::KeyCode const Joystick6Button7;

  /// @brief Field Joystick6Button8 value: I32(458)
  static ::UnityEngine::KeyCode const Joystick6Button8;

  /// @brief Field Joystick6Button9 value: I32(459)
  static ::UnityEngine::KeyCode const Joystick6Button9;

  /// @brief Field Joystick7Button0 value: I32(470)
  static ::UnityEngine::KeyCode const Joystick7Button0;

  /// @brief Field Joystick7Button1 value: I32(471)
  static ::UnityEngine::KeyCode const Joystick7Button1;

  /// @brief Field Joystick7Button10 value: I32(480)
  static ::UnityEngine::KeyCode const Joystick7Button10;

  /// @brief Field Joystick7Button11 value: I32(481)
  static ::UnityEngine::KeyCode const Joystick7Button11;

  /// @brief Field Joystick7Button12 value: I32(482)
  static ::UnityEngine::KeyCode const Joystick7Button12;

  /// @brief Field Joystick7Button13 value: I32(483)
  static ::UnityEngine::KeyCode const Joystick7Button13;

  /// @brief Field Joystick7Button14 value: I32(484)
  static ::UnityEngine::KeyCode const Joystick7Button14;

  /// @brief Field Joystick7Button15 value: I32(485)
  static ::UnityEngine::KeyCode const Joystick7Button15;

  /// @brief Field Joystick7Button16 value: I32(486)
  static ::UnityEngine::KeyCode const Joystick7Button16;

  /// @brief Field Joystick7Button17 value: I32(487)
  static ::UnityEngine::KeyCode const Joystick7Button17;

  /// @brief Field Joystick7Button18 value: I32(488)
  static ::UnityEngine::KeyCode const Joystick7Button18;

  /// @brief Field Joystick7Button19 value: I32(489)
  static ::UnityEngine::KeyCode const Joystick7Button19;

  /// @brief Field Joystick7Button2 value: I32(472)
  static ::UnityEngine::KeyCode const Joystick7Button2;

  /// @brief Field Joystick7Button3 value: I32(473)
  static ::UnityEngine::KeyCode const Joystick7Button3;

  /// @brief Field Joystick7Button4 value: I32(474)
  static ::UnityEngine::KeyCode const Joystick7Button4;

  /// @brief Field Joystick7Button5 value: I32(475)
  static ::UnityEngine::KeyCode const Joystick7Button5;

  /// @brief Field Joystick7Button6 value: I32(476)
  static ::UnityEngine::KeyCode const Joystick7Button6;

  /// @brief Field Joystick7Button7 value: I32(477)
  static ::UnityEngine::KeyCode const Joystick7Button7;

  /// @brief Field Joystick7Button8 value: I32(478)
  static ::UnityEngine::KeyCode const Joystick7Button8;

  /// @brief Field Joystick7Button9 value: I32(479)
  static ::UnityEngine::KeyCode const Joystick7Button9;

  /// @brief Field Joystick8Button0 value: I32(490)
  static ::UnityEngine::KeyCode const Joystick8Button0;

  /// @brief Field Joystick8Button1 value: I32(491)
  static ::UnityEngine::KeyCode const Joystick8Button1;

  /// @brief Field Joystick8Button10 value: I32(500)
  static ::UnityEngine::KeyCode const Joystick8Button10;

  /// @brief Field Joystick8Button11 value: I32(501)
  static ::UnityEngine::KeyCode const Joystick8Button11;

  /// @brief Field Joystick8Button12 value: I32(502)
  static ::UnityEngine::KeyCode const Joystick8Button12;

  /// @brief Field Joystick8Button13 value: I32(503)
  static ::UnityEngine::KeyCode const Joystick8Button13;

  /// @brief Field Joystick8Button14 value: I32(504)
  static ::UnityEngine::KeyCode const Joystick8Button14;

  /// @brief Field Joystick8Button15 value: I32(505)
  static ::UnityEngine::KeyCode const Joystick8Button15;

  /// @brief Field Joystick8Button16 value: I32(506)
  static ::UnityEngine::KeyCode const Joystick8Button16;

  /// @brief Field Joystick8Button17 value: I32(507)
  static ::UnityEngine::KeyCode const Joystick8Button17;

  /// @brief Field Joystick8Button18 value: I32(508)
  static ::UnityEngine::KeyCode const Joystick8Button18;

  /// @brief Field Joystick8Button19 value: I32(509)
  static ::UnityEngine::KeyCode const Joystick8Button19;

  /// @brief Field Joystick8Button2 value: I32(492)
  static ::UnityEngine::KeyCode const Joystick8Button2;

  /// @brief Field Joystick8Button3 value: I32(493)
  static ::UnityEngine::KeyCode const Joystick8Button3;

  /// @brief Field Joystick8Button4 value: I32(494)
  static ::UnityEngine::KeyCode const Joystick8Button4;

  /// @brief Field Joystick8Button5 value: I32(495)
  static ::UnityEngine::KeyCode const Joystick8Button5;

  /// @brief Field Joystick8Button6 value: I32(496)
  static ::UnityEngine::KeyCode const Joystick8Button6;

  /// @brief Field Joystick8Button7 value: I32(497)
  static ::UnityEngine::KeyCode const Joystick8Button7;

  /// @brief Field Joystick8Button8 value: I32(498)
  static ::UnityEngine::KeyCode const Joystick8Button8;

  /// @brief Field Joystick8Button9 value: I32(499)
  static ::UnityEngine::KeyCode const Joystick8Button9;

  /// @brief Field JoystickButton0 value: I32(330)
  static ::UnityEngine::KeyCode const JoystickButton0;

  /// @brief Field JoystickButton1 value: I32(331)
  static ::UnityEngine::KeyCode const JoystickButton1;

  /// @brief Field JoystickButton10 value: I32(340)
  static ::UnityEngine::KeyCode const JoystickButton10;

  /// @brief Field JoystickButton11 value: I32(341)
  static ::UnityEngine::KeyCode const JoystickButton11;

  /// @brief Field JoystickButton12 value: I32(342)
  static ::UnityEngine::KeyCode const JoystickButton12;

  /// @brief Field JoystickButton13 value: I32(343)
  static ::UnityEngine::KeyCode const JoystickButton13;

  /// @brief Field JoystickButton14 value: I32(344)
  static ::UnityEngine::KeyCode const JoystickButton14;

  /// @brief Field JoystickButton15 value: I32(345)
  static ::UnityEngine::KeyCode const JoystickButton15;

  /// @brief Field JoystickButton16 value: I32(346)
  static ::UnityEngine::KeyCode const JoystickButton16;

  /// @brief Field JoystickButton17 value: I32(347)
  static ::UnityEngine::KeyCode const JoystickButton17;

  /// @brief Field JoystickButton18 value: I32(348)
  static ::UnityEngine::KeyCode const JoystickButton18;

  /// @brief Field JoystickButton19 value: I32(349)
  static ::UnityEngine::KeyCode const JoystickButton19;

  /// @brief Field JoystickButton2 value: I32(332)
  static ::UnityEngine::KeyCode const JoystickButton2;

  /// @brief Field JoystickButton3 value: I32(333)
  static ::UnityEngine::KeyCode const JoystickButton3;

  /// @brief Field JoystickButton4 value: I32(334)
  static ::UnityEngine::KeyCode const JoystickButton4;

  /// @brief Field JoystickButton5 value: I32(335)
  static ::UnityEngine::KeyCode const JoystickButton5;

  /// @brief Field JoystickButton6 value: I32(336)
  static ::UnityEngine::KeyCode const JoystickButton6;

  /// @brief Field JoystickButton7 value: I32(337)
  static ::UnityEngine::KeyCode const JoystickButton7;

  /// @brief Field JoystickButton8 value: I32(338)
  static ::UnityEngine::KeyCode const JoystickButton8;

  /// @brief Field JoystickButton9 value: I32(339)
  static ::UnityEngine::KeyCode const JoystickButton9;

  /// @brief Field K value: I32(107)
  static ::UnityEngine::KeyCode const K;

  /// @brief Field Keypad0 value: I32(256)
  static ::UnityEngine::KeyCode const Keypad0;

  /// @brief Field Keypad1 value: I32(257)
  static ::UnityEngine::KeyCode const Keypad1;

  /// @brief Field Keypad2 value: I32(258)
  static ::UnityEngine::KeyCode const Keypad2;

  /// @brief Field Keypad3 value: I32(259)
  static ::UnityEngine::KeyCode const Keypad3;

  /// @brief Field Keypad4 value: I32(260)
  static ::UnityEngine::KeyCode const Keypad4;

  /// @brief Field Keypad5 value: I32(261)
  static ::UnityEngine::KeyCode const Keypad5;

  /// @brief Field Keypad6 value: I32(262)
  static ::UnityEngine::KeyCode const Keypad6;

  /// @brief Field Keypad7 value: I32(263)
  static ::UnityEngine::KeyCode const Keypad7;

  /// @brief Field Keypad8 value: I32(264)
  static ::UnityEngine::KeyCode const Keypad8;

  /// @brief Field Keypad9 value: I32(265)
  static ::UnityEngine::KeyCode const Keypad9;

  /// @brief Field KeypadDivide value: I32(267)
  static ::UnityEngine::KeyCode const KeypadDivide;

  /// @brief Field KeypadEnter value: I32(271)
  static ::UnityEngine::KeyCode const KeypadEnter;

  /// @brief Field KeypadEquals value: I32(272)
  static ::UnityEngine::KeyCode const KeypadEquals;

  /// @brief Field KeypadMinus value: I32(269)
  static ::UnityEngine::KeyCode const KeypadMinus;

  /// @brief Field KeypadMultiply value: I32(268)
  static ::UnityEngine::KeyCode const KeypadMultiply;

  /// @brief Field KeypadPeriod value: I32(266)
  static ::UnityEngine::KeyCode const KeypadPeriod;

  /// @brief Field KeypadPlus value: I32(270)
  static ::UnityEngine::KeyCode const KeypadPlus;

  /// @brief Field L value: I32(108)
  static ::UnityEngine::KeyCode const L;

  /// @brief Field LeftAlt value: I32(308)
  static ::UnityEngine::KeyCode const LeftAlt;

  /// @brief Field LeftApple value: I32(310)
  static ::UnityEngine::KeyCode const LeftApple;

  /// @brief Field LeftArrow value: I32(276)
  static ::UnityEngine::KeyCode const LeftArrow;

  /// @brief Field LeftBracket value: I32(91)
  static ::UnityEngine::KeyCode const LeftBracket;

  /// @brief Field LeftCommand value: I32(310)
  static ::UnityEngine::KeyCode const LeftCommand;

  /// @brief Field LeftControl value: I32(306)
  static ::UnityEngine::KeyCode const LeftControl;

  /// @brief Field LeftCurlyBracket value: I32(123)
  static ::UnityEngine::KeyCode const LeftCurlyBracket;

  /// @brief Field LeftMeta value: I32(310)
  static ::UnityEngine::KeyCode const LeftMeta;

  /// @brief Field LeftParen value: I32(40)
  static ::UnityEngine::KeyCode const LeftParen;

  /// @brief Field LeftShift value: I32(304)
  static ::UnityEngine::KeyCode const LeftShift;

  /// @brief Field LeftWindows value: I32(311)
  static ::UnityEngine::KeyCode const LeftWindows;

  /// @brief Field Less value: I32(60)
  static ::UnityEngine::KeyCode const Less;

  /// @brief Field M value: I32(109)
  static ::UnityEngine::KeyCode const M;

  /// @brief Field Menu value: I32(319)
  static ::UnityEngine::KeyCode const Menu;

  /// @brief Field Minus value: I32(45)
  static ::UnityEngine::KeyCode const Minus;

  /// @brief Field Mouse0 value: I32(323)
  static ::UnityEngine::KeyCode const Mouse0;

  /// @brief Field Mouse1 value: I32(324)
  static ::UnityEngine::KeyCode const Mouse1;

  /// @brief Field Mouse2 value: I32(325)
  static ::UnityEngine::KeyCode const Mouse2;

  /// @brief Field Mouse3 value: I32(326)
  static ::UnityEngine::KeyCode const Mouse3;

  /// @brief Field Mouse4 value: I32(327)
  static ::UnityEngine::KeyCode const Mouse4;

  /// @brief Field Mouse5 value: I32(328)
  static ::UnityEngine::KeyCode const Mouse5;

  /// @brief Field Mouse6 value: I32(329)
  static ::UnityEngine::KeyCode const Mouse6;

  /// @brief Field N value: I32(110)
  static ::UnityEngine::KeyCode const N;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::KeyCode const None;

  /// @brief Field Numlock value: I32(300)
  static ::UnityEngine::KeyCode const Numlock;

  /// @brief Field O value: I32(111)
  static ::UnityEngine::KeyCode const O;

  /// @brief Field P value: I32(112)
  static ::UnityEngine::KeyCode const P;

  /// @brief Field PageDown value: I32(281)
  static ::UnityEngine::KeyCode const PageDown;

  /// @brief Field PageUp value: I32(280)
  static ::UnityEngine::KeyCode const PageUp;

  /// @brief Field Pause value: I32(19)
  static ::UnityEngine::KeyCode const Pause;

  /// @brief Field Percent value: I32(37)
  static ::UnityEngine::KeyCode const Percent;

  /// @brief Field Period value: I32(46)
  static ::UnityEngine::KeyCode const Period;

  /// @brief Field Pipe value: I32(124)
  static ::UnityEngine::KeyCode const Pipe;

  /// @brief Field Plus value: I32(43)
  static ::UnityEngine::KeyCode const Plus;

  /// @brief Field Print value: I32(316)
  static ::UnityEngine::KeyCode const Print;

  /// @brief Field Q value: I32(113)
  static ::UnityEngine::KeyCode const Q;

  /// @brief Field Question value: I32(63)
  static ::UnityEngine::KeyCode const Question;

  /// @brief Field Quote value: I32(39)
  static ::UnityEngine::KeyCode const Quote;

  /// @brief Field R value: I32(114)
  static ::UnityEngine::KeyCode const R;

  /// @brief Field Return value: I32(13)
  static ::UnityEngine::KeyCode const Return;

  /// @brief Field RightAlt value: I32(307)
  static ::UnityEngine::KeyCode const RightAlt;

  /// @brief Field RightApple value: I32(309)
  static ::UnityEngine::KeyCode const RightApple;

  /// @brief Field RightArrow value: I32(275)
  static ::UnityEngine::KeyCode const RightArrow;

  /// @brief Field RightBracket value: I32(93)
  static ::UnityEngine::KeyCode const RightBracket;

  /// @brief Field RightCommand value: I32(309)
  static ::UnityEngine::KeyCode const RightCommand;

  /// @brief Field RightControl value: I32(305)
  static ::UnityEngine::KeyCode const RightControl;

  /// @brief Field RightCurlyBracket value: I32(125)
  static ::UnityEngine::KeyCode const RightCurlyBracket;

  /// @brief Field RightMeta value: I32(309)
  static ::UnityEngine::KeyCode const RightMeta;

  /// @brief Field RightParen value: I32(41)
  static ::UnityEngine::KeyCode const RightParen;

  /// @brief Field RightShift value: I32(303)
  static ::UnityEngine::KeyCode const RightShift;

  /// @brief Field RightWindows value: I32(312)
  static ::UnityEngine::KeyCode const RightWindows;

  /// @brief Field S value: I32(115)
  static ::UnityEngine::KeyCode const S;

  /// @brief Field ScrollLock value: I32(302)
  static ::UnityEngine::KeyCode const ScrollLock;

  /// @brief Field Semicolon value: I32(59)
  static ::UnityEngine::KeyCode const Semicolon;

  /// @brief Field Slash value: I32(47)
  static ::UnityEngine::KeyCode const Slash;

  /// @brief Field Space value: I32(32)
  static ::UnityEngine::KeyCode const Space;

  /// @brief Field SysReq value: I32(317)
  static ::UnityEngine::KeyCode const SysReq;

  /// @brief Field T value: I32(116)
  static ::UnityEngine::KeyCode const T;

  /// @brief Field Tab value: I32(9)
  static ::UnityEngine::KeyCode const Tab;

  /// @brief Field Tilde value: I32(126)
  static ::UnityEngine::KeyCode const Tilde;

  /// @brief Field U value: I32(117)
  static ::UnityEngine::KeyCode const U;

  /// @brief Field Underscore value: I32(95)
  static ::UnityEngine::KeyCode const Underscore;

  /// @brief Field UpArrow value: I32(273)
  static ::UnityEngine::KeyCode const UpArrow;

  /// @brief Field V value: I32(118)
  static ::UnityEngine::KeyCode const V;

  /// @brief Field W value: I32(119)
  static ::UnityEngine::KeyCode const W;

  /// @brief Field X value: I32(120)
  static ::UnityEngine::KeyCode const X;

  /// @brief Field Y value: I32(121)
  static ::UnityEngine::KeyCode const Y;

  /// @brief Field Z value: I32(122)
  static ::UnityEngine::KeyCode const Z;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10806 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::KeyCode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::KeyCode, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::KeyCode, "UnityEngine", "KeyCode");
