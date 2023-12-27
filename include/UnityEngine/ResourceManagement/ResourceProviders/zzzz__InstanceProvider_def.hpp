#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(InstanceProvider)
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct InstantiationParameters;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IInstanceProvider;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class InstanceProvider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider);
// Type: UnityEngine.ResourceManagement.ResourceProviders::InstanceProvider
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14000))
// CS Name: ::UnityEngine.ResourceManagement.ResourceProviders::InstanceProvider*
class CORDL_TYPE InstanceProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_InstanceObjectToPrefabHandle, offset 0x10, size 0x8
  __declspec(property(get = __get_m_InstanceObjectToPrefabHandle, put = __set_m_InstanceObjectToPrefabHandle))::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::GameObject*, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>>* m_InstanceObjectToPrefabHandle;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider"
  constexpr operator ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*() noexcept;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>>*&
  __get_m_InstanceObjectToPrefabHandle();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>>*> const&
  __get_m_InstanceObjectToPrefabHandle() const;

  constexpr void __set_m_InstanceObjectToPrefabHandle(
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>>* value);

  /// @brief Method ProvideInstance addr 0x2bd6e28 size 0xd8 virtual true final true
  inline ::UnityEngine::GameObject* ProvideInstance(::UnityEngine::ResourceManagement::ResourceManager* resourceManager,
                                                    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> prefabHandle,
                                                    ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters);

  /// @brief Method ReleaseInstance addr 0x2bd6f00 size 0x218 virtual true final true
  inline void ReleaseInstance(::UnityEngine::ResourceManagement::ResourceManager* resourceManager, ::UnityEngine::GameObject* instance);

  static inline ::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider* New_ctor();

  /// @brief Method .ctor addr 0x2bd7118 size 0x7c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "InstanceProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstanceProvider(InstanceProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstanceProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstanceProvider(InstanceProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceProvider();

public:
  /// @brief Field m_InstanceObjectToPrefabHandle, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>>*
      ___m_InstanceObjectToPrefabHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider, 0x18>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::InstanceProvider*, "UnityEngine.ResourceManagement.ResourceProviders", "InstanceProvider");
