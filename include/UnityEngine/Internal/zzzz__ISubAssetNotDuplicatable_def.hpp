#pragma once
// IWYU pragma private; include "UnityEngine/Internal/ISubAssetNotDuplicatable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISubAssetNotDuplicatable)
// Forward declare root types
namespace UnityEngine::Internal {
class ISubAssetNotDuplicatable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Internal::ISubAssetNotDuplicatable);
// Type: UnityEngine.Internal::ISubAssetNotDuplicatable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Internal {
// Is value type: false
// CS Name: ::UnityEngine.Internal::ISubAssetNotDuplicatable*
class CORDL_TYPE ISubAssetNotDuplicatable {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "ISubAssetNotDuplicatable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISubAssetNotDuplicatable(ISubAssetNotDuplicatable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISubAssetNotDuplicatable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISubAssetNotDuplicatable(ISubAssetNotDuplicatable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11134 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Internal
NEED_NO_BOX(::UnityEngine::Internal::ISubAssetNotDuplicatable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Internal::ISubAssetNotDuplicatable*, "UnityEngine.Internal", "ISubAssetNotDuplicatable");
