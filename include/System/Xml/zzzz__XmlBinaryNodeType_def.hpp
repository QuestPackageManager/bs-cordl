#pragma once
// IWYU pragma private; include "System/Xml/XmlBinaryNodeType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlBinaryNodeType)
// Forward declare root types
namespace System::Xml {
struct XmlBinaryNodeType;
}
// Write type traits
MARK_VAL_T(::System::Xml::XmlBinaryNodeType);
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XmlBinaryNodeType
struct CORDL_TYPE XmlBinaryNodeType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XmlBinaryNodeType_Unwrapped
  enum struct __XmlBinaryNodeType_Unwrapped : int32_t {
    __E_EndElement = static_cast<int32_t>(0x1),
    __E_Comment = static_cast<int32_t>(0x2),
    __E_Array = static_cast<int32_t>(0x3),
    __E_MinAttribute = static_cast<int32_t>(0x4),
    __E_ShortAttribute = static_cast<int32_t>(0x4),
    __E_Attribute = static_cast<int32_t>(0x5),
    __E_ShortDictionaryAttribute = static_cast<int32_t>(0x6),
    __E_DictionaryAttribute = static_cast<int32_t>(0x7),
    __E_ShortXmlnsAttribute = static_cast<int32_t>(0x8),
    __E_XmlnsAttribute = static_cast<int32_t>(0x9),
    __E_ShortDictionaryXmlnsAttribute = static_cast<int32_t>(0xa),
    __E_DictionaryXmlnsAttribute = static_cast<int32_t>(0xb),
    __E_PrefixDictionaryAttributeA = static_cast<int32_t>(0xc),
    __E_PrefixDictionaryAttributeB = static_cast<int32_t>(0xd),
    __E_PrefixDictionaryAttributeC = static_cast<int32_t>(0xe),
    __E_PrefixDictionaryAttributeD = static_cast<int32_t>(0xf),
    __E_PrefixDictionaryAttributeE = static_cast<int32_t>(0x10),
    __E_PrefixDictionaryAttributeF = static_cast<int32_t>(0x11),
    __E_PrefixDictionaryAttributeG = static_cast<int32_t>(0x12),
    __E_PrefixDictionaryAttributeH = static_cast<int32_t>(0x13),
    __E_PrefixDictionaryAttributeI = static_cast<int32_t>(0x14),
    __E_PrefixDictionaryAttributeJ = static_cast<int32_t>(0x15),
    __E_PrefixDictionaryAttributeK = static_cast<int32_t>(0x16),
    __E_PrefixDictionaryAttributeL = static_cast<int32_t>(0x17),
    __E_PrefixDictionaryAttributeM = static_cast<int32_t>(0x18),
    __E_PrefixDictionaryAttributeN = static_cast<int32_t>(0x19),
    __E_PrefixDictionaryAttributeO = static_cast<int32_t>(0x1a),
    __E_PrefixDictionaryAttributeP = static_cast<int32_t>(0x1b),
    __E_PrefixDictionaryAttributeQ = static_cast<int32_t>(0x1c),
    __E_PrefixDictionaryAttributeR = static_cast<int32_t>(0x1d),
    __E_PrefixDictionaryAttributeS = static_cast<int32_t>(0x1e),
    __E_PrefixDictionaryAttributeT = static_cast<int32_t>(0x1f),
    __E_PrefixDictionaryAttributeU = static_cast<int32_t>(0x20),
    __E_PrefixDictionaryAttributeV = static_cast<int32_t>(0x21),
    __E_PrefixDictionaryAttributeW = static_cast<int32_t>(0x22),
    __E_PrefixDictionaryAttributeX = static_cast<int32_t>(0x23),
    __E_PrefixDictionaryAttributeY = static_cast<int32_t>(0x24),
    __E_PrefixDictionaryAttributeZ = static_cast<int32_t>(0x25),
    __E_PrefixAttributeA = static_cast<int32_t>(0x26),
    __E_PrefixAttributeB = static_cast<int32_t>(0x27),
    __E_PrefixAttributeC = static_cast<int32_t>(0x28),
    __E_PrefixAttributeD = static_cast<int32_t>(0x29),
    __E_PrefixAttributeE = static_cast<int32_t>(0x2a),
    __E_PrefixAttributeF = static_cast<int32_t>(0x2b),
    __E_PrefixAttributeG = static_cast<int32_t>(0x2c),
    __E_PrefixAttributeH = static_cast<int32_t>(0x2d),
    __E_PrefixAttributeI = static_cast<int32_t>(0x2e),
    __E_PrefixAttributeJ = static_cast<int32_t>(0x2f),
    __E_PrefixAttributeK = static_cast<int32_t>(0x30),
    __E_PrefixAttributeL = static_cast<int32_t>(0x31),
    __E_PrefixAttributeM = static_cast<int32_t>(0x32),
    __E_PrefixAttributeN = static_cast<int32_t>(0x33),
    __E_PrefixAttributeO = static_cast<int32_t>(0x34),
    __E_PrefixAttributeP = static_cast<int32_t>(0x35),
    __E_PrefixAttributeQ = static_cast<int32_t>(0x36),
    __E_PrefixAttributeR = static_cast<int32_t>(0x37),
    __E_PrefixAttributeS = static_cast<int32_t>(0x38),
    __E_PrefixAttributeT = static_cast<int32_t>(0x39),
    __E_PrefixAttributeU = static_cast<int32_t>(0x3a),
    __E_PrefixAttributeV = static_cast<int32_t>(0x3b),
    __E_PrefixAttributeW = static_cast<int32_t>(0x3c),
    __E_PrefixAttributeX = static_cast<int32_t>(0x3d),
    __E_PrefixAttributeY = static_cast<int32_t>(0x3e),
    __E_PrefixAttributeZ = static_cast<int32_t>(0x3f),
    __E_MaxAttribute = static_cast<int32_t>(0x3f),
    __E_MinElement = static_cast<int32_t>(0x40),
    __E_ShortElement = static_cast<int32_t>(0x40),
    __E_Element = static_cast<int32_t>(0x41),
    __E_ShortDictionaryElement = static_cast<int32_t>(0x42),
    __E_DictionaryElement = static_cast<int32_t>(0x43),
    __E_PrefixDictionaryElementA = static_cast<int32_t>(0x44),
    __E_PrefixDictionaryElementB = static_cast<int32_t>(0x45),
    __E_PrefixDictionaryElementC = static_cast<int32_t>(0x46),
    __E_PrefixDictionaryElementD = static_cast<int32_t>(0x47),
    __E_PrefixDictionaryElementE = static_cast<int32_t>(0x48),
    __E_PrefixDictionaryElementF = static_cast<int32_t>(0x49),
    __E_PrefixDictionaryElementG = static_cast<int32_t>(0x4a),
    __E_PrefixDictionaryElementH = static_cast<int32_t>(0x4b),
    __E_PrefixDictionaryElementI = static_cast<int32_t>(0x4c),
    __E_PrefixDictionaryElementJ = static_cast<int32_t>(0x4d),
    __E_PrefixDictionaryElementK = static_cast<int32_t>(0x4e),
    __E_PrefixDictionaryElementL = static_cast<int32_t>(0x4f),
    __E_PrefixDictionaryElementM = static_cast<int32_t>(0x50),
    __E_PrefixDictionaryElementN = static_cast<int32_t>(0x51),
    __E_PrefixDictionaryElementO = static_cast<int32_t>(0x52),
    __E_PrefixDictionaryElementP = static_cast<int32_t>(0x53),
    __E_PrefixDictionaryElementQ = static_cast<int32_t>(0x54),
    __E_PrefixDictionaryElementR = static_cast<int32_t>(0x55),
    __E_PrefixDictionaryElementS = static_cast<int32_t>(0x56),
    __E_PrefixDictionaryElementT = static_cast<int32_t>(0x57),
    __E_PrefixDictionaryElementU = static_cast<int32_t>(0x58),
    __E_PrefixDictionaryElementV = static_cast<int32_t>(0x59),
    __E_PrefixDictionaryElementW = static_cast<int32_t>(0x5a),
    __E_PrefixDictionaryElementX = static_cast<int32_t>(0x5b),
    __E_PrefixDictionaryElementY = static_cast<int32_t>(0x5c),
    __E_PrefixDictionaryElementZ = static_cast<int32_t>(0x5d),
    __E_PrefixElementA = static_cast<int32_t>(0x5e),
    __E_PrefixElementB = static_cast<int32_t>(0x5f),
    __E_PrefixElementC = static_cast<int32_t>(0x60),
    __E_PrefixElementD = static_cast<int32_t>(0x61),
    __E_PrefixElementE = static_cast<int32_t>(0x62),
    __E_PrefixElementF = static_cast<int32_t>(0x63),
    __E_PrefixElementG = static_cast<int32_t>(0x64),
    __E_PrefixElementH = static_cast<int32_t>(0x65),
    __E_PrefixElementI = static_cast<int32_t>(0x66),
    __E_PrefixElementJ = static_cast<int32_t>(0x67),
    __E_PrefixElementK = static_cast<int32_t>(0x68),
    __E_PrefixElementL = static_cast<int32_t>(0x69),
    __E_PrefixElementM = static_cast<int32_t>(0x6a),
    __E_PrefixElementN = static_cast<int32_t>(0x6b),
    __E_PrefixElementO = static_cast<int32_t>(0x6c),
    __E_PrefixElementP = static_cast<int32_t>(0x6d),
    __E_PrefixElementQ = static_cast<int32_t>(0x6e),
    __E_PrefixElementR = static_cast<int32_t>(0x6f),
    __E_PrefixElementS = static_cast<int32_t>(0x70),
    __E_PrefixElementT = static_cast<int32_t>(0x71),
    __E_PrefixElementU = static_cast<int32_t>(0x72),
    __E_PrefixElementV = static_cast<int32_t>(0x73),
    __E_PrefixElementW = static_cast<int32_t>(0x74),
    __E_PrefixElementX = static_cast<int32_t>(0x75),
    __E_PrefixElementY = static_cast<int32_t>(0x76),
    __E_PrefixElementZ = static_cast<int32_t>(0x77),
    __E_MaxElement = static_cast<int32_t>(0x77),
    __E_MinText = static_cast<int32_t>(0x80),
    __E_ZeroText = static_cast<int32_t>(0x80),
    __E_OneText = static_cast<int32_t>(0x82),
    __E_FalseText = static_cast<int32_t>(0x84),
    __E_TrueText = static_cast<int32_t>(0x86),
    __E_Int8Text = static_cast<int32_t>(0x88),
    __E_Int16Text = static_cast<int32_t>(0x8a),
    __E_Int32Text = static_cast<int32_t>(0x8c),
    __E_Int64Text = static_cast<int32_t>(0x8e),
    __E_FloatText = static_cast<int32_t>(0x90),
    __E_DoubleText = static_cast<int32_t>(0x92),
    __E_DecimalText = static_cast<int32_t>(0x94),
    __E_DateTimeText = static_cast<int32_t>(0x96),
    __E_Chars8Text = static_cast<int32_t>(0x98),
    __E_Chars16Text = static_cast<int32_t>(0x9a),
    __E_Chars32Text = static_cast<int32_t>(0x9c),
    __E_Bytes8Text = static_cast<int32_t>(0x9e),
    __E_Bytes16Text = static_cast<int32_t>(0xa0),
    __E_Bytes32Text = static_cast<int32_t>(0xa2),
    __E_StartListText = static_cast<int32_t>(0xa4),
    __E_EndListText = static_cast<int32_t>(0xa6),
    __E_EmptyText = static_cast<int32_t>(0xa8),
    __E_DictionaryText = static_cast<int32_t>(0xaa),
    __E_UniqueIdText = static_cast<int32_t>(0xac),
    __E_TimeSpanText = static_cast<int32_t>(0xae),
    __E_GuidText = static_cast<int32_t>(0xb0),
    __E_UInt64Text = static_cast<int32_t>(0xb2),
    __E_BoolText = static_cast<int32_t>(0xb4),
    __E_UnicodeChars8Text = static_cast<int32_t>(0xb6),
    __E_UnicodeChars16Text = static_cast<int32_t>(0xb8),
    __E_UnicodeChars32Text = static_cast<int32_t>(0xba),
    __E_QNameDictionaryText = static_cast<int32_t>(0xbc),
    __E_ZeroTextWithEndElement = static_cast<int32_t>(0x81),
    __E_OneTextWithEndElement = static_cast<int32_t>(0x83),
    __E_FalseTextWithEndElement = static_cast<int32_t>(0x85),
    __E_TrueTextWithEndElement = static_cast<int32_t>(0x87),
    __E_Int8TextWithEndElement = static_cast<int32_t>(0x89),
    __E_Int16TextWithEndElement = static_cast<int32_t>(0x8b),
    __E_Int32TextWithEndElement = static_cast<int32_t>(0x8d),
    __E_Int64TextWithEndElement = static_cast<int32_t>(0x8f),
    __E_FloatTextWithEndElement = static_cast<int32_t>(0x91),
    __E_DoubleTextWithEndElement = static_cast<int32_t>(0x93),
    __E_DecimalTextWithEndElement = static_cast<int32_t>(0x95),
    __E_DateTimeTextWithEndElement = static_cast<int32_t>(0x97),
    __E_Chars8TextWithEndElement = static_cast<int32_t>(0x99),
    __E_Chars16TextWithEndElement = static_cast<int32_t>(0x9b),
    __E_Chars32TextWithEndElement = static_cast<int32_t>(0x9d),
    __E_Bytes8TextWithEndElement = static_cast<int32_t>(0x9f),
    __E_Bytes16TextWithEndElement = static_cast<int32_t>(0xa1),
    __E_Bytes32TextWithEndElement = static_cast<int32_t>(0xa3),
    __E_StartListTextWithEndElement = static_cast<int32_t>(0xa5),
    __E_EndListTextWithEndElement = static_cast<int32_t>(0xa7),
    __E_EmptyTextWithEndElement = static_cast<int32_t>(0xa9),
    __E_DictionaryTextWithEndElement = static_cast<int32_t>(0xab),
    __E_UniqueIdTextWithEndElement = static_cast<int32_t>(0xad),
    __E_TimeSpanTextWithEndElement = static_cast<int32_t>(0xaf),
    __E_GuidTextWithEndElement = static_cast<int32_t>(0xb1),
    __E_UInt64TextWithEndElement = static_cast<int32_t>(0xb3),
    __E_BoolTextWithEndElement = static_cast<int32_t>(0xb5),
    __E_UnicodeChars8TextWithEndElement = static_cast<int32_t>(0xb7),
    __E_UnicodeChars16TextWithEndElement = static_cast<int32_t>(0xb9),
    __E_UnicodeChars32TextWithEndElement = static_cast<int32_t>(0xbb),
    __E_QNameDictionaryTextWithEndElement = static_cast<int32_t>(0xbd),
    __E_MaxText = static_cast<int32_t>(0xbd),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XmlBinaryNodeType_Unwrapped() const noexcept {
    return static_cast<__XmlBinaryNodeType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBinaryNodeType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlBinaryNodeType(int32_t value__) noexcept;

  /// @brief Field Array value: I32(3)
  static ::System::Xml::XmlBinaryNodeType const Array;

  /// @brief Field Attribute value: I32(5)
  static ::System::Xml::XmlBinaryNodeType const Attribute;

  /// @brief Field BoolText value: I32(180)
  static ::System::Xml::XmlBinaryNodeType const BoolText;

  /// @brief Field BoolTextWithEndElement value: I32(181)
  static ::System::Xml::XmlBinaryNodeType const BoolTextWithEndElement;

  /// @brief Field Bytes16Text value: I32(160)
  static ::System::Xml::XmlBinaryNodeType const Bytes16Text;

  /// @brief Field Bytes16TextWithEndElement value: I32(161)
  static ::System::Xml::XmlBinaryNodeType const Bytes16TextWithEndElement;

  /// @brief Field Bytes32Text value: I32(162)
  static ::System::Xml::XmlBinaryNodeType const Bytes32Text;

  /// @brief Field Bytes32TextWithEndElement value: I32(163)
  static ::System::Xml::XmlBinaryNodeType const Bytes32TextWithEndElement;

  /// @brief Field Bytes8Text value: I32(158)
  static ::System::Xml::XmlBinaryNodeType const Bytes8Text;

  /// @brief Field Bytes8TextWithEndElement value: I32(159)
  static ::System::Xml::XmlBinaryNodeType const Bytes8TextWithEndElement;

  /// @brief Field Chars16Text value: I32(154)
  static ::System::Xml::XmlBinaryNodeType const Chars16Text;

  /// @brief Field Chars16TextWithEndElement value: I32(155)
  static ::System::Xml::XmlBinaryNodeType const Chars16TextWithEndElement;

  /// @brief Field Chars32Text value: I32(156)
  static ::System::Xml::XmlBinaryNodeType const Chars32Text;

  /// @brief Field Chars32TextWithEndElement value: I32(157)
  static ::System::Xml::XmlBinaryNodeType const Chars32TextWithEndElement;

  /// @brief Field Chars8Text value: I32(152)
  static ::System::Xml::XmlBinaryNodeType const Chars8Text;

  /// @brief Field Chars8TextWithEndElement value: I32(153)
  static ::System::Xml::XmlBinaryNodeType const Chars8TextWithEndElement;

  /// @brief Field Comment value: I32(2)
  static ::System::Xml::XmlBinaryNodeType const Comment;

  /// @brief Field DateTimeText value: I32(150)
  static ::System::Xml::XmlBinaryNodeType const DateTimeText;

  /// @brief Field DateTimeTextWithEndElement value: I32(151)
  static ::System::Xml::XmlBinaryNodeType const DateTimeTextWithEndElement;

  /// @brief Field DecimalText value: I32(148)
  static ::System::Xml::XmlBinaryNodeType const DecimalText;

  /// @brief Field DecimalTextWithEndElement value: I32(149)
  static ::System::Xml::XmlBinaryNodeType const DecimalTextWithEndElement;

  /// @brief Field DictionaryAttribute value: I32(7)
  static ::System::Xml::XmlBinaryNodeType const DictionaryAttribute;

  /// @brief Field DictionaryElement value: I32(67)
  static ::System::Xml::XmlBinaryNodeType const DictionaryElement;

  /// @brief Field DictionaryText value: I32(170)
  static ::System::Xml::XmlBinaryNodeType const DictionaryText;

  /// @brief Field DictionaryTextWithEndElement value: I32(171)
  static ::System::Xml::XmlBinaryNodeType const DictionaryTextWithEndElement;

  /// @brief Field DictionaryXmlnsAttribute value: I32(11)
  static ::System::Xml::XmlBinaryNodeType const DictionaryXmlnsAttribute;

  /// @brief Field DoubleText value: I32(146)
  static ::System::Xml::XmlBinaryNodeType const DoubleText;

  /// @brief Field DoubleTextWithEndElement value: I32(147)
  static ::System::Xml::XmlBinaryNodeType const DoubleTextWithEndElement;

  /// @brief Field Element value: I32(65)
  static ::System::Xml::XmlBinaryNodeType const Element;

  /// @brief Field EmptyText value: I32(168)
  static ::System::Xml::XmlBinaryNodeType const EmptyText;

  /// @brief Field EmptyTextWithEndElement value: I32(169)
  static ::System::Xml::XmlBinaryNodeType const EmptyTextWithEndElement;

  /// @brief Field EndElement value: I32(1)
  static ::System::Xml::XmlBinaryNodeType const EndElement;

  /// @brief Field EndListText value: I32(166)
  static ::System::Xml::XmlBinaryNodeType const EndListText;

  /// @brief Field EndListTextWithEndElement value: I32(167)
  static ::System::Xml::XmlBinaryNodeType const EndListTextWithEndElement;

  /// @brief Field FalseText value: I32(132)
  static ::System::Xml::XmlBinaryNodeType const FalseText;

  /// @brief Field FalseTextWithEndElement value: I32(133)
  static ::System::Xml::XmlBinaryNodeType const FalseTextWithEndElement;

  /// @brief Field FloatText value: I32(144)
  static ::System::Xml::XmlBinaryNodeType const FloatText;

  /// @brief Field FloatTextWithEndElement value: I32(145)
  static ::System::Xml::XmlBinaryNodeType const FloatTextWithEndElement;

  /// @brief Field GuidText value: I32(176)
  static ::System::Xml::XmlBinaryNodeType const GuidText;

  /// @brief Field GuidTextWithEndElement value: I32(177)
  static ::System::Xml::XmlBinaryNodeType const GuidTextWithEndElement;

  /// @brief Field Int16Text value: I32(138)
  static ::System::Xml::XmlBinaryNodeType const Int16Text;

  /// @brief Field Int16TextWithEndElement value: I32(139)
  static ::System::Xml::XmlBinaryNodeType const Int16TextWithEndElement;

  /// @brief Field Int32Text value: I32(140)
  static ::System::Xml::XmlBinaryNodeType const Int32Text;

  /// @brief Field Int32TextWithEndElement value: I32(141)
  static ::System::Xml::XmlBinaryNodeType const Int32TextWithEndElement;

  /// @brief Field Int64Text value: I32(142)
  static ::System::Xml::XmlBinaryNodeType const Int64Text;

  /// @brief Field Int64TextWithEndElement value: I32(143)
  static ::System::Xml::XmlBinaryNodeType const Int64TextWithEndElement;

  /// @brief Field Int8Text value: I32(136)
  static ::System::Xml::XmlBinaryNodeType const Int8Text;

  /// @brief Field Int8TextWithEndElement value: I32(137)
  static ::System::Xml::XmlBinaryNodeType const Int8TextWithEndElement;

  /// @brief Field MaxAttribute value: I32(63)
  static ::System::Xml::XmlBinaryNodeType const MaxAttribute;

  /// @brief Field MaxElement value: I32(119)
  static ::System::Xml::XmlBinaryNodeType const MaxElement;

  /// @brief Field MaxText value: I32(189)
  static ::System::Xml::XmlBinaryNodeType const MaxText;

  /// @brief Field MinAttribute value: I32(4)
  static ::System::Xml::XmlBinaryNodeType const MinAttribute;

  /// @brief Field MinElement value: I32(64)
  static ::System::Xml::XmlBinaryNodeType const MinElement;

  /// @brief Field MinText value: I32(128)
  static ::System::Xml::XmlBinaryNodeType const MinText;

  /// @brief Field OneText value: I32(130)
  static ::System::Xml::XmlBinaryNodeType const OneText;

  /// @brief Field OneTextWithEndElement value: I32(131)
  static ::System::Xml::XmlBinaryNodeType const OneTextWithEndElement;

  /// @brief Field PrefixAttributeA value: I32(38)
  static ::System::Xml::XmlBinaryNodeType const PrefixAttributeA;

  /// @brief Field PrefixAttributeB value: I32(39)
  static ::System::Xml::XmlBinaryNodeType const PrefixAttributeB;

  /// @brief Field PrefixAttributeC value: I32(40)
  static ::System::Xml::XmlBinaryNodeType const PrefixAttributeC;

  /// @brief Field PrefixAttributeD value: I32(41)
  static ::System::Xml::XmlBinaryNodeType const PrefixAttributeD;

  /// @brief Field PrefixAttributeE value: I32(42)
  static ::System::Xml::XmlBinaryNodeType const PrefixAttributeE;

  /// @brief Field PrefixAttributeF value: I32(43)
  static ::System::Xml::XmlBinaryNodeType const PrefixAttributeF;

  /// @brief Field PrefixAttributeG value: I32(44)
  static ::System::Xml::XmlBinaryNodeType const PrefixAttributeG;

  /// @brief Field PrefixAttributeH value: I32(45)
  static ::System::Xml::XmlBinaryNodeType const PrefixAttributeH;

  /// @brief Field PrefixAttributeI value: I32(46)
  static ::System::Xml::XmlBinaryNodeType const PrefixAttributeI;

  /// @brief Field PrefixAttributeJ value: I32(47)
  static ::System::Xml::XmlBinaryNodeType const PrefixAttributeJ;

  /// @brief Field PrefixAttributeK value: I32(48)
  static ::System::Xml::XmlBinaryNodeType const PrefixAttributeK;

  /// @brief Field PrefixAttributeL value: I32(49)
  static ::System::Xml::XmlBinaryNodeType const PrefixAttributeL;

  /// @brief Field PrefixAttributeM value: I32(50)
  static ::System::Xml::XmlBinaryNodeType const PrefixAttributeM;

  /// @brief Field PrefixAttributeN value: I32(51)
  static ::System::Xml::XmlBinaryNodeType const PrefixAttributeN;

  /// @brief Field PrefixAttributeO value: I32(52)
  static ::System::Xml::XmlBinaryNodeType const PrefixAttributeO;

  /// @brief Field PrefixAttributeP value: I32(53)
  static ::System::Xml::XmlBinaryNodeType const PrefixAttributeP;

  /// @brief Field PrefixAttributeQ value: I32(54)
  static ::System::Xml::XmlBinaryNodeType const PrefixAttributeQ;

  /// @brief Field PrefixAttributeR value: I32(55)
  static ::System::Xml::XmlBinaryNodeType const PrefixAttributeR;

  /// @brief Field PrefixAttributeS value: I32(56)
  static ::System::Xml::XmlBinaryNodeType const PrefixAttributeS;

  /// @brief Field PrefixAttributeT value: I32(57)
  static ::System::Xml::XmlBinaryNodeType const PrefixAttributeT;

  /// @brief Field PrefixAttributeU value: I32(58)
  static ::System::Xml::XmlBinaryNodeType const PrefixAttributeU;

  /// @brief Field PrefixAttributeV value: I32(59)
  static ::System::Xml::XmlBinaryNodeType const PrefixAttributeV;

  /// @brief Field PrefixAttributeW value: I32(60)
  static ::System::Xml::XmlBinaryNodeType const PrefixAttributeW;

  /// @brief Field PrefixAttributeX value: I32(61)
  static ::System::Xml::XmlBinaryNodeType const PrefixAttributeX;

  /// @brief Field PrefixAttributeY value: I32(62)
  static ::System::Xml::XmlBinaryNodeType const PrefixAttributeY;

  /// @brief Field PrefixAttributeZ value: I32(63)
  static ::System::Xml::XmlBinaryNodeType const PrefixAttributeZ;

  /// @brief Field PrefixDictionaryAttributeA value: I32(12)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryAttributeA;

  /// @brief Field PrefixDictionaryAttributeB value: I32(13)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryAttributeB;

  /// @brief Field PrefixDictionaryAttributeC value: I32(14)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryAttributeC;

  /// @brief Field PrefixDictionaryAttributeD value: I32(15)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryAttributeD;

  /// @brief Field PrefixDictionaryAttributeE value: I32(16)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryAttributeE;

  /// @brief Field PrefixDictionaryAttributeF value: I32(17)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryAttributeF;

  /// @brief Field PrefixDictionaryAttributeG value: I32(18)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryAttributeG;

  /// @brief Field PrefixDictionaryAttributeH value: I32(19)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryAttributeH;

  /// @brief Field PrefixDictionaryAttributeI value: I32(20)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryAttributeI;

  /// @brief Field PrefixDictionaryAttributeJ value: I32(21)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryAttributeJ;

  /// @brief Field PrefixDictionaryAttributeK value: I32(22)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryAttributeK;

  /// @brief Field PrefixDictionaryAttributeL value: I32(23)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryAttributeL;

  /// @brief Field PrefixDictionaryAttributeM value: I32(24)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryAttributeM;

  /// @brief Field PrefixDictionaryAttributeN value: I32(25)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryAttributeN;

  /// @brief Field PrefixDictionaryAttributeO value: I32(26)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryAttributeO;

  /// @brief Field PrefixDictionaryAttributeP value: I32(27)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryAttributeP;

  /// @brief Field PrefixDictionaryAttributeQ value: I32(28)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryAttributeQ;

  /// @brief Field PrefixDictionaryAttributeR value: I32(29)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryAttributeR;

  /// @brief Field PrefixDictionaryAttributeS value: I32(30)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryAttributeS;

  /// @brief Field PrefixDictionaryAttributeT value: I32(31)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryAttributeT;

  /// @brief Field PrefixDictionaryAttributeU value: I32(32)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryAttributeU;

  /// @brief Field PrefixDictionaryAttributeV value: I32(33)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryAttributeV;

  /// @brief Field PrefixDictionaryAttributeW value: I32(34)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryAttributeW;

  /// @brief Field PrefixDictionaryAttributeX value: I32(35)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryAttributeX;

  /// @brief Field PrefixDictionaryAttributeY value: I32(36)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryAttributeY;

  /// @brief Field PrefixDictionaryAttributeZ value: I32(37)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryAttributeZ;

  /// @brief Field PrefixDictionaryElementA value: I32(68)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryElementA;

  /// @brief Field PrefixDictionaryElementB value: I32(69)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryElementB;

  /// @brief Field PrefixDictionaryElementC value: I32(70)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryElementC;

  /// @brief Field PrefixDictionaryElementD value: I32(71)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryElementD;

  /// @brief Field PrefixDictionaryElementE value: I32(72)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryElementE;

  /// @brief Field PrefixDictionaryElementF value: I32(73)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryElementF;

  /// @brief Field PrefixDictionaryElementG value: I32(74)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryElementG;

  /// @brief Field PrefixDictionaryElementH value: I32(75)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryElementH;

  /// @brief Field PrefixDictionaryElementI value: I32(76)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryElementI;

  /// @brief Field PrefixDictionaryElementJ value: I32(77)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryElementJ;

  /// @brief Field PrefixDictionaryElementK value: I32(78)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryElementK;

  /// @brief Field PrefixDictionaryElementL value: I32(79)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryElementL;

  /// @brief Field PrefixDictionaryElementM value: I32(80)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryElementM;

  /// @brief Field PrefixDictionaryElementN value: I32(81)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryElementN;

  /// @brief Field PrefixDictionaryElementO value: I32(82)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryElementO;

  /// @brief Field PrefixDictionaryElementP value: I32(83)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryElementP;

  /// @brief Field PrefixDictionaryElementQ value: I32(84)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryElementQ;

  /// @brief Field PrefixDictionaryElementR value: I32(85)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryElementR;

  /// @brief Field PrefixDictionaryElementS value: I32(86)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryElementS;

  /// @brief Field PrefixDictionaryElementT value: I32(87)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryElementT;

  /// @brief Field PrefixDictionaryElementU value: I32(88)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryElementU;

  /// @brief Field PrefixDictionaryElementV value: I32(89)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryElementV;

  /// @brief Field PrefixDictionaryElementW value: I32(90)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryElementW;

  /// @brief Field PrefixDictionaryElementX value: I32(91)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryElementX;

  /// @brief Field PrefixDictionaryElementY value: I32(92)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryElementY;

  /// @brief Field PrefixDictionaryElementZ value: I32(93)
  static ::System::Xml::XmlBinaryNodeType const PrefixDictionaryElementZ;

  /// @brief Field PrefixElementA value: I32(94)
  static ::System::Xml::XmlBinaryNodeType const PrefixElementA;

  /// @brief Field PrefixElementB value: I32(95)
  static ::System::Xml::XmlBinaryNodeType const PrefixElementB;

  /// @brief Field PrefixElementC value: I32(96)
  static ::System::Xml::XmlBinaryNodeType const PrefixElementC;

  /// @brief Field PrefixElementD value: I32(97)
  static ::System::Xml::XmlBinaryNodeType const PrefixElementD;

  /// @brief Field PrefixElementE value: I32(98)
  static ::System::Xml::XmlBinaryNodeType const PrefixElementE;

  /// @brief Field PrefixElementF value: I32(99)
  static ::System::Xml::XmlBinaryNodeType const PrefixElementF;

  /// @brief Field PrefixElementG value: I32(100)
  static ::System::Xml::XmlBinaryNodeType const PrefixElementG;

  /// @brief Field PrefixElementH value: I32(101)
  static ::System::Xml::XmlBinaryNodeType const PrefixElementH;

  /// @brief Field PrefixElementI value: I32(102)
  static ::System::Xml::XmlBinaryNodeType const PrefixElementI;

  /// @brief Field PrefixElementJ value: I32(103)
  static ::System::Xml::XmlBinaryNodeType const PrefixElementJ;

  /// @brief Field PrefixElementK value: I32(104)
  static ::System::Xml::XmlBinaryNodeType const PrefixElementK;

  /// @brief Field PrefixElementL value: I32(105)
  static ::System::Xml::XmlBinaryNodeType const PrefixElementL;

  /// @brief Field PrefixElementM value: I32(106)
  static ::System::Xml::XmlBinaryNodeType const PrefixElementM;

  /// @brief Field PrefixElementN value: I32(107)
  static ::System::Xml::XmlBinaryNodeType const PrefixElementN;

  /// @brief Field PrefixElementO value: I32(108)
  static ::System::Xml::XmlBinaryNodeType const PrefixElementO;

  /// @brief Field PrefixElementP value: I32(109)
  static ::System::Xml::XmlBinaryNodeType const PrefixElementP;

  /// @brief Field PrefixElementQ value: I32(110)
  static ::System::Xml::XmlBinaryNodeType const PrefixElementQ;

  /// @brief Field PrefixElementR value: I32(111)
  static ::System::Xml::XmlBinaryNodeType const PrefixElementR;

  /// @brief Field PrefixElementS value: I32(112)
  static ::System::Xml::XmlBinaryNodeType const PrefixElementS;

  /// @brief Field PrefixElementT value: I32(113)
  static ::System::Xml::XmlBinaryNodeType const PrefixElementT;

  /// @brief Field PrefixElementU value: I32(114)
  static ::System::Xml::XmlBinaryNodeType const PrefixElementU;

  /// @brief Field PrefixElementV value: I32(115)
  static ::System::Xml::XmlBinaryNodeType const PrefixElementV;

  /// @brief Field PrefixElementW value: I32(116)
  static ::System::Xml::XmlBinaryNodeType const PrefixElementW;

  /// @brief Field PrefixElementX value: I32(117)
  static ::System::Xml::XmlBinaryNodeType const PrefixElementX;

  /// @brief Field PrefixElementY value: I32(118)
  static ::System::Xml::XmlBinaryNodeType const PrefixElementY;

  /// @brief Field PrefixElementZ value: I32(119)
  static ::System::Xml::XmlBinaryNodeType const PrefixElementZ;

  /// @brief Field QNameDictionaryText value: I32(188)
  static ::System::Xml::XmlBinaryNodeType const QNameDictionaryText;

  /// @brief Field QNameDictionaryTextWithEndElement value: I32(189)
  static ::System::Xml::XmlBinaryNodeType const QNameDictionaryTextWithEndElement;

  /// @brief Field ShortAttribute value: I32(4)
  static ::System::Xml::XmlBinaryNodeType const ShortAttribute;

  /// @brief Field ShortDictionaryAttribute value: I32(6)
  static ::System::Xml::XmlBinaryNodeType const ShortDictionaryAttribute;

  /// @brief Field ShortDictionaryElement value: I32(66)
  static ::System::Xml::XmlBinaryNodeType const ShortDictionaryElement;

  /// @brief Field ShortDictionaryXmlnsAttribute value: I32(10)
  static ::System::Xml::XmlBinaryNodeType const ShortDictionaryXmlnsAttribute;

  /// @brief Field ShortElement value: I32(64)
  static ::System::Xml::XmlBinaryNodeType const ShortElement;

  /// @brief Field ShortXmlnsAttribute value: I32(8)
  static ::System::Xml::XmlBinaryNodeType const ShortXmlnsAttribute;

  /// @brief Field StartListText value: I32(164)
  static ::System::Xml::XmlBinaryNodeType const StartListText;

  /// @brief Field StartListTextWithEndElement value: I32(165)
  static ::System::Xml::XmlBinaryNodeType const StartListTextWithEndElement;

  /// @brief Field TimeSpanText value: I32(174)
  static ::System::Xml::XmlBinaryNodeType const TimeSpanText;

  /// @brief Field TimeSpanTextWithEndElement value: I32(175)
  static ::System::Xml::XmlBinaryNodeType const TimeSpanTextWithEndElement;

  /// @brief Field TrueText value: I32(134)
  static ::System::Xml::XmlBinaryNodeType const TrueText;

  /// @brief Field TrueTextWithEndElement value: I32(135)
  static ::System::Xml::XmlBinaryNodeType const TrueTextWithEndElement;

  /// @brief Field UInt64Text value: I32(178)
  static ::System::Xml::XmlBinaryNodeType const UInt64Text;

  /// @brief Field UInt64TextWithEndElement value: I32(179)
  static ::System::Xml::XmlBinaryNodeType const UInt64TextWithEndElement;

  /// @brief Field UnicodeChars16Text value: I32(184)
  static ::System::Xml::XmlBinaryNodeType const UnicodeChars16Text;

  /// @brief Field UnicodeChars16TextWithEndElement value: I32(185)
  static ::System::Xml::XmlBinaryNodeType const UnicodeChars16TextWithEndElement;

  /// @brief Field UnicodeChars32Text value: I32(186)
  static ::System::Xml::XmlBinaryNodeType const UnicodeChars32Text;

  /// @brief Field UnicodeChars32TextWithEndElement value: I32(187)
  static ::System::Xml::XmlBinaryNodeType const UnicodeChars32TextWithEndElement;

  /// @brief Field UnicodeChars8Text value: I32(182)
  static ::System::Xml::XmlBinaryNodeType const UnicodeChars8Text;

  /// @brief Field UnicodeChars8TextWithEndElement value: I32(183)
  static ::System::Xml::XmlBinaryNodeType const UnicodeChars8TextWithEndElement;

  /// @brief Field UniqueIdText value: I32(172)
  static ::System::Xml::XmlBinaryNodeType const UniqueIdText;

  /// @brief Field UniqueIdTextWithEndElement value: I32(173)
  static ::System::Xml::XmlBinaryNodeType const UniqueIdTextWithEndElement;

  /// @brief Field XmlnsAttribute value: I32(9)
  static ::System::Xml::XmlBinaryNodeType const XmlnsAttribute;

  /// @brief Field ZeroText value: I32(128)
  static ::System::Xml::XmlBinaryNodeType const ZeroText;

  /// @brief Field ZeroTextWithEndElement value: I32(129)
  static ::System::Xml::XmlBinaryNodeType const ZeroTextWithEndElement;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16924 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlBinaryNodeType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlBinaryNodeType, 0x4>, "Size mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlBinaryNodeType, "System.Xml", "XmlBinaryNodeType");
