#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__InstantiationParameters_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ResourceManager)
namespace GlobalNamespace {
template <typename T> class DelegateList_1;
}
namespace GlobalNamespace {
template <typename T> class ListWithEvents_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4> class Action_4;
}
namespace System {
class Exception;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::Networking {
class CertificateHandler;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> class AsyncOperationBase_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct DownloadStatus;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
class GroupOperation;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
class IAsyncOperation;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IInstanceProvider;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IResourceProvider;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class ISceneProvider;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct InstantiationParameters;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
namespace UnityEngine::ResourceManagement::Util {
class IAllocationStrategy;
}
namespace UnityEngine::ResourceManagement::Util {
class IOperationCacheKey;
}
namespace UnityEngine::ResourceManagement {
class IUpdateReceiver;
}
namespace UnityEngine::ResourceManagement {
template <typename TObject> class ResourceManager_CompletedOperation_1;
}
namespace UnityEngine::ResourceManagement {
struct ResourceManager_DeferredCallbackRegisterRequest;
}
namespace UnityEngine::ResourceManagement {
struct ResourceManager_DiagnosticEventContext;
}
namespace UnityEngine::ResourceManagement {
struct ResourceManager_DiagnosticEventType;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager_InstanceOperation;
}
namespace UnityEngine::ResourceManagement {
template <typename TObject> class ResourceManager___c__DisplayClass95_0_1;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneParameters;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement {
struct ResourceManager_DiagnosticEventType;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace UnityEngine::ResourceManagement {
template <typename TObject> class ResourceManager_CompletedOperation_1;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager_InstanceOperation;
}
namespace UnityEngine::ResourceManagement {
template <typename TObject> class ResourceManager___c__DisplayClass95_0_1;
}
namespace UnityEngine::ResourceManagement {
struct ResourceManager_DeferredCallbackRegisterRequest;
}
namespace UnityEngine::ResourceManagement {
struct ResourceManager_DiagnosticEventContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceManager);
MARK_GEN_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceManager_CompletedOperation_1);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation);
MARK_GEN_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceManager___c__DisplayClass95_0_1);
MARK_VAL_T(::UnityEngine::ResourceManagement::ResourceManager_DeferredCallbackRegisterRequest);
MARK_VAL_T(::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventContext);
// Dependencies
namespace UnityEngine::ResourceManagement {
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventType
struct CORDL_TYPE ResourceManager_DiagnosticEventType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ResourceManager_DiagnosticEventType_Unwrapped
  enum struct __ResourceManager_DiagnosticEventType_Unwrapped : int32_t {
    __E_AsyncOperationFail = static_cast<int32_t>(0x0),
    __E_AsyncOperationCreate = static_cast<int32_t>(0x1),
    __E_AsyncOperationPercentComplete = static_cast<int32_t>(0x2),
    __E_AsyncOperationComplete = static_cast<int32_t>(0x3),
    __E_AsyncOperationReferenceCount = static_cast<int32_t>(0x4),
    __E_AsyncOperationDestroy = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ResourceManager_DiagnosticEventType_Unwrapped() const noexcept {
    return static_cast<__ResourceManager_DiagnosticEventType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceManager_DiagnosticEventType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ResourceManager_DiagnosticEventType(int32_t value__) noexcept;

  /// @brief Field AsyncOperationComplete value: I32(3)
  static ::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType const AsyncOperationComplete;

  /// @brief Field AsyncOperationCreate value: I32(1)
  static ::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType const AsyncOperationCreate;

  /// @brief Field AsyncOperationDestroy value: I32(5)
  static ::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType const AsyncOperationDestroy;

  /// @brief Field AsyncOperationFail value: I32(0)
  static ::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType const AsyncOperationFail;

  /// @brief Field AsyncOperationPercentComplete value: I32(2)
  static ::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType const AsyncOperationPercentComplete;

  /// @brief Field AsyncOperationReferenceCount value: I32(4)
  static ::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType const AsyncOperationReferenceCount;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15593 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement
// Dependencies UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle, UnityEngine.ResourceManagement.ResourceManager::DiagnosticEventType
namespace UnityEngine::ResourceManagement {
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext
struct CORDL_TYPE ResourceManager_DiagnosticEventContext {
public:
  // Declarations
  __declspec(property(get = get_Context)) ::System::Object* Context;

  __declspec(property(get = get_Error)) ::StringW Error;

  __declspec(property(get = get_EventValue)) int32_t EventValue;

  __declspec(property(get = get_Location)) ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* Location;

  __declspec(property(get = get_OperationHandle)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle OperationHandle;

  __declspec(property(get = get_Type)) ::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType Type;

  /// @brief Method .ctor, addr 0x4795470, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op, ::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType type, int32_t eventValue,
                    ::StringW error, ::System::Object* context);

  /// @brief Method get_Context, addr 0x4795460, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Context();

  /// @brief Method get_Error, addr 0x4795468, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Error();

  /// @brief Method get_EventValue, addr 0x4795450, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_EventValue();

  /// @brief Method get_Location, addr 0x4795458, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* get_Location();

  /// @brief Method get_OperationHandle, addr 0x4795434, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle get_OperationHandle();

  /// @brief Method get_Type, addr 0x4795448, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType get_Type();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceManager_DiagnosticEventContext();

  // Ctor Parameters [CppParam { name: "_OperationHandle_k__BackingField", ty: "::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle", modifiers: "", def_value: None }, CppParam {
  // name: "_Type_k__BackingField", ty: "::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType", modifiers: "", def_value: None }, CppParam { name: "_EventValue_k__BackingField", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "_Location_k__BackingField", ty: "::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*", modifiers: "",
  // def_value: None }, CppParam { name: "_Context_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_Error_k__BackingField", ty: "::StringW", modifiers:
  // "", def_value: None }]
  constexpr ResourceManager_DiagnosticEventContext(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle _OperationHandle_k__BackingField,
                                                   ::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType _Type_k__BackingField, int32_t _EventValue_k__BackingField,
                                                   ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* _Location_k__BackingField, ::System::Object* _Context_k__BackingField,
                                                   ::StringW _Error_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15594 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <OperationHandle>k__BackingField, offset: 0x0, size: 0x18, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle _OperationHandle_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType _Type_k__BackingField;

  /// @brief Field <EventValue>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  int32_t _EventValue_k__BackingField;

  /// @brief Field <Location>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* _Location_k__BackingField;

  /// @brief Field <Context>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Object* _Context_k__BackingField;

  /// @brief Field <Error>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW _Error_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventContext, _OperationHandle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventContext, _Type_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventContext, _EventValue_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventContext, _Location_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventContext, _Context_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventContext, _Error_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventContext, 0x38>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement
// Dependencies
namespace UnityEngine::ResourceManagement {
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest
struct CORDL_TYPE ResourceManager_DeferredCallbackRegisterRequest {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceManager_DeferredCallbackRegisterRequest();

  // Ctor Parameters [CppParam { name: "operation", ty: "::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*", modifiers: "", def_value: None }, CppParam { name: "incrementRefCount",
  // ty: "bool", modifiers: "", def_value: None }]
  constexpr ResourceManager_DeferredCallbackRegisterRequest(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* operation, bool incrementRefCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15595 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field operation, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* operation;

  /// @brief Field incrementRefCount, offset: 0x8, size: 0x1, def value: None
  bool incrementRefCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager_DeferredCallbackRegisterRequest, operation) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager_DeferredCallbackRegisterRequest, incrementRefCount) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceManager_DeferredCallbackRegisterRequest, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement
// Dependencies UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject>
namespace UnityEngine::ResourceManagement {
// cpp template
template <typename TObject>
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.ResourceManager/CompletedOperation`1<TObject>
class CORDL_TYPE ResourceManager_CompletedOperation_1 : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject> {
public:
  // Declarations
  __declspec(property(get = get_DebugName)) ::StringW DebugName;

  /// @brief Field m_Exception, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Exception, put = __cordl_internal_set_m_Exception)) ::System::Exception* m_Exception;

  /// @brief Field m_ReleaseDependenciesOnFailure, offset 0xa8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ReleaseDependenciesOnFailure, put = __cordl_internal_set_m_ReleaseDependenciesOnFailure)) bool m_ReleaseDependenciesOnFailure;

  /// @brief Field m_Success, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Success, put = __cordl_internal_set_m_Success)) bool m_Success;

  /// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Execute();

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Init(TObject result, bool success, ::StringW errorMsg, bool releaseDependenciesOnFailure);

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Init(TObject result, bool success, ::System::Exception* exception, bool releaseDependenciesOnFailure);

  /// @brief Method InvokeWaitForCompletion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool InvokeWaitForCompletion();

  static inline ::UnityEngine::ResourceManagement::ResourceManager_CompletedOperation_1<TObject>* New_ctor();

  constexpr ::System::Exception* const& __cordl_internal_get_m_Exception() const;

  constexpr ::System::Exception*& __cordl_internal_get_m_Exception();

  constexpr bool const& __cordl_internal_get_m_ReleaseDependenciesOnFailure() const;

  constexpr bool& __cordl_internal_get_m_ReleaseDependenciesOnFailure();

  constexpr bool const& __cordl_internal_get_m_Success() const;

  constexpr bool& __cordl_internal_get_m_Success();

  constexpr void __cordl_internal_set_m_Exception(::System::Exception* value);

  constexpr void __cordl_internal_set_m_ReleaseDependenciesOnFailure(bool value);

  constexpr void __cordl_internal_set_m_Success(bool value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_DebugName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_DebugName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceManager_CompletedOperation_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResourceManager_CompletedOperation_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourceManager_CompletedOperation_1(ResourceManager_CompletedOperation_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourceManager_CompletedOperation_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourceManager_CompletedOperation_1(ResourceManager_CompletedOperation_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15596 };

  /// @brief Field m_Success, offset: 0x98, size: 0x1, def value: None
  bool ___m_Success;

  /// @brief Field m_Exception, offset: 0xa0, size: 0x8, def value: None
  ::System::Exception* ___m_Exception;

  /// @brief Field m_ReleaseDependenciesOnFailure, offset: 0xa8, size: 0x1, def value: None
  bool ___m_ReleaseDependenciesOnFailure;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement
// Dependencies UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject>, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>,
// UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters, UnityEngine.SceneManagement.Scene
namespace UnityEngine::ResourceManagement {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.ResourceManager/InstanceOperation
class CORDL_TYPE ResourceManager_InstanceOperation : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<::UnityW<::UnityEngine::GameObject>> {
public:
  // Declarations
  __declspec(property(get = get_DebugName)) ::StringW DebugName;

  __declspec(property(get = get_Progress)) float_t Progress;

  /// @brief Field m_dependency, offset 0x98, size 0x20
  __declspec(property(get = __cordl_internal_get_m_dependency,
                      put = __cordl_internal_set_m_dependency)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
      m_dependency;

  /// @brief Field m_instance, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_instance, put = __cordl_internal_set_m_instance)) ::UnityW<::UnityEngine::GameObject> m_instance;

  /// @brief Field m_instanceProvider, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_instanceProvider,
                      put = __cordl_internal_set_m_instanceProvider)) ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* m_instanceProvider;

  /// @brief Field m_instantiationParams, offset 0xb8, size 0x30
  __declspec(property(get = __cordl_internal_get_m_instantiationParams,
                      put = __cordl_internal_set_m_instantiationParams)) ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters m_instantiationParams;

  /// @brief Field m_scene, offset 0xf8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_scene, put = __cordl_internal_set_m_scene)) ::UnityEngine::SceneManagement::Scene m_scene;

  /// @brief Method Destroy, addr 0x4795888, size 0xb4, virtual true, abstract: false, final false
  inline void Destroy();

  /// @brief Method Execute, addr 0x4795ab4, size 0x234, virtual true, abstract: false, final false
  inline void Execute();

  /// @brief Method GetDependencies, addr 0x4795650, size 0x120, virtual true, abstract: false, final false
  inline void GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* deps);

  /// @brief Method GetDownloadStatus, addr 0x4795574, size 0xdc, virtual true, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>* visited);

  /// @brief Method Init, addr 0x4794680, size 0x30, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::ResourceManagement::ResourceManager* rm, ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* instanceProvider,
                   ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiationParams,
                   ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> dependency);

  /// @brief Method InstanceScene, addr 0x4795880, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::SceneManagement::Scene InstanceScene();

  /// @brief Method InvokeWaitForCompletion, addr 0x4795984, size 0x130, virtual true, abstract: false, final false
  inline bool InvokeWaitForCompletion();

  static inline ::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation* New_ctor();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_m_dependency() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_m_dependency();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_instance() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_instance();

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* const& __cordl_internal_get_m_instanceProvider() const;

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*& __cordl_internal_get_m_instanceProvider();

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters const& __cordl_internal_get_m_instantiationParams() const;

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters& __cordl_internal_get_m_instantiationParams();

  constexpr ::UnityEngine::SceneManagement::Scene const& __cordl_internal_get_m_scene() const;

  constexpr ::UnityEngine::SceneManagement::Scene& __cordl_internal_get_m_scene();

  constexpr void __cordl_internal_set_m_dependency(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> value);

  constexpr void __cordl_internal_set_m_instance(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_instanceProvider(::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* value);

  constexpr void __cordl_internal_set_m_instantiationParams(::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters value);

  constexpr void __cordl_internal_set_m_scene(::UnityEngine::SceneManagement::Scene value);

  /// @brief Method .ctor, addr 0x4795ce8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_DebugName, addr 0x4795770, size 0x110, virtual true, abstract: false, final false
  inline ::StringW get_DebugName();

  /// @brief Method get_Progress, addr 0x479593c, size 0x48, virtual true, abstract: false, final false
  inline float_t get_Progress();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceManager_InstanceOperation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResourceManager_InstanceOperation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourceManager_InstanceOperation(ResourceManager_InstanceOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourceManager_InstanceOperation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourceManager_InstanceOperation(ResourceManager_InstanceOperation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15597 };

  /// @brief Field m_dependency, offset: 0x98, size: 0x20, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> ___m_dependency;

  /// @brief Field m_instantiationParams, offset: 0xb8, size: 0x30, def value: None
  ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters ___m_instantiationParams;

  /// @brief Field m_instanceProvider, offset: 0xe8, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* ___m_instanceProvider;

  /// @brief Field m_instance, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_instance;

  /// @brief Field m_scene, offset: 0xf8, size: 0x4, def value: None
  ::UnityEngine::SceneManagement::Scene ___m_scene;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation, ___m_dependency) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation, ___m_instantiationParams) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation, ___m_instanceProvider) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation, ___m_instance) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation, ___m_scene) == 0xf8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation, 0x100>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement
// Dependencies System.Object
namespace UnityEngine::ResourceManagement {
// cpp template
template <typename TObject>
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.ResourceManager/<>c__DisplayClass95_0`1<TObject>
class CORDL_TYPE ResourceManager___c__DisplayClass95_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityEngine::ResourceManagement::ResourceManager* __4__this;

  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::System::Action_1<TObject>* callback;

  /// @brief Field releaseDependenciesOnFailure, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_releaseDependenciesOnFailure, put = __cordl_internal_set_releaseDependenciesOnFailure)) bool releaseDependenciesOnFailure;

  static inline ::UnityEngine::ResourceManagement::ResourceManager___c__DisplayClass95_0_1<TObject>* New_ctor();

  /// @brief Method <ProvideResources>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ProvideResources_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle x);

  /// @brief Method <ProvideResources>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  _ProvideResources_b__1(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle resultHandle);

  constexpr ::UnityEngine::ResourceManagement::ResourceManager* const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::ResourceManagement::ResourceManager*& __cordl_internal_get___4__this();

  constexpr ::System::Action_1<TObject>* const& __cordl_internal_get_callback() const;

  constexpr ::System::Action_1<TObject>*& __cordl_internal_get_callback();

  constexpr bool const& __cordl_internal_get_releaseDependenciesOnFailure() const;

  constexpr bool& __cordl_internal_get_releaseDependenciesOnFailure();

  constexpr void __cordl_internal_set___4__this(::UnityEngine::ResourceManagement::ResourceManager* value);

  constexpr void __cordl_internal_set_callback(::System::Action_1<TObject>* value);

  constexpr void __cordl_internal_set_releaseDependenciesOnFailure(bool value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceManager___c__DisplayClass95_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResourceManager___c__DisplayClass95_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourceManager___c__DisplayClass95_0_1(ResourceManager___c__DisplayClass95_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourceManager___c__DisplayClass95_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourceManager___c__DisplayClass95_0_1(ResourceManager___c__DisplayClass95_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15598 };

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<TObject>* ___callback;

  /// @brief Field releaseDependenciesOnFailure, offset: 0x18, size: 0x1, def value: None
  bool ___releaseDependenciesOnFailure;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceManager* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement
// Dependencies System.IDisposable, System.Object
namespace UnityEngine::ResourceManagement {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.ResourceManager
class CORDL_TYPE ResourceManager : public ::System::Object {
public:
  // Declarations
  template <typename TObject> using CompletedOperation_1 = ::UnityEngine::ResourceManagement::ResourceManager_CompletedOperation_1<TObject>;

  using DeferredCallbackRegisterRequest = ::UnityEngine::ResourceManagement::ResourceManager_DeferredCallbackRegisterRequest;

  using DiagnosticEventContext = ::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventContext;

  using DiagnosticEventType = ::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType;

  using InstanceOperation = ::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation;

  template <typename TObject> using __c__DisplayClass95_0_1 = ::UnityEngine::ResourceManagement::ResourceManager___c__DisplayClass95_0_1<TObject>;

  __declspec(property(get = get_Allocator, put = set_Allocator)) ::UnityEngine::ResourceManagement::Util::IAllocationStrategy* Allocator;

  /// @brief Field CallbackHooksEnabled, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_CallbackHooksEnabled, put = __cordl_internal_set_CallbackHooksEnabled)) bool CallbackHooksEnabled;

  __declspec(property(get = get_CertificateHandlerInstance, put = set_CertificateHandlerInstance)) ::UnityEngine::Networking::CertificateHandler* CertificateHandlerInstance;

  __declspec(property(get = get_InstanceOperationCount)) int32_t InstanceOperationCount;

  __declspec(property(get = get_InternalIdTransformFunc,
                      put = set_InternalIdTransformFunc)) ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* InternalIdTransformFunc;

  __declspec(property(get = get_OperationCacheCount)) int32_t OperationCacheCount;

  __declspec(property(get = get_ResourceProviders)) ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>* ResourceProviders;

  __declspec(property(get = get_WebRequestOverride, put = set_WebRequestOverride)) ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* WebRequestOverride;

  /// @brief Field <CertificateHandlerInstance>k__BackingField, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__CertificateHandlerInstance_k__BackingField,
                      put = __cordl_internal_set__CertificateHandlerInstance_k__BackingField)) ::UnityEngine::Networking::CertificateHandler* _CertificateHandlerInstance_k__BackingField;

  /// @brief Field <ExceptionHandler>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__ExceptionHandler_k__BackingField,
                      put = setStaticF__ExceptionHandler_k__BackingField)) ::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::System::Exception*>*
      _ExceptionHandler_k__BackingField;

  /// @brief Field <InternalIdTransformFunc>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__InternalIdTransformFunc_k__BackingField,
                      put = __cordl_internal_set__InternalIdTransformFunc_k__BackingField)) ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>*
      _InternalIdTransformFunc_k__BackingField;

  /// @brief Field <WebRequestOverride>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__WebRequestOverride_k__BackingField,
                      put = __cordl_internal_set__WebRequestOverride_k__BackingField)) ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* _WebRequestOverride_k__BackingField;

  /// @brief Field m_AssetBundleProviders, offset 0x80, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_AssetBundleProviders,
      put = __cordl_internal_set_m_AssetBundleProviders)) ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>* m_AssetBundleProviders;

  /// @brief Field m_AssetOperationCache, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AssetOperationCache, put = __cordl_internal_set_m_AssetOperationCache)) ::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::ResourceManagement::Util::IOperationCacheKey*, ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* m_AssetOperationCache;

  /// @brief Field m_DeferredCallbacksToRegister, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DeferredCallbacksToRegister, put = __cordl_internal_set_m_DeferredCallbacksToRegister)) ::System::Collections::Generic::List_1<
      ::UnityEngine::ResourceManagement::ResourceManager_DeferredCallbackRegisterRequest>* m_DeferredCallbacksToRegister;

  /// @brief Field m_DeferredCompleteCallbacks, offset 0x78, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_DeferredCompleteCallbacks,
      put =
          __cordl_internal_set_m_DeferredCompleteCallbacks)) ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* m_DeferredCompleteCallbacks;

  /// @brief Field m_InsideExecuteDeferredCallbacksMethod, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get_m_InsideExecuteDeferredCallbacksMethod,
                      put = __cordl_internal_set_m_InsideExecuteDeferredCallbacksMethod)) bool m_InsideExecuteDeferredCallbacksMethod;

  /// @brief Field m_InsideUpdateMethod, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get_m_InsideUpdateMethod, put = __cordl_internal_set_m_InsideUpdateMethod)) bool m_InsideUpdateMethod;

  /// @brief Field m_ProviderOperationTypeCache, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProviderOperationTypeCache,
                      put = __cordl_internal_set_m_ProviderOperationTypeCache)) ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>* m_ProviderOperationTypeCache;

  /// @brief Field m_RegisteredForCallbacks, offset 0xc8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RegisteredForCallbacks, put = __cordl_internal_set_m_RegisteredForCallbacks)) bool m_RegisteredForCallbacks;

  /// @brief Field m_ReleaseInstanceOp, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ReleaseInstanceOp,
                      put = __cordl_internal_set_m_ReleaseInstanceOp)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* m_ReleaseInstanceOp;

  /// @brief Field m_ReleaseOpCached, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ReleaseOpCached,
                      put = __cordl_internal_set_m_ReleaseOpCached)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* m_ReleaseOpCached;

  /// @brief Field m_ReleaseOpNonCached, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ReleaseOpNonCached,
                      put = __cordl_internal_set_m_ReleaseOpNonCached)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* m_ReleaseOpNonCached;

  /// @brief Field m_ResourceProviders, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ResourceProviders,
                      put =
                          __cordl_internal_set_m_ResourceProviders)) ::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>* m_ResourceProviders;

  /// @brief Field m_TrackedInstanceOperations, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TrackedInstanceOperations,
                      put = __cordl_internal_set_m_TrackedInstanceOperations)) ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*>*
      m_TrackedInstanceOperations;

  /// @brief Field m_UpdateCallbacks, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UpdateCallbacks, put = __cordl_internal_set_m_UpdateCallbacks)) ::GlobalNamespace::DelegateList_1<float_t>* m_UpdateCallbacks;

  /// @brief Field m_UpdateReceivers, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UpdateReceivers,
                      put = __cordl_internal_set_m_UpdateReceivers)) ::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>* m_UpdateReceivers;

  /// @brief Field m_UpdateReceiversToRemove, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UpdateReceiversToRemove,
                      put = __cordl_internal_set_m_UpdateReceiversToRemove)) ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>* m_UpdateReceiversToRemove;

  /// @brief Field m_UpdatingReceivers, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UpdatingReceivers, put = __cordl_internal_set_m_UpdatingReceivers)) bool m_UpdatingReceivers;

  /// @brief Field m_allocator, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_allocator, put = __cordl_internal_set_m_allocator)) ::UnityEngine::ResourceManagement::Util::IAllocationStrategy* m_allocator;

  /// @brief Field m_diagnosticsHandler, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_diagnosticsHandler,
                      put = __cordl_internal_set_m_diagnosticsHandler)) ::System::Action_1<::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventContext>* m_diagnosticsHandler;

  /// @brief Field m_obsoleteDiagnosticsHandler, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_obsoleteDiagnosticsHandler,
                      put = __cordl_internal_set_m_obsoleteDiagnosticsHandler)) ::System::Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,
                                                                                                   ::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType, int32_t, ::System::Object*>*
      m_obsoleteDiagnosticsHandler;

  /// @brief Field m_providerMap, offset 0x58, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_providerMap,
      put = __cordl_internal_set_m_providerMap)) ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>* m_providerMap;

  /// @brief Field postProfilerEvents, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_postProfilerEvents, put = __cordl_internal_set_postProfilerEvents)) bool postProfilerEvents;

  /// @brief Field s_GroupOperationTypeHash, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_GroupOperationTypeHash, put = setStaticF_s_GroupOperationTypeHash)) int32_t s_GroupOperationTypeHash;

  /// @brief Field s_InstanceOperationTypeHash, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_InstanceOperationTypeHash, put = setStaticF_s_InstanceOperationTypeHash)) int32_t s_InstanceOperationTypeHash;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Acquire, addr 0x4793a00, size 0x20, virtual false, abstract: false, final false
  inline void Acquire(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle);

  /// @brief Method AcquireGroupOpFromCache, addr 0x4793ae4, size 0x13c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation* AcquireGroupOpFromCache(::UnityEngine::ResourceManagement::Util::IOperationCacheKey* key);

  /// @brief Method AddOperationToCache, addr 0x4793814, size 0x88, virtual false, abstract: false, final false
  inline void AddOperationToCache(::UnityEngine::ResourceManagement::Util::IOperationCacheKey* key, ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* operation);

  /// @brief Method AddUpdateReceiver, addr 0x4790828, size 0x68, virtual false, abstract: false, final false
  inline void AddUpdateReceiver(::UnityEngine::ResourceManagement::IUpdateReceiver* receiver);

  /// @brief Method CachedOperationCount, addr 0x47938f4, size 0x50, virtual false, abstract: false, final false
  inline int32_t CachedOperationCount();

  /// @brief Method CalculateLocationsHash, addr 0x4791a4c, size 0x454, virtual false, abstract: false, final false
  inline int32_t CalculateLocationsHash(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, ::System::Type* t);

  /// @brief Method CleanupSceneInstances, addr 0x47946b0, size 0x400, virtual false, abstract: false, final false
  inline void CleanupSceneInstances(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method ClearDiagnosticCallbacks, addr 0x479121c, size 0x8, virtual false, abstract: false, final false
  inline void ClearDiagnosticCallbacks();

  /// @brief Method ClearDiagnosticsCallback, addr 0x4791214, size 0x8, virtual false, abstract: false, final false
  inline void ClearDiagnosticsCallback();

  /// @brief Method CreateCacheKeyForLocation, addr 0x4792658, size 0x1ac, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::Util::IOperationCacheKey* CreateCacheKeyForLocation(::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* provider,
                                                                                                ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                                                ::System::Type* desiredType);

  /// @brief Method CreateChainOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> CreateChainOperation(
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dependentOp,
      ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* callback);

  /// @brief Method CreateChainOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> CreateChainOperation(
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dependentOp,
      ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* callback,
      bool releaseDependenciesOnFailure);

  /// @brief Method CreateChainOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject, typename TObjectDependency>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>
  CreateChainOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency> dependentOp,
                       ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>,
                                        ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* callback);

  /// @brief Method CreateChainOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject, typename TObjectDependency>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>
  CreateChainOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency> dependentOp,
                       ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>,
                                        ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* callback,
                       bool releaseDependenciesOnFailure);

  /// @brief Method CreateCompletedOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> CreateCompletedOperation(TObject result, ::StringW errorMsg);

  /// @brief Method CreateCompletedOperationInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> CreateCompletedOperationInternal(TObject result, bool success, ::System::Exception* exception,
                                                                                                                              bool releaseDependenciesOnFailure);

  /// @brief Method CreateCompletedOperationWithException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> CreateCompletedOperationWithException(TObject result, ::System::Exception* exception);

  /// @brief Method CreateGenericGroupOperation, addr 0x4793c20, size 0x198, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
  CreateGenericGroupOperation(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* operations, bool releasedCachedOpOnComplete);

  /// @brief Method CreateGroupOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
  CreateGroupOperation(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations);

  /// @brief Method CreateGroupOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
  CreateGroupOperation(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, bool allowFailedDependencies);

  /// @brief Method CreateOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline T CreateOperation(::System::Type* actualType, int32_t typeHash, ::UnityEngine::ResourceManagement::Util::IOperationCacheKey* cacheKey,
                           ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* onDestroyAction);

  /// @brief Method Dispose, addr 0x479527c, size 0xd4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method ExecuteDeferredCallbacks, addr 0x4794ab0, size 0x1b4, virtual false, abstract: false, final false
  inline void ExecuteDeferredCallbacks();

  /// @brief Method GetDefaultTypeForLocation, addr 0x4791910, size 0x13c, virtual false, abstract: false, final false
  inline ::System::Type* GetDefaultTypeForLocation(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* loc);

  /// @brief Method GetOperationFromCache, addr 0x47931bc, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* GetOperationFromCache(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                                                    ::System::Type* desiredType);

  /// @brief Method GetResourceProvider, addr 0x47914cc, size 0x444, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* GetResourceProvider(::System::Type* t,
                                                                                                      ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  /// @brief Method IsOperationCached, addr 0x479389c, size 0x58, virtual false, abstract: false, final false
  inline bool IsOperationCached(::UnityEngine::ResourceManagement::Util::IOperationCacheKey* key);

  static inline ::UnityEngine::ResourceManagement::ResourceManager* New_ctor(::UnityEngine::ResourceManagement::Util::IAllocationStrategy* alloc);

  /// @brief Method OnInstanceOperationDestroy, addr 0x4793350, size 0x144, virtual false, abstract: false, final false
  inline void OnInstanceOperationDestroy(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* o);

  /// @brief Method OnObjectAdded, addr 0x4791064, size 0x74, virtual false, abstract: false, final false
  inline void OnObjectAdded(::System::Object* obj);

  /// @brief Method OnObjectRemoved, addr 0x47910d8, size 0x74, virtual false, abstract: false, final false
  inline void OnObjectRemoved(::System::Object* obj);

  /// @brief Method OnOperationDestroyCached, addr 0x4793568, size 0x234, virtual false, abstract: false, final false
  inline void OnOperationDestroyCached(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* o);

  /// @brief Method OnOperationDestroyNonCached, addr 0x4793494, size 0xd4, virtual false, abstract: false, final false
  inline void OnOperationDestroyNonCached(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* o);

  /// @brief Method PostDiagnosticEvent, addr 0x47913d0, size 0xfc, virtual false, abstract: false, final false
  inline void PostDiagnosticEvent(::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventContext context);

  /// @brief Method ProvideInstance, addr 0x47943d4, size 0x2ac, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
  ProvideInstance(::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* provider, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                  ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters);

  /// @brief Method ProvideResource, addr 0x4791ea0, size 0x794, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle ProvideResource(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                                                  ::System::Type* desiredType, bool releaseDependenciesOnFailure);

  /// @brief Method ProvideResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> ProvideResource(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  /// @brief Method ProvideResourceGroupCached, addr 0x47928d4, size 0x774, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
  ProvideResourceGroupCached(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, int32_t groupHash,
                             ::System::Type* desiredType, ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* callback, bool releaseDependenciesOnFailure);

  /// @brief Method ProvideResources, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  ProvideResources(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, ::System::Action_1<TObject>* callback);

  /// @brief Method ProvideResources, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  ProvideResources(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, bool releaseDependenciesOnFailure,
                   ::System::Action_1<TObject>* callback);

  /// @brief Method ProvideScene, addr 0x4794010, size 0x158, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  ProvideScene(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider* sceneProvider, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
               ::UnityEngine::SceneManagement::LoadSceneMode loadSceneMode, bool activateOnLoad, int32_t priority);

  /// @brief Method ProvideScene, addr 0x4794168, size 0x140, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  ProvideScene(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider* sceneProvider, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
               ::UnityEngine::SceneManagement::LoadSceneParameters loadSceneParameters, bool activateOnLoad, int32_t priority);

  /// @brief Method RegisterDiagnosticCallback, addr 0x4791328, size 0xa8, virtual false, abstract: false, final false
  inline void RegisterDiagnosticCallback(::System::Action_1<::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventContext>* func);

  /// @brief Method RegisterDiagnosticCallback, addr 0x4791320, size 0x8, virtual false, abstract: false, final false
  inline void RegisterDiagnosticCallback(::System::Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,
                                                            ::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType, int32_t, ::System::Object*>* func);

  /// @brief Method RegisterForCallbacks, addr 0x479114c, size 0xc8, virtual false, abstract: false, final false
  inline void RegisterForCallbacks();

  /// @brief Method RegisterForDeferredCallback, addr 0x4794c64, size 0x208, virtual false, abstract: false, final false
  inline void RegisterForDeferredCallback(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* op, bool incrementRefCount);

  /// @brief Method Release, addr 0x4793944, size 0x8, virtual false, abstract: false, final false
  inline void Release(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle);

  /// @brief Method ReleaseScene, addr 0x47942a8, size 0x12c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  ReleaseScene(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider* sceneProvider,
               ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> sceneLoadHandle);

  /// @brief Method RemoveOperationFromCache, addr 0x479379c, size 0x78, virtual false, abstract: false, final false
  inline bool RemoveOperationFromCache(::UnityEngine::ResourceManagement::Util::IOperationCacheKey* key);

  /// @brief Method RemoveUpdateReciever, addr 0x4790890, size 0x128, virtual false, abstract: false, final false
  inline void RemoveUpdateReciever(::UnityEngine::ResourceManagement::IUpdateReceiver* receiver);

  /// @brief Method StartOperation, addr 0x4793048, size 0x174, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle StartOperation(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* operation,
                                                                                                 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dependency);

  /// @brief Method StartOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>
  StartOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>* operation, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dependency);

  /// @brief Method TransformInternalId, addr 0x47906bc, size 0xc4, virtual false, abstract: false, final false
  inline ::StringW TransformInternalId(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  /// @brief Method UnregisterDiagnosticCallback, addr 0x4791224, size 0xfc, virtual false, abstract: false, final false
  inline void UnregisterDiagnosticCallback(::System::Action_1<::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventContext>* func);

  /// @brief Method Update, addr 0x4794e6c, size 0x410, virtual false, abstract: false, final false
  inline void Update(float_t unscaledDeltaTime);

  constexpr bool const& __cordl_internal_get_CallbackHooksEnabled() const;

  constexpr bool& __cordl_internal_get_CallbackHooksEnabled();

  constexpr ::UnityEngine::Networking::CertificateHandler* const& __cordl_internal_get__CertificateHandlerInstance_k__BackingField() const;

  constexpr ::UnityEngine::Networking::CertificateHandler*& __cordl_internal_get__CertificateHandlerInstance_k__BackingField();

  constexpr ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* const& __cordl_internal_get__InternalIdTransformFunc_k__BackingField() const;

  constexpr ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>*& __cordl_internal_get__InternalIdTransformFunc_k__BackingField();

  constexpr ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* const& __cordl_internal_get__WebRequestOverride_k__BackingField() const;

  constexpr ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*& __cordl_internal_get__WebRequestOverride_k__BackingField();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>* const& __cordl_internal_get_m_AssetBundleProviders() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*& __cordl_internal_get_m_AssetBundleProviders();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*, ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* const&
  __cordl_internal_get_m_AssetOperationCache() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*, ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*&
  __cordl_internal_get_m_AssetOperationCache();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::ResourceManager_DeferredCallbackRegisterRequest>* const&
  __cordl_internal_get_m_DeferredCallbacksToRegister() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::ResourceManager_DeferredCallbackRegisterRequest>*& __cordl_internal_get_m_DeferredCallbacksToRegister();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* const& __cordl_internal_get_m_DeferredCompleteCallbacks() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*& __cordl_internal_get_m_DeferredCompleteCallbacks();

  constexpr bool const& __cordl_internal_get_m_InsideExecuteDeferredCallbacksMethod() const;

  constexpr bool& __cordl_internal_get_m_InsideExecuteDeferredCallbacksMethod();

  constexpr bool const& __cordl_internal_get_m_InsideUpdateMethod() const;

  constexpr bool& __cordl_internal_get_m_InsideUpdateMethod();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>* const& __cordl_internal_get_m_ProviderOperationTypeCache() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>*& __cordl_internal_get_m_ProviderOperationTypeCache();

  constexpr bool const& __cordl_internal_get_m_RegisteredForCallbacks() const;

  constexpr bool& __cordl_internal_get_m_RegisteredForCallbacks();

  constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* const& __cordl_internal_get_m_ReleaseInstanceOp() const;

  constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*& __cordl_internal_get_m_ReleaseInstanceOp();

  constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* const& __cordl_internal_get_m_ReleaseOpCached() const;

  constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*& __cordl_internal_get_m_ReleaseOpCached();

  constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* const& __cordl_internal_get_m_ReleaseOpNonCached() const;

  constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*& __cordl_internal_get_m_ReleaseOpNonCached();

  constexpr ::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>* const& __cordl_internal_get_m_ResourceProviders() const;

  constexpr ::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*& __cordl_internal_get_m_ResourceProviders();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*>* const& __cordl_internal_get_m_TrackedInstanceOperations() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*>*& __cordl_internal_get_m_TrackedInstanceOperations();

  constexpr ::GlobalNamespace::DelegateList_1<float_t>* const& __cordl_internal_get_m_UpdateCallbacks() const;

  constexpr ::GlobalNamespace::DelegateList_1<float_t>*& __cordl_internal_get_m_UpdateCallbacks();

  constexpr ::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>* const& __cordl_internal_get_m_UpdateReceivers() const;

  constexpr ::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>*& __cordl_internal_get_m_UpdateReceivers();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>* const& __cordl_internal_get_m_UpdateReceiversToRemove() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>*& __cordl_internal_get_m_UpdateReceiversToRemove();

  constexpr bool const& __cordl_internal_get_m_UpdatingReceivers() const;

  constexpr bool& __cordl_internal_get_m_UpdatingReceivers();

  constexpr ::UnityEngine::ResourceManagement::Util::IAllocationStrategy* const& __cordl_internal_get_m_allocator() const;

  constexpr ::UnityEngine::ResourceManagement::Util::IAllocationStrategy*& __cordl_internal_get_m_allocator();

  constexpr ::System::Action_1<::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventContext>* const& __cordl_internal_get_m_diagnosticsHandler() const;

  constexpr ::System::Action_1<::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventContext>*& __cordl_internal_get_m_diagnosticsHandler();

  constexpr ::System::Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType, int32_t,
                               ::System::Object*>* const&
  __cordl_internal_get_m_obsoleteDiagnosticsHandler() const;

  constexpr ::System::Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType, int32_t,
                               ::System::Object*>*&
  __cordl_internal_get_m_obsoleteDiagnosticsHandler();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>* const& __cordl_internal_get_m_providerMap() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*& __cordl_internal_get_m_providerMap();

  constexpr bool const& __cordl_internal_get_postProfilerEvents() const;

  constexpr bool& __cordl_internal_get_postProfilerEvents();

  constexpr void __cordl_internal_set_CallbackHooksEnabled(bool value);

  constexpr void __cordl_internal_set__CertificateHandlerInstance_k__BackingField(::UnityEngine::Networking::CertificateHandler* value);

  constexpr void __cordl_internal_set__InternalIdTransformFunc_k__BackingField(::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* value);

  constexpr void __cordl_internal_set__WebRequestOverride_k__BackingField(::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* value);

  constexpr void __cordl_internal_set_m_AssetBundleProviders(::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>* value);

  constexpr void __cordl_internal_set_m_AssetOperationCache(
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*, ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* value);

  constexpr void __cordl_internal_set_m_DeferredCallbacksToRegister(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::ResourceManager_DeferredCallbackRegisterRequest>* value);

  constexpr void __cordl_internal_set_m_DeferredCompleteCallbacks(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* value);

  constexpr void __cordl_internal_set_m_InsideExecuteDeferredCallbacksMethod(bool value);

  constexpr void __cordl_internal_set_m_InsideUpdateMethod(bool value);

  constexpr void __cordl_internal_set_m_ProviderOperationTypeCache(::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>* value);

  constexpr void __cordl_internal_set_m_RegisteredForCallbacks(bool value);

  constexpr void __cordl_internal_set_m_ReleaseInstanceOp(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* value);

  constexpr void __cordl_internal_set_m_ReleaseOpCached(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* value);

  constexpr void __cordl_internal_set_m_ReleaseOpNonCached(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* value);

  constexpr void __cordl_internal_set_m_ResourceProviders(::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>* value);

  constexpr void __cordl_internal_set_m_TrackedInstanceOperations(::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*>* value);

  constexpr void __cordl_internal_set_m_UpdateCallbacks(::GlobalNamespace::DelegateList_1<float_t>* value);

  constexpr void __cordl_internal_set_m_UpdateReceivers(::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>* value);

  constexpr void __cordl_internal_set_m_UpdateReceiversToRemove(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>* value);

  constexpr void __cordl_internal_set_m_UpdatingReceivers(bool value);

  constexpr void __cordl_internal_set_m_allocator(::UnityEngine::ResourceManagement::Util::IAllocationStrategy* value);

  constexpr void __cordl_internal_set_m_diagnosticsHandler(::System::Action_1<::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventContext>* value);

  constexpr void __cordl_internal_set_m_obsoleteDiagnosticsHandler(::System::Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,
                                                                                      ::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType, int32_t, ::System::Object*>* value);

  constexpr void __cordl_internal_set_m_providerMap(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>* value);

  constexpr void __cordl_internal_set_postProfilerEvents(bool value);

  /// @brief Method <.ctor>b__54_0, addr 0x4795430, size 0x4, virtual false, abstract: false, final false
  inline void __ctor_b__54_0(::UnityEngine::ResourceManagement::IUpdateReceiver* x);

  /// @brief Method .ctor, addr 0x47909e0, size 0x4ac, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ResourceManagement::Util::IAllocationStrategy* alloc);

  static inline ::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::System::Exception*>* getStaticF__ExceptionHandler_k__BackingField();

  static inline int32_t getStaticF_s_GroupOperationTypeHash();

  static inline int32_t getStaticF_s_InstanceOperationTypeHash();

  /// @brief Method get_Allocator, addr 0x47909b8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::Util::IAllocationStrategy* get_Allocator();

  /// @brief Method get_CertificateHandlerInstance, addr 0x47909d0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::CertificateHandler* get_CertificateHandlerInstance();

  /// @brief Method get_ExceptionHandler, addr 0x47905f8, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::System::Exception*>* get_ExceptionHandler();

  /// @brief Method get_InstanceOperationCount, addr 0x47907e0, size 0x48, virtual false, abstract: false, final false
  inline int32_t get_InstanceOperationCount();

  /// @brief Method get_InternalIdTransformFunc, addr 0x47906ac, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* get_InternalIdTransformFunc();

  /// @brief Method get_OperationCacheCount, addr 0x4790790, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_OperationCacheCount();

  /// @brief Method get_ResourceProviders, addr 0x47909c8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>* get_ResourceProviders();

  /// @brief Method get_WebRequestOverride, addr 0x4790780, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* get_WebRequestOverride();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF__ExceptionHandler_k__BackingField(::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::System::Exception*>* value);

  static inline void setStaticF_s_GroupOperationTypeHash(int32_t value);

  static inline void setStaticF_s_InstanceOperationTypeHash(int32_t value);

  /// @brief Method set_Allocator, addr 0x47909c0, size 0x8, virtual false, abstract: false, final false
  inline void set_Allocator(::UnityEngine::ResourceManagement::Util::IAllocationStrategy* value);

  /// @brief Method set_CertificateHandlerInstance, addr 0x47909d8, size 0x8, virtual false, abstract: false, final false
  inline void set_CertificateHandlerInstance(::UnityEngine::Networking::CertificateHandler* value);

  /// @brief Method set_ExceptionHandler, addr 0x4790650, size 0x5c, virtual false, abstract: false, final false
  static inline void set_ExceptionHandler(::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::System::Exception*>* value);

  /// @brief Method set_InternalIdTransformFunc, addr 0x47906b4, size 0x8, virtual false, abstract: false, final false
  inline void set_InternalIdTransformFunc(::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* value);

  /// @brief Method set_WebRequestOverride, addr 0x4790788, size 0x8, virtual false, abstract: false, final false
  inline void set_WebRequestOverride(::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResourceManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourceManager(ResourceManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourceManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourceManager(ResourceManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15599 };

  /// @brief Field postProfilerEvents, offset: 0x10, size: 0x1, def value: None
  bool ___postProfilerEvents;

  /// @brief Field <InternalIdTransformFunc>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* ____InternalIdTransformFunc_k__BackingField;

  /// @brief Field <WebRequestOverride>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* ____WebRequestOverride_k__BackingField;

  /// @brief Field CallbackHooksEnabled, offset: 0x28, size: 0x1, def value: None
  bool ___CallbackHooksEnabled;

  /// @brief Field m_ResourceProviders, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>* ___m_ResourceProviders;

  /// @brief Field m_allocator, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::Util::IAllocationStrategy* ___m_allocator;

  /// @brief Field m_UpdateReceivers, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>* ___m_UpdateReceivers;

  /// @brief Field m_UpdateReceiversToRemove, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>* ___m_UpdateReceiversToRemove;

  /// @brief Field m_UpdatingReceivers, offset: 0x50, size: 0x1, def value: None
  bool ___m_UpdatingReceivers;

  /// @brief Field m_InsideUpdateMethod, offset: 0x51, size: 0x1, def value: None
  bool ___m_InsideUpdateMethod;

  /// @brief Field m_providerMap, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>* ___m_providerMap;

  /// @brief Field m_AssetOperationCache, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*, ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*
      ___m_AssetOperationCache;

  /// @brief Field m_TrackedInstanceOperations, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*>* ___m_TrackedInstanceOperations;

  /// @brief Field m_UpdateCallbacks, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::DelegateList_1<float_t>* ___m_UpdateCallbacks;

  /// @brief Field m_DeferredCompleteCallbacks, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* ___m_DeferredCompleteCallbacks;

  /// @brief Field m_AssetBundleProviders, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>* ___m_AssetBundleProviders;

  /// @brief Field m_InsideExecuteDeferredCallbacksMethod, offset: 0x88, size: 0x1, def value: None
  bool ___m_InsideExecuteDeferredCallbacksMethod;

  /// @brief Field m_DeferredCallbacksToRegister, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::ResourceManager_DeferredCallbackRegisterRequest>* ___m_DeferredCallbacksToRegister;

  /// @brief Field m_obsoleteDiagnosticsHandler, offset: 0x98, size: 0x8, def value: None
  ::System::Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType, int32_t, ::System::Object*>*
      ___m_obsoleteDiagnosticsHandler;

  /// @brief Field m_diagnosticsHandler, offset: 0xa0, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventContext>* ___m_diagnosticsHandler;

  /// @brief Field m_ReleaseOpNonCached, offset: 0xa8, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* ___m_ReleaseOpNonCached;

  /// @brief Field m_ReleaseOpCached, offset: 0xb0, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* ___m_ReleaseOpCached;

  /// @brief Field m_ReleaseInstanceOp, offset: 0xb8, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* ___m_ReleaseInstanceOp;

  /// @brief Field <CertificateHandlerInstance>k__BackingField, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::Networking::CertificateHandler* ____CertificateHandlerInstance_k__BackingField;

  /// @brief Field m_RegisteredForCallbacks, offset: 0xc8, size: 0x1, def value: None
  bool ___m_RegisteredForCallbacks;

  /// @brief Field m_ProviderOperationTypeCache, offset: 0xd0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>* ___m_ProviderOperationTypeCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager, ___postProfilerEvents) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager, ____InternalIdTransformFunc_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager, ____WebRequestOverride_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager, ___CallbackHooksEnabled) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager, ___m_ResourceProviders) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager, ___m_allocator) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager, ___m_UpdateReceivers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager, ___m_UpdateReceiversToRemove) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager, ___m_UpdatingReceivers) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager, ___m_InsideUpdateMethod) == 0x51, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager, ___m_providerMap) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager, ___m_AssetOperationCache) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager, ___m_TrackedInstanceOperations) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager, ___m_UpdateCallbacks) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager, ___m_DeferredCompleteCallbacks) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager, ___m_AssetBundleProviders) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager, ___m_InsideExecuteDeferredCallbacksMethod) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager, ___m_DeferredCallbacksToRegister) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager, ___m_obsoleteDiagnosticsHandler) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager, ___m_diagnosticsHandler) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager, ___m_ReleaseOpNonCached) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager, ___m_ReleaseOpCached) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager, ___m_ReleaseInstanceOp) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager, ____CertificateHandlerInstance_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager, ___m_RegisteredForCallbacks) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager, ___m_ProviderOperationTypeCache) == 0xd0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceManager, 0xd8>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType, "UnityEngine.ResourceManagement", "ResourceManager/DiagnosticEventType");
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceManager*, "UnityEngine.ResourceManagement", "ResourceManager");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ResourceManagement::ResourceManager_CompletedOperation_1, "UnityEngine.ResourceManagement", "ResourceManager/CompletedOperation`1");
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*, "UnityEngine.ResourceManagement", "ResourceManager/InstanceOperation");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ResourceManagement::ResourceManager___c__DisplayClass95_0_1, "UnityEngine.ResourceManagement", "ResourceManager/<>c__DisplayClass95_0`1");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceManager_DeferredCallbackRegisterRequest, "UnityEngine.ResourceManagement", "ResourceManager/DeferredCallbackRegisterRequest");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventContext, "UnityEngine.ResourceManagement", "ResourceManager/DiagnosticEventContext");
