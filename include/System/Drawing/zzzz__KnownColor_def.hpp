#pragma once
// IWYU pragma private; include "System/Drawing/KnownColor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KnownColor)
// Forward declare root types
namespace System::Drawing {
struct KnownColor;
}
// Write type traits
MARK_VAL_T(::System::Drawing::KnownColor);
// Dependencies
namespace System::Drawing {
// Is value type: true
// CS Name: System.Drawing.KnownColor
struct CORDL_TYPE KnownColor {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __KnownColor_Unwrapped
  enum struct __KnownColor_Unwrapped : int32_t {
    __E_ActiveBorder = static_cast<int32_t>(0x1),
    __E_ActiveCaption = static_cast<int32_t>(0x2),
    __E_ActiveCaptionText = static_cast<int32_t>(0x3),
    __E_AppWorkspace = static_cast<int32_t>(0x4),
    __E_Control = static_cast<int32_t>(0x5),
    __E_ControlDark = static_cast<int32_t>(0x6),
    __E_ControlDarkDark = static_cast<int32_t>(0x7),
    __E_ControlLight = static_cast<int32_t>(0x8),
    __E_ControlLightLight = static_cast<int32_t>(0x9),
    __E_ControlText = static_cast<int32_t>(0xa),
    __E_Desktop = static_cast<int32_t>(0xb),
    __E_GrayText = static_cast<int32_t>(0xc),
    __E_Highlight = static_cast<int32_t>(0xd),
    __E_HighlightText = static_cast<int32_t>(0xe),
    __E_HotTrack = static_cast<int32_t>(0xf),
    __E_InactiveBorder = static_cast<int32_t>(0x10),
    __E_InactiveCaption = static_cast<int32_t>(0x11),
    __E_InactiveCaptionText = static_cast<int32_t>(0x12),
    __E_Info = static_cast<int32_t>(0x13),
    __E_InfoText = static_cast<int32_t>(0x14),
    __E_Menu = static_cast<int32_t>(0x15),
    __E_MenuText = static_cast<int32_t>(0x16),
    __E_ScrollBar = static_cast<int32_t>(0x17),
    __E_Window = static_cast<int32_t>(0x18),
    __E_WindowFrame = static_cast<int32_t>(0x19),
    __E_WindowText = static_cast<int32_t>(0x1a),
    __E_Transparent = static_cast<int32_t>(0x1b),
    __E_AliceBlue = static_cast<int32_t>(0x1c),
    __E_AntiqueWhite = static_cast<int32_t>(0x1d),
    __E_Aqua = static_cast<int32_t>(0x1e),
    __E_Aquamarine = static_cast<int32_t>(0x1f),
    __E_Azure = static_cast<int32_t>(0x20),
    __E_Beige = static_cast<int32_t>(0x21),
    __E_Bisque = static_cast<int32_t>(0x22),
    __E_Black = static_cast<int32_t>(0x23),
    __E_BlanchedAlmond = static_cast<int32_t>(0x24),
    __E_Blue = static_cast<int32_t>(0x25),
    __E_BlueViolet = static_cast<int32_t>(0x26),
    __E_Brown = static_cast<int32_t>(0x27),
    __E_BurlyWood = static_cast<int32_t>(0x28),
    __E_CadetBlue = static_cast<int32_t>(0x29),
    __E_Chartreuse = static_cast<int32_t>(0x2a),
    __E_Chocolate = static_cast<int32_t>(0x2b),
    __E_Coral = static_cast<int32_t>(0x2c),
    __E_CornflowerBlue = static_cast<int32_t>(0x2d),
    __E_Cornsilk = static_cast<int32_t>(0x2e),
    __E_Crimson = static_cast<int32_t>(0x2f),
    __E_Cyan = static_cast<int32_t>(0x30),
    __E_DarkBlue = static_cast<int32_t>(0x31),
    __E_DarkCyan = static_cast<int32_t>(0x32),
    __E_DarkGoldenrod = static_cast<int32_t>(0x33),
    __E_DarkGray = static_cast<int32_t>(0x34),
    __E_DarkGreen = static_cast<int32_t>(0x35),
    __E_DarkKhaki = static_cast<int32_t>(0x36),
    __E_DarkMagenta = static_cast<int32_t>(0x37),
    __E_DarkOliveGreen = static_cast<int32_t>(0x38),
    __E_DarkOrange = static_cast<int32_t>(0x39),
    __E_DarkOrchid = static_cast<int32_t>(0x3a),
    __E_DarkRed = static_cast<int32_t>(0x3b),
    __E_DarkSalmon = static_cast<int32_t>(0x3c),
    __E_DarkSeaGreen = static_cast<int32_t>(0x3d),
    __E_DarkSlateBlue = static_cast<int32_t>(0x3e),
    __E_DarkSlateGray = static_cast<int32_t>(0x3f),
    __E_DarkTurquoise = static_cast<int32_t>(0x40),
    __E_DarkViolet = static_cast<int32_t>(0x41),
    __E_DeepPink = static_cast<int32_t>(0x42),
    __E_DeepSkyBlue = static_cast<int32_t>(0x43),
    __E_DimGray = static_cast<int32_t>(0x44),
    __E_DodgerBlue = static_cast<int32_t>(0x45),
    __E_Firebrick = static_cast<int32_t>(0x46),
    __E_FloralWhite = static_cast<int32_t>(0x47),
    __E_ForestGreen = static_cast<int32_t>(0x48),
    __E_Fuchsia = static_cast<int32_t>(0x49),
    __E_Gainsboro = static_cast<int32_t>(0x4a),
    __E_GhostWhite = static_cast<int32_t>(0x4b),
    __E_Gold = static_cast<int32_t>(0x4c),
    __E_Goldenrod = static_cast<int32_t>(0x4d),
    __E_Gray = static_cast<int32_t>(0x4e),
    __E_Green = static_cast<int32_t>(0x4f),
    __E_GreenYellow = static_cast<int32_t>(0x50),
    __E_Honeydew = static_cast<int32_t>(0x51),
    __E_HotPink = static_cast<int32_t>(0x52),
    __E_IndianRed = static_cast<int32_t>(0x53),
    __E_Indigo = static_cast<int32_t>(0x54),
    __E_Ivory = static_cast<int32_t>(0x55),
    __E_Khaki = static_cast<int32_t>(0x56),
    __E_Lavender = static_cast<int32_t>(0x57),
    __E_LavenderBlush = static_cast<int32_t>(0x58),
    __E_LawnGreen = static_cast<int32_t>(0x59),
    __E_LemonChiffon = static_cast<int32_t>(0x5a),
    __E_LightBlue = static_cast<int32_t>(0x5b),
    __E_LightCoral = static_cast<int32_t>(0x5c),
    __E_LightCyan = static_cast<int32_t>(0x5d),
    __E_LightGoldenrodYellow = static_cast<int32_t>(0x5e),
    __E_LightGray = static_cast<int32_t>(0x5f),
    __E_LightGreen = static_cast<int32_t>(0x60),
    __E_LightPink = static_cast<int32_t>(0x61),
    __E_LightSalmon = static_cast<int32_t>(0x62),
    __E_LightSeaGreen = static_cast<int32_t>(0x63),
    __E_LightSkyBlue = static_cast<int32_t>(0x64),
    __E_LightSlateGray = static_cast<int32_t>(0x65),
    __E_LightSteelBlue = static_cast<int32_t>(0x66),
    __E_LightYellow = static_cast<int32_t>(0x67),
    __E_Lime = static_cast<int32_t>(0x68),
    __E_LimeGreen = static_cast<int32_t>(0x69),
    __E_Linen = static_cast<int32_t>(0x6a),
    __E_Magenta = static_cast<int32_t>(0x6b),
    __E_Maroon = static_cast<int32_t>(0x6c),
    __E_MediumAquamarine = static_cast<int32_t>(0x6d),
    __E_MediumBlue = static_cast<int32_t>(0x6e),
    __E_MediumOrchid = static_cast<int32_t>(0x6f),
    __E_MediumPurple = static_cast<int32_t>(0x70),
    __E_MediumSeaGreen = static_cast<int32_t>(0x71),
    __E_MediumSlateBlue = static_cast<int32_t>(0x72),
    __E_MediumSpringGreen = static_cast<int32_t>(0x73),
    __E_MediumTurquoise = static_cast<int32_t>(0x74),
    __E_MediumVioletRed = static_cast<int32_t>(0x75),
    __E_MidnightBlue = static_cast<int32_t>(0x76),
    __E_MintCream = static_cast<int32_t>(0x77),
    __E_MistyRose = static_cast<int32_t>(0x78),
    __E_Moccasin = static_cast<int32_t>(0x79),
    __E_NavajoWhite = static_cast<int32_t>(0x7a),
    __E_Navy = static_cast<int32_t>(0x7b),
    __E_OldLace = static_cast<int32_t>(0x7c),
    __E_Olive = static_cast<int32_t>(0x7d),
    __E_OliveDrab = static_cast<int32_t>(0x7e),
    __E_Orange = static_cast<int32_t>(0x7f),
    __E_OrangeRed = static_cast<int32_t>(0x80),
    __E_Orchid = static_cast<int32_t>(0x81),
    __E_PaleGoldenrod = static_cast<int32_t>(0x82),
    __E_PaleGreen = static_cast<int32_t>(0x83),
    __E_PaleTurquoise = static_cast<int32_t>(0x84),
    __E_PaleVioletRed = static_cast<int32_t>(0x85),
    __E_PapayaWhip = static_cast<int32_t>(0x86),
    __E_PeachPuff = static_cast<int32_t>(0x87),
    __E_Peru = static_cast<int32_t>(0x88),
    __E_Pink = static_cast<int32_t>(0x89),
    __E_Plum = static_cast<int32_t>(0x8a),
    __E_PowderBlue = static_cast<int32_t>(0x8b),
    __E_Purple = static_cast<int32_t>(0x8c),
    __E_Red = static_cast<int32_t>(0x8d),
    __E_RosyBrown = static_cast<int32_t>(0x8e),
    __E_RoyalBlue = static_cast<int32_t>(0x8f),
    __E_SaddleBrown = static_cast<int32_t>(0x90),
    __E_Salmon = static_cast<int32_t>(0x91),
    __E_SandyBrown = static_cast<int32_t>(0x92),
    __E_SeaGreen = static_cast<int32_t>(0x93),
    __E_SeaShell = static_cast<int32_t>(0x94),
    __E_Sienna = static_cast<int32_t>(0x95),
    __E_Silver = static_cast<int32_t>(0x96),
    __E_SkyBlue = static_cast<int32_t>(0x97),
    __E_SlateBlue = static_cast<int32_t>(0x98),
    __E_SlateGray = static_cast<int32_t>(0x99),
    __E_Snow = static_cast<int32_t>(0x9a),
    __E_SpringGreen = static_cast<int32_t>(0x9b),
    __E_SteelBlue = static_cast<int32_t>(0x9c),
    __E_Tan = static_cast<int32_t>(0x9d),
    __E_Teal = static_cast<int32_t>(0x9e),
    __E_Thistle = static_cast<int32_t>(0x9f),
    __E_Tomato = static_cast<int32_t>(0xa0),
    __E_Turquoise = static_cast<int32_t>(0xa1),
    __E_Violet = static_cast<int32_t>(0xa2),
    __E_Wheat = static_cast<int32_t>(0xa3),
    __E_White = static_cast<int32_t>(0xa4),
    __E_WhiteSmoke = static_cast<int32_t>(0xa5),
    __E_Yellow = static_cast<int32_t>(0xa6),
    __E_YellowGreen = static_cast<int32_t>(0xa7),
    __E_ButtonFace = static_cast<int32_t>(0xa8),
    __E_ButtonHighlight = static_cast<int32_t>(0xa9),
    __E_ButtonShadow = static_cast<int32_t>(0xaa),
    __E_GradientActiveCaption = static_cast<int32_t>(0xab),
    __E_GradientInactiveCaption = static_cast<int32_t>(0xac),
    __E_MenuBar = static_cast<int32_t>(0xad),
    __E_MenuHighlight = static_cast<int32_t>(0xae),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __KnownColor_Unwrapped() const noexcept {
    return static_cast<__KnownColor_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr KnownColor();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr KnownColor(int32_t value__) noexcept;

  /// @brief Field ActiveBorder value: I32(1)
  static ::System::Drawing::KnownColor const ActiveBorder;

  /// @brief Field ActiveCaption value: I32(2)
  static ::System::Drawing::KnownColor const ActiveCaption;

  /// @brief Field ActiveCaptionText value: I32(3)
  static ::System::Drawing::KnownColor const ActiveCaptionText;

  /// @brief Field AliceBlue value: I32(28)
  static ::System::Drawing::KnownColor const AliceBlue;

  /// @brief Field AntiqueWhite value: I32(29)
  static ::System::Drawing::KnownColor const AntiqueWhite;

  /// @brief Field AppWorkspace value: I32(4)
  static ::System::Drawing::KnownColor const AppWorkspace;

  /// @brief Field Aqua value: I32(30)
  static ::System::Drawing::KnownColor const Aqua;

  /// @brief Field Aquamarine value: I32(31)
  static ::System::Drawing::KnownColor const Aquamarine;

  /// @brief Field Azure value: I32(32)
  static ::System::Drawing::KnownColor const Azure;

  /// @brief Field Beige value: I32(33)
  static ::System::Drawing::KnownColor const Beige;

  /// @brief Field Bisque value: I32(34)
  static ::System::Drawing::KnownColor const Bisque;

  /// @brief Field Black value: I32(35)
  static ::System::Drawing::KnownColor const Black;

  /// @brief Field BlanchedAlmond value: I32(36)
  static ::System::Drawing::KnownColor const BlanchedAlmond;

  /// @brief Field Blue value: I32(37)
  static ::System::Drawing::KnownColor const Blue;

  /// @brief Field BlueViolet value: I32(38)
  static ::System::Drawing::KnownColor const BlueViolet;

  /// @brief Field Brown value: I32(39)
  static ::System::Drawing::KnownColor const Brown;

  /// @brief Field BurlyWood value: I32(40)
  static ::System::Drawing::KnownColor const BurlyWood;

  /// @brief Field ButtonFace value: I32(168)
  static ::System::Drawing::KnownColor const ButtonFace;

  /// @brief Field ButtonHighlight value: I32(169)
  static ::System::Drawing::KnownColor const ButtonHighlight;

  /// @brief Field ButtonShadow value: I32(170)
  static ::System::Drawing::KnownColor const ButtonShadow;

  /// @brief Field CadetBlue value: I32(41)
  static ::System::Drawing::KnownColor const CadetBlue;

  /// @brief Field Chartreuse value: I32(42)
  static ::System::Drawing::KnownColor const Chartreuse;

  /// @brief Field Chocolate value: I32(43)
  static ::System::Drawing::KnownColor const Chocolate;

  /// @brief Field Control value: I32(5)
  static ::System::Drawing::KnownColor const Control;

  /// @brief Field ControlDark value: I32(6)
  static ::System::Drawing::KnownColor const ControlDark;

  /// @brief Field ControlDarkDark value: I32(7)
  static ::System::Drawing::KnownColor const ControlDarkDark;

  /// @brief Field ControlLight value: I32(8)
  static ::System::Drawing::KnownColor const ControlLight;

  /// @brief Field ControlLightLight value: I32(9)
  static ::System::Drawing::KnownColor const ControlLightLight;

  /// @brief Field ControlText value: I32(10)
  static ::System::Drawing::KnownColor const ControlText;

  /// @brief Field Coral value: I32(44)
  static ::System::Drawing::KnownColor const Coral;

  /// @brief Field CornflowerBlue value: I32(45)
  static ::System::Drawing::KnownColor const CornflowerBlue;

  /// @brief Field Cornsilk value: I32(46)
  static ::System::Drawing::KnownColor const Cornsilk;

  /// @brief Field Crimson value: I32(47)
  static ::System::Drawing::KnownColor const Crimson;

  /// @brief Field Cyan value: I32(48)
  static ::System::Drawing::KnownColor const Cyan;

  /// @brief Field DarkBlue value: I32(49)
  static ::System::Drawing::KnownColor const DarkBlue;

  /// @brief Field DarkCyan value: I32(50)
  static ::System::Drawing::KnownColor const DarkCyan;

  /// @brief Field DarkGoldenrod value: I32(51)
  static ::System::Drawing::KnownColor const DarkGoldenrod;

  /// @brief Field DarkGray value: I32(52)
  static ::System::Drawing::KnownColor const DarkGray;

  /// @brief Field DarkGreen value: I32(53)
  static ::System::Drawing::KnownColor const DarkGreen;

  /// @brief Field DarkKhaki value: I32(54)
  static ::System::Drawing::KnownColor const DarkKhaki;

  /// @brief Field DarkMagenta value: I32(55)
  static ::System::Drawing::KnownColor const DarkMagenta;

  /// @brief Field DarkOliveGreen value: I32(56)
  static ::System::Drawing::KnownColor const DarkOliveGreen;

  /// @brief Field DarkOrange value: I32(57)
  static ::System::Drawing::KnownColor const DarkOrange;

  /// @brief Field DarkOrchid value: I32(58)
  static ::System::Drawing::KnownColor const DarkOrchid;

  /// @brief Field DarkRed value: I32(59)
  static ::System::Drawing::KnownColor const DarkRed;

  /// @brief Field DarkSalmon value: I32(60)
  static ::System::Drawing::KnownColor const DarkSalmon;

  /// @brief Field DarkSeaGreen value: I32(61)
  static ::System::Drawing::KnownColor const DarkSeaGreen;

  /// @brief Field DarkSlateBlue value: I32(62)
  static ::System::Drawing::KnownColor const DarkSlateBlue;

  /// @brief Field DarkSlateGray value: I32(63)
  static ::System::Drawing::KnownColor const DarkSlateGray;

  /// @brief Field DarkTurquoise value: I32(64)
  static ::System::Drawing::KnownColor const DarkTurquoise;

  /// @brief Field DarkViolet value: I32(65)
  static ::System::Drawing::KnownColor const DarkViolet;

  /// @brief Field DeepPink value: I32(66)
  static ::System::Drawing::KnownColor const DeepPink;

  /// @brief Field DeepSkyBlue value: I32(67)
  static ::System::Drawing::KnownColor const DeepSkyBlue;

  /// @brief Field Desktop value: I32(11)
  static ::System::Drawing::KnownColor const Desktop;

  /// @brief Field DimGray value: I32(68)
  static ::System::Drawing::KnownColor const DimGray;

  /// @brief Field DodgerBlue value: I32(69)
  static ::System::Drawing::KnownColor const DodgerBlue;

  /// @brief Field Firebrick value: I32(70)
  static ::System::Drawing::KnownColor const Firebrick;

  /// @brief Field FloralWhite value: I32(71)
  static ::System::Drawing::KnownColor const FloralWhite;

  /// @brief Field ForestGreen value: I32(72)
  static ::System::Drawing::KnownColor const ForestGreen;

  /// @brief Field Fuchsia value: I32(73)
  static ::System::Drawing::KnownColor const Fuchsia;

  /// @brief Field Gainsboro value: I32(74)
  static ::System::Drawing::KnownColor const Gainsboro;

  /// @brief Field GhostWhite value: I32(75)
  static ::System::Drawing::KnownColor const GhostWhite;

  /// @brief Field Gold value: I32(76)
  static ::System::Drawing::KnownColor const Gold;

  /// @brief Field Goldenrod value: I32(77)
  static ::System::Drawing::KnownColor const Goldenrod;

  /// @brief Field GradientActiveCaption value: I32(171)
  static ::System::Drawing::KnownColor const GradientActiveCaption;

  /// @brief Field GradientInactiveCaption value: I32(172)
  static ::System::Drawing::KnownColor const GradientInactiveCaption;

  /// @brief Field Gray value: I32(78)
  static ::System::Drawing::KnownColor const Gray;

  /// @brief Field GrayText value: I32(12)
  static ::System::Drawing::KnownColor const GrayText;

  /// @brief Field Green value: I32(79)
  static ::System::Drawing::KnownColor const Green;

  /// @brief Field GreenYellow value: I32(80)
  static ::System::Drawing::KnownColor const GreenYellow;

  /// @brief Field Highlight value: I32(13)
  static ::System::Drawing::KnownColor const Highlight;

  /// @brief Field HighlightText value: I32(14)
  static ::System::Drawing::KnownColor const HighlightText;

  /// @brief Field Honeydew value: I32(81)
  static ::System::Drawing::KnownColor const Honeydew;

  /// @brief Field HotPink value: I32(82)
  static ::System::Drawing::KnownColor const HotPink;

  /// @brief Field HotTrack value: I32(15)
  static ::System::Drawing::KnownColor const HotTrack;

  /// @brief Field InactiveBorder value: I32(16)
  static ::System::Drawing::KnownColor const InactiveBorder;

  /// @brief Field InactiveCaption value: I32(17)
  static ::System::Drawing::KnownColor const InactiveCaption;

  /// @brief Field InactiveCaptionText value: I32(18)
  static ::System::Drawing::KnownColor const InactiveCaptionText;

  /// @brief Field IndianRed value: I32(83)
  static ::System::Drawing::KnownColor const IndianRed;

  /// @brief Field Indigo value: I32(84)
  static ::System::Drawing::KnownColor const Indigo;

  /// @brief Field Info value: I32(19)
  static ::System::Drawing::KnownColor const Info;

  /// @brief Field InfoText value: I32(20)
  static ::System::Drawing::KnownColor const InfoText;

  /// @brief Field Ivory value: I32(85)
  static ::System::Drawing::KnownColor const Ivory;

  /// @brief Field Khaki value: I32(86)
  static ::System::Drawing::KnownColor const Khaki;

  /// @brief Field Lavender value: I32(87)
  static ::System::Drawing::KnownColor const Lavender;

  /// @brief Field LavenderBlush value: I32(88)
  static ::System::Drawing::KnownColor const LavenderBlush;

  /// @brief Field LawnGreen value: I32(89)
  static ::System::Drawing::KnownColor const LawnGreen;

  /// @brief Field LemonChiffon value: I32(90)
  static ::System::Drawing::KnownColor const LemonChiffon;

  /// @brief Field LightBlue value: I32(91)
  static ::System::Drawing::KnownColor const LightBlue;

  /// @brief Field LightCoral value: I32(92)
  static ::System::Drawing::KnownColor const LightCoral;

  /// @brief Field LightCyan value: I32(93)
  static ::System::Drawing::KnownColor const LightCyan;

  /// @brief Field LightGoldenrodYellow value: I32(94)
  static ::System::Drawing::KnownColor const LightGoldenrodYellow;

  /// @brief Field LightGray value: I32(95)
  static ::System::Drawing::KnownColor const LightGray;

  /// @brief Field LightGreen value: I32(96)
  static ::System::Drawing::KnownColor const LightGreen;

  /// @brief Field LightPink value: I32(97)
  static ::System::Drawing::KnownColor const LightPink;

  /// @brief Field LightSalmon value: I32(98)
  static ::System::Drawing::KnownColor const LightSalmon;

  /// @brief Field LightSeaGreen value: I32(99)
  static ::System::Drawing::KnownColor const LightSeaGreen;

  /// @brief Field LightSkyBlue value: I32(100)
  static ::System::Drawing::KnownColor const LightSkyBlue;

  /// @brief Field LightSlateGray value: I32(101)
  static ::System::Drawing::KnownColor const LightSlateGray;

  /// @brief Field LightSteelBlue value: I32(102)
  static ::System::Drawing::KnownColor const LightSteelBlue;

  /// @brief Field LightYellow value: I32(103)
  static ::System::Drawing::KnownColor const LightYellow;

  /// @brief Field Lime value: I32(104)
  static ::System::Drawing::KnownColor const Lime;

  /// @brief Field LimeGreen value: I32(105)
  static ::System::Drawing::KnownColor const LimeGreen;

  /// @brief Field Linen value: I32(106)
  static ::System::Drawing::KnownColor const Linen;

  /// @brief Field Magenta value: I32(107)
  static ::System::Drawing::KnownColor const Magenta;

  /// @brief Field Maroon value: I32(108)
  static ::System::Drawing::KnownColor const Maroon;

  /// @brief Field MediumAquamarine value: I32(109)
  static ::System::Drawing::KnownColor const MediumAquamarine;

  /// @brief Field MediumBlue value: I32(110)
  static ::System::Drawing::KnownColor const MediumBlue;

  /// @brief Field MediumOrchid value: I32(111)
  static ::System::Drawing::KnownColor const MediumOrchid;

  /// @brief Field MediumPurple value: I32(112)
  static ::System::Drawing::KnownColor const MediumPurple;

  /// @brief Field MediumSeaGreen value: I32(113)
  static ::System::Drawing::KnownColor const MediumSeaGreen;

  /// @brief Field MediumSlateBlue value: I32(114)
  static ::System::Drawing::KnownColor const MediumSlateBlue;

  /// @brief Field MediumSpringGreen value: I32(115)
  static ::System::Drawing::KnownColor const MediumSpringGreen;

  /// @brief Field MediumTurquoise value: I32(116)
  static ::System::Drawing::KnownColor const MediumTurquoise;

  /// @brief Field MediumVioletRed value: I32(117)
  static ::System::Drawing::KnownColor const MediumVioletRed;

  /// @brief Field Menu value: I32(21)
  static ::System::Drawing::KnownColor const Menu;

  /// @brief Field MenuBar value: I32(173)
  static ::System::Drawing::KnownColor const MenuBar;

  /// @brief Field MenuHighlight value: I32(174)
  static ::System::Drawing::KnownColor const MenuHighlight;

  /// @brief Field MenuText value: I32(22)
  static ::System::Drawing::KnownColor const MenuText;

  /// @brief Field MidnightBlue value: I32(118)
  static ::System::Drawing::KnownColor const MidnightBlue;

  /// @brief Field MintCream value: I32(119)
  static ::System::Drawing::KnownColor const MintCream;

  /// @brief Field MistyRose value: I32(120)
  static ::System::Drawing::KnownColor const MistyRose;

  /// @brief Field Moccasin value: I32(121)
  static ::System::Drawing::KnownColor const Moccasin;

  /// @brief Field NavajoWhite value: I32(122)
  static ::System::Drawing::KnownColor const NavajoWhite;

  /// @brief Field Navy value: I32(123)
  static ::System::Drawing::KnownColor const Navy;

  /// @brief Field OldLace value: I32(124)
  static ::System::Drawing::KnownColor const OldLace;

  /// @brief Field Olive value: I32(125)
  static ::System::Drawing::KnownColor const Olive;

  /// @brief Field OliveDrab value: I32(126)
  static ::System::Drawing::KnownColor const OliveDrab;

  /// @brief Field Orange value: I32(127)
  static ::System::Drawing::KnownColor const Orange;

  /// @brief Field OrangeRed value: I32(128)
  static ::System::Drawing::KnownColor const OrangeRed;

  /// @brief Field Orchid value: I32(129)
  static ::System::Drawing::KnownColor const Orchid;

  /// @brief Field PaleGoldenrod value: I32(130)
  static ::System::Drawing::KnownColor const PaleGoldenrod;

  /// @brief Field PaleGreen value: I32(131)
  static ::System::Drawing::KnownColor const PaleGreen;

  /// @brief Field PaleTurquoise value: I32(132)
  static ::System::Drawing::KnownColor const PaleTurquoise;

  /// @brief Field PaleVioletRed value: I32(133)
  static ::System::Drawing::KnownColor const PaleVioletRed;

  /// @brief Field PapayaWhip value: I32(134)
  static ::System::Drawing::KnownColor const PapayaWhip;

  /// @brief Field PeachPuff value: I32(135)
  static ::System::Drawing::KnownColor const PeachPuff;

  /// @brief Field Peru value: I32(136)
  static ::System::Drawing::KnownColor const Peru;

  /// @brief Field Pink value: I32(137)
  static ::System::Drawing::KnownColor const Pink;

  /// @brief Field Plum value: I32(138)
  static ::System::Drawing::KnownColor const Plum;

  /// @brief Field PowderBlue value: I32(139)
  static ::System::Drawing::KnownColor const PowderBlue;

  /// @brief Field Purple value: I32(140)
  static ::System::Drawing::KnownColor const Purple;

  /// @brief Field Red value: I32(141)
  static ::System::Drawing::KnownColor const Red;

  /// @brief Field RosyBrown value: I32(142)
  static ::System::Drawing::KnownColor const RosyBrown;

  /// @brief Field RoyalBlue value: I32(143)
  static ::System::Drawing::KnownColor const RoyalBlue;

  /// @brief Field SaddleBrown value: I32(144)
  static ::System::Drawing::KnownColor const SaddleBrown;

  /// @brief Field Salmon value: I32(145)
  static ::System::Drawing::KnownColor const Salmon;

  /// @brief Field SandyBrown value: I32(146)
  static ::System::Drawing::KnownColor const SandyBrown;

  /// @brief Field ScrollBar value: I32(23)
  static ::System::Drawing::KnownColor const ScrollBar;

  /// @brief Field SeaGreen value: I32(147)
  static ::System::Drawing::KnownColor const SeaGreen;

  /// @brief Field SeaShell value: I32(148)
  static ::System::Drawing::KnownColor const SeaShell;

  /// @brief Field Sienna value: I32(149)
  static ::System::Drawing::KnownColor const Sienna;

  /// @brief Field Silver value: I32(150)
  static ::System::Drawing::KnownColor const Silver;

  /// @brief Field SkyBlue value: I32(151)
  static ::System::Drawing::KnownColor const SkyBlue;

  /// @brief Field SlateBlue value: I32(152)
  static ::System::Drawing::KnownColor const SlateBlue;

  /// @brief Field SlateGray value: I32(153)
  static ::System::Drawing::KnownColor const SlateGray;

  /// @brief Field Snow value: I32(154)
  static ::System::Drawing::KnownColor const Snow;

  /// @brief Field SpringGreen value: I32(155)
  static ::System::Drawing::KnownColor const SpringGreen;

  /// @brief Field SteelBlue value: I32(156)
  static ::System::Drawing::KnownColor const SteelBlue;

  /// @brief Field Tan value: I32(157)
  static ::System::Drawing::KnownColor const Tan;

  /// @brief Field Teal value: I32(158)
  static ::System::Drawing::KnownColor const Teal;

  /// @brief Field Thistle value: I32(159)
  static ::System::Drawing::KnownColor const Thistle;

  /// @brief Field Tomato value: I32(160)
  static ::System::Drawing::KnownColor const Tomato;

  /// @brief Field Transparent value: I32(27)
  static ::System::Drawing::KnownColor const Transparent;

  /// @brief Field Turquoise value: I32(161)
  static ::System::Drawing::KnownColor const Turquoise;

  /// @brief Field Violet value: I32(162)
  static ::System::Drawing::KnownColor const Violet;

  /// @brief Field Wheat value: I32(163)
  static ::System::Drawing::KnownColor const Wheat;

  /// @brief Field White value: I32(164)
  static ::System::Drawing::KnownColor const White;

  /// @brief Field WhiteSmoke value: I32(165)
  static ::System::Drawing::KnownColor const WhiteSmoke;

  /// @brief Field Window value: I32(24)
  static ::System::Drawing::KnownColor const Window;

  /// @brief Field WindowFrame value: I32(25)
  static ::System::Drawing::KnownColor const WindowFrame;

  /// @brief Field WindowText value: I32(26)
  static ::System::Drawing::KnownColor const WindowText;

  /// @brief Field Yellow value: I32(166)
  static ::System::Drawing::KnownColor const Yellow;

  /// @brief Field YellowGreen value: I32(167)
  static ::System::Drawing::KnownColor const YellowGreen;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21299 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Drawing::KnownColor, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Drawing::KnownColor, 0x4>, "Size mismatch!");

} // namespace System::Drawing
DEFINE_IL2CPP_ARG_TYPE(::System::Drawing::KnownColor, "System.Drawing", "KnownColor");
