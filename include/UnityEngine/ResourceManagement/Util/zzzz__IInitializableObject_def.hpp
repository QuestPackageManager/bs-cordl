#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/IInitializableObject.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IInitializableObject)
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class IInitializableObject;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::IInitializableObject);
// Dependencies
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.Util.IInitializableObject
class CORDL_TYPE IInitializableObject {
public:
  // Declarations
  /// @brief Method Initialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Initialize(::StringW id, ::StringW data);

  /// @brief Method InitializeAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> InitializeAsync(::UnityEngine::ResourceManagement::ResourceManager* rm, ::StringW id, ::StringW data);

  // Ctor Parameters [CppParam { name: "", ty: "IInitializableObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInitializableObject(IInitializableObject const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18714 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::Util
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::IInitializableObject);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::IInitializableObject*, "UnityEngine.ResourceManagement.Util", "IInitializableObject");
