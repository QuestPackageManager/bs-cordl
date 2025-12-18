#pragma once
// IWYU pragma private; include "System/Data/XmlWriteMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlWriteMode)
// Forward declare root types
namespace System::Data {
struct XmlWriteMode;
}
// Write type traits
MARK_VAL_T(::System::Data::XmlWriteMode);
// Dependencies
namespace System::Data {
// Is value type: true
// CS Name: System.Data.XmlWriteMode
struct CORDL_TYPE XmlWriteMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XmlWriteMode_Unwrapped
  enum struct __XmlWriteMode_Unwrapped : int32_t {
    __E_WriteSchema = static_cast<int32_t>(0x0),
    __E_IgnoreSchema = static_cast<int32_t>(0x1),
    __E_DiffGram = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XmlWriteMode_Unwrapped() const noexcept {
    return static_cast<__XmlWriteMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlWriteMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlWriteMode(int32_t value__) noexcept;

  /// @brief Field DiffGram value: I32(2)
  static ::System::Data::XmlWriteMode const DiffGram;

  /// @brief Field IgnoreSchema value: I32(1)
  static ::System::Data::XmlWriteMode const IgnoreSchema;

  /// @brief Field WriteSchema value: I32(0)
  static ::System::Data::XmlWriteMode const WriteSchema;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13850 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Data::XmlWriteMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::XmlWriteMode, 0x4>, "Size mismatch!");

} // namespace System::Data
DEFINE_IL2CPP_ARG_TYPE(::System::Data::XmlWriteMode, "System.Data", "XmlWriteMode");
