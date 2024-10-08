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
// Type: System.Drawing::KnownColor
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System::Drawing {
// Is value type: true
// CS Name: ::System.Drawing::KnownColor
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

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ActiveBorder value: static_cast<int32_t>(0x1)
  static ::System::Drawing::KnownColor const ActiveBorder;

  /// @brief Field ActiveCaption value: static_cast<int32_t>(0x2)
  static ::System::Drawing::KnownColor const ActiveCaption;

  /// @brief Field ActiveCaptionText value: static_cast<int32_t>(0x3)
  static ::System::Drawing::KnownColor const ActiveCaptionText;

  /// @brief Field AliceBlue value: static_cast<int32_t>(0x1c)
  static ::System::Drawing::KnownColor const AliceBlue;

  /// @brief Field AntiqueWhite value: static_cast<int32_t>(0x1d)
  static ::System::Drawing::KnownColor const AntiqueWhite;

  /// @brief Field AppWorkspace value: static_cast<int32_t>(0x4)
  static ::System::Drawing::KnownColor const AppWorkspace;

  /// @brief Field Aqua value: static_cast<int32_t>(0x1e)
  static ::System::Drawing::KnownColor const Aqua;

  /// @brief Field Aquamarine value: static_cast<int32_t>(0x1f)
  static ::System::Drawing::KnownColor const Aquamarine;

  /// @brief Field Azure value: static_cast<int32_t>(0x20)
  static ::System::Drawing::KnownColor const Azure;

  /// @brief Field Beige value: static_cast<int32_t>(0x21)
  static ::System::Drawing::KnownColor const Beige;

  /// @brief Field Bisque value: static_cast<int32_t>(0x22)
  static ::System::Drawing::KnownColor const Bisque;

  /// @brief Field Black value: static_cast<int32_t>(0x23)
  static ::System::Drawing::KnownColor const Black;

  /// @brief Field BlanchedAlmond value: static_cast<int32_t>(0x24)
  static ::System::Drawing::KnownColor const BlanchedAlmond;

  /// @brief Field Blue value: static_cast<int32_t>(0x25)
  static ::System::Drawing::KnownColor const Blue;

  /// @brief Field BlueViolet value: static_cast<int32_t>(0x26)
  static ::System::Drawing::KnownColor const BlueViolet;

  /// @brief Field Brown value: static_cast<int32_t>(0x27)
  static ::System::Drawing::KnownColor const Brown;

  /// @brief Field BurlyWood value: static_cast<int32_t>(0x28)
  static ::System::Drawing::KnownColor const BurlyWood;

  /// @brief Field ButtonFace value: static_cast<int32_t>(0xa8)
  static ::System::Drawing::KnownColor const ButtonFace;

  /// @brief Field ButtonHighlight value: static_cast<int32_t>(0xa9)
  static ::System::Drawing::KnownColor const ButtonHighlight;

  /// @brief Field ButtonShadow value: static_cast<int32_t>(0xaa)
  static ::System::Drawing::KnownColor const ButtonShadow;

  /// @brief Field CadetBlue value: static_cast<int32_t>(0x29)
  static ::System::Drawing::KnownColor const CadetBlue;

  /// @brief Field Chartreuse value: static_cast<int32_t>(0x2a)
  static ::System::Drawing::KnownColor const Chartreuse;

  /// @brief Field Chocolate value: static_cast<int32_t>(0x2b)
  static ::System::Drawing::KnownColor const Chocolate;

  /// @brief Field Control value: static_cast<int32_t>(0x5)
  static ::System::Drawing::KnownColor const Control;

  /// @brief Field ControlDark value: static_cast<int32_t>(0x6)
  static ::System::Drawing::KnownColor const ControlDark;

  /// @brief Field ControlDarkDark value: static_cast<int32_t>(0x7)
  static ::System::Drawing::KnownColor const ControlDarkDark;

  /// @brief Field ControlLight value: static_cast<int32_t>(0x8)
  static ::System::Drawing::KnownColor const ControlLight;

  /// @brief Field ControlLightLight value: static_cast<int32_t>(0x9)
  static ::System::Drawing::KnownColor const ControlLightLight;

  /// @brief Field ControlText value: static_cast<int32_t>(0xa)
  static ::System::Drawing::KnownColor const ControlText;

  /// @brief Field Coral value: static_cast<int32_t>(0x2c)
  static ::System::Drawing::KnownColor const Coral;

  /// @brief Field CornflowerBlue value: static_cast<int32_t>(0x2d)
  static ::System::Drawing::KnownColor const CornflowerBlue;

  /// @brief Field Cornsilk value: static_cast<int32_t>(0x2e)
  static ::System::Drawing::KnownColor const Cornsilk;

  /// @brief Field Crimson value: static_cast<int32_t>(0x2f)
  static ::System::Drawing::KnownColor const Crimson;

  /// @brief Field Cyan value: static_cast<int32_t>(0x30)
  static ::System::Drawing::KnownColor const Cyan;

  /// @brief Field DarkBlue value: static_cast<int32_t>(0x31)
  static ::System::Drawing::KnownColor const DarkBlue;

  /// @brief Field DarkCyan value: static_cast<int32_t>(0x32)
  static ::System::Drawing::KnownColor const DarkCyan;

  /// @brief Field DarkGoldenrod value: static_cast<int32_t>(0x33)
  static ::System::Drawing::KnownColor const DarkGoldenrod;

  /// @brief Field DarkGray value: static_cast<int32_t>(0x34)
  static ::System::Drawing::KnownColor const DarkGray;

  /// @brief Field DarkGreen value: static_cast<int32_t>(0x35)
  static ::System::Drawing::KnownColor const DarkGreen;

  /// @brief Field DarkKhaki value: static_cast<int32_t>(0x36)
  static ::System::Drawing::KnownColor const DarkKhaki;

  /// @brief Field DarkMagenta value: static_cast<int32_t>(0x37)
  static ::System::Drawing::KnownColor const DarkMagenta;

  /// @brief Field DarkOliveGreen value: static_cast<int32_t>(0x38)
  static ::System::Drawing::KnownColor const DarkOliveGreen;

  /// @brief Field DarkOrange value: static_cast<int32_t>(0x39)
  static ::System::Drawing::KnownColor const DarkOrange;

  /// @brief Field DarkOrchid value: static_cast<int32_t>(0x3a)
  static ::System::Drawing::KnownColor const DarkOrchid;

  /// @brief Field DarkRed value: static_cast<int32_t>(0x3b)
  static ::System::Drawing::KnownColor const DarkRed;

  /// @brief Field DarkSalmon value: static_cast<int32_t>(0x3c)
  static ::System::Drawing::KnownColor const DarkSalmon;

  /// @brief Field DarkSeaGreen value: static_cast<int32_t>(0x3d)
  static ::System::Drawing::KnownColor const DarkSeaGreen;

  /// @brief Field DarkSlateBlue value: static_cast<int32_t>(0x3e)
  static ::System::Drawing::KnownColor const DarkSlateBlue;

  /// @brief Field DarkSlateGray value: static_cast<int32_t>(0x3f)
  static ::System::Drawing::KnownColor const DarkSlateGray;

  /// @brief Field DarkTurquoise value: static_cast<int32_t>(0x40)
  static ::System::Drawing::KnownColor const DarkTurquoise;

  /// @brief Field DarkViolet value: static_cast<int32_t>(0x41)
  static ::System::Drawing::KnownColor const DarkViolet;

  /// @brief Field DeepPink value: static_cast<int32_t>(0x42)
  static ::System::Drawing::KnownColor const DeepPink;

  /// @brief Field DeepSkyBlue value: static_cast<int32_t>(0x43)
  static ::System::Drawing::KnownColor const DeepSkyBlue;

  /// @brief Field Desktop value: static_cast<int32_t>(0xb)
  static ::System::Drawing::KnownColor const Desktop;

  /// @brief Field DimGray value: static_cast<int32_t>(0x44)
  static ::System::Drawing::KnownColor const DimGray;

  /// @brief Field DodgerBlue value: static_cast<int32_t>(0x45)
  static ::System::Drawing::KnownColor const DodgerBlue;

  /// @brief Field Firebrick value: static_cast<int32_t>(0x46)
  static ::System::Drawing::KnownColor const Firebrick;

  /// @brief Field FloralWhite value: static_cast<int32_t>(0x47)
  static ::System::Drawing::KnownColor const FloralWhite;

  /// @brief Field ForestGreen value: static_cast<int32_t>(0x48)
  static ::System::Drawing::KnownColor const ForestGreen;

  /// @brief Field Fuchsia value: static_cast<int32_t>(0x49)
  static ::System::Drawing::KnownColor const Fuchsia;

  /// @brief Field Gainsboro value: static_cast<int32_t>(0x4a)
  static ::System::Drawing::KnownColor const Gainsboro;

  /// @brief Field GhostWhite value: static_cast<int32_t>(0x4b)
  static ::System::Drawing::KnownColor const GhostWhite;

  /// @brief Field Gold value: static_cast<int32_t>(0x4c)
  static ::System::Drawing::KnownColor const Gold;

  /// @brief Field Goldenrod value: static_cast<int32_t>(0x4d)
  static ::System::Drawing::KnownColor const Goldenrod;

  /// @brief Field GradientActiveCaption value: static_cast<int32_t>(0xab)
  static ::System::Drawing::KnownColor const GradientActiveCaption;

  /// @brief Field GradientInactiveCaption value: static_cast<int32_t>(0xac)
  static ::System::Drawing::KnownColor const GradientInactiveCaption;

  /// @brief Field Gray value: static_cast<int32_t>(0x4e)
  static ::System::Drawing::KnownColor const Gray;

  /// @brief Field GrayText value: static_cast<int32_t>(0xc)
  static ::System::Drawing::KnownColor const GrayText;

  /// @brief Field Green value: static_cast<int32_t>(0x4f)
  static ::System::Drawing::KnownColor const Green;

  /// @brief Field GreenYellow value: static_cast<int32_t>(0x50)
  static ::System::Drawing::KnownColor const GreenYellow;

  /// @brief Field Highlight value: static_cast<int32_t>(0xd)
  static ::System::Drawing::KnownColor const Highlight;

  /// @brief Field HighlightText value: static_cast<int32_t>(0xe)
  static ::System::Drawing::KnownColor const HighlightText;

  /// @brief Field Honeydew value: static_cast<int32_t>(0x51)
  static ::System::Drawing::KnownColor const Honeydew;

  /// @brief Field HotPink value: static_cast<int32_t>(0x52)
  static ::System::Drawing::KnownColor const HotPink;

  /// @brief Field HotTrack value: static_cast<int32_t>(0xf)
  static ::System::Drawing::KnownColor const HotTrack;

  /// @brief Field InactiveBorder value: static_cast<int32_t>(0x10)
  static ::System::Drawing::KnownColor const InactiveBorder;

  /// @brief Field InactiveCaption value: static_cast<int32_t>(0x11)
  static ::System::Drawing::KnownColor const InactiveCaption;

  /// @brief Field InactiveCaptionText value: static_cast<int32_t>(0x12)
  static ::System::Drawing::KnownColor const InactiveCaptionText;

  /// @brief Field IndianRed value: static_cast<int32_t>(0x53)
  static ::System::Drawing::KnownColor const IndianRed;

  /// @brief Field Indigo value: static_cast<int32_t>(0x54)
  static ::System::Drawing::KnownColor const Indigo;

  /// @brief Field Info value: static_cast<int32_t>(0x13)
  static ::System::Drawing::KnownColor const Info;

  /// @brief Field InfoText value: static_cast<int32_t>(0x14)
  static ::System::Drawing::KnownColor const InfoText;

  /// @brief Field Ivory value: static_cast<int32_t>(0x55)
  static ::System::Drawing::KnownColor const Ivory;

  /// @brief Field Khaki value: static_cast<int32_t>(0x56)
  static ::System::Drawing::KnownColor const Khaki;

  /// @brief Field Lavender value: static_cast<int32_t>(0x57)
  static ::System::Drawing::KnownColor const Lavender;

  /// @brief Field LavenderBlush value: static_cast<int32_t>(0x58)
  static ::System::Drawing::KnownColor const LavenderBlush;

  /// @brief Field LawnGreen value: static_cast<int32_t>(0x59)
  static ::System::Drawing::KnownColor const LawnGreen;

  /// @brief Field LemonChiffon value: static_cast<int32_t>(0x5a)
  static ::System::Drawing::KnownColor const LemonChiffon;

  /// @brief Field LightBlue value: static_cast<int32_t>(0x5b)
  static ::System::Drawing::KnownColor const LightBlue;

  /// @brief Field LightCoral value: static_cast<int32_t>(0x5c)
  static ::System::Drawing::KnownColor const LightCoral;

  /// @brief Field LightCyan value: static_cast<int32_t>(0x5d)
  static ::System::Drawing::KnownColor const LightCyan;

  /// @brief Field LightGoldenrodYellow value: static_cast<int32_t>(0x5e)
  static ::System::Drawing::KnownColor const LightGoldenrodYellow;

  /// @brief Field LightGray value: static_cast<int32_t>(0x5f)
  static ::System::Drawing::KnownColor const LightGray;

  /// @brief Field LightGreen value: static_cast<int32_t>(0x60)
  static ::System::Drawing::KnownColor const LightGreen;

  /// @brief Field LightPink value: static_cast<int32_t>(0x61)
  static ::System::Drawing::KnownColor const LightPink;

  /// @brief Field LightSalmon value: static_cast<int32_t>(0x62)
  static ::System::Drawing::KnownColor const LightSalmon;

  /// @brief Field LightSeaGreen value: static_cast<int32_t>(0x63)
  static ::System::Drawing::KnownColor const LightSeaGreen;

  /// @brief Field LightSkyBlue value: static_cast<int32_t>(0x64)
  static ::System::Drawing::KnownColor const LightSkyBlue;

  /// @brief Field LightSlateGray value: static_cast<int32_t>(0x65)
  static ::System::Drawing::KnownColor const LightSlateGray;

  /// @brief Field LightSteelBlue value: static_cast<int32_t>(0x66)
  static ::System::Drawing::KnownColor const LightSteelBlue;

  /// @brief Field LightYellow value: static_cast<int32_t>(0x67)
  static ::System::Drawing::KnownColor const LightYellow;

  /// @brief Field Lime value: static_cast<int32_t>(0x68)
  static ::System::Drawing::KnownColor const Lime;

  /// @brief Field LimeGreen value: static_cast<int32_t>(0x69)
  static ::System::Drawing::KnownColor const LimeGreen;

  /// @brief Field Linen value: static_cast<int32_t>(0x6a)
  static ::System::Drawing::KnownColor const Linen;

  /// @brief Field Magenta value: static_cast<int32_t>(0x6b)
  static ::System::Drawing::KnownColor const Magenta;

  /// @brief Field Maroon value: static_cast<int32_t>(0x6c)
  static ::System::Drawing::KnownColor const Maroon;

  /// @brief Field MediumAquamarine value: static_cast<int32_t>(0x6d)
  static ::System::Drawing::KnownColor const MediumAquamarine;

  /// @brief Field MediumBlue value: static_cast<int32_t>(0x6e)
  static ::System::Drawing::KnownColor const MediumBlue;

  /// @brief Field MediumOrchid value: static_cast<int32_t>(0x6f)
  static ::System::Drawing::KnownColor const MediumOrchid;

  /// @brief Field MediumPurple value: static_cast<int32_t>(0x70)
  static ::System::Drawing::KnownColor const MediumPurple;

  /// @brief Field MediumSeaGreen value: static_cast<int32_t>(0x71)
  static ::System::Drawing::KnownColor const MediumSeaGreen;

  /// @brief Field MediumSlateBlue value: static_cast<int32_t>(0x72)
  static ::System::Drawing::KnownColor const MediumSlateBlue;

  /// @brief Field MediumSpringGreen value: static_cast<int32_t>(0x73)
  static ::System::Drawing::KnownColor const MediumSpringGreen;

  /// @brief Field MediumTurquoise value: static_cast<int32_t>(0x74)
  static ::System::Drawing::KnownColor const MediumTurquoise;

  /// @brief Field MediumVioletRed value: static_cast<int32_t>(0x75)
  static ::System::Drawing::KnownColor const MediumVioletRed;

  /// @brief Field Menu value: static_cast<int32_t>(0x15)
  static ::System::Drawing::KnownColor const Menu;

  /// @brief Field MenuBar value: static_cast<int32_t>(0xad)
  static ::System::Drawing::KnownColor const MenuBar;

  /// @brief Field MenuHighlight value: static_cast<int32_t>(0xae)
  static ::System::Drawing::KnownColor const MenuHighlight;

  /// @brief Field MenuText value: static_cast<int32_t>(0x16)
  static ::System::Drawing::KnownColor const MenuText;

  /// @brief Field MidnightBlue value: static_cast<int32_t>(0x76)
  static ::System::Drawing::KnownColor const MidnightBlue;

  /// @brief Field MintCream value: static_cast<int32_t>(0x77)
  static ::System::Drawing::KnownColor const MintCream;

  /// @brief Field MistyRose value: static_cast<int32_t>(0x78)
  static ::System::Drawing::KnownColor const MistyRose;

  /// @brief Field Moccasin value: static_cast<int32_t>(0x79)
  static ::System::Drawing::KnownColor const Moccasin;

  /// @brief Field NavajoWhite value: static_cast<int32_t>(0x7a)
  static ::System::Drawing::KnownColor const NavajoWhite;

  /// @brief Field Navy value: static_cast<int32_t>(0x7b)
  static ::System::Drawing::KnownColor const Navy;

  /// @brief Field OldLace value: static_cast<int32_t>(0x7c)
  static ::System::Drawing::KnownColor const OldLace;

  /// @brief Field Olive value: static_cast<int32_t>(0x7d)
  static ::System::Drawing::KnownColor const Olive;

  /// @brief Field OliveDrab value: static_cast<int32_t>(0x7e)
  static ::System::Drawing::KnownColor const OliveDrab;

  /// @brief Field Orange value: static_cast<int32_t>(0x7f)
  static ::System::Drawing::KnownColor const Orange;

  /// @brief Field OrangeRed value: static_cast<int32_t>(0x80)
  static ::System::Drawing::KnownColor const OrangeRed;

  /// @brief Field Orchid value: static_cast<int32_t>(0x81)
  static ::System::Drawing::KnownColor const Orchid;

  /// @brief Field PaleGoldenrod value: static_cast<int32_t>(0x82)
  static ::System::Drawing::KnownColor const PaleGoldenrod;

  /// @brief Field PaleGreen value: static_cast<int32_t>(0x83)
  static ::System::Drawing::KnownColor const PaleGreen;

  /// @brief Field PaleTurquoise value: static_cast<int32_t>(0x84)
  static ::System::Drawing::KnownColor const PaleTurquoise;

  /// @brief Field PaleVioletRed value: static_cast<int32_t>(0x85)
  static ::System::Drawing::KnownColor const PaleVioletRed;

  /// @brief Field PapayaWhip value: static_cast<int32_t>(0x86)
  static ::System::Drawing::KnownColor const PapayaWhip;

  /// @brief Field PeachPuff value: static_cast<int32_t>(0x87)
  static ::System::Drawing::KnownColor const PeachPuff;

  /// @brief Field Peru value: static_cast<int32_t>(0x88)
  static ::System::Drawing::KnownColor const Peru;

  /// @brief Field Pink value: static_cast<int32_t>(0x89)
  static ::System::Drawing::KnownColor const Pink;

  /// @brief Field Plum value: static_cast<int32_t>(0x8a)
  static ::System::Drawing::KnownColor const Plum;

  /// @brief Field PowderBlue value: static_cast<int32_t>(0x8b)
  static ::System::Drawing::KnownColor const PowderBlue;

  /// @brief Field Purple value: static_cast<int32_t>(0x8c)
  static ::System::Drawing::KnownColor const Purple;

  /// @brief Field Red value: static_cast<int32_t>(0x8d)
  static ::System::Drawing::KnownColor const Red;

  /// @brief Field RosyBrown value: static_cast<int32_t>(0x8e)
  static ::System::Drawing::KnownColor const RosyBrown;

  /// @brief Field RoyalBlue value: static_cast<int32_t>(0x8f)
  static ::System::Drawing::KnownColor const RoyalBlue;

  /// @brief Field SaddleBrown value: static_cast<int32_t>(0x90)
  static ::System::Drawing::KnownColor const SaddleBrown;

  /// @brief Field Salmon value: static_cast<int32_t>(0x91)
  static ::System::Drawing::KnownColor const Salmon;

  /// @brief Field SandyBrown value: static_cast<int32_t>(0x92)
  static ::System::Drawing::KnownColor const SandyBrown;

  /// @brief Field ScrollBar value: static_cast<int32_t>(0x17)
  static ::System::Drawing::KnownColor const ScrollBar;

  /// @brief Field SeaGreen value: static_cast<int32_t>(0x93)
  static ::System::Drawing::KnownColor const SeaGreen;

  /// @brief Field SeaShell value: static_cast<int32_t>(0x94)
  static ::System::Drawing::KnownColor const SeaShell;

  /// @brief Field Sienna value: static_cast<int32_t>(0x95)
  static ::System::Drawing::KnownColor const Sienna;

  /// @brief Field Silver value: static_cast<int32_t>(0x96)
  static ::System::Drawing::KnownColor const Silver;

  /// @brief Field SkyBlue value: static_cast<int32_t>(0x97)
  static ::System::Drawing::KnownColor const SkyBlue;

  /// @brief Field SlateBlue value: static_cast<int32_t>(0x98)
  static ::System::Drawing::KnownColor const SlateBlue;

  /// @brief Field SlateGray value: static_cast<int32_t>(0x99)
  static ::System::Drawing::KnownColor const SlateGray;

  /// @brief Field Snow value: static_cast<int32_t>(0x9a)
  static ::System::Drawing::KnownColor const Snow;

  /// @brief Field SpringGreen value: static_cast<int32_t>(0x9b)
  static ::System::Drawing::KnownColor const SpringGreen;

  /// @brief Field SteelBlue value: static_cast<int32_t>(0x9c)
  static ::System::Drawing::KnownColor const SteelBlue;

  /// @brief Field Tan value: static_cast<int32_t>(0x9d)
  static ::System::Drawing::KnownColor const Tan;

  /// @brief Field Teal value: static_cast<int32_t>(0x9e)
  static ::System::Drawing::KnownColor const Teal;

  /// @brief Field Thistle value: static_cast<int32_t>(0x9f)
  static ::System::Drawing::KnownColor const Thistle;

  /// @brief Field Tomato value: static_cast<int32_t>(0xa0)
  static ::System::Drawing::KnownColor const Tomato;

  /// @brief Field Transparent value: static_cast<int32_t>(0x1b)
  static ::System::Drawing::KnownColor const Transparent;

  /// @brief Field Turquoise value: static_cast<int32_t>(0xa1)
  static ::System::Drawing::KnownColor const Turquoise;

  /// @brief Field Violet value: static_cast<int32_t>(0xa2)
  static ::System::Drawing::KnownColor const Violet;

  /// @brief Field Wheat value: static_cast<int32_t>(0xa3)
  static ::System::Drawing::KnownColor const Wheat;

  /// @brief Field White value: static_cast<int32_t>(0xa4)
  static ::System::Drawing::KnownColor const White;

  /// @brief Field WhiteSmoke value: static_cast<int32_t>(0xa5)
  static ::System::Drawing::KnownColor const WhiteSmoke;

  /// @brief Field Window value: static_cast<int32_t>(0x18)
  static ::System::Drawing::KnownColor const Window;

  /// @brief Field WindowFrame value: static_cast<int32_t>(0x19)
  static ::System::Drawing::KnownColor const WindowFrame;

  /// @brief Field WindowText value: static_cast<int32_t>(0x1a)
  static ::System::Drawing::KnownColor const WindowText;

  /// @brief Field Yellow value: static_cast<int32_t>(0xa6)
  static ::System::Drawing::KnownColor const Yellow;

  /// @brief Field YellowGreen value: static_cast<int32_t>(0xa7)
  static ::System::Drawing::KnownColor const YellowGreen;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17374 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Drawing::KnownColor, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Drawing::KnownColor, value__) == 0x0, "Offset mismatch!");

} // namespace System::Drawing
DEFINE_IL2CPP_ARG_TYPE(::System::Drawing::KnownColor, "System.Drawing", "KnownColor");
