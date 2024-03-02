#pragma once
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
// Type: System.Xml::XmlNodeType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// CS Name: ::System.Xml::XmlNodeType
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

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Attribute value: static_cast<int32_t>(0x2)
  static ::System::Xml::XmlNodeType const Attribute;

  /// @brief Field CDATA value: static_cast<int32_t>(0x4)
  static ::System::Xml::XmlNodeType const CDATA;

  /// @brief Field Comment value: static_cast<int32_t>(0x8)
  static ::System::Xml::XmlNodeType const Comment;

  /// @brief Field Document value: static_cast<int32_t>(0x9)
  static ::System::Xml::XmlNodeType const Document;

  /// @brief Field DocumentFragment value: static_cast<int32_t>(0xb)
  static ::System::Xml::XmlNodeType const DocumentFragment;

  /// @brief Field DocumentType value: static_cast<int32_t>(0xa)
  static ::System::Xml::XmlNodeType const DocumentType;

  /// @brief Field Element value: static_cast<int32_t>(0x1)
  static ::System::Xml::XmlNodeType const Element;

  /// @brief Field EndElement value: static_cast<int32_t>(0xf)
  static ::System::Xml::XmlNodeType const EndElement;

  /// @brief Field EndEntity value: static_cast<int32_t>(0x10)
  static ::System::Xml::XmlNodeType const EndEntity;

  /// @brief Field Entity value: static_cast<int32_t>(0x6)
  static ::System::Xml::XmlNodeType const Entity;

  /// @brief Field EntityReference value: static_cast<int32_t>(0x5)
  static ::System::Xml::XmlNodeType const EntityReference;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Xml::XmlNodeType const None;

  /// @brief Field Notation value: static_cast<int32_t>(0xc)
  static ::System::Xml::XmlNodeType const Notation;

  /// @brief Field ProcessingInstruction value: static_cast<int32_t>(0x7)
  static ::System::Xml::XmlNodeType const ProcessingInstruction;

  /// @brief Field SignificantWhitespace value: static_cast<int32_t>(0xe)
  static ::System::Xml::XmlNodeType const SignificantWhitespace;

  /// @brief Field Text value: static_cast<int32_t>(0x3)
  static ::System::Xml::XmlNodeType const Text;

  /// @brief Field Whitespace value: static_cast<int32_t>(0xd)
  static ::System::Xml::XmlNodeType const Whitespace;

  /// @brief Field XmlDeclaration value: static_cast<int32_t>(0x11)
  static ::System::Xml::XmlNodeType const XmlDeclaration;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlNodeType, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeType, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlNodeType, "System.Xml", "XmlNodeType");
