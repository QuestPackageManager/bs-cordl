#pragma once
// IWYU pragma private; include "Unity/IL2CPP/Metadata/__Il2CppFullySharedGenericStructType.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
DEFINE_IL2CPP_CLASS(::Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericStructType, "Unity.IL2CPP.Metadata", "__Il2CppFullySharedGenericStructType");
// Dependencies
namespace Unity::IL2CPP::Metadata {
// Is value type: true
// CS Name: Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType
struct CORDL_TYPE __Il2CppFullySharedGenericStructType {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Il2CppFullySharedGenericStructType();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23741 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Size padding 0x8 - 0x0 = 0x8, packed as 0x8
  uint8_t _cordl_size_padding[0x8];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericStructType) == 0x8, "Size mismatch!");

} // namespace Unity::IL2CPP::Metadata
