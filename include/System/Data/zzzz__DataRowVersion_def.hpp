#pragma once
// IWYU pragma private; include "System/Data/DataRowVersion.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DataRowVersion)
// Forward declare root types
namespace System::Data {
struct DataRowVersion;
}
// Write type traits
MARK_VAL_T(::System::Data::DataRowVersion);
// Dependencies
namespace System::Data {
// Is value type: true
// CS Name: System.Data.DataRowVersion
struct CORDL_TYPE DataRowVersion {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DataRowVersion_Unwrapped
  enum struct __DataRowVersion_Unwrapped : int32_t {
    __E_Original = static_cast<int32_t>(0x100),
    __E_Current = static_cast<int32_t>(0x200),
    __E_Proposed = static_cast<int32_t>(0x400),
    __E_Default = static_cast<int32_t>(0x600),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DataRowVersion_Unwrapped() const noexcept {
    return static_cast<__DataRowVersion_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DataRowVersion();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DataRowVersion(int32_t value__) noexcept;

  /// @brief Field Current value: I32(512)
  static ::System::Data::DataRowVersion const Current;

  /// @brief Field Default value: I32(1536)
  static ::System::Data::DataRowVersion const Default;

  /// @brief Field Original value: I32(256)
  static ::System::Data::DataRowVersion const Original;

  /// @brief Field Proposed value: I32(1024)
  static ::System::Data::DataRowVersion const Proposed;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11398 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Data::DataRowVersion, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::DataRowVersion, 0x4>, "Size mismatch!");

} // namespace System::Data
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataRowVersion, "System.Data", "DataRowVersion");
