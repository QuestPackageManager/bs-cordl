#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FileState)
// Forward declare root types
namespace Unity::IO::LowLevel::Unsafe {
struct FileState;
}
// Write type traits
MARK_VAL_T(::Unity::IO::LowLevel::Unsafe::FileState);
// Type: Unity.IO.LowLevel.Unsafe::FileState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::IO::LowLevel::Unsafe {
// Is value type: true
// CS Name: ::Unity.IO.LowLevel.Unsafe::FileState
struct CORDL_TYPE FileState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FileState_Unwrapped
  enum struct __FileState_Unwrapped : int32_t {
    __E_Absent = static_cast<int32_t>(0x0),
    __E_Exists = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FileState_Unwrapped() const noexcept {
    return static_cast<__FileState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<__FileState_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FileState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FileState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Absent value: static_cast<int32_t>(0x0)
  static ::Unity::IO::LowLevel::Unsafe::FileState const Absent;

  /// @brief Field Exists value: static_cast<int32_t>(0x1)
  static ::Unity::IO::LowLevel::Unsafe::FileState const Exists;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::IO::LowLevel::Unsafe::FileState, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::FileState, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::IO::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(::Unity::IO::LowLevel::Unsafe::FileState, "Unity.IO.LowLevel.Unsafe", "FileState");
