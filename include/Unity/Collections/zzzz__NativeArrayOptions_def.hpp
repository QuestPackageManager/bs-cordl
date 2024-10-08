#pragma once
// IWYU pragma private; include "Unity/Collections/NativeArrayOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeArrayOptions)
// Forward declare root types
namespace Unity::Collections {
struct NativeArrayOptions;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::NativeArrayOptions);
// Type: Unity.Collections::NativeArrayOptions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Collections {
// Is value type: true
// CS Name: ::Unity.Collections::NativeArrayOptions
struct CORDL_TYPE NativeArrayOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NativeArrayOptions_Unwrapped
  enum struct __NativeArrayOptions_Unwrapped : int32_t {
    __E_UninitializedMemory = static_cast<int32_t>(0x0),
    __E_ClearMemory = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NativeArrayOptions_Unwrapped() const noexcept {
    return static_cast<__NativeArrayOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeArrayOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NativeArrayOptions(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ClearMemory value: static_cast<int32_t>(0x1)
  static ::Unity::Collections::NativeArrayOptions const ClearMemory;

  /// @brief Field UninitializedMemory value: static_cast<int32_t>(0x0)
  static ::Unity::Collections::NativeArrayOptions const UninitializedMemory;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10557 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeArrayOptions, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Collections::NativeArrayOptions, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeArrayOptions, "Unity.Collections", "NativeArrayOptions");
