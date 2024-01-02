#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FileReadType)
// Forward declare root types
namespace Unity::IO::LowLevel::Unsafe {
struct FileReadType;
}
// Write type traits
MARK_VAL_T(::Unity::IO::LowLevel::Unsafe::FileReadType);
// Type: Unity.IO.LowLevel.Unsafe::FileReadType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::IO::LowLevel::Unsafe {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9989))
// CS Name: ::Unity.IO.LowLevel.Unsafe::FileReadType
struct CORDL_TYPE FileReadType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FileReadType_Unwrapped
  enum struct __FileReadType_Unwrapped : int32_t {
    __E_Sync = static_cast<int32_t>(0x0),
    __E_Async = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FileReadType_Unwrapped() const noexcept {
    return static_cast<__FileReadType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FileReadType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr FileReadType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Sync value: static_cast<int32_t>(0x0)
  static ::Unity::IO::LowLevel::Unsafe::FileReadType const Sync;

  /// @brief Field Async value: static_cast<int32_t>(0x1)
  static ::Unity::IO::LowLevel::Unsafe::FileReadType const Async;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::IO::LowLevel::Unsafe::FileReadType, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::FileReadType, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::IO::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(::Unity::IO::LowLevel::Unsafe::FileReadType, "Unity.IO.LowLevel.Unsafe", "FileReadType");
