#pragma once
// IWYU pragma private; include "Unity/IL2CPP/Metadata/__Il2CppFullySharedGenericType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ValueType_def.hpp"
CORDL_MODULE_EXPORT(__Il2CppFullySharedGenericType)
// Forward declare root types
namespace Unity::IL2CPP::Metadata {
class __Il2CppFullySharedGenericType;
}
// Write type traits
MARK_REF_PTR_T(::Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType);
// Dependencies System.ValueType
namespace Unity::IL2CPP::Metadata {
// Is value type: false
// CS Name: Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType
class CORDL_TYPE __Il2CppFullySharedGenericType : public ::System::ValueType {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Il2CppFullySharedGenericType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Il2CppFullySharedGenericType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Il2CppFullySharedGenericType(__Il2CppFullySharedGenericType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Il2CppFullySharedGenericType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Il2CppFullySharedGenericType(__Il2CppFullySharedGenericType const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23396 };

  /// @brief Size padding 0x8 - 0x10 = 0x8, packed as 0x8
  uint8_t _cordl_size_padding[0x8];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType, 0x8>, "Size mismatch!");

} // namespace Unity::IL2CPP::Metadata
NEED_NO_BOX(::Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType);
DEFINE_IL2CPP_ARG_TYPE(::Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType*, "Unity.IL2CPP.Metadata", "__Il2CppFullySharedGenericType");
