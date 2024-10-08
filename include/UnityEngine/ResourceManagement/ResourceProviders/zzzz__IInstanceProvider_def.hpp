#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/IInstanceProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IInstanceProvider)
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct InstantiationParameters;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IInstanceProvider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider);
// Type: UnityEngine.ResourceManagement.ResourceProviders::IInstanceProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// CS Name: ::UnityEngine.ResourceManagement.ResourceProviders::IInstanceProvider*
class CORDL_TYPE IInstanceProvider {
public:
  // Declarations
  /// @brief Method ProvideInstance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityW<::UnityEngine::GameObject> ProvideInstance(::UnityEngine::ResourceManagement::ResourceManager* resourceManager,
                                                             ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> prefabHandle,
                                                             ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters);

  /// @brief Method ReleaseInstance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ReleaseInstance(::UnityEngine::ResourceManagement::ResourceManager* resourceManager, ::UnityEngine::GameObject* instance);

  // Ctor Parameters [CppParam { name: "", ty: "IInstanceProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IInstanceProvider(IInstanceProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IInstanceProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInstanceProvider(IInstanceProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15616 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*, "UnityEngine.ResourceManagement.ResourceProviders", "IInstanceProvider");
