#pragma once
// IWYU pragma private; include "System/IO/SearchOption.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SearchOption)
// Forward declare root types
namespace System::IO {
struct SearchOption;
}
// Write type traits
MARK_VAL_T(::System::IO::SearchOption);
// Type: System.IO::SearchOption
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: true
// CS Name: ::System.IO::SearchOption
struct CORDL_TYPE SearchOption {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SearchOption_Unwrapped
  enum struct __SearchOption_Unwrapped : int32_t {
    __E_TopDirectoryOnly = static_cast<int32_t>(0x0),
    __E_AllDirectories = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SearchOption_Unwrapped() const noexcept {
    return static_cast<__SearchOption_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SearchOption();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SearchOption(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AllDirectories value: static_cast<int32_t>(0x1)
  static ::System::IO::SearchOption const AllDirectories;

  /// @brief Field TopDirectoryOnly value: static_cast<int32_t>(0x0)
  static ::System::IO::SearchOption const TopDirectoryOnly;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3605 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::SearchOption, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::IO::SearchOption, value__) == 0x0, "Offset mismatch!");

} // namespace System::IO
DEFINE_IL2CPP_ARG_TYPE(::System::IO::SearchOption, "System.IO", "SearchOption");
