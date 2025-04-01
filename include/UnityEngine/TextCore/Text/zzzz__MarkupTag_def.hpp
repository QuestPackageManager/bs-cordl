#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/MarkupTag.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MarkupTag)
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct MarkupTag;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::MarkupTag);
// Dependencies
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: UnityEngine.TextCore.Text.MarkupTag
struct CORDL_TYPE MarkupTag {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MarkupTag_Unwrapped
  enum struct __MarkupTag_Unwrapped : int32_t {
    __E_BOLD = static_cast<int32_t>(0x42),
    __E_SLASH_BOLD = static_cast<int32_t>(0x64d),
    __E_ITALIC = static_cast<int32_t>(0x49),
    __E_SLASH_ITALIC = static_cast<int32_t>(0x646),
    __E_UNDERLINE = static_cast<int32_t>(0x55),
    __E_SLASH_UNDERLINE = static_cast<int32_t>(0x65a),
    __E_STRIKETHROUGH = static_cast<int32_t>(0x53),
    __E_SLASH_STRIKETHROUGH = static_cast<int32_t>(0x65c),
    __E_MARK = static_cast<int32_t>(0x292f75),
    __E_SLASH_MARK = static_cast<int32_t>(0x36f95da),
    __E_SUBSCRIPT = static_cast<int32_t>(0x167e4),
    __E_SLASH_SUBSCRIPT = static_cast<int32_t>(0x1b02eb),
    __E_SUPERSCRIPT = static_cast<int32_t>(0x167f6),
    __E_SLASH_SUPERSCRIPT = static_cast<int32_t>(0x1b02f9),
    __E_COLOR = static_cast<int32_t>(0x4e3381d),
    __E_SLASH_COLOR = static_cast<int32_t>(0x71c96d92),
    __E_ALPHA = static_cast<int32_t>(0x47af054),
    __E_A = static_cast<int32_t>(0x41),
    __E_SLASH_A = static_cast<int32_t>(0x64e),
    __E_SIZE = static_cast<int32_t>(0x2eb625),
    __E_SLASH_SIZE = static_cast<int32_t>(0x37b920a),
    __E_SPRITE = static_cast<int32_t>(0xc4e67de9),
    __E_NO_BREAK = static_cast<int32_t>(0x2b96d1),
    __E_SLASH_NO_BREAK = static_cast<int32_t>(0x36d097e),
    __E_STYLE = static_cast<int32_t>(0x5f9bd17),
    __E_SLASH_STYLE = static_cast<int32_t>(0x72e6f418),
    __E_FONT = static_cast<int32_t>(0x277753),
    __E_SLASH_FONT = static_cast<int32_t>(0x37128fc),
    __E_SLASH_MATERIAL = static_cast<int32_t>(0xbe648664),
    __E_LINK = static_cast<int32_t>(0x288780),
    __E_SLASH_LINK = static_cast<int32_t>(0x37038af),
    __E_FONT_WEIGHT = static_cast<int32_t>(0x8f5a791e),
    __E_SLASH_FONT_WEIGHT = static_cast<int32_t>(0xd2d23291),
    __E_NO_PARSE = static_cast<int32_t>(0xe7ae3cb4),
    __E_SLASH_NO_PARSE = static_cast<int32_t>(0xee78743b),
    __E_POSITION = static_cast<int32_t>(0x14dac),
    __E_SLASH_POSITION = static_cast<int32_t>(0x1b2023),
    __E_VERTICAL_OFFSET = static_cast<int32_t>(0x745ef45b),
    __E_SLASH_VERTICAL_OFFSET = static_cast<int32_t>(0xff568194),
    __E_SPACE = static_cast<int32_t>(0x5f72764),
    __E_SLASH_SPACE = static_cast<int32_t>(0x72e9022b),
    __E_PAGE = static_cast<int32_t>(0x2adb73),
    __E_SLASH_PAGE = static_cast<int32_t>(0x37f71dc),
    __E_ALIGN = static_cast<int32_t>(0x47a86ed),
    __E_SLASH_ALIGN = static_cast<int32_t>(0x72343fa2),
    __E_WIDTH = static_cast<int32_t>(0x64e48e6),
    __E_SLASH_WIDTH = static_cast<int32_t>(0x72a5aa29),
    __E_GRADIENT = static_cast<int32_t>(0x88ce15e6),
    __E_SLASH_GRADIENT = static_cast<int32_t>(0x9176b2c9),
    __E_CHARACTER_SPACE = static_cast<int32_t>(0xa1903fc7),
    __E_SLASH_CHARACTER_SPACE = static_cast<int32_t>(0xace2bca8),
    __E_MONOSPACE = static_cast<int32_t>(0xb01dd609),
    __E_SLASH_MONOSPACE = static_cast<int32_t>(0x9e50e566),
    __E_CLASS = static_cast<int32_t>(0x4e4fbee),
    __E_INDENT = static_cast<int32_t>(0xa5c050bc),
    __E_SLASH_INDENT = static_cast<int32_t>(0xa6c747d3),
    __E_LINE_INDENT = static_cast<int32_t>(0xcdaced1f),
    __E_SLASH_LINE_INDENT = static_cast<int32_t>(0x5989790),
    __E_MARGIN = static_cast<int32_t>(0xaf32f89e),
    __E_SLASH_MARGIN = static_cast<int32_t>(0x9dac6cf1),
    __E_MARGIN_LEFT = static_cast<int32_t>(0xefbb5ce8),
    __E_MARGIN_RIGHT = static_cast<int32_t>(0xe554f6f3),
    __E_LINE_HEIGHT = static_cast<int32_t>(0xd05efa5c),
    __E_SLASH_LINE_HEIGHT = static_cast<int32_t>(0xbf2aad3),
    __E_ACTION = static_cast<int32_t>(0x9312449e),
    __E_SLASH_ACTION = static_cast<int32_t>(0xb93c7ef1),
    __E_SCALE = static_cast<int32_t>(0x5fe5278),
    __E_SLASH_SCALE = static_cast<int32_t>(0x72f142b7),
    __E_ROTATE = static_cast<int32_t>(0xc4651799),
    __E_SLASH_ROTATE = static_cast<int32_t>(0xd26babf6),
    __E_TABLE = static_cast<int32_t>(0xd7fc39b),
    __E_SLASH_TABLE = static_cast<int32_t>(0xc5a3d774),
    __E_TH = static_cast<int32_t>(0x597459),
    __E_SLASH_TH = static_cast<int32_t>(0xb863a16),
    __E_TR = static_cast<int32_t>(0x597443),
    __E_SLASH_TR = static_cast<int32_t>(0xb863a0c),
    __E_TD = static_cast<int32_t>(0x597455),
    __E_SLASH_TD = static_cast<int32_t>(0xb863a1a),
    __E_LOWERCASE = static_cast<int32_t>(0xa62e8917),
    __E_SLASH_LOWERCASE = static_cast<int32_t>(0xa97f2798),
    __E_ALLCAPS = static_cast<int32_t>(0xd0298a0),
    __E_SLASH_ALLCAPS = static_cast<int32_t>(0xd078112f),
    __E_UPPERCASE = static_cast<int32_t>(0xedcbd276),
    __E_SLASH_UPPERCASE = static_cast<int32_t>(0xdd49c439),
    __E_SMALLCAPS = static_cast<int32_t>(0xd256d1de),
    __E_SLASH_SMALLCAPS = static_cast<int32_t>(0xbea90d1),
    __E_LIGA = static_cast<int32_t>(0x2886e3),
    __E_SLASH_LIGA = static_cast<int32_t>(0x3703a4c),
    __E_FRAC = static_cast<int32_t>(0x27a676),
    __E_SLASH_FRAC = static_cast<int32_t>(0x3719259),
    __E_NAME = static_cast<int32_t>(0x2be0e7),
    __E_INDEX = static_cast<int32_t>(0x505d3fe),
    __E_TINT = static_cast<int32_t>(0x2d2c87),
    __E_ANIM = static_cast<int32_t>(0x22d74b),
    __E_MATERIAL = static_cast<int32_t>(0x313400cb),
    __E_HREF = static_cast<int32_t>(0x26afb9),
    __E_ANGLE = static_cast<int32_t>(0x47db7c1),
    __E_PADDING = static_cast<int32_t>(0x802c7b71),
    __E_FAMILYNAME = static_cast<int32_t>(0x29fa0511),
    __E_STYLENAME = static_cast<int32_t>(0xb80d6430),
    __E_RED = static_cast<int32_t>(0x165f3),
    __E_GREEN = static_cast<int32_t>(0x53084fb),
    __E_BLUE = static_cast<int32_t>(0x257e7e),
    __E_YELLOW = static_cast<int32_t>(0xcb66f684),
    __E_ORANGE = static_cast<int32_t>(0xbdec4a70),
    __E_BLACK = static_cast<int32_t>(0x4d51a27),
    __E_WHITE = static_cast<int32_t>(0x64c8d87),
    __E_PURPLE = static_cast<int32_t>(0xb57b1fce),
    __E_BR = static_cast<int32_t>(0x8d0),
    __E_CR = static_cast<int32_t>(0x8f1),
    __E_ZWSP = static_cast<int32_t>(0x322cae),
    __E_ZWJ = static_cast<int32_t>(0x18527),
    __E_NBSP = static_cast<int32_t>(0x2bc72f),
    __E_SHY = static_cast<int32_t>(0x16a02),
    __E_LEFT = static_cast<int32_t>(0x28989b),
    __E_RIGHT = static_cast<int32_t>(0x5f4ec60),
    __E_CENTER = static_cast<int32_t>(0xa12989cb),
    __E_JUSTIFIED = static_cast<int32_t>(0x30b3d31f),
    __E_FLUSH = static_cast<int32_t>(0x5196c24),
    __E_NONE = static_cast<int32_t>(0x2b984a),
    __E_PLUS = static_cast<int32_t>(0x2b),
    __E_MINUS = static_cast<int32_t>(0x2d),
    __E_PX = static_cast<int32_t>(0xa08),
    __E_PLUS_PX = static_cast<int32_t>(0xc163),
    __E_MINUS_PX = static_cast<int32_t>(0xb965),
    __E_EM = static_cast<int32_t>(0x8a8),
    __E_PLUS_EM = static_cast<int32_t>(0xbfc3),
    __E_MINUS_EM = static_cast<int32_t>(0xb6c5),
    __E_PCT = static_cast<int32_t>(0x14c27),
    __E_PLUS_PCT = static_cast<int32_t>(0x18f02c),
    __E_MINUS_PCT = static_cast<int32_t>(0x17e96a),
    __E_PERCENTAGE = static_cast<int32_t>(0x25),
    __E_PLUS_PERCENTAGE = static_cast<int32_t>(0x5ae),
    __E_MINUS_PERCENTAGE = static_cast<int32_t>(0x5e8),
    __E_TRUE = static_cast<int32_t>(0x2cbd36),
    __E_FALSE = static_cast<int32_t>(0x51772dd),
    __E_INVALID = static_cast<int32_t>(0x5e7f8411),
    __E_NOTDEF = static_cast<int32_t>(0x247c9e5c),
    __E_NORMAL = static_cast<int32_t>(0xb97550f3),
    __E_DEFAULT = static_cast<int32_t>(0xdafcb04b),
    __E_REGULAR = static_cast<int32_t>(0x4cf8c63a),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MarkupTag_Unwrapped() const noexcept {
    return static_cast<__MarkupTag_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MarkupTag();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MarkupTag(int32_t value__) noexcept;

  /// @brief Field A value: I32(65)
  static ::UnityEngine::TextCore::Text::MarkupTag const A;

  /// @brief Field ACTION value: I32(-1827519330)
  static ::UnityEngine::TextCore::Text::MarkupTag const ACTION;

  /// @brief Field ALIGN value: I32(75138797)
  static ::UnityEngine::TextCore::Text::MarkupTag const ALIGN;

  /// @brief Field ALLCAPS value: I32(218273952)
  static ::UnityEngine::TextCore::Text::MarkupTag const ALLCAPS;

  /// @brief Field ALPHA value: I32(75165780)
  static ::UnityEngine::TextCore::Text::MarkupTag const ALPHA;

  /// @brief Field ANGLE value: I32(75347905)
  static ::UnityEngine::TextCore::Text::MarkupTag const ANGLE;

  /// @brief Field ANIM value: I32(2283339)
  static ::UnityEngine::TextCore::Text::MarkupTag const ANIM;

  /// @brief Field BLACK value: I32(81074727)
  static ::UnityEngine::TextCore::Text::MarkupTag const BLACK;

  /// @brief Field BLUE value: I32(2457214)
  static ::UnityEngine::TextCore::Text::MarkupTag const BLUE;

  /// @brief Field BOLD value: I32(66)
  static ::UnityEngine::TextCore::Text::MarkupTag const BOLD;

  /// @brief Field BR value: I32(2256)
  static ::UnityEngine::TextCore::Text::MarkupTag const BR;

  /// @brief Field CENTER value: I32(-1591113269)
  static ::UnityEngine::TextCore::Text::MarkupTag const CENTER;

  /// @brief Field CHARACTER_SPACE value: I32(-1584382009)
  static ::UnityEngine::TextCore::Text::MarkupTag const CHARACTER_SPACE;

  /// @brief Field CLASS value: I32(82115566)
  static ::UnityEngine::TextCore::Text::MarkupTag const CLASS;

  /// @brief Field COLOR value: I32(81999901)
  static ::UnityEngine::TextCore::Text::MarkupTag const COLOR;

  /// @brief Field CR value: I32(2289)
  static ::UnityEngine::TextCore::Text::MarkupTag const CR;

  /// @brief Field DEFAULT value: I32(-620974005)
  static ::UnityEngine::TextCore::Text::MarkupTag const DEFAULT;

  /// @brief Field EM value: I32(2216)
  static ::UnityEngine::TextCore::Text::MarkupTag const EM;

  /// @brief Field FALSE value: I32(85422813)
  static ::UnityEngine::TextCore::Text::MarkupTag const FALSE;

  /// @brief Field FAMILYNAME value: I32(704251153)
  static ::UnityEngine::TextCore::Text::MarkupTag const FAMILYNAME;

  /// @brief Field FLUSH value: I32(85552164)
  static ::UnityEngine::TextCore::Text::MarkupTag const FLUSH;

  /// @brief Field FONT value: I32(2586451)
  static ::UnityEngine::TextCore::Text::MarkupTag const FONT;

  /// @brief Field FONT_WEIGHT value: I32(-1889896162)
  static ::UnityEngine::TextCore::Text::MarkupTag const FONT_WEIGHT;

  /// @brief Field FRAC value: I32(2598518)
  static ::UnityEngine::TextCore::Text::MarkupTag const FRAC;

  /// @brief Field GRADIENT value: I32(-1999759898)
  static ::UnityEngine::TextCore::Text::MarkupTag const GRADIENT;

  /// @brief Field GREEN value: I32(87065851)
  static ::UnityEngine::TextCore::Text::MarkupTag const GREEN;

  /// @brief Field HREF value: I32(2535353)
  static ::UnityEngine::TextCore::Text::MarkupTag const HREF;

  /// @brief Field INDENT value: I32(-1514123076)
  static ::UnityEngine::TextCore::Text::MarkupTag const INDENT;

  /// @brief Field INDEX value: I32(84268030)
  static ::UnityEngine::TextCore::Text::MarkupTag const INDEX;

  /// @brief Field INVALID value: I32(1585415185)
  static ::UnityEngine::TextCore::Text::MarkupTag const INVALID;

  /// @brief Field ITALIC value: I32(73)
  static ::UnityEngine::TextCore::Text::MarkupTag const ITALIC;

  /// @brief Field JUSTIFIED value: I32(817091359)
  static ::UnityEngine::TextCore::Text::MarkupTag const JUSTIFIED;

  /// @brief Field LEFT value: I32(2660507)
  static ::UnityEngine::TextCore::Text::MarkupTag const LEFT;

  /// @brief Field LIGA value: I32(2655971)
  static ::UnityEngine::TextCore::Text::MarkupTag const LIGA;

  /// @brief Field LINE_HEIGHT value: I32(-799081892)
  static ::UnityEngine::TextCore::Text::MarkupTag const LINE_HEIGHT;

  /// @brief Field LINE_INDENT value: I32(-844305121)
  static ::UnityEngine::TextCore::Text::MarkupTag const LINE_INDENT;

  /// @brief Field LINK value: I32(2656128)
  static ::UnityEngine::TextCore::Text::MarkupTag const LINK;

  /// @brief Field LOWERCASE value: I32(-1506899689)
  static ::UnityEngine::TextCore::Text::MarkupTag const LOWERCASE;

  /// @brief Field MARGIN value: I32(-1355614050)
  static ::UnityEngine::TextCore::Text::MarkupTag const MARGIN;

  /// @brief Field MARGIN_LEFT value: I32(-272933656)
  static ::UnityEngine::TextCore::Text::MarkupTag const MARGIN_LEFT;

  /// @brief Field MARGIN_RIGHT value: I32(-447416589)
  static ::UnityEngine::TextCore::Text::MarkupTag const MARGIN_RIGHT;

  /// @brief Field MARK value: I32(2699125)
  static ::UnityEngine::TextCore::Text::MarkupTag const MARK;

  /// @brief Field MATERIAL value: I32(825491659)
  static ::UnityEngine::TextCore::Text::MarkupTag const MATERIAL;

  /// @brief Field MINUS value: I32(45)
  static ::UnityEngine::TextCore::Text::MarkupTag const MINUS;

  /// @brief Field MINUS_EM value: I32(46789)
  static ::UnityEngine::TextCore::Text::MarkupTag const MINUS_EM;

  /// @brief Field MINUS_PCT value: I32(1567082)
  static ::UnityEngine::TextCore::Text::MarkupTag const MINUS_PCT;

  /// @brief Field MINUS_PERCENTAGE value: I32(1512)
  static ::UnityEngine::TextCore::Text::MarkupTag const MINUS_PERCENTAGE;

  /// @brief Field MINUS_PX value: I32(47461)
  static ::UnityEngine::TextCore::Text::MarkupTag const MINUS_PX;

  /// @brief Field MONOSPACE value: I32(-1340221943)
  static ::UnityEngine::TextCore::Text::MarkupTag const MONOSPACE;

  /// @brief Field NAME value: I32(2875623)
  static ::UnityEngine::TextCore::Text::MarkupTag const NAME;

  /// @brief Field NBSP value: I32(2869039)
  static ::UnityEngine::TextCore::Text::MarkupTag const NBSP;

  /// @brief Field NONE value: I32(2857034)
  static ::UnityEngine::TextCore::Text::MarkupTag const NONE;

  /// @brief Field NORMAL value: I32(-1183493901)
  static ::UnityEngine::TextCore::Text::MarkupTag const NORMAL;

  /// @brief Field NOTDEF value: I32(612146780)
  static ::UnityEngine::TextCore::Text::MarkupTag const NOTDEF;

  /// @brief Field NO_BREAK value: I32(2856657)
  static ::UnityEngine::TextCore::Text::MarkupTag const NO_BREAK;

  /// @brief Field NO_PARSE value: I32(-408011596)
  static ::UnityEngine::TextCore::Text::MarkupTag const NO_PARSE;

  /// @brief Field ORANGE value: I32(-1108587920)
  static ::UnityEngine::TextCore::Text::MarkupTag const ORANGE;

  /// @brief Field PADDING value: I32(-2144568463)
  static ::UnityEngine::TextCore::Text::MarkupTag const PADDING;

  /// @brief Field PAGE value: I32(2808691)
  static ::UnityEngine::TextCore::Text::MarkupTag const PAGE;

  /// @brief Field PCT value: I32(85031)
  static ::UnityEngine::TextCore::Text::MarkupTag const PCT;

  /// @brief Field PERCENTAGE value: I32(37)
  static ::UnityEngine::TextCore::Text::MarkupTag const PERCENTAGE;

  /// @brief Field PLUS value: I32(43)
  static ::UnityEngine::TextCore::Text::MarkupTag const PLUS;

  /// @brief Field PLUS_EM value: I32(49091)
  static ::UnityEngine::TextCore::Text::MarkupTag const PLUS_EM;

  /// @brief Field PLUS_PCT value: I32(1634348)
  static ::UnityEngine::TextCore::Text::MarkupTag const PLUS_PCT;

  /// @brief Field PLUS_PERCENTAGE value: I32(1454)
  static ::UnityEngine::TextCore::Text::MarkupTag const PLUS_PERCENTAGE;

  /// @brief Field PLUS_PX value: I32(49507)
  static ::UnityEngine::TextCore::Text::MarkupTag const PLUS_PX;

  /// @brief Field POSITION value: I32(85420)
  static ::UnityEngine::TextCore::Text::MarkupTag const POSITION;

  /// @brief Field PURPLE value: I32(-1250222130)
  static ::UnityEngine::TextCore::Text::MarkupTag const PURPLE;

  /// @brief Field PX value: I32(2568)
  static ::UnityEngine::TextCore::Text::MarkupTag const PX;

  /// @brief Field RED value: I32(91635)
  static ::UnityEngine::TextCore::Text::MarkupTag const RED;

  /// @brief Field REGULAR value: I32(1291372090)
  static ::UnityEngine::TextCore::Text::MarkupTag const REGULAR;

  /// @brief Field RIGHT value: I32(99937376)
  static ::UnityEngine::TextCore::Text::MarkupTag const RIGHT;

  /// @brief Field ROTATE value: I32(-1000007783)
  static ::UnityEngine::TextCore::Text::MarkupTag const ROTATE;

  /// @brief Field SCALE value: I32(100553336)
  static ::UnityEngine::TextCore::Text::MarkupTag const SCALE;

  /// @brief Field SHY value: I32(92674)
  static ::UnityEngine::TextCore::Text::MarkupTag const SHY;

  /// @brief Field SIZE value: I32(3061285)
  static ::UnityEngine::TextCore::Text::MarkupTag const SIZE;

  /// @brief Field SLASH_A value: I32(1614)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_A;

  /// @brief Field SLASH_ACTION value: I32(-1187217679)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_ACTION;

  /// @brief Field SLASH_ALIGN value: I32(1916026786)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_ALIGN;

  /// @brief Field SLASH_ALLCAPS value: I32(-797437649)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_ALLCAPS;

  /// @brief Field SLASH_BOLD value: I32(1613)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_BOLD;

  /// @brief Field SLASH_CHARACTER_SPACE value: I32(-1394426712)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_CHARACTER_SPACE;

  /// @brief Field SLASH_COLOR value: I32(1909026194)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_COLOR;

  /// @brief Field SLASH_FONT value: I32(57747708)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_FONT;

  /// @brief Field SLASH_FONT_WEIGHT value: I32(-757976431)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_FONT_WEIGHT;

  /// @brief Field SLASH_FRAC value: I32(57774681)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_FRAC;

  /// @brief Field SLASH_GRADIENT value: I32(-1854491959)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_GRADIENT;

  /// @brief Field SLASH_INDENT value: I32(-1496889389)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_INDENT;

  /// @brief Field SLASH_ITALIC value: I32(1606)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_ITALIC;

  /// @brief Field SLASH_LIGA value: I32(57686604)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_LIGA;

  /// @brief Field SLASH_LINE_HEIGHT value: I32(200452819)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_LINE_HEIGHT;

  /// @brief Field SLASH_LINE_INDENT value: I32(93886352)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_LINE_INDENT;

  /// @brief Field SLASH_LINK value: I32(57686191)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_LINK;

  /// @brief Field SLASH_LOWERCASE value: I32(-1451284584)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_LOWERCASE;

  /// @brief Field SLASH_MARGIN value: I32(-1649644303)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_MARGIN;

  /// @brief Field SLASH_MARK value: I32(57644506)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_MARK;

  /// @brief Field SLASH_MATERIAL value: I32(-1100708252)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_MATERIAL;

  /// @brief Field SLASH_MONOSPACE value: I32(-1638865562)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_MONOSPACE;

  /// @brief Field SLASH_NO_BREAK value: I32(57477502)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_NO_BREAK;

  /// @brief Field SLASH_NO_PARSE value: I32(-294095813)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_NO_PARSE;

  /// @brief Field SLASH_PAGE value: I32(58683868)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_PAGE;

  /// @brief Field SLASH_POSITION value: I32(1777699)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_POSITION;

  /// @brief Field SLASH_ROTATE value: I32(-764695562)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_ROTATE;

  /// @brief Field SLASH_SCALE value: I32(1928413879)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_SCALE;

  /// @brief Field SLASH_SIZE value: I32(58429962)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_SIZE;

  /// @brief Field SLASH_SMALLCAPS value: I32(199921873)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_SMALLCAPS;

  /// @brief Field SLASH_SPACE value: I32(1927873067)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_SPACE;

  /// @brief Field SLASH_STRIKETHROUGH value: I32(1628)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_STRIKETHROUGH;

  /// @brief Field SLASH_STYLE value: I32(1927738392)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_STYLE;

  /// @brief Field SLASH_SUBSCRIPT value: I32(1770219)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_SUBSCRIPT;

  /// @brief Field SLASH_SUPERSCRIPT value: I32(1770233)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_SUPERSCRIPT;

  /// @brief Field SLASH_TABLE value: I32(-979118220)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_TABLE;

  /// @brief Field SLASH_TD value: I32(193346074)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_TD;

  /// @brief Field SLASH_TH value: I32(193346070)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_TH;

  /// @brief Field SLASH_TR value: I32(193346060)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_TR;

  /// @brief Field SLASH_UNDERLINE value: I32(1626)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_UNDERLINE;

  /// @brief Field SLASH_UPPERCASE value: I32(-582368199)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_UPPERCASE;

  /// @brief Field SLASH_VERTICAL_OFFSET value: I32(-11107948)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_VERTICAL_OFFSET;

  /// @brief Field SLASH_WIDTH value: I32(1923459625)
  static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_WIDTH;

  /// @brief Field SMALLCAPS value: I32(-766062114)
  static ::UnityEngine::TextCore::Text::MarkupTag const SMALLCAPS;

  /// @brief Field SPACE value: I32(100083556)
  static ::UnityEngine::TextCore::Text::MarkupTag const SPACE;

  /// @brief Field SPRITE value: I32(-991527447)
  static ::UnityEngine::TextCore::Text::MarkupTag const SPRITE;

  /// @brief Field STRIKETHROUGH value: I32(83)
  static ::UnityEngine::TextCore::Text::MarkupTag const STRIKETHROUGH;

  /// @brief Field STYLE value: I32(100252951)
  static ::UnityEngine::TextCore::Text::MarkupTag const STYLE;

  /// @brief Field STYLENAME value: I32(-1207081936)
  static ::UnityEngine::TextCore::Text::MarkupTag const STYLENAME;

  /// @brief Field SUBSCRIPT value: I32(92132)
  static ::UnityEngine::TextCore::Text::MarkupTag const SUBSCRIPT;

  /// @brief Field SUPERSCRIPT value: I32(92150)
  static ::UnityEngine::TextCore::Text::MarkupTag const SUPERSCRIPT;

  /// @brief Field TABLE value: I32(226476955)
  static ::UnityEngine::TextCore::Text::MarkupTag const TABLE;

  /// @brief Field TD value: I32(5862485)
  static ::UnityEngine::TextCore::Text::MarkupTag const TD;

  /// @brief Field TH value: I32(5862489)
  static ::UnityEngine::TextCore::Text::MarkupTag const TH;

  /// @brief Field TINT value: I32(2960519)
  static ::UnityEngine::TextCore::Text::MarkupTag const TINT;

  /// @brief Field TR value: I32(5862467)
  static ::UnityEngine::TextCore::Text::MarkupTag const TR;

  /// @brief Field TRUE value: I32(2932022)
  static ::UnityEngine::TextCore::Text::MarkupTag const TRUE;

  /// @brief Field UNDERLINE value: I32(85)
  static ::UnityEngine::TextCore::Text::MarkupTag const UNDERLINE;

  /// @brief Field UPPERCASE value: I32(-305409418)
  static ::UnityEngine::TextCore::Text::MarkupTag const UPPERCASE;

  /// @brief Field VERTICAL_OFFSET value: I32(1952379995)
  static ::UnityEngine::TextCore::Text::MarkupTag const VERTICAL_OFFSET;

  /// @brief Field WHITE value: I32(105680263)
  static ::UnityEngine::TextCore::Text::MarkupTag const WHITE;

  /// @brief Field WIDTH value: I32(105793766)
  static ::UnityEngine::TextCore::Text::MarkupTag const WIDTH;

  /// @brief Field YELLOW value: I32(-882444668)
  static ::UnityEngine::TextCore::Text::MarkupTag const YELLOW;

  /// @brief Field ZWJ value: I32(99623)
  static ::UnityEngine::TextCore::Text::MarkupTag const ZWJ;

  /// @brief Field ZWSP value: I32(3288238)
  static ::UnityEngine::TextCore::Text::MarkupTag const ZWSP;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15285 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::MarkupTag, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::MarkupTag, 0x4>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::MarkupTag, "UnityEngine.TextCore.Text", "MarkupTag");
