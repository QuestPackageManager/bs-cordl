#pragma once
// IWYU pragma private; include "System/Xml/XmlDateTimeSerializationMode.hpp"
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
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XmlDateTimeSerializationMode
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlDateTimeSerializationMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlDateTimeSerializationMode(int32_t value__) noexcept;

  /// @brief Field Local value: I32(0)
  static ::System::Xml::XmlDateTimeSerializationMode const Local;

  /// @brief Field RoundtripKind value: I32(3)
  static ::System::Xml::XmlDateTimeSerializationMode const RoundtripKind;

  /// @brief Field Unspecified value: I32(2)
  static ::System::Xml::XmlDateTimeSerializationMode const Unspecified;

  /// @brief Field Utc value: I32(1)
  static ::System::Xml::XmlDateTimeSerializationMode const Utc;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9412 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlDateTimeSerializationMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlDateTimeSerializationMode, 0x4>, "Size mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlDateTimeSerializationMode, "System.Xml", "XmlDateTimeSerializationMode");
