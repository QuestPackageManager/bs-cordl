#pragma once
// IWYU pragma private; include "Unity/IL2CPP/Metadata/__Il2CppFullySharedGenericStructType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(__Il2CppFullySharedGenericStructType)
// Forward declare root types
namespace Unity::IL2CPP::Metadata {
struct __Il2CppFullySharedGenericStructType;
}
// Write type traits
MARK_VAL_T(::Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericStructType);
// Type: Unity.IL2CPP.Metadata::__Il2CppFullySharedGenericStructType
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, packing: None, specified_packing: None }
namespace Unity::IL2CPP::Metadata {
// Is value type: true
// CS Name: ::Unity.IL2CPP.Metadata::__Il2CppFullySharedGenericStructType
struct CORDL_TYPE __Il2CppFullySharedGenericStructType {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Il2CppFullySharedGenericStructType();

  /// @brief Size padding 0x8 - 0x0 = 0x8, packed as 0x8
  uint8_t _cordl_size_padding[0x8];

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19192 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericStructType, 0x8>, "Size mismatch!");

} // namespace Unity::IL2CPP::Metadata
DEFINE_IL2CPP_ARG_TYPE(::Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericStructType, "Unity.IL2CPP.Metadata", "__Il2CppFullySharedGenericStructType");
