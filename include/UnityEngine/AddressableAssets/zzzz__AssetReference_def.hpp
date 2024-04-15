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
// CS Name: ::UnityEngine.AddressableAssets::AssetReference*
class CORDL_TYPE AssetReference : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Asset))::UnityW<::UnityEngine::Object> Asset;

  __declspec(property(get = get_AssetGUID))::StringW AssetGUID;

  __declspec(property(get = get_IsDone)) bool IsDone;

  __declspec(property(get = get_OperationHandle, put = set_OperationHandle))::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle OperationHandle;

  __declspec(property(get = get_RuntimeKey))::System::Object* RuntimeKey;

  __declspec(property(get = get_SubObjectName, put = set_SubObjectName))::StringW SubObjectName;

  __declspec(property(get = get_SubOjbectType))::System::Type* SubOjbectType;

  /// @brief Field m_AssetGUID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AssetGUID, put = __cordl_internal_set_m_AssetGUID))::StringW m_AssetGUID;

  /// @brief Field m_Operation, offset 0x28, size 0x18
  __declspec(property(get = __cordl_internal_get_m_Operation, put = __cordl_internal_set_m_Operation))::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle m_Operation;

  /// @brief Field m_SubObjectName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SubObjectName, put = __cordl_internal_set_m_SubObjectName))::StringW m_SubObjectName;

  /// @brief Field m_SubObjectType, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SubObjectType, put = __cordl_internal_set_m_SubObjectType))::StringW m_SubObjectType;

  /// @brief Convert operator to "::UnityEngine::AddressableAssets::IKeyEvaluator"
  constexpr operator ::UnityEngine::AddressableAssets::IKeyEvaluator*() noexcept;

  /// @brief Method CreateFailedOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> CreateFailedOperation();

  /// @brief Method Instantiate, addr 0x2f58ab8, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> Instantiate(::UnityEngine::Transform* parent, bool instantiateInWorldSpace);

  /// @brief Method Instantiate, addr 0x2f58a84, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  Instantiate(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent);

  /// @brief Method InstantiateAsync, addr 0x2f58de0, size 0xac, virtual true, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> InstantiateAsync(::UnityEngine::Transform* parent,
                                                                                                                                          bool instantiateInWorldSpace);

  /// @brief Method InstantiateAsync, addr 0x2f58cec, size 0xf4, virtual true, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  InstantiateAsync(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent);

  /// @brief Method IsValid, addr 0x2f58808, size 0xc, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method LoadAsset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAsset();

  /// @brief Method LoadAssetAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename TObject> inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAssetAsync();

  /// @brief Method LoadScene, addr 0x2f58a44, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> LoadScene();

  /// @brief Method LoadSceneAsync, addr 0x2f58af0, size 0x160, virtual true, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadSceneAsync(::UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority);

  static inline ::UnityEngine::AddressableAssets::AssetReference* New_ctor();

  static inline ::UnityEngine::AddressableAssets::AssetReference* New_ctor(::StringW guid);

  static inline ::UnityEngine::AddressableAssets::AssetReference* New_ctor(::StringW guid, ::System::Type* type);

  /// @brief Method ReleaseAsset, addr 0x2f58f44, size 0xec, virtual true, abstract: false, final false
  inline void ReleaseAsset();

  /// @brief Method ReleaseInstance, addr 0x2f59030, size 0x54, virtual true, abstract: false, final false
  inline void ReleaseInstance(::UnityEngine::GameObject* obj);

  /// @brief Method RuntimeKeyIsValid, addr 0x2f58e8c, size 0xb8, virtual true, abstract: false, final false
  inline bool RuntimeKeyIsValid();

  /// @brief Method ToString, addr 0x2f589d8, size 0x6c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UnLoadScene, addr 0x2f58c50, size 0x9c, virtual true, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnLoadScene();

  /// @brief Method ValidateAsset, addr 0x2f59084, size 0x8, virtual true, abstract: false, final false
  inline bool ValidateAsset(::UnityEngine::Object* obj);

  /// @brief Method ValidateAsset, addr 0x2f5908c, size 0x8, virtual true, abstract: false, final false
  inline bool ValidateAsset(::StringW path);

  constexpr ::StringW const& __cordl_internal_get_m_AssetGUID() const;

  constexpr ::StringW& __cordl_internal_get_m_AssetGUID();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle const& __cordl_internal_get_m_Operation() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle& __cordl_internal_get_m_Operation();

  constexpr ::StringW const& __cordl_internal_get_m_SubObjectName() const;

  constexpr ::StringW& __cordl_internal_get_m_SubObjectName();

  constexpr ::StringW const& __cordl_internal_get_m_SubObjectType() const;

  constexpr ::StringW& __cordl_internal_get_m_SubObjectType();

  constexpr void __cordl_internal_set_m_AssetGUID(::StringW value);

  constexpr void __cordl_internal_set_m_Operation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle value);

  constexpr void __cordl_internal_set_m_SubObjectName(::StringW value);

  constexpr void __cordl_internal_set_m_SubObjectType(::StringW value);

  /// @brief Method .ctor, addr 0x2f58820, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2f58870, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::StringW guid);

  /// @brief Method .ctor, addr 0x2f588d4, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::StringW guid, ::System::Type* type);

  /// @brief Method get_Asset, addr 0x2f58938, size 0xa0, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> get_Asset();

  /// @brief Method get_AssetGUID, addr 0x2f58744, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_AssetGUID();

  /// @brief Method get_IsDone, addr 0x2f58814, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsDone();

  /// @brief Method get_OperationHandle, addr 0x2f58680, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle get_OperationHandle();

  /// @brief Method get_RuntimeKey, addr 0x2f586a8, size 0x9c, virtual true, abstract: false, final false
  inline ::System::Object* get_RuntimeKey();

  /// @brief Method get_SubObjectName, addr 0x2f5874c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_SubObjectName();

  /// @brief Method get_SubOjbectType, addr 0x2f5875c, size 0xac, virtual true, abstract: false, final false
  inline ::System::Type* get_SubOjbectType();

  /// @brief Convert to "::UnityEngine::AddressableAssets::IKeyEvaluator"
  constexpr ::UnityEngine::AddressableAssets::IKeyEvaluator* i___UnityEngine__AddressableAssets__IKeyEvaluator() noexcept;

  /// @brief Method set_OperationHandle, addr 0x2f58694, size 0x14, virtual false, abstract: false, final false
  inline void set_OperationHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle value);

  /// @brief Method set_SubObjectName, addr 0x2f58754, size 0x8, virtual true, abstract: false, final false
  inline void set_SubObjectName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetReference();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetReference", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetReference(AssetReference&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetReference", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetReference(AssetReference const&) = delete;

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
