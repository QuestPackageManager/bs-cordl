#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlDateTimeSerializationMode)
// Forward declare root types
namespace System::Xml {
struct XmlDateTimeSerializationMode;
}
// Write type traits
MARK_VAL_T(::System::Xml::XmlDateTimeSerializationMode);
// Type: System.Xml::XmlDateTimeSerializationMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11547))
// CS Name: ::System.Xml::XmlDateTimeSerializationMode
struct CORDL_TYPE XmlDateTimeSerializationMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XmlDateTimeSerializationMode_Unwrapped
  enum struct __XmlDateTimeSerializationMode_Unwrapped : int32_t {
    __E_Local = static_cast<int32_t>(0x0),
    __E_Utc = static_cast<int32_t>(0x1),
    __E_Unspecified = static_cast<int32_t>(0x2),
    __E_RoundtripKind = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XmlDateTimeSerializationMode_Unwrapped() const noexcept {
    return static_cast<__XmlDateTimeSerializationMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlDateTimeSerializationMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlDateTimeSerializationMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Local value: static_cast<int32_t>(0x0)
  static ::System::Xml::XmlDateTimeSerializationMode const Local;

  /// @brief Field Utc value: static_cast<int32_t>(0x1)
  static ::System::Xml::XmlDateTimeSerializationMode const Utc;

  /// @brief Field Unspecified value: static_cast<int32_t>(0x2)
  static ::System::Xml::XmlDateTimeSerializationMode const Unspecified;

  /// @brief Field RoundtripKind value: static_cast<int32_t>(0x3)
  static ::System::Xml::XmlDateTimeSerializationMode const RoundtripKind;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlDateTimeSerializationMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlDateTimeSerializationMode, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlDateTimeSerializationMode, "System.Xml", "XmlDateTimeSerializationMode");
