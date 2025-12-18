#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/AsyncOperations/ICachable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICachable)
namespace UnityEngine::ResourceManagement::Util {
class IOperationCacheKey;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::AsyncOperations {
class ICachable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::AsyncOperations::ICachable);
// Dependencies
namespace UnityEngine::ResourceManagement::AsyncOperations {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.AsyncOperations.ICachable
class CORDL_TYPE ICachable {
public:
  // Declarations
  __declspec(property(get = get_Key, put = set_Key)) ::UnityEngine::ResourceManagement::Util::IOperationCacheKey* Key;

  /// @brief Method get_Key, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::Util::IOperationCacheKey* get_Key();

  /// @brief Method set_Key, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_Key(::UnityEngine::ResourceManagement::Util::IOperationCacheKey* value);

  // Ctor Parameters [CppParam { name: "", ty: "ICachable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICachable(ICachable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18778 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::AsyncOperations
NEED_NO_BOX(::UnityEngine::ResourceManagement::AsyncOperations::ICachable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::AsyncOperations::ICachable*, "UnityEngine.ResourceManagement.AsyncOperations", "ICachable");
