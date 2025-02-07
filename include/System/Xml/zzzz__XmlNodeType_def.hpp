#pragma once
// IWYU pragma private; include "System/Xml/XmlNodeType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlNodeType)
// Forward declare root types
namespace System::Xml {
struct XmlNodeType;
}
// Write type traits
MARK_VAL_T(::System::Xml::XmlNodeType);
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XmlNodeType
struct CORDL_TYPE XmlNodeType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XmlNodeType_Unwrapped
  enum struct __XmlNodeType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Element = static_cast<int32_t>(0x1),
    __E_Attribute = static_cast<int32_t>(0x2),
    __E_Text = static_cast<int32_t>(0x3),
    __E_CDATA = static_cast<int32_t>(0x4),
    __E_EntityReference = static_cast<int32_t>(0x5),
    __E_Entity = static_cast<int32_t>(0x6),
    __E_ProcessingInstruction = static_cast<int32_t>(0x7),
    __E_Comment = static_cast<int32_t>(0x8),
    __E_Document = static_cast<int32_t>(0x9),
    __E_DocumentType = static_cast<int32_t>(0xa),
    __E_DocumentFragment = static_cast<int32_t>(0xb),
    __E_Notation = static_cast<int32_t>(0xc),
    __E_Whitespace = static_cast<int32_t>(0xd),
    __E_SignificantWhitespace = static_cast<int32_t>(0xe),
    __E_EndElement = static_cast<int32_t>(0xf),
    __E_EndEntity = static_cast<int32_t>(0x10),
    __E_XmlDeclaration = static_cast<int32_t>(0x11),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XmlNodeType_Unwrapped() const noexcept {
    return static_cast<__XmlNodeType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlNodeType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlNodeType(int32_t value__) noexcept;

  /// @brief Field Attribute value: I32(2)
  static ::System::Xml::XmlNodeType const Attribute;

  /// @brief Field CDATA value: I32(4)
  static ::System::Xml::XmlNodeType const CDATA;

  /// @brief Field Comment value: I32(8)
  static ::System::Xml::XmlNodeType const Comment;

  /// @brief Field Document value: I32(9)
  static ::System::Xml::XmlNodeType const Document;

  /// @brief Field DocumentFragment value: I32(11)
  static ::System::Xml::XmlNodeType const DocumentFragment;

  /// @brief Field DocumentType value: I32(10)
  static ::System::Xml::XmlNodeType const DocumentType;

  /// @brief Field Element value: I32(1)
  static ::System::Xml::XmlNodeType const Element;

  /// @brief Field EndElement value: I32(15)
  static ::System::Xml::XmlNodeType const EndElement;

  /// @brief Field EndEntity value: I32(16)
  static ::System::Xml::XmlNodeType const EndEntity;

  /// @brief Field Entity value: I32(6)
  static ::System::Xml::XmlNodeType const Entity;

  /// @brief Field EntityReference value: I32(5)
  static ::System::Xml::XmlNodeType const EntityReference;

  /// @brief Field None value: I32(0)
  static ::System::Xml::XmlNodeType const None;

  /// @brief Field Notation value: I32(12)
  static ::System::Xml::XmlNodeType const Notation;

  /// @brief Field ProcessingInstruction value: I32(7)
  static ::System::Xml::XmlNodeType const ProcessingInstruction;

  /// @brief Field SignificantWhitespace value: I32(14)
  static ::System::Xml::XmlNodeType const SignificantWhitespace;

  /// @brief Field Text value: I32(3)
  static ::System::Xml::XmlNodeType const Text;

  /// @brief Field Whitespace value: I32(13)
  static ::System::Xml::XmlNodeType const Whitespace;

  /// @brief Field XmlDeclaration value: I32(17)
  static ::System::Xml::XmlNodeType const XmlDeclaration;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7368 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlNodeType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlNodeType, 0x4>, "Size mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlNodeType, "System.Xml", "XmlNodeType");
