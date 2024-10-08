#pragma once
// IWYU pragma private; include "System/Xml/Serialization/SchemaTypes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SchemaTypes)
// Forward declare root types
namespace System::Xml::Serialization {
struct SchemaTypes;
}
// Write type traits
MARK_VAL_T(::System::Xml::Serialization::SchemaTypes);
// Type: System.Xml.Serialization::SchemaTypes
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: true
// CS Name: ::System.Xml.Serialization::SchemaTypes
struct CORDL_TYPE SchemaTypes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SchemaTypes_Unwrapped
  enum struct __SchemaTypes_Unwrapped : int32_t {
    __E_NotSet = static_cast<int32_t>(0x0),
    __E_Primitive = static_cast<int32_t>(0x1),
    __E_Enum = static_cast<int32_t>(0x2),
    __E_Array = static_cast<int32_t>(0x3),
    __E_Class = static_cast<int32_t>(0x4),
    __E_XmlSerializable = static_cast<int32_t>(0x5),
    __E_XmlNode = static_cast<int32_t>(0x6),
    __E_Void = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SchemaTypes_Unwrapped() const noexcept {
    return static_cast<__SchemaTypes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SchemaTypes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SchemaTypes(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Array value: static_cast<int32_t>(0x3)
  static ::System::Xml::Serialization::SchemaTypes const Array;

  /// @brief Field Class value: static_cast<int32_t>(0x4)
  static ::System::Xml::Serialization::SchemaTypes const Class;

  /// @brief Field Enum value: static_cast<int32_t>(0x2)
  static ::System::Xml::Serialization::SchemaTypes const Enum;

  /// @brief Field NotSet value: static_cast<int32_t>(0x0)
  static ::System::Xml::Serialization::SchemaTypes const NotSet;

  /// @brief Field Primitive value: static_cast<int32_t>(0x1)
  static ::System::Xml::Serialization::SchemaTypes const Primitive;

  /// @brief Field Void value: static_cast<int32_t>(0x7)
  static ::System::Xml::Serialization::SchemaTypes const Void;

  /// @brief Field XmlNode value: static_cast<int32_t>(0x6)
  static ::System::Xml::Serialization::SchemaTypes const XmlNode;

  /// @brief Field XmlSerializable value: static_cast<int32_t>(0x5)
  static ::System::Xml::Serialization::SchemaTypes const XmlSerializable;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7364 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::SchemaTypes, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Serialization::SchemaTypes, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml::Serialization
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::SchemaTypes, "System.Xml.Serialization", "SchemaTypes");
