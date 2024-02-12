#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AssetReference)
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::AddressableAssets {
class IKeyEvaluator;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class AssetReference;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::AssetReference);
// Type: UnityEngine.AddressableAssets::AssetReference
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14047))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14102))
// CS Name: ::UnityEngine.AddressableAssets::AssetReference*
class CORDL_TYPE AssetReference : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_AssetGUID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AssetGUID, put = __cordl_internal_set_m_AssetGUID))::StringW m_AssetGUID;

  /// @brief Field m_SubObjectName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SubObjectName, put = __cordl_internal_set_m_SubObjectName))::StringW m_SubObjectName;

  /// @brief Field m_SubObjectType, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SubObjectType, put = __cordl_internal_set_m_SubObjectType))::StringW m_SubObjectType;

  /// @brief Field m_Operation, offset 0x28, size 0x18
  __declspec(property(get = __cordl_internal_get_m_Operation, put = __cordl_internal_set_m_Operation))::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle m_Operation;

  __declspec(property(get = get_OperationHandle, put = set_OperationHandle))::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle OperationHandle;

  __declspec(property(get = get_RuntimeKey))::System::Object* RuntimeKey;

  __declspec(property(get = get_AssetGUID))::StringW AssetGUID;

  __declspec(property(get = get_SubObjectName, put = set_SubObjectName))::StringW SubObjectName;

  __declspec(property(get = get_SubOjbectType))::System::Type* SubOjbectType;

  __declspec(property(get = get_IsDone)) bool IsDone;

  __declspec(property(get = get_Asset))::UnityW<::UnityEngine::Object> Asset;

  /// @brief Convert operator to "::UnityEngine::AddressableAssets::IKeyEvaluator"
  constexpr operator ::UnityEngine::AddressableAssets::IKeyEvaluator*() noexcept;

  /// @brief Convert to "::UnityEngine::AddressableAssets::IKeyEvaluator"
  constexpr ::UnityEngine::AddressableAssets::IKeyEvaluator* i___UnityEngine__AddressableAssets__IKeyEvaluator() noexcept;

  constexpr ::StringW& __cordl_internal_get_m_AssetGUID();

  constexpr ::StringW const& __cordl_internal_get_m_AssetGUID() const;

  constexpr void __cordl_internal_set_m_AssetGUID(::StringW value);

  constexpr ::StringW& __cordl_internal_get_m_SubObjectName();

  constexpr ::StringW const& __cordl_internal_get_m_SubObjectName() const;

  constexpr void __cordl_internal_set_m_SubObjectName(::StringW value);

  constexpr ::StringW& __cordl_internal_get_m_SubObjectType();

  constexpr ::StringW const& __cordl_internal_get_m_SubObjectType() const;

  constexpr void __cordl_internal_set_m_SubObjectType(::StringW value);

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle& __cordl_internal_get_m_Operation();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle const& __cordl_internal_get_m_Operation() const;

  constexpr void __cordl_internal_set_m_Operation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle value);

  /// @brief Method get_OperationHandle, addr 0x2a268c8, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle get_OperationHandle();

  /// @brief Method set_OperationHandle, addr 0x2a268dc, size 0x14, virtual false, abstract: false, final false
  inline void set_OperationHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle value);

  /// @brief Method get_RuntimeKey, addr 0x2a268f0, size 0x9c, virtual true, abstract: false, final false
  inline ::System::Object* get_RuntimeKey();

  /// @brief Method get_AssetGUID, addr 0x2a2698c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_AssetGUID();

  /// @brief Method get_SubObjectName, addr 0x2a26994, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_SubObjectName();

  /// @brief Method set_SubObjectName, addr 0x2a2699c, size 0x8, virtual true, abstract: false, final false
  inline void set_SubObjectName(::StringW value);

  /// @brief Method get_SubOjbectType, addr 0x2a269a4, size 0xac, virtual true, abstract: false, final false
  inline ::System::Type* get_SubOjbectType();

  /// @brief Method IsValid, addr 0x2a26a50, size 0xc, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method get_IsDone, addr 0x2a26a5c, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsDone();

  static inline ::UnityEngine::AddressableAssets::AssetReference* New_ctor();

  /// @brief Method .ctor, addr 0x2a26a68, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::AddressableAssets::AssetReference* New_ctor(::StringW guid);

  /// @brief Method .ctor, addr 0x2a26ab8, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::StringW guid);

  static inline ::UnityEngine::AddressableAssets::AssetReference* New_ctor(::StringW guid, ::System::Type* type);

  /// @brief Method .ctor, addr 0x2a26b1c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::StringW guid, ::System::Type* type);

  /// @brief Method get_Asset, addr 0x2a26b80, size 0xa0, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> get_Asset();

  /// @brief Method ToString, addr 0x2a26c20, size 0x6c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method CreateFailedOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> CreateFailedOperation();

  /// @brief Method LoadAsset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAsset();

  /// @brief Method LoadScene, addr 0x2a26c8c, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> LoadScene();

  /// @brief Method Instantiate, addr 0x2a26ccc, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  Instantiate(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent);

  /// @brief Method Instantiate, addr 0x2a26d00, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> Instantiate(::UnityEngine::Transform* parent, bool instantiateInWorldSpace);

  /// @brief Method LoadAssetAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename TObject> inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAssetAsync();

  /// @brief Method LoadSceneAsync, addr 0x2a26d38, size 0x160, virtual true, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadSceneAsync(::UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority);

  /// @brief Method UnLoadScene, addr 0x2a26e98, size 0x9c, virtual true, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnLoadScene();

  /// @brief Method InstantiateAsync, addr 0x2a26f34, size 0xf4, virtual true, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  InstantiateAsync(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent);

  /// @brief Method InstantiateAsync, addr 0x2a27028, size 0xac, virtual true, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> InstantiateAsync(::UnityEngine::Transform* parent,
                                                                                                                                          bool instantiateInWorldSpace);

  /// @brief Method RuntimeKeyIsValid, addr 0x2a270d4, size 0xb8, virtual true, abstract: false, final false
  inline bool RuntimeKeyIsValid();

  /// @brief Method ReleaseAsset, addr 0x2a2718c, size 0xec, virtual true, abstract: false, final false
  inline void ReleaseAsset();

  /// @brief Method ReleaseInstance, addr 0x2a27278, size 0x54, virtual true, abstract: false, final false
  inline void ReleaseInstance(::UnityEngine::GameObject* obj);

  /// @brief Method ValidateAsset, addr 0x2a272cc, size 0x8, virtual true, abstract: false, final false
  inline bool ValidateAsset(::UnityEngine::Object* obj);

  /// @brief Method ValidateAsset, addr 0x2a272d4, size 0x8, virtual true, abstract: false, final false
  inline bool ValidateAsset(::StringW path);

  // Ctor Parameters [CppParam { name: "", ty: "AssetReference", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetReference(AssetReference&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetReference", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetReference(AssetReference const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetReference();

public:
  /// @brief Field m_AssetGUID, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_AssetGUID;

  /// @brief Field m_SubObjectName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_SubObjectName;

  /// @brief Field m_SubObjectType, offset: 0x20, size: 0x8, def value: None
  ::StringW ___m_SubObjectType;

  /// @brief Field m_Operation, offset: 0x28, size: 0x18, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle ___m_Operation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::AssetReference, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::AssetReference, ___m_AssetGUID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::AssetReference, ___m_SubObjectName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::AssetReference, ___m_SubObjectType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::AssetReference, ___m_Operation) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets
NEED_NO_BOX(::UnityEngine::AddressableAssets::AssetReference);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::AssetReference*, "UnityEngine.AddressableAssets", "AssetReference");
