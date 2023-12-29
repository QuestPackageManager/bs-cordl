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
class Type;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine::AddressableAssets {
class IKeyEvaluator;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
namespace UnityEngine {
class GameObject;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine {
class Transform;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(14305))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14360))
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

  /// @brief Method get_OperationHandle addr 0x28a6014 size 0x14 virtual false final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle get_OperationHandle();

  /// @brief Method set_OperationHandle addr 0x28a6028 size 0x14 virtual false final false
  inline void set_OperationHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle value);

  /// @brief Method get_RuntimeKey addr 0x28a603c size 0x9c virtual true final false
  inline ::System::Object* get_RuntimeKey();

  /// @brief Method get_AssetGUID addr 0x28a60d8 size 0x8 virtual true final false
  inline ::StringW get_AssetGUID();

  /// @brief Method get_SubObjectName addr 0x28a60e0 size 0x8 virtual true final false
  inline ::StringW get_SubObjectName();

  /// @brief Method set_SubObjectName addr 0x28a60e8 size 0x8 virtual true final false
  inline void set_SubObjectName(::StringW value);

  /// @brief Method get_SubOjbectType addr 0x28a60f0 size 0xac virtual true final false
  inline ::System::Type* get_SubOjbectType();

  /// @brief Method IsValid addr 0x28a619c size 0xc virtual false final false
  inline bool IsValid();

  /// @brief Method get_IsDone addr 0x28a61a8 size 0xc virtual false final false
  inline bool get_IsDone();

  static inline ::UnityEngine::AddressableAssets::AssetReference* New_ctor();

  /// @brief Method .ctor addr 0x28a61b4 size 0x50 virtual false final false
  inline void _ctor();

  static inline ::UnityEngine::AddressableAssets::AssetReference* New_ctor(::StringW guid);

  /// @brief Method .ctor addr 0x28a6204 size 0x64 virtual false final false
  inline void _ctor(::StringW guid);

  static inline ::UnityEngine::AddressableAssets::AssetReference* New_ctor(::StringW guid, ::System::Type* type);

  /// @brief Method .ctor addr 0x28a6268 size 0x64 virtual false final false
  inline void _ctor(::StringW guid, ::System::Type* type);

  /// @brief Method get_Asset addr 0x28a62cc size 0xa0 virtual true final false
  inline ::UnityEngine::Object* get_Asset();

  /// @brief Method ToString addr 0x28a636c size 0x6c virtual true final false
  inline ::StringW ToString();

  /// @brief Method CreateFailedOperation addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> CreateFailedOperation();

  /// @brief Method LoadAsset addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TObject> inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAsset();

  /// @brief Method LoadScene addr 0x28a63d8 size 0x40 virtual false final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> LoadScene();

  /// @brief Method Instantiate addr 0x28a6418 size 0x34 virtual false final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> Instantiate(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                                                                            ::UnityEngine::Transform* parent);

  /// @brief Method Instantiate addr 0x28a644c size 0x38 virtual false final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> Instantiate(::UnityEngine::Transform* parent, bool instantiateInWorldSpace);

  /// @brief Method LoadAssetAsync addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename TObject> inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAssetAsync();

  /// @brief Method LoadSceneAsync addr 0x28a6484 size 0x160 virtual true final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadSceneAsync(::UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority);

  /// @brief Method UnLoadScene addr 0x28a65e4 size 0x9c virtual true final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnLoadScene();

  /// @brief Method InstantiateAsync addr 0x28a6680 size 0xf4 virtual true final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> InstantiateAsync(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                                                                                 ::UnityEngine::Transform* parent);

  /// @brief Method InstantiateAsync addr 0x28a6774 size 0xac virtual true final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> InstantiateAsync(::UnityEngine::Transform* parent, bool instantiateInWorldSpace);

  /// @brief Method RuntimeKeyIsValid addr 0x28a6820 size 0xb8 virtual true final false
  inline bool RuntimeKeyIsValid();

  /// @brief Method ReleaseAsset addr 0x28a68d8 size 0xec virtual true final false
  inline void ReleaseAsset();

  /// @brief Method ReleaseInstance addr 0x28a69c4 size 0x54 virtual true final false
  inline void ReleaseInstance(::UnityEngine::GameObject* obj);

  /// @brief Method ValidateAsset addr 0x28a6a18 size 0x8 virtual true final false
  inline bool ValidateAsset(::UnityEngine::Object* obj);

  /// @brief Method ValidateAsset addr 0x28a6a20 size 0x8 virtual true final false
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
