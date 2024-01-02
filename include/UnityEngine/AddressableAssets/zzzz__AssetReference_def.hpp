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
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::AddressableAssets {
class IKeyEvaluator;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
namespace System {
class Type;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14034))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14089))
// CS Name: ::UnityEngine.AddressableAssets::AssetReference*
class CORDL_TYPE AssetReference : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_AssetGUID, offset 0x10, size 0x8
  __declspec(property(get = __get_m_AssetGUID, put = __set_m_AssetGUID))::StringW m_AssetGUID;

  /// @brief Field m_SubObjectName, offset 0x18, size 0x8
  __declspec(property(get = __get_m_SubObjectName, put = __set_m_SubObjectName))::StringW m_SubObjectName;

  /// @brief Field m_SubObjectType, offset 0x20, size 0x8
  __declspec(property(get = __get_m_SubObjectType, put = __set_m_SubObjectType))::StringW m_SubObjectType;

  /// @brief Field m_Operation, offset 0x28, size 0x18
  __declspec(property(get = __get_m_Operation, put = __set_m_Operation))::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle m_Operation;

  __declspec(property(get = get_OperationHandle, put = set_OperationHandle))::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle OperationHandle;

  __declspec(property(get = get_RuntimeKey))::System::Object* RuntimeKey;

  __declspec(property(get = get_AssetGUID))::StringW AssetGUID;

  __declspec(property(get = get_SubObjectName, put = set_SubObjectName))::StringW SubObjectName;

  __declspec(property(get = get_SubOjbectType))::System::Type* SubOjbectType;

  __declspec(property(get = get_IsDone)) bool IsDone;

  __declspec(property(get = get_Asset))::UnityEngine::Object* Asset;

  /// @brief Convert operator to "::UnityEngine::AddressableAssets::IKeyEvaluator"
  constexpr operator ::UnityEngine::AddressableAssets::IKeyEvaluator*() noexcept;

  constexpr ::StringW& __get_m_AssetGUID();

  constexpr ::StringW const& __get_m_AssetGUID() const;

  constexpr void __set_m_AssetGUID(::StringW value);

  constexpr ::StringW& __get_m_SubObjectName();

  constexpr ::StringW const& __get_m_SubObjectName() const;

  constexpr void __set_m_SubObjectName(::StringW value);

  constexpr ::StringW& __get_m_SubObjectType();

  constexpr ::StringW const& __get_m_SubObjectType() const;

  constexpr void __set_m_SubObjectType(::StringW value);

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle& __get_m_Operation();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle const& __get_m_Operation() const;

  constexpr void __set_m_Operation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle value);

  /// @brief Method get_OperationHandle, addr 0x2a23d5c, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle get_OperationHandle();

  /// @brief Method set_OperationHandle, addr 0x2a23d70, size 0x14, virtual false, abstract: false, final false
  inline void set_OperationHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle value);

  /// @brief Method get_RuntimeKey, addr 0x2a23d84, size 0x9c, virtual true, abstract: false, final false
  inline ::System::Object* get_RuntimeKey();

  /// @brief Method get_AssetGUID, addr 0x2a23e20, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_AssetGUID();

  /// @brief Method get_SubObjectName, addr 0x2a23e28, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_SubObjectName();

  /// @brief Method set_SubObjectName, addr 0x2a23e30, size 0x8, virtual true, abstract: false, final false
  inline void set_SubObjectName(::StringW value);

  /// @brief Method get_SubOjbectType, addr 0x2a23e38, size 0xac, virtual true, abstract: false, final false
  inline ::System::Type* get_SubOjbectType();

  /// @brief Method IsValid, addr 0x2a23ee4, size 0xc, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method get_IsDone, addr 0x2a23ef0, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsDone();

  static inline ::UnityEngine::AddressableAssets::AssetReference* New_ctor();

  /// @brief Method .ctor, addr 0x2a23efc, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::AddressableAssets::AssetReference* New_ctor(::StringW guid);

  /// @brief Method .ctor, addr 0x2a23f4c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::StringW guid);

  static inline ::UnityEngine::AddressableAssets::AssetReference* New_ctor(::StringW guid, ::System::Type* type);

  /// @brief Method .ctor, addr 0x2a23fb0, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::StringW guid, ::System::Type* type);

  /// @brief Method get_Asset, addr 0x2a24014, size 0xa0, virtual true, abstract: false, final false
  inline ::UnityEngine::Object* get_Asset();

  /// @brief Method ToString, addr 0x2a240b4, size 0x6c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method CreateFailedOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> CreateFailedOperation();

  /// @brief Method LoadAsset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAsset();

  /// @brief Method LoadScene, addr 0x2a24120, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> LoadScene();

  /// @brief Method Instantiate, addr 0x2a24160, size 0x34, virtual false, abstract: false, final false
  /// @param parent: ::UnityEngine::Transform* (default: nullptr)
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> Instantiate(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                                                                            ::UnityEngine::Transform* parent = nullptr);

  /// @brief Method Instantiate, addr 0x2a24194, size 0x38, virtual false, abstract: false, final false
  /// @param parent: ::UnityEngine::Transform* (default: nullptr)
  /// @param instantiateInWorldSpace: bool (default: false)
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> Instantiate(::UnityEngine::Transform* parent = nullptr,
                                                                                                                            bool instantiateInWorldSpace = false);

  /// @brief Method LoadAssetAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename TObject> inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAssetAsync();

  /// @brief Method LoadSceneAsync, addr 0x2a241cc, size 0x160, virtual true, abstract: false, final false
  /// @param loadMode: ::UnityEngine::SceneManagement::LoadSceneMode (default: static_cast<int32_t>(0x0))
  /// @param activateOnLoad: bool (default: true)
  /// @param priority: int32_t (default: static_cast<int32_t>(0x64))
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadSceneAsync(::UnityEngine::SceneManagement::LoadSceneMode loadMode = static_cast<int32_t>(0x0), bool activateOnLoad = true, int32_t priority = static_cast<int32_t>(0x64));

  /// @brief Method UnLoadScene, addr 0x2a2432c, size 0x9c, virtual true, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnLoadScene();

  /// @brief Method InstantiateAsync, addr 0x2a243c8, size 0xf4, virtual true, abstract: false, final false
  /// @param parent: ::UnityEngine::Transform* (default: nullptr)
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> InstantiateAsync(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                                                                                 ::UnityEngine::Transform* parent = nullptr);

  /// @brief Method InstantiateAsync, addr 0x2a244bc, size 0xac, virtual true, abstract: false, final false
  /// @param parent: ::UnityEngine::Transform* (default: nullptr)
  /// @param instantiateInWorldSpace: bool (default: false)
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> InstantiateAsync(::UnityEngine::Transform* parent = nullptr,
                                                                                                                                 bool instantiateInWorldSpace = false);

  /// @brief Method RuntimeKeyIsValid, addr 0x2a24568, size 0xb8, virtual true, abstract: false, final false
  inline bool RuntimeKeyIsValid();

  /// @brief Method ReleaseAsset, addr 0x2a24620, size 0xec, virtual true, abstract: false, final false
  inline void ReleaseAsset();

  /// @brief Method ReleaseInstance, addr 0x2a2470c, size 0x54, virtual true, abstract: false, final false
  inline void ReleaseInstance(::UnityEngine::GameObject* obj);

  /// @brief Method ValidateAsset, addr 0x2a24760, size 0x8, virtual true, abstract: false, final false
  inline bool ValidateAsset(::UnityEngine::Object* obj);

  /// @brief Method ValidateAsset, addr 0x2a24768, size 0x8, virtual true, abstract: false, final false
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
