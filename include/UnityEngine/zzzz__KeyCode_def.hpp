#pragma once
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
// Type: UnityEngine::KeyCode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10058))
// CS Name: ::UnityEngine::KeyCode
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr KeyCode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyCode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::KeyCode const None;

  /// @brief Field Backspace value: static_cast<int32_t>(0x8)
  static ::UnityEngine::KeyCode const Backspace;

  /// @brief Field Delete value: static_cast<int32_t>(0x7f)
  static ::UnityEngine::KeyCode const Delete;

  /// @brief Field Tab value: static_cast<int32_t>(0x9)
  static ::UnityEngine::KeyCode const Tab;

  /// @brief Field Clear value: static_cast<int32_t>(0xc)
  static ::UnityEngine::KeyCode const Clear;

  /// @brief Field Return value: static_cast<int32_t>(0xd)
  static ::UnityEngine::KeyCode const Return;

  /// @brief Field Pause value: static_cast<int32_t>(0x13)
  static ::UnityEngine::KeyCode const Pause;

  /// @brief Field Escape value: static_cast<int32_t>(0x1b)
  static ::UnityEngine::KeyCode const Escape;

  /// @brief Field Space value: static_cast<int32_t>(0x20)
  static ::UnityEngine::KeyCode const Space;

  /// @brief Field Keypad0 value: static_cast<int32_t>(0x100)
  static ::UnityEngine::KeyCode const Keypad0;

  /// @brief Field Keypad1 value: static_cast<int32_t>(0x101)
  static ::UnityEngine::KeyCode const Keypad1;

  /// @brief Field Keypad2 value: static_cast<int32_t>(0x102)
  static ::UnityEngine::KeyCode const Keypad2;

  /// @brief Field Keypad3 value: static_cast<int32_t>(0x103)
  static ::UnityEngine::KeyCode const Keypad3;

  /// @brief Field Keypad4 value: static_cast<int32_t>(0x104)
  static ::UnityEngine::KeyCode const Keypad4;

  /// @brief Field Keypad5 value: static_cast<int32_t>(0x105)
  static ::UnityEngine::KeyCode const Keypad5;

  /// @brief Field Keypad6 value: static_cast<int32_t>(0x106)
  static ::UnityEngine::KeyCode const Keypad6;

  /// @brief Field Keypad7 value: static_cast<int32_t>(0x107)
  static ::UnityEngine::KeyCode const Keypad7;

  /// @brief Field Keypad8 value: static_cast<int32_t>(0x108)
  static ::UnityEngine::KeyCode const Keypad8;

  /// @brief Field Keypad9 value: static_cast<int32_t>(0x109)
  static ::UnityEngine::KeyCode const Keypad9;

  /// @brief Field KeypadPeriod value: static_cast<int32_t>(0x10a)
  static ::UnityEngine::KeyCode const KeypadPeriod;

  /// @brief Field KeypadDivide value: static_cast<int32_t>(0x10b)
  static ::UnityEngine::KeyCode const KeypadDivide;

  /// @brief Field KeypadMultiply value: static_cast<int32_t>(0x10c)
  static ::UnityEngine::KeyCode const KeypadMultiply;

  /// @brief Field KeypadMinus value: static_cast<int32_t>(0x10d)
  static ::UnityEngine::KeyCode const KeypadMinus;

  /// @brief Field KeypadPlus value: static_cast<int32_t>(0x10e)
  static ::UnityEngine::KeyCode const KeypadPlus;

  /// @brief Field KeypadEnter value: static_cast<int32_t>(0x10f)
  static ::UnityEngine::KeyCode const KeypadEnter;

  /// @brief Field KeypadEquals value: static_cast<int32_t>(0x110)
  static ::UnityEngine::KeyCode const KeypadEquals;

  /// @brief Field UpArrow value: static_cast<int32_t>(0x111)
  static ::UnityEngine::KeyCode const UpArrow;

  /// @brief Field DownArrow value: static_cast<int32_t>(0x112)
  static ::UnityEngine::KeyCode const DownArrow;

  /// @brief Field RightArrow value: static_cast<int32_t>(0x113)
  static ::UnityEngine::KeyCode const RightArrow;

  /// @brief Field LeftArrow value: static_cast<int32_t>(0x114)
  static ::UnityEngine::KeyCode const LeftArrow;

  /// @brief Field Insert value: static_cast<int32_t>(0x115)
  static ::UnityEngine::KeyCode const Insert;

  /// @brief Field Home value: static_cast<int32_t>(0x116)
  static ::UnityEngine::KeyCode const Home;

  /// @brief Field End value: static_cast<int32_t>(0x117)
  static ::UnityEngine::KeyCode const End;

  /// @brief Field PageUp value: static_cast<int32_t>(0x118)
  static ::UnityEngine::KeyCode const PageUp;

  /// @brief Field PageDown value: static_cast<int32_t>(0x119)
  static ::UnityEngine::KeyCode const PageDown;

  /// @brief Field F1 value: static_cast<int32_t>(0x11a)
  static ::UnityEngine::KeyCode const F1;

  /// @brief Field F2 value: static_cast<int32_t>(0x11b)
  static ::UnityEngine::KeyCode const F2;

  /// @brief Field F3 value: static_cast<int32_t>(0x11c)
  static ::UnityEngine::KeyCode const F3;

  /// @brief Field F4 value: static_cast<int32_t>(0x11d)
  static ::UnityEngine::KeyCode const F4;

  /// @brief Field F5 value: static_cast<int32_t>(0x11e)
  static ::UnityEngine::KeyCode const F5;

  /// @brief Field F6 value: static_cast<int32_t>(0x11f)
  static ::UnityEngine::KeyCode const F6;

  /// @brief Field F7 value: static_cast<int32_t>(0x120)
  static ::UnityEngine::KeyCode const F7;

  /// @brief Field F8 value: static_cast<int32_t>(0x121)
  static ::UnityEngine::KeyCode const F8;

  /// @brief Field F9 value: static_cast<int32_t>(0x122)
  static ::UnityEngine::KeyCode const F9;

  /// @brief Field F10 value: static_cast<int32_t>(0x123)
  static ::UnityEngine::KeyCode const F10;

  /// @brief Field F11 value: static_cast<int32_t>(0x124)
  static ::UnityEngine::KeyCode const F11;

  /// @brief Field F12 value: static_cast<int32_t>(0x125)
  static ::UnityEngine::KeyCode const F12;

  /// @brief Field F13 value: static_cast<int32_t>(0x126)
  static ::UnityEngine::KeyCode const F13;

  /// @brief Field F14 value: static_cast<int32_t>(0x127)
  static ::UnityEngine::KeyCode const F14;

  /// @brief Field F15 value: static_cast<int32_t>(0x128)
  static ::UnityEngine::KeyCode const F15;

  /// @brief Field Alpha0 value: static_cast<int32_t>(0x30)
  static ::UnityEngine::KeyCode const Alpha0;

  /// @brief Field Alpha1 value: static_cast<int32_t>(0x31)
  static ::UnityEngine::KeyCode const Alpha1;

  /// @brief Field Alpha2 value: static_cast<int32_t>(0x32)
  static ::UnityEngine::KeyCode const Alpha2;

  /// @brief Field Alpha3 value: static_cast<int32_t>(0x33)
  static ::UnityEngine::KeyCode const Alpha3;

  /// @brief Field Alpha4 value: static_cast<int32_t>(0x34)
  static ::UnityEngine::KeyCode const Alpha4;

  /// @brief Field Alpha5 value: static_cast<int32_t>(0x35)
  static ::UnityEngine::KeyCode const Alpha5;

  /// @brief Field Alpha6 value: static_cast<int32_t>(0x36)
  static ::UnityEngine::KeyCode const Alpha6;

  /// @brief Field Alpha7 value: static_cast<int32_t>(0x37)
  static ::UnityEngine::KeyCode const Alpha7;

  /// @brief Field Alpha8 value: static_cast<int32_t>(0x38)
  static ::UnityEngine::KeyCode const Alpha8;

  /// @brief Field Alpha9 value: static_cast<int32_t>(0x39)
  static ::UnityEngine::KeyCode const Alpha9;

  /// @brief Field Exclaim value: static_cast<int32_t>(0x21)
  static ::UnityEngine::KeyCode const Exclaim;

  /// @brief Field DoubleQuote value: static_cast<int32_t>(0x22)
  static ::UnityEngine::KeyCode const DoubleQuote;

  /// @brief Field Hash value: static_cast<int32_t>(0x23)
  static ::UnityEngine::KeyCode const Hash;

  /// @brief Field Dollar value: static_cast<int32_t>(0x24)
  static ::UnityEngine::KeyCode const Dollar;

  /// @brief Field Percent value: static_cast<int32_t>(0x25)
  static ::UnityEngine::KeyCode const Percent;

  /// @brief Field Ampersand value: static_cast<int32_t>(0x26)
  static ::UnityEngine::KeyCode const Ampersand;

  /// @brief Field Quote value: static_cast<int32_t>(0x27)
  static ::UnityEngine::KeyCode const Quote;

  /// @brief Field LeftParen value: static_cast<int32_t>(0x28)
  static ::UnityEngine::KeyCode const LeftParen;

  /// @brief Field RightParen value: static_cast<int32_t>(0x29)
  static ::UnityEngine::KeyCode const RightParen;

  /// @brief Field Asterisk value: static_cast<int32_t>(0x2a)
  static ::UnityEngine::KeyCode const Asterisk;

  /// @brief Field Plus value: static_cast<int32_t>(0x2b)
  static ::UnityEngine::KeyCode const Plus;

  /// @brief Field Comma value: static_cast<int32_t>(0x2c)
  static ::UnityEngine::KeyCode const Comma;

  /// @brief Field Minus value: static_cast<int32_t>(0x2d)
  static ::UnityEngine::KeyCode const Minus;

  /// @brief Field Period value: static_cast<int32_t>(0x2e)
  static ::UnityEngine::KeyCode const Period;

  /// @brief Field Slash value: static_cast<int32_t>(0x2f)
  static ::UnityEngine::KeyCode const Slash;

  /// @brief Field Colon value: static_cast<int32_t>(0x3a)
  static ::UnityEngine::KeyCode const Colon;

  /// @brief Field Semicolon value: static_cast<int32_t>(0x3b)
  static ::UnityEngine::KeyCode const Semicolon;

  /// @brief Field Less value: static_cast<int32_t>(0x3c)
  static ::UnityEngine::KeyCode const Less;

  /// @brief Field Equals value: static_cast<int32_t>(0x3d)
  static ::UnityEngine::KeyCode const Equals;

  /// @brief Field Greater value: static_cast<int32_t>(0x3e)
  static ::UnityEngine::KeyCode const Greater;

  /// @brief Field Question value: static_cast<int32_t>(0x3f)
  static ::UnityEngine::KeyCode const Question;

  /// @brief Field At value: static_cast<int32_t>(0x40)
  static ::UnityEngine::KeyCode const At;

  /// @brief Field LeftBracket value: static_cast<int32_t>(0x5b)
  static ::UnityEngine::KeyCode const LeftBracket;

  /// @brief Field Backslash value: static_cast<int32_t>(0x5c)
  static ::UnityEngine::KeyCode const Backslash;

  /// @brief Field RightBracket value: static_cast<int32_t>(0x5d)
  static ::UnityEngine::KeyCode const RightBracket;

  /// @brief Field Caret value: static_cast<int32_t>(0x5e)
  static ::UnityEngine::KeyCode const Caret;

  /// @brief Field Underscore value: static_cast<int32_t>(0x5f)
  static ::UnityEngine::KeyCode const Underscore;

  /// @brief Field BackQuote value: static_cast<int32_t>(0x60)
  static ::UnityEngine::KeyCode const BackQuote;

  /// @brief Field A value: static_cast<int32_t>(0x61)
  static ::UnityEngine::KeyCode const A;

  /// @brief Field B value: static_cast<int32_t>(0x62)
  static ::UnityEngine::KeyCode const B;

  /// @brief Field C value: static_cast<int32_t>(0x63)
  static ::UnityEngine::KeyCode const C;

  /// @brief Field D value: static_cast<int32_t>(0x64)
  static ::UnityEngine::KeyCode const D;

  /// @brief Field E value: static_cast<int32_t>(0x65)
  static ::UnityEngine::KeyCode const E;

  /// @brief Field F value: static_cast<int32_t>(0x66)
  static ::UnityEngine::KeyCode const F;

  /// @brief Field G value: static_cast<int32_t>(0x67)
  static ::UnityEngine::KeyCode const G;

  /// @brief Field H value: static_cast<int32_t>(0x68)
  static ::UnityEngine::KeyCode const H;

  /// @brief Field I value: static_cast<int32_t>(0x69)
  static ::UnityEngine::KeyCode const I;

  /// @brief Field J value: static_cast<int32_t>(0x6a)
  static ::UnityEngine::KeyCode const J;

  /// @brief Field K value: static_cast<int32_t>(0x6b)
  static ::UnityEngine::KeyCode const K;

  /// @brief Field L value: static_cast<int32_t>(0x6c)
  static ::UnityEngine::KeyCode const L;

  /// @brief Field M value: static_cast<int32_t>(0x6d)
  static ::UnityEngine::KeyCode const M;

  /// @brief Field N value: static_cast<int32_t>(0x6e)
  static ::UnityEngine::KeyCode const N;

  /// @brief Field O value: static_cast<int32_t>(0x6f)
  static ::UnityEngine::KeyCode const O;

  /// @brief Field P value: static_cast<int32_t>(0x70)
  static ::UnityEngine::KeyCode const P;

  /// @brief Field Q value: static_cast<int32_t>(0x71)
  static ::UnityEngine::KeyCode const Q;

  /// @brief Field R value: static_cast<int32_t>(0x72)
  static ::UnityEngine::KeyCode const R;

  /// @brief Field S value: static_cast<int32_t>(0x73)
  static ::UnityEngine::KeyCode const S;

  /// @brief Field T value: static_cast<int32_t>(0x74)
  static ::UnityEngine::KeyCode const T;

  /// @brief Field U value: static_cast<int32_t>(0x75)
  static ::UnityEngine::KeyCode const U;

  /// @brief Field V value: static_cast<int32_t>(0x76)
  static ::UnityEngine::KeyCode const V;

  /// @brief Field W value: static_cast<int32_t>(0x77)
  static ::UnityEngine::KeyCode const W;

  /// @brief Field X value: static_cast<int32_t>(0x78)
  static ::UnityEngine::KeyCode const X;

  /// @brief Field Y value: static_cast<int32_t>(0x79)
  static ::UnityEngine::KeyCode const Y;

  /// @brief Field Z value: static_cast<int32_t>(0x7a)
  static ::UnityEngine::KeyCode const Z;

  /// @brief Field LeftCurlyBracket value: static_cast<int32_t>(0x7b)
  static ::UnityEngine::KeyCode const LeftCurlyBracket;

  /// @brief Field Pipe value: static_cast<int32_t>(0x7c)
  static ::UnityEngine::KeyCode const Pipe;

  /// @brief Field RightCurlyBracket value: static_cast<int32_t>(0x7d)
  static ::UnityEngine::KeyCode const RightCurlyBracket;

  /// @brief Field Tilde value: static_cast<int32_t>(0x7e)
  static ::UnityEngine::KeyCode const Tilde;

  /// @brief Field Numlock value: static_cast<int32_t>(0x12c)
  static ::UnityEngine::KeyCode const Numlock;

  /// @brief Field CapsLock value: static_cast<int32_t>(0x12d)
  static ::UnityEngine::KeyCode const CapsLock;

  /// @brief Field ScrollLock value: static_cast<int32_t>(0x12e)
  static ::UnityEngine::KeyCode const ScrollLock;

  /// @brief Field RightShift value: static_cast<int32_t>(0x12f)
  static ::UnityEngine::KeyCode const RightShift;

  /// @brief Field LeftShift value: static_cast<int32_t>(0x130)
  static ::UnityEngine::KeyCode const LeftShift;

  /// @brief Field RightControl value: static_cast<int32_t>(0x131)
  static ::UnityEngine::KeyCode const RightControl;

  /// @brief Field LeftControl value: static_cast<int32_t>(0x132)
  static ::UnityEngine::KeyCode const LeftControl;

  /// @brief Field RightAlt value: static_cast<int32_t>(0x133)
  static ::UnityEngine::KeyCode const RightAlt;

  /// @brief Field LeftAlt value: static_cast<int32_t>(0x134)
  static ::UnityEngine::KeyCode const LeftAlt;

  /// @brief Field LeftMeta value: static_cast<int32_t>(0x136)
  static ::UnityEngine::KeyCode const LeftMeta;

  /// @brief Field LeftCommand value: static_cast<int32_t>(0x136)
  static ::UnityEngine::KeyCode const LeftCommand;

  /// @brief Field LeftApple value: static_cast<int32_t>(0x136)
  static ::UnityEngine::KeyCode const LeftApple;

  /// @brief Field LeftWindows value: static_cast<int32_t>(0x137)
  static ::UnityEngine::KeyCode const LeftWindows;

  /// @brief Field RightMeta value: static_cast<int32_t>(0x135)
  static ::UnityEngine::KeyCode const RightMeta;

  /// @brief Field RightCommand value: static_cast<int32_t>(0x135)
  static ::UnityEngine::KeyCode const RightCommand;

  /// @brief Field RightApple value: static_cast<int32_t>(0x135)
  static ::UnityEngine::KeyCode const RightApple;

  /// @brief Field RightWindows value: static_cast<int32_t>(0x138)
  static ::UnityEngine::KeyCode const RightWindows;

  /// @brief Field AltGr value: static_cast<int32_t>(0x139)
  static ::UnityEngine::KeyCode const AltGr;

  /// @brief Field Help value: static_cast<int32_t>(0x13b)
  static ::UnityEngine::KeyCode const Help;

  /// @brief Field Print value: static_cast<int32_t>(0x13c)
  static ::UnityEngine::KeyCode const Print;

  /// @brief Field SysReq value: static_cast<int32_t>(0x13d)
  static ::UnityEngine::KeyCode const SysReq;

  /// @brief Field Break value: static_cast<int32_t>(0x13e)
  static ::UnityEngine::KeyCode const Break;

  /// @brief Field Menu value: static_cast<int32_t>(0x13f)
  static ::UnityEngine::KeyCode const Menu;

  /// @brief Field Mouse0 value: static_cast<int32_t>(0x143)
  static ::UnityEngine::KeyCode const Mouse0;

  /// @brief Field Mouse1 value: static_cast<int32_t>(0x144)
  static ::UnityEngine::KeyCode const Mouse1;

  /// @brief Field Mouse2 value: static_cast<int32_t>(0x145)
  static ::UnityEngine::KeyCode const Mouse2;

  /// @brief Field Mouse3 value: static_cast<int32_t>(0x146)
  static ::UnityEngine::KeyCode const Mouse3;

  /// @brief Field Mouse4 value: static_cast<int32_t>(0x147)
  static ::UnityEngine::KeyCode const Mouse4;

  /// @brief Field Mouse5 value: static_cast<int32_t>(0x148)
  static ::UnityEngine::KeyCode const Mouse5;

  /// @brief Field Mouse6 value: static_cast<int32_t>(0x149)
  static ::UnityEngine::KeyCode const Mouse6;

  /// @brief Field JoystickButton0 value: static_cast<int32_t>(0x14a)
  static ::UnityEngine::KeyCode const JoystickButton0;

  /// @brief Field JoystickButton1 value: static_cast<int32_t>(0x14b)
  static ::UnityEngine::KeyCode const JoystickButton1;

  /// @brief Field JoystickButton2 value: static_cast<int32_t>(0x14c)
  static ::UnityEngine::KeyCode const JoystickButton2;

  /// @brief Field JoystickButton3 value: static_cast<int32_t>(0x14d)
  static ::UnityEngine::KeyCode const JoystickButton3;

  /// @brief Field JoystickButton4 value: static_cast<int32_t>(0x14e)
  static ::UnityEngine::KeyCode const JoystickButton4;

  /// @brief Field JoystickButton5 value: static_cast<int32_t>(0x14f)
  static ::UnityEngine::KeyCode const JoystickButton5;

  /// @brief Field JoystickButton6 value: static_cast<int32_t>(0x150)
  static ::UnityEngine::KeyCode const JoystickButton6;

  /// @brief Field JoystickButton7 value: static_cast<int32_t>(0x151)
  static ::UnityEngine::KeyCode const JoystickButton7;

  /// @brief Field JoystickButton8 value: static_cast<int32_t>(0x152)
  static ::UnityEngine::KeyCode const JoystickButton8;

  /// @brief Field JoystickButton9 value: static_cast<int32_t>(0x153)
  static ::UnityEngine::KeyCode const JoystickButton9;

  /// @brief Field JoystickButton10 value: static_cast<int32_t>(0x154)
  static ::UnityEngine::KeyCode const JoystickButton10;

  /// @brief Field JoystickButton11 value: static_cast<int32_t>(0x155)
  static ::UnityEngine::KeyCode const JoystickButton11;

  /// @brief Field JoystickButton12 value: static_cast<int32_t>(0x156)
  static ::UnityEngine::KeyCode const JoystickButton12;

  /// @brief Field JoystickButton13 value: static_cast<int32_t>(0x157)
  static ::UnityEngine::KeyCode const JoystickButton13;

  /// @brief Field JoystickButton14 value: static_cast<int32_t>(0x158)
  static ::UnityEngine::KeyCode const JoystickButton14;

  /// @brief Field JoystickButton15 value: static_cast<int32_t>(0x159)
  static ::UnityEngine::KeyCode const JoystickButton15;

  /// @brief Field JoystickButton16 value: static_cast<int32_t>(0x15a)
  static ::UnityEngine::KeyCode const JoystickButton16;

  /// @brief Field JoystickButton17 value: static_cast<int32_t>(0x15b)
  static ::UnityEngine::KeyCode const JoystickButton17;

  /// @brief Field JoystickButton18 value: static_cast<int32_t>(0x15c)
  static ::UnityEngine::KeyCode const JoystickButton18;

  /// @brief Field JoystickButton19 value: static_cast<int32_t>(0x15d)
  static ::UnityEngine::KeyCode const JoystickButton19;

  /// @brief Field Joystick1Button0 value: static_cast<int32_t>(0x15e)
  static ::UnityEngine::KeyCode const Joystick1Button0;

  /// @brief Field Joystick1Button1 value: static_cast<int32_t>(0x15f)
  static ::UnityEngine::KeyCode const Joystick1Button1;

  /// @brief Field Joystick1Button2 value: static_cast<int32_t>(0x160)
  static ::UnityEngine::KeyCode const Joystick1Button2;

  /// @brief Field Joystick1Button3 value: static_cast<int32_t>(0x161)
  static ::UnityEngine::KeyCode const Joystick1Button3;

  /// @brief Field Joystick1Button4 value: static_cast<int32_t>(0x162)
  static ::UnityEngine::KeyCode const Joystick1Button4;

  /// @brief Field Joystick1Button5 value: static_cast<int32_t>(0x163)
  static ::UnityEngine::KeyCode const Joystick1Button5;

  /// @brief Field Joystick1Button6 value: static_cast<int32_t>(0x164)
  static ::UnityEngine::KeyCode const Joystick1Button6;

  /// @brief Field Joystick1Button7 value: static_cast<int32_t>(0x165)
  static ::UnityEngine::KeyCode const Joystick1Button7;

  /// @brief Field Joystick1Button8 value: static_cast<int32_t>(0x166)
  static ::UnityEngine::KeyCode const Joystick1Button8;

  /// @brief Field Joystick1Button9 value: static_cast<int32_t>(0x167)
  static ::UnityEngine::KeyCode const Joystick1Button9;

  /// @brief Field Joystick1Button10 value: static_cast<int32_t>(0x168)
  static ::UnityEngine::KeyCode const Joystick1Button10;

  /// @brief Field Joystick1Button11 value: static_cast<int32_t>(0x169)
  static ::UnityEngine::KeyCode const Joystick1Button11;

  /// @brief Field Joystick1Button12 value: static_cast<int32_t>(0x16a)
  static ::UnityEngine::KeyCode const Joystick1Button12;

  /// @brief Field Joystick1Button13 value: static_cast<int32_t>(0x16b)
  static ::UnityEngine::KeyCode const Joystick1Button13;

  /// @brief Field Joystick1Button14 value: static_cast<int32_t>(0x16c)
  static ::UnityEngine::KeyCode const Joystick1Button14;

  /// @brief Field Joystick1Button15 value: static_cast<int32_t>(0x16d)
  static ::UnityEngine::KeyCode const Joystick1Button15;

  /// @brief Field Joystick1Button16 value: static_cast<int32_t>(0x16e)
  static ::UnityEngine::KeyCode const Joystick1Button16;

  /// @brief Field Joystick1Button17 value: static_cast<int32_t>(0x16f)
  static ::UnityEngine::KeyCode const Joystick1Button17;

  /// @brief Field Joystick1Button18 value: static_cast<int32_t>(0x170)
  static ::UnityEngine::KeyCode const Joystick1Button18;

  /// @brief Field Joystick1Button19 value: static_cast<int32_t>(0x171)
  static ::UnityEngine::KeyCode const Joystick1Button19;

  /// @brief Field Joystick2Button0 value: static_cast<int32_t>(0x172)
  static ::UnityEngine::KeyCode const Joystick2Button0;

  /// @brief Field Joystick2Button1 value: static_cast<int32_t>(0x173)
  static ::UnityEngine::KeyCode const Joystick2Button1;

  /// @brief Field Joystick2Button2 value: static_cast<int32_t>(0x174)
  static ::UnityEngine::KeyCode const Joystick2Button2;

  /// @brief Field Joystick2Button3 value: static_cast<int32_t>(0x175)
  static ::UnityEngine::KeyCode const Joystick2Button3;

  /// @brief Field Joystick2Button4 value: static_cast<int32_t>(0x176)
  static ::UnityEngine::KeyCode const Joystick2Button4;

  /// @brief Field Joystick2Button5 value: static_cast<int32_t>(0x177)
  static ::UnityEngine::KeyCode const Joystick2Button5;

  /// @brief Field Joystick2Button6 value: static_cast<int32_t>(0x178)
  static ::UnityEngine::KeyCode const Joystick2Button6;

  /// @brief Field Joystick2Button7 value: static_cast<int32_t>(0x179)
  static ::UnityEngine::KeyCode const Joystick2Button7;

  /// @brief Field Joystick2Button8 value: static_cast<int32_t>(0x17a)
  static ::UnityEngine::KeyCode const Joystick2Button8;

  /// @brief Field Joystick2Button9 value: static_cast<int32_t>(0x17b)
  static ::UnityEngine::KeyCode const Joystick2Button9;

  /// @brief Field Joystick2Button10 value: static_cast<int32_t>(0x17c)
  static ::UnityEngine::KeyCode const Joystick2Button10;

  /// @brief Field Joystick2Button11 value: static_cast<int32_t>(0x17d)
  static ::UnityEngine::KeyCode const Joystick2Button11;

  /// @brief Field Joystick2Button12 value: static_cast<int32_t>(0x17e)
  static ::UnityEngine::KeyCode const Joystick2Button12;

  /// @brief Field Joystick2Button13 value: static_cast<int32_t>(0x17f)
  static ::UnityEngine::KeyCode const Joystick2Button13;

  /// @brief Field Joystick2Button14 value: static_cast<int32_t>(0x180)
  static ::UnityEngine::KeyCode const Joystick2Button14;

  /// @brief Field Joystick2Button15 value: static_cast<int32_t>(0x181)
  static ::UnityEngine::KeyCode const Joystick2Button15;

  /// @brief Field Joystick2Button16 value: static_cast<int32_t>(0x182)
  static ::UnityEngine::KeyCode const Joystick2Button16;

  /// @brief Field Joystick2Button17 value: static_cast<int32_t>(0x183)
  static ::UnityEngine::KeyCode const Joystick2Button17;

  /// @brief Field Joystick2Button18 value: static_cast<int32_t>(0x184)
  static ::UnityEngine::KeyCode const Joystick2Button18;

  /// @brief Field Joystick2Button19 value: static_cast<int32_t>(0x185)
  static ::UnityEngine::KeyCode const Joystick2Button19;

  /// @brief Field Joystick3Button0 value: static_cast<int32_t>(0x186)
  static ::UnityEngine::KeyCode const Joystick3Button0;

  /// @brief Field Joystick3Button1 value: static_cast<int32_t>(0x187)
  static ::UnityEngine::KeyCode const Joystick3Button1;

  /// @brief Field Joystick3Button2 value: static_cast<int32_t>(0x188)
  static ::UnityEngine::KeyCode const Joystick3Button2;

  /// @brief Field Joystick3Button3 value: static_cast<int32_t>(0x189)
  static ::UnityEngine::KeyCode const Joystick3Button3;

  /// @brief Field Joystick3Button4 value: static_cast<int32_t>(0x18a)
  static ::UnityEngine::KeyCode const Joystick3Button4;

  /// @brief Field Joystick3Button5 value: static_cast<int32_t>(0x18b)
  static ::UnityEngine::KeyCode const Joystick3Button5;

  /// @brief Field Joystick3Button6 value: static_cast<int32_t>(0x18c)
  static ::UnityEngine::KeyCode const Joystick3Button6;

  /// @brief Field Joystick3Button7 value: static_cast<int32_t>(0x18d)
  static ::UnityEngine::KeyCode const Joystick3Button7;

  /// @brief Field Joystick3Button8 value: static_cast<int32_t>(0x18e)
  static ::UnityEngine::KeyCode const Joystick3Button8;

  /// @brief Field Joystick3Button9 value: static_cast<int32_t>(0x18f)
  static ::UnityEngine::KeyCode const Joystick3Button9;

  /// @brief Field Joystick3Button10 value: static_cast<int32_t>(0x190)
  static ::UnityEngine::KeyCode const Joystick3Button10;

  /// @brief Field Joystick3Button11 value: static_cast<int32_t>(0x191)
  static ::UnityEngine::KeyCode const Joystick3Button11;

  /// @brief Field Joystick3Button12 value: static_cast<int32_t>(0x192)
  static ::UnityEngine::KeyCode const Joystick3Button12;

  /// @brief Field Joystick3Button13 value: static_cast<int32_t>(0x193)
  static ::UnityEngine::KeyCode const Joystick3Button13;

  /// @brief Field Joystick3Button14 value: static_cast<int32_t>(0x194)
  static ::UnityEngine::KeyCode const Joystick3Button14;

  /// @brief Field Joystick3Button15 value: static_cast<int32_t>(0x195)
  static ::UnityEngine::KeyCode const Joystick3Button15;

  /// @brief Field Joystick3Button16 value: static_cast<int32_t>(0x196)
  static ::UnityEngine::KeyCode const Joystick3Button16;

  /// @brief Field Joystick3Button17 value: static_cast<int32_t>(0x197)
  static ::UnityEngine::KeyCode const Joystick3Button17;

  /// @brief Field Joystick3Button18 value: static_cast<int32_t>(0x198)
  static ::UnityEngine::KeyCode const Joystick3Button18;

  /// @brief Field Joystick3Button19 value: static_cast<int32_t>(0x199)
  static ::UnityEngine::KeyCode const Joystick3Button19;

  /// @brief Field Joystick4Button0 value: static_cast<int32_t>(0x19a)
  static ::UnityEngine::KeyCode const Joystick4Button0;

  /// @brief Field Joystick4Button1 value: static_cast<int32_t>(0x19b)
  static ::UnityEngine::KeyCode const Joystick4Button1;

  /// @brief Field Joystick4Button2 value: static_cast<int32_t>(0x19c)
  static ::UnityEngine::KeyCode const Joystick4Button2;

  /// @brief Field Joystick4Button3 value: static_cast<int32_t>(0x19d)
  static ::UnityEngine::KeyCode const Joystick4Button3;

  /// @brief Field Joystick4Button4 value: static_cast<int32_t>(0x19e)
  static ::UnityEngine::KeyCode const Joystick4Button4;

  /// @brief Field Joystick4Button5 value: static_cast<int32_t>(0x19f)
  static ::UnityEngine::KeyCode const Joystick4Button5;

  /// @brief Field Joystick4Button6 value: static_cast<int32_t>(0x1a0)
  static ::UnityEngine::KeyCode const Joystick4Button6;

  /// @brief Field Joystick4Button7 value: static_cast<int32_t>(0x1a1)
  static ::UnityEngine::KeyCode const Joystick4Button7;

  /// @brief Field Joystick4Button8 value: static_cast<int32_t>(0x1a2)
  static ::UnityEngine::KeyCode const Joystick4Button8;

  /// @brief Field Joystick4Button9 value: static_cast<int32_t>(0x1a3)
  static ::UnityEngine::KeyCode const Joystick4Button9;

  /// @brief Field Joystick4Button10 value: static_cast<int32_t>(0x1a4)
  static ::UnityEngine::KeyCode const Joystick4Button10;

  /// @brief Field Joystick4Button11 value: static_cast<int32_t>(0x1a5)
  static ::UnityEngine::KeyCode const Joystick4Button11;

  /// @brief Field Joystick4Button12 value: static_cast<int32_t>(0x1a6)
  static ::UnityEngine::KeyCode const Joystick4Button12;

  /// @brief Field Joystick4Button13 value: static_cast<int32_t>(0x1a7)
  static ::UnityEngine::KeyCode const Joystick4Button13;

  /// @brief Field Joystick4Button14 value: static_cast<int32_t>(0x1a8)
  static ::UnityEngine::KeyCode const Joystick4Button14;

  /// @brief Field Joystick4Button15 value: static_cast<int32_t>(0x1a9)
  static ::UnityEngine::KeyCode const Joystick4Button15;

  /// @brief Field Joystick4Button16 value: static_cast<int32_t>(0x1aa)
  static ::UnityEngine::KeyCode const Joystick4Button16;

  /// @brief Field Joystick4Button17 value: static_cast<int32_t>(0x1ab)
  static ::UnityEngine::KeyCode const Joystick4Button17;

  /// @brief Field Joystick4Button18 value: static_cast<int32_t>(0x1ac)
  static ::UnityEngine::KeyCode const Joystick4Button18;

  /// @brief Field Joystick4Button19 value: static_cast<int32_t>(0x1ad)
  static ::UnityEngine::KeyCode const Joystick4Button19;

  /// @brief Field Joystick5Button0 value: static_cast<int32_t>(0x1ae)
  static ::UnityEngine::KeyCode const Joystick5Button0;

  /// @brief Field Joystick5Button1 value: static_cast<int32_t>(0x1af)
  static ::UnityEngine::KeyCode const Joystick5Button1;

  /// @brief Field Joystick5Button2 value: static_cast<int32_t>(0x1b0)
  static ::UnityEngine::KeyCode const Joystick5Button2;

  /// @brief Field Joystick5Button3 value: static_cast<int32_t>(0x1b1)
  static ::UnityEngine::KeyCode const Joystick5Button3;

  /// @brief Field Joystick5Button4 value: static_cast<int32_t>(0x1b2)
  static ::UnityEngine::KeyCode const Joystick5Button4;

  /// @brief Field Joystick5Button5 value: static_cast<int32_t>(0x1b3)
  static ::UnityEngine::KeyCode const Joystick5Button5;

  /// @brief Field Joystick5Button6 value: static_cast<int32_t>(0x1b4)
  static ::UnityEngine::KeyCode const Joystick5Button6;

  /// @brief Field Joystick5Button7 value: static_cast<int32_t>(0x1b5)
  static ::UnityEngine::KeyCode const Joystick5Button7;

  /// @brief Field Joystick5Button8 value: static_cast<int32_t>(0x1b6)
  static ::UnityEngine::KeyCode const Joystick5Button8;

  /// @brief Field Joystick5Button9 value: static_cast<int32_t>(0x1b7)
  static ::UnityEngine::KeyCode const Joystick5Button9;

  /// @brief Field Joystick5Button10 value: static_cast<int32_t>(0x1b8)
  static ::UnityEngine::KeyCode const Joystick5Button10;

  /// @brief Field Joystick5Button11 value: static_cast<int32_t>(0x1b9)
  static ::UnityEngine::KeyCode const Joystick5Button11;

  /// @brief Field Joystick5Button12 value: static_cast<int32_t>(0x1ba)
  static ::UnityEngine::KeyCode const Joystick5Button12;

  /// @brief Field Joystick5Button13 value: static_cast<int32_t>(0x1bb)
  static ::UnityEngine::KeyCode const Joystick5Button13;

  /// @brief Field Joystick5Button14 value: static_cast<int32_t>(0x1bc)
  static ::UnityEngine::KeyCode const Joystick5Button14;

  /// @brief Field Joystick5Button15 value: static_cast<int32_t>(0x1bd)
  static ::UnityEngine::KeyCode const Joystick5Button15;

  /// @brief Field Joystick5Button16 value: static_cast<int32_t>(0x1be)
  static ::UnityEngine::KeyCode const Joystick5Button16;

  /// @brief Field Joystick5Button17 value: static_cast<int32_t>(0x1bf)
  static ::UnityEngine::KeyCode const Joystick5Button17;

  /// @brief Field Joystick5Button18 value: static_cast<int32_t>(0x1c0)
  static ::UnityEngine::KeyCode const Joystick5Button18;

  /// @brief Field Joystick5Button19 value: static_cast<int32_t>(0x1c1)
  static ::UnityEngine::KeyCode const Joystick5Button19;

  /// @brief Field Joystick6Button0 value: static_cast<int32_t>(0x1c2)
  static ::UnityEngine::KeyCode const Joystick6Button0;

  /// @brief Field Joystick6Button1 value: static_cast<int32_t>(0x1c3)
  static ::UnityEngine::KeyCode const Joystick6Button1;

  /// @brief Field Joystick6Button2 value: static_cast<int32_t>(0x1c4)
  static ::UnityEngine::KeyCode const Joystick6Button2;

  /// @brief Field Joystick6Button3 value: static_cast<int32_t>(0x1c5)
  static ::UnityEngine::KeyCode const Joystick6Button3;

  /// @brief Field Joystick6Button4 value: static_cast<int32_t>(0x1c6)
  static ::UnityEngine::KeyCode const Joystick6Button4;

  /// @brief Field Joystick6Button5 value: static_cast<int32_t>(0x1c7)
  static ::UnityEngine::KeyCode const Joystick6Button5;

  /// @brief Field Joystick6Button6 value: static_cast<int32_t>(0x1c8)
  static ::UnityEngine::KeyCode const Joystick6Button6;

  /// @brief Field Joystick6Button7 value: static_cast<int32_t>(0x1c9)
  static ::UnityEngine::KeyCode const Joystick6Button7;

  /// @brief Field Joystick6Button8 value: static_cast<int32_t>(0x1ca)
  static ::UnityEngine::KeyCode const Joystick6Button8;

  /// @brief Field Joystick6Button9 value: static_cast<int32_t>(0x1cb)
  static ::UnityEngine::KeyCode const Joystick6Button9;

  /// @brief Field Joystick6Button10 value: static_cast<int32_t>(0x1cc)
  static ::UnityEngine::KeyCode const Joystick6Button10;

  /// @brief Field Joystick6Button11 value: static_cast<int32_t>(0x1cd)
  static ::UnityEngine::KeyCode const Joystick6Button11;

  /// @brief Field Joystick6Button12 value: static_cast<int32_t>(0x1ce)
  static ::UnityEngine::KeyCode const Joystick6Button12;

  /// @brief Field Joystick6Button13 value: static_cast<int32_t>(0x1cf)
  static ::UnityEngine::KeyCode const Joystick6Button13;

  /// @brief Field Joystick6Button14 value: static_cast<int32_t>(0x1d0)
  static ::UnityEngine::KeyCode const Joystick6Button14;

  /// @brief Field Joystick6Button15 value: static_cast<int32_t>(0x1d1)
  static ::UnityEngine::KeyCode const Joystick6Button15;

  /// @brief Field Joystick6Button16 value: static_cast<int32_t>(0x1d2)
  static ::UnityEngine::KeyCode const Joystick6Button16;

  /// @brief Field Joystick6Button17 value: static_cast<int32_t>(0x1d3)
  static ::UnityEngine::KeyCode const Joystick6Button17;

  /// @brief Field Joystick6Button18 value: static_cast<int32_t>(0x1d4)
  static ::UnityEngine::KeyCode const Joystick6Button18;

  /// @brief Field Joystick6Button19 value: static_cast<int32_t>(0x1d5)
  static ::UnityEngine::KeyCode const Joystick6Button19;

  /// @brief Field Joystick7Button0 value: static_cast<int32_t>(0x1d6)
  static ::UnityEngine::KeyCode const Joystick7Button0;

  /// @brief Field Joystick7Button1 value: static_cast<int32_t>(0x1d7)
  static ::UnityEngine::KeyCode const Joystick7Button1;

  /// @brief Field Joystick7Button2 value: static_cast<int32_t>(0x1d8)
  static ::UnityEngine::KeyCode const Joystick7Button2;

  /// @brief Field Joystick7Button3 value: static_cast<int32_t>(0x1d9)
  static ::UnityEngine::KeyCode const Joystick7Button3;

  /// @brief Field Joystick7Button4 value: static_cast<int32_t>(0x1da)
  static ::UnityEngine::KeyCode const Joystick7Button4;

  /// @brief Field Joystick7Button5 value: static_cast<int32_t>(0x1db)
  static ::UnityEngine::KeyCode const Joystick7Button5;

  /// @brief Field Joystick7Button6 value: static_cast<int32_t>(0x1dc)
  static ::UnityEngine::KeyCode const Joystick7Button6;

  /// @brief Field Joystick7Button7 value: static_cast<int32_t>(0x1dd)
  static ::UnityEngine::KeyCode const Joystick7Button7;

  /// @brief Field Joystick7Button8 value: static_cast<int32_t>(0x1de)
  static ::UnityEngine::KeyCode const Joystick7Button8;

  /// @brief Field Joystick7Button9 value: static_cast<int32_t>(0x1df)
  static ::UnityEngine::KeyCode const Joystick7Button9;

  /// @brief Field Joystick7Button10 value: static_cast<int32_t>(0x1e0)
  static ::UnityEngine::KeyCode const Joystick7Button10;

  /// @brief Field Joystick7Button11 value: static_cast<int32_t>(0x1e1)
  static ::UnityEngine::KeyCode const Joystick7Button11;

  /// @brief Field Joystick7Button12 value: static_cast<int32_t>(0x1e2)
  static ::UnityEngine::KeyCode const Joystick7Button12;

  /// @brief Field Joystick7Button13 value: static_cast<int32_t>(0x1e3)
  static ::UnityEngine::KeyCode const Joystick7Button13;

  /// @brief Field Joystick7Button14 value: static_cast<int32_t>(0x1e4)
  static ::UnityEngine::KeyCode const Joystick7Button14;

  /// @brief Field Joystick7Button15 value: static_cast<int32_t>(0x1e5)
  static ::UnityEngine::KeyCode const Joystick7Button15;

  /// @brief Field Joystick7Button16 value: static_cast<int32_t>(0x1e6)
  static ::UnityEngine::KeyCode const Joystick7Button16;

  /// @brief Field Joystick7Button17 value: static_cast<int32_t>(0x1e7)
  static ::UnityEngine::KeyCode const Joystick7Button17;

  /// @brief Field Joystick7Button18 value: static_cast<int32_t>(0x1e8)
  static ::UnityEngine::KeyCode const Joystick7Button18;

  /// @brief Field Joystick7Button19 value: static_cast<int32_t>(0x1e9)
  static ::UnityEngine::KeyCode const Joystick7Button19;

  /// @brief Field Joystick8Button0 value: static_cast<int32_t>(0x1ea)
  static ::UnityEngine::KeyCode const Joystick8Button0;

  /// @brief Field Joystick8Button1 value: static_cast<int32_t>(0x1eb)
  static ::UnityEngine::KeyCode const Joystick8Button1;

  /// @brief Field Joystick8Button2 value: static_cast<int32_t>(0x1ec)
  static ::UnityEngine::KeyCode const Joystick8Button2;

  /// @brief Field Joystick8Button3 value: static_cast<int32_t>(0x1ed)
  static ::UnityEngine::KeyCode const Joystick8Button3;

  /// @brief Field Joystick8Button4 value: static_cast<int32_t>(0x1ee)
  static ::UnityEngine::KeyCode const Joystick8Button4;

  /// @brief Field Joystick8Button5 value: static_cast<int32_t>(0x1ef)
  static ::UnityEngine::KeyCode const Joystick8Button5;

  /// @brief Field Joystick8Button6 value: static_cast<int32_t>(0x1f0)
  static ::UnityEngine::KeyCode const Joystick8Button6;

  /// @brief Field Joystick8Button7 value: static_cast<int32_t>(0x1f1)
  static ::UnityEngine::KeyCode const Joystick8Button7;

  /// @brief Field Joystick8Button8 value: static_cast<int32_t>(0x1f2)
  static ::UnityEngine::KeyCode const Joystick8Button8;

  /// @brief Field Joystick8Button9 value: static_cast<int32_t>(0x1f3)
  static ::UnityEngine::KeyCode const Joystick8Button9;

  /// @brief Field Joystick8Button10 value: static_cast<int32_t>(0x1f4)
  static ::UnityEngine::KeyCode const Joystick8Button10;

  /// @brief Field Joystick8Button11 value: static_cast<int32_t>(0x1f5)
  static ::UnityEngine::KeyCode const Joystick8Button11;

  /// @brief Field Joystick8Button12 value: static_cast<int32_t>(0x1f6)
  static ::UnityEngine::KeyCode const Joystick8Button12;

  /// @brief Field Joystick8Button13 value: static_cast<int32_t>(0x1f7)
  static ::UnityEngine::KeyCode const Joystick8Button13;

  /// @brief Field Joystick8Button14 value: static_cast<int32_t>(0x1f8)
  static ::UnityEngine::KeyCode const Joystick8Button14;

  /// @brief Field Joystick8Button15 value: static_cast<int32_t>(0x1f9)
  static ::UnityEngine::KeyCode const Joystick8Button15;

  /// @brief Field Joystick8Button16 value: static_cast<int32_t>(0x1fa)
  static ::UnityEngine::KeyCode const Joystick8Button16;

  /// @brief Field Joystick8Button17 value: static_cast<int32_t>(0x1fb)
  static ::UnityEngine::KeyCode const Joystick8Button17;

  /// @brief Field Joystick8Button18 value: static_cast<int32_t>(0x1fc)
  static ::UnityEngine::KeyCode const Joystick8Button18;

  /// @brief Field Joystick8Button19 value: static_cast<int32_t>(0x1fd)
  static ::UnityEngine::KeyCode const Joystick8Button19;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::KeyCode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::KeyCode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::KeyCode, "UnityEngine", "KeyCode");
