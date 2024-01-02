#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__InstantiationParameters_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ResourceManager)
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IInstanceProvider;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::ResourceManagement {
struct __ResourceManager__DiagnosticEventType;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Type;
}
namespace UnityEngine::ResourceManagement::Util {
class IOperationCacheKey;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine::ResourceManagement {
struct __ResourceManager__DiagnosticEventContext;
}
namespace UnityEngine::ResourceManagement {
class __ResourceManager__InstanceOperation;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System {
class Object;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> class AsyncOperationBase_1;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class ISceneProvider;
}
namespace UnityEngine::ResourceManagement {
template <typename TObject> class __ResourceManager__CompletedOperation_1;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace System {
class Exception;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::ResourceManagement {
struct __ResourceManager__DeferredCallbackRegisterRequest;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
class IAsyncOperation;
}
namespace UnityEngine::ResourceManagement {
template <typename TObject> class __ResourceManager____c__DisplayClass92_0_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Networking {
class CertificateHandler;
}
namespace UnityEngine::ResourceManagement::Util {
class IAllocationStrategy;
}
namespace GlobalNamespace {
template <typename T> class DelegateList_1;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4> class Action_4;
}
namespace UnityEngine::ResourceManagement {
class IUpdateReceiver;
}
namespace GlobalNamespace {
template <typename T> class ListWithEvents_1;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IResourceProvider;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct InstantiationParameters;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
class GroupOperation;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct DownloadStatus;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement {
struct __ResourceManager__DiagnosticEventType;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace UnityEngine::ResourceManagement {
template <typename TObject> class __ResourceManager__CompletedOperation_1;
}
namespace UnityEngine::ResourceManagement {
class __ResourceManager__InstanceOperation;
}
namespace UnityEngine::ResourceManagement {
template <typename TObject> class __ResourceManager____c__DisplayClass92_0_1;
}
namespace UnityEngine::ResourceManagement {
struct __ResourceManager__DeferredCallbackRegisterRequest;
}
namespace UnityEngine::ResourceManagement {
struct __ResourceManager__DiagnosticEventContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceManager);
MARK_GEN_REF_PTR_T(::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation);
MARK_GEN_REF_PTR_T(::UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass92_0_1);
MARK_VAL_T(::UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest);
MARK_VAL_T(::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext);
// Type: ::DiagnosticEventType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13951))
// CS Name: ::ResourceManager::DiagnosticEventType
struct CORDL_TYPE __ResourceManager__DiagnosticEventType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ResourceManager__DiagnosticEventType_Unwrapped
  enum struct ____ResourceManager__DiagnosticEventType_Unwrapped : int32_t {
    __E_AsyncOperationFail = static_cast<int32_t>(0x0),
    __E_AsyncOperationCreate = static_cast<int32_t>(0x1),
    __E_AsyncOperationPercentComplete = static_cast<int32_t>(0x2),
    __E_AsyncOperationComplete = static_cast<int32_t>(0x3),
    __E_AsyncOperationReferenceCount = static_cast<int32_t>(0x4),
    __E_AsyncOperationDestroy = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ResourceManager__DiagnosticEventType_Unwrapped() const noexcept {
    return static_cast<____ResourceManager__DiagnosticEventType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ResourceManager__DiagnosticEventType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ResourceManager__DiagnosticEventType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field AsyncOperationFail value: static_cast<int32_t>(0x0)
  static ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType const AsyncOperationFail;

  /// @brief Field AsyncOperationCreate value: static_cast<int32_t>(0x1)
  static ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType const AsyncOperationCreate;

  /// @brief Field AsyncOperationPercentComplete value: static_cast<int32_t>(0x2)
  static ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType const AsyncOperationPercentComplete;

  /// @brief Field AsyncOperationComplete value: static_cast<int32_t>(0x3)
  static ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType const AsyncOperationComplete;

  /// @brief Field AsyncOperationReferenceCount value: static_cast<int32_t>(0x4)
  static ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType const AsyncOperationReferenceCount;

  /// @brief Field AsyncOperationDestroy value: static_cast<int32_t>(0x5)
  static ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType const AsyncOperationDestroy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::ResourceManagement
// Type: ::DiagnosticEventContext
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14034)), TypeDefinitionIndex(TypeDefinitionIndex(13951))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13952))
// CS Name: ::ResourceManager::DiagnosticEventContext
struct CORDL_TYPE __ResourceManager__DiagnosticEventContext {
public:
  // Declarations
  __declspec(property(get = get_OperationHandle))::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle OperationHandle;

  __declspec(property(get = get_Type))::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType Type;

  __declspec(property(get = get_EventValue)) int32_t EventValue;

  __declspec(property(get = get_Location))::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* Location;

  __declspec(property(get = get_Context))::System::Object* Context;

  __declspec(property(get = get_Error))::StringW Error;

  /// @brief Method get_OperationHandle, addr 0x2bce620, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle get_OperationHandle();

  /// @brief Method get_Type, addr 0x2bce634, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType get_Type();

  /// @brief Method get_EventValue, addr 0x2bce63c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_EventValue();

  /// @brief Method get_Location, addr 0x2bce644, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* get_Location();

  /// @brief Method get_Context, addr 0x2bce64c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Context();

  /// @brief Method get_Error, addr 0x2bce654, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Error();

  /// @brief Method .ctor, addr 0x2bce65c, size 0x104, virtual false, abstract: false, final false
  /// @param eventValue: int32_t (default: static_cast<int32_t>(0x0))
  /// @param error: ::StringW (default: nullptr)
  /// @param context: ::System::Object* (default: nullptr)
  inline void _ctor(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op, ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType type,
                    int32_t eventValue = static_cast<int32_t>(0x0), ::StringW error = nullptr, ::System::Object* context = nullptr);

  // Ctor Parameters [CppParam { name: "_OperationHandle_k__BackingField", ty: "::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle", modifiers: "", def_value: None }, CppParam {
  // name: "_Type_k__BackingField", ty: "::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType", modifiers: "", def_value: None }, CppParam { name: "_EventValue_k__BackingField",
  // ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_Location_k__BackingField", ty: "::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*", modifiers: "",
  // def_value: None }, CppParam { name: "_Context_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_Error_k__BackingField", ty: "::StringW", modifiers:
  // "", def_value: None }]
  constexpr __ResourceManager__DiagnosticEventContext(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle _OperationHandle_k__BackingField,
                                                      ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType _Type_k__BackingField, int32_t _EventValue_k__BackingField,
                                                      ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* _Location_k__BackingField, ::System::Object* _Context_k__BackingField,
                                                      ::StringW _Error_k__BackingField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ResourceManager__DiagnosticEventContext();

  /// @brief Field <OperationHandle>k__BackingField, offset: 0x0, size: 0x18, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle _OperationHandle_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType _Type_k__BackingField;

  /// @brief Field <EventValue>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  int32_t _EventValue_k__BackingField;

  /// @brief Field <Location>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* _Location_k__BackingField;

  /// @brief Field <Context>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Object* _Context_k__BackingField;

  /// @brief Field <Error>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW _Error_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext, _OperationHandle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext, _Type_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext, _EventValue_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext, _Location_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext, _Context_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext, _Error_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::ResourceManagement
// Type: ::DeferredCallbackRegisterRequest
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13953))
// CS Name: ::ResourceManager::DeferredCallbackRegisterRequest
struct CORDL_TYPE __ResourceManager__DeferredCallbackRegisterRequest {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "operation", ty: "::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*", modifiers: "", def_value: None }, CppParam { name: "incrementRefCount",
  // ty: "bool", modifiers: "", def_value: None }]
  constexpr __ResourceManager__DeferredCallbackRegisterRequest(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* operation, bool incrementRefCount) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ResourceManager__DeferredCallbackRegisterRequest();

  /// @brief Field operation, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* operation;

  /// @brief Field incrementRefCount, offset: 0x8, size: 0x1, def value: None
  bool incrementRefCount;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest, operation) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest, incrementRefCount) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::ResourceManagement
// Type: ::CompletedOperation`1
// SizeInfo { instance_size: 160, native_size: 153, calculated_instance_size: 160, calculated_native_size: 153, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement {
// cpp template
template <typename TObject>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14032)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14032), inst: 791 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13954))
// CS Name: ::ResourceManager::CompletedOperation`1<TObject>*
class CORDL_TYPE __ResourceManager__CompletedOperation_1 : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject> {
public:
  // Declarations
  /// @brief Field m_Success, offset 0x88, size 0x1
  __declspec(property(get = __get_m_Success, put = __set_m_Success)) bool m_Success;

  /// @brief Field m_Exception, offset 0x90, size 0x8
  __declspec(property(get = __get_m_Exception, put = __set_m_Exception))::System::Exception* m_Exception;

  /// @brief Field m_ReleaseDependenciesOnFailure, offset 0x98, size 0x1
  __declspec(property(get = __get_m_ReleaseDependenciesOnFailure, put = __set_m_ReleaseDependenciesOnFailure)) bool m_ReleaseDependenciesOnFailure;

  __declspec(property(get = get_DebugName))::StringW DebugName;

  constexpr bool& __get_m_Success();

  constexpr bool const& __get_m_Success() const;

  constexpr void __set_m_Success(bool value);

  constexpr ::System::Exception*& __get_m_Exception();

  constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& __get_m_Exception() const;

  constexpr void __set_m_Exception(::System::Exception* value);

  constexpr bool& __get_m_ReleaseDependenciesOnFailure();

  constexpr bool const& __get_m_ReleaseDependenciesOnFailure() const;

  constexpr void __set_m_ReleaseDependenciesOnFailure(bool value);

  static inline ::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  /// @param releaseDependenciesOnFailure: bool (default: true)
  inline void Init(TObject result, bool success, ::StringW errorMsg, bool releaseDependenciesOnFailure = true);

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  /// @param releaseDependenciesOnFailure: bool (default: true)
  inline void Init(TObject result, bool success, ::System::Exception* exception, bool releaseDependenciesOnFailure = true);

  /// @brief Method get_DebugName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_DebugName();

  /// @brief Method InvokeWaitForCompletion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool InvokeWaitForCompletion();

  /// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Execute();

  // Ctor Parameters [CppParam { name: "", ty: "__ResourceManager__CompletedOperation_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ResourceManager__CompletedOperation_1(__ResourceManager__CompletedOperation_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ResourceManager__CompletedOperation_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ResourceManager__CompletedOperation_1(__ResourceManager__CompletedOperation_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ResourceManager__CompletedOperation_1();

public:
  /// @brief Field m_Success, offset: 0x88, size: 0x1, def value: None
  bool ___m_Success;

  /// @brief Field m_Exception, offset: 0x90, size: 0x8, def value: None
  ::System::Exception* ___m_Exception;

  /// @brief Field m_ReleaseDependenciesOnFailure, offset: 0x98, size: 0x1, def value: None
  bool ___m_ReleaseDependenciesOnFailure;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement
// Type: ::InstanceOperation
// SizeInfo { instance_size: 240, native_size: -1, calculated_instance_size: 240, calculated_native_size: 236, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14033), inst: 311 }), TypeDefinitionIndex(TypeDefinitionIndex(10380)),
// TypeDefinitionIndex(TypeDefinitionIndex(13998)), TypeDefinitionIndex(TypeDefinitionIndex(14033)), TypeDefinitionIndex(TypeDefinitionIndex(10196)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(14032), inst: 311 }), TypeDefinitionIndex(TypeDefinitionIndex(14032))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13955)) CS Name: ::ResourceManager::InstanceOperation*
class CORDL_TYPE __ResourceManager__InstanceOperation : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<::UnityEngine::GameObject*> {
public:
  // Declarations
  /// @brief Field m_dependency, offset 0x88, size 0x20
  __declspec(property(get = __get_m_dependency, put = __set_m_dependency))::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> m_dependency;

  /// @brief Field m_instantiationParams, offset 0xa8, size 0x30
  __declspec(property(get = __get_m_instantiationParams, put = __set_m_instantiationParams))::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters m_instantiationParams;

  /// @brief Field m_instanceProvider, offset 0xd8, size 0x8
  __declspec(property(get = __get_m_instanceProvider, put = __set_m_instanceProvider))::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* m_instanceProvider;

  /// @brief Field m_instance, offset 0xe0, size 0x8
  __declspec(property(get = __get_m_instance, put = __set_m_instance))::UnityEngine::GameObject* m_instance;

  /// @brief Field m_scene, offset 0xe8, size 0x4
  __declspec(property(get = __get_m_scene, put = __set_m_scene))::UnityEngine::SceneManagement::Scene m_scene;

  __declspec(property(get = get_DebugName))::StringW DebugName;

  __declspec(property(get = get_Progress)) float_t Progress;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>& __get_m_dependency();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> const& __get_m_dependency() const;

  constexpr void __set_m_dependency(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> value);

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters& __get_m_instantiationParams();

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters const& __get_m_instantiationParams() const;

  constexpr void __set_m_instantiationParams(::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters value);

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*& __get_m_instanceProvider();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*> const& __get_m_instanceProvider() const;

  constexpr void __set_m_instanceProvider(::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* value);

  constexpr ::UnityEngine::GameObject*& __get_m_instance();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_m_instance() const;

  constexpr void __set_m_instance(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::SceneManagement::Scene& __get_m_scene();

  constexpr ::UnityEngine::SceneManagement::Scene const& __get_m_scene() const;

  constexpr void __set_m_scene(::UnityEngine::SceneManagement::Scene value);

  /// @brief Method Init, addr 0x2bcd854, size 0x30, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::ResourceManagement::ResourceManager* rm, ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* instanceProvider,
                   ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiationParams,
                   ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> dependency);

  /// @brief Method GetDownloadStatus, addr 0x2bce760, size 0xdc, virtual true, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>* visited);

  /// @brief Method GetDependencies, addr 0x2bce83c, size 0x128, virtual true, abstract: false, final false
  inline void GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* deps);

  /// @brief Method get_DebugName, addr 0x2bce964, size 0x110, virtual true, abstract: false, final false
  inline ::StringW get_DebugName();

  /// @brief Method InstanceScene, addr 0x2bcea74, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::SceneManagement::Scene InstanceScene();

  /// @brief Method Destroy, addr 0x2bcea7c, size 0xb4, virtual true, abstract: false, final false
  inline void Destroy();

  /// @brief Method get_Progress, addr 0x2bceb30, size 0x48, virtual true, abstract: false, final false
  inline float_t get_Progress();

  /// @brief Method InvokeWaitForCompletion, addr 0x2bceb78, size 0x130, virtual true, abstract: false, final false
  inline bool InvokeWaitForCompletion();

  /// @brief Method Execute, addr 0x2bceca8, size 0x240, virtual true, abstract: false, final false
  inline void Execute();

  static inline ::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation* New_ctor();

  /// @brief Method .ctor, addr 0x2bceee8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__ResourceManager__InstanceOperation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ResourceManager__InstanceOperation(__ResourceManager__InstanceOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ResourceManager__InstanceOperation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ResourceManager__InstanceOperation(__ResourceManager__InstanceOperation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ResourceManager__InstanceOperation();

public:
  /// @brief Field m_dependency, offset: 0x88, size: 0x20, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*> ___m_dependency;

  /// @brief Field m_instantiationParams, offset: 0xa8, size: 0x30, def value: None
  ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters ___m_instantiationParams;

  /// @brief Field m_instanceProvider, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* ___m_instanceProvider;

  /// @brief Field m_instance, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___m_instance;

  /// @brief Field m_scene, offset: 0xe8, size: 0x4, def value: None
  ::UnityEngine::SceneManagement::Scene ___m_scene;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation, 0xf0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation, ___m_dependency) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation, ___m_instantiationParams) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation, ___m_instanceProvider) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation, ___m_instance) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation, ___m_scene) == 0xe8, "Offset mismatch!");

} // namespace UnityEngine::ResourceManagement
// Type: ::<>c__DisplayClass92_0`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement {
// cpp template
template <typename TObject>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13956))
// CS Name: ::ResourceManager::<>c__DisplayClass92_0`1<TObject>*
class CORDL_TYPE __ResourceManager____c__DisplayClass92_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __get_callback, put = __set_callback))::System::Action_1<TObject>* callback;

  /// @brief Field releaseDependenciesOnFailure, offset 0x18, size 0x1
  __declspec(property(get = __get_releaseDependenciesOnFailure, put = __set_releaseDependenciesOnFailure)) bool releaseDependenciesOnFailure;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::UnityEngine::ResourceManagement::ResourceManager* __4__this;

  constexpr ::System::Action_1<TObject>*& __get_callback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<TObject>*> const& __get_callback() const;

  constexpr void __set_callback(::System::Action_1<TObject>* value);

  constexpr bool& __get_releaseDependenciesOnFailure();

  constexpr bool const& __get_releaseDependenciesOnFailure() const;

  constexpr void __set_releaseDependenciesOnFailure(bool value);

  constexpr ::UnityEngine::ResourceManagement::ResourceManager*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceManager*> const& __get___4__this() const;

  constexpr void __set___4__this(::UnityEngine::ResourceManagement::ResourceManager* value);

  static inline ::UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass92_0_1<TObject>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <ProvideResources>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ProvideResources_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle x);

  /// @brief Method <ProvideResources>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  _ProvideResources_b__1(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle resultHandle);

  // Ctor Parameters [CppParam { name: "", ty: "__ResourceManager____c__DisplayClass92_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ResourceManager____c__DisplayClass92_0_1(__ResourceManager____c__DisplayClass92_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ResourceManager____c__DisplayClass92_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ResourceManager____c__DisplayClass92_0_1(__ResourceManager____c__DisplayClass92_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ResourceManager____c__DisplayClass92_0_1();

public:
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
// Type: UnityEngine.ResourceManagement::ResourceManager
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13957))
// CS Name: ::UnityEngine.ResourceManagement::ResourceManager*
class CORDL_TYPE ResourceManager : public ::System::Object {
public:
  // Declarations
  template <typename TObject> using __c__DisplayClass92_0_1 = ::UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass92_0_1<TObject>;

  using InstanceOperation = ::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation;

  template <typename TObject> using CompletedOperation_1 = ::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>;

  using DeferredCallbackRegisterRequest = ::UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest;

  using DiagnosticEventContext = ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext;

  using DiagnosticEventType = ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType;

  /// @brief Field postProfilerEvents, offset 0x10, size 0x1
  __declspec(property(get = __get_postProfilerEvents, put = __set_postProfilerEvents)) bool postProfilerEvents;

  /// @brief Field <InternalIdTransformFunc>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__InternalIdTransformFunc_k__BackingField,
                      put = __set__InternalIdTransformFunc_k__BackingField))::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,
                                                                                             ::StringW>* _InternalIdTransformFunc_k__BackingField;

  /// @brief Field <WebRequestOverride>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__WebRequestOverride_k__BackingField,
                      put = __set__WebRequestOverride_k__BackingField))::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* _WebRequestOverride_k__BackingField;

  /// @brief Field CallbackHooksEnabled, offset 0x28, size 0x1
  __declspec(property(get = __get_CallbackHooksEnabled, put = __set_CallbackHooksEnabled)) bool CallbackHooksEnabled;

  /// @brief Field m_ResourceProviders, offset 0x30, size 0x8
  __declspec(property(get = __get_m_ResourceProviders,
                      put = __set_m_ResourceProviders))::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>* m_ResourceProviders;

  /// @brief Field m_allocator, offset 0x38, size 0x8
  __declspec(property(get = __get_m_allocator, put = __set_m_allocator))::UnityEngine::ResourceManagement::Util::IAllocationStrategy* m_allocator;

  /// @brief Field m_UpdateReceivers, offset 0x40, size 0x8
  __declspec(property(get = __get_m_UpdateReceivers, put = __set_m_UpdateReceivers))::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>* m_UpdateReceivers;

  /// @brief Field m_UpdateReceiversToRemove, offset 0x48, size 0x8
  __declspec(property(get = __get_m_UpdateReceiversToRemove,
                      put = __set_m_UpdateReceiversToRemove))::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>* m_UpdateReceiversToRemove;

  /// @brief Field m_UpdatingReceivers, offset 0x50, size 0x1
  __declspec(property(get = __get_m_UpdatingReceivers, put = __set_m_UpdatingReceivers)) bool m_UpdatingReceivers;

  /// @brief Field m_InsideUpdateMethod, offset 0x51, size 0x1
  __declspec(property(get = __get_m_InsideUpdateMethod, put = __set_m_InsideUpdateMethod)) bool m_InsideUpdateMethod;

  /// @brief Field m_providerMap, offset 0x58, size 0x8
  __declspec(property(get = __get_m_providerMap,
                      put = __set_m_providerMap))::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>* m_providerMap;

  /// @brief Field m_AssetOperationCache, offset 0x60, size 0x8
  __declspec(property(get = __get_m_AssetOperationCache,
                      put = __set_m_AssetOperationCache))::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*,
                                                                                                      ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* m_AssetOperationCache;

  /// @brief Field m_TrackedInstanceOperations, offset 0x68, size 0x8
  __declspec(property(
      get = __get_m_TrackedInstanceOperations,
      put = __set_m_TrackedInstanceOperations))::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>* m_TrackedInstanceOperations;

  /// @brief Field m_UpdateCallbacks, offset 0x70, size 0x8
  __declspec(property(get = __get_m_UpdateCallbacks, put = __set_m_UpdateCallbacks))::GlobalNamespace::DelegateList_1<float_t>* m_UpdateCallbacks;

  /// @brief Field m_DeferredCompleteCallbacks, offset 0x78, size 0x8
  __declspec(
      property(get = __get_m_DeferredCompleteCallbacks,
               put = __set_m_DeferredCompleteCallbacks))::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* m_DeferredCompleteCallbacks;

  /// @brief Field m_InsideExecuteDeferredCallbacksMethod, offset 0x80, size 0x1
  __declspec(property(get = __get_m_InsideExecuteDeferredCallbacksMethod, put = __set_m_InsideExecuteDeferredCallbacksMethod)) bool m_InsideExecuteDeferredCallbacksMethod;

  /// @brief Field m_DeferredCallbacksToRegister, offset 0x88, size 0x8
  __declspec(property(get = __get_m_DeferredCallbacksToRegister, put = __set_m_DeferredCallbacksToRegister))::System::Collections::Generic::List_1<
      ::UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest>* m_DeferredCallbacksToRegister;

  /// @brief Field m_obsoleteDiagnosticsHandler, offset 0x90, size 0x8
  __declspec(property(
      get = __get_m_obsoleteDiagnosticsHandler,
      put = __set_m_obsoleteDiagnosticsHandler))::System::Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,
                                                                   ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType, int32_t, ::System::Object*>* m_obsoleteDiagnosticsHandler;

  /// @brief Field m_diagnosticsHandler, offset 0x98, size 0x8
  __declspec(property(get = __get_m_diagnosticsHandler,
                      put = __set_m_diagnosticsHandler))::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>* m_diagnosticsHandler;

  /// @brief Field m_ReleaseOpNonCached, offset 0xa0, size 0x8
  __declspec(property(get = __get_m_ReleaseOpNonCached,
                      put = __set_m_ReleaseOpNonCached))::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* m_ReleaseOpNonCached;

  /// @brief Field m_ReleaseOpCached, offset 0xa8, size 0x8
  __declspec(property(get = __get_m_ReleaseOpCached, put = __set_m_ReleaseOpCached))::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* m_ReleaseOpCached;

  /// @brief Field m_ReleaseInstanceOp, offset 0xb0, size 0x8
  __declspec(property(get = __get_m_ReleaseInstanceOp, put = __set_m_ReleaseInstanceOp))::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* m_ReleaseInstanceOp;

  /// @brief Field <CertificateHandlerInstance>k__BackingField, offset 0xb8, size 0x8
  __declspec(property(get = __get__CertificateHandlerInstance_k__BackingField,
                      put = __set__CertificateHandlerInstance_k__BackingField))::UnityEngine::Networking::CertificateHandler* _CertificateHandlerInstance_k__BackingField;

  /// @brief Field m_RegisteredForCallbacks, offset 0xc0, size 0x1
  __declspec(property(get = __get_m_RegisteredForCallbacks, put = __set_m_RegisteredForCallbacks)) bool m_RegisteredForCallbacks;

  /// @brief Field m_ProviderOperationTypeCache, offset 0xc8, size 0x8
  __declspec(property(get = __get_m_ProviderOperationTypeCache,
                      put = __set_m_ProviderOperationTypeCache))::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>* m_ProviderOperationTypeCache;

  /// @brief Field <ExceptionHandler>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__ExceptionHandler_k__BackingField,
                             put = setStaticF__ExceptionHandler_k__BackingField))::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,
                                                                                                    ::System::Exception*>* _ExceptionHandler_k__BackingField;

  /// @brief Field s_GroupOperationTypeHash, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_GroupOperationTypeHash, put = setStaticF_s_GroupOperationTypeHash)) int32_t s_GroupOperationTypeHash;

  /// @brief Field s_InstanceOperationTypeHash, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_InstanceOperationTypeHash, put = setStaticF_s_InstanceOperationTypeHash)) int32_t s_InstanceOperationTypeHash;

  __declspec(property(get = get_InternalIdTransformFunc,
                      put = set_InternalIdTransformFunc))::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* InternalIdTransformFunc;

  __declspec(property(get = get_WebRequestOverride, put = set_WebRequestOverride))::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* WebRequestOverride;

  __declspec(property(get = get_OperationCacheCount)) int32_t OperationCacheCount;

  __declspec(property(get = get_InstanceOperationCount)) int32_t InstanceOperationCount;

  __declspec(property(get = get_Allocator, put = set_Allocator))::UnityEngine::ResourceManagement::Util::IAllocationStrategy* Allocator;

  __declspec(property(get = get_ResourceProviders))::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>* ResourceProviders;

  __declspec(property(get = get_CertificateHandlerInstance, put = set_CertificateHandlerInstance))::UnityEngine::Networking::CertificateHandler* CertificateHandlerInstance;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr bool& __get_postProfilerEvents();

  constexpr bool const& __get_postProfilerEvents() const;

  constexpr void __set_postProfilerEvents(bool value);

  constexpr ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>*& __get__InternalIdTransformFunc_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>*> const&
  __get__InternalIdTransformFunc_k__BackingField() const;

  constexpr void __set__InternalIdTransformFunc_k__BackingField(::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* value);

  constexpr ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*& __get__WebRequestOverride_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*> const& __get__WebRequestOverride_k__BackingField() const;

  constexpr void __set__WebRequestOverride_k__BackingField(::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* value);

  constexpr bool& __get_CallbackHooksEnabled();

  constexpr bool const& __get_CallbackHooksEnabled() const;

  constexpr void __set_CallbackHooksEnabled(bool value);

  constexpr ::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*& __get_m_ResourceProviders();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*> const&
  __get_m_ResourceProviders() const;

  constexpr void __set_m_ResourceProviders(::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>* value);

  constexpr ::UnityEngine::ResourceManagement::Util::IAllocationStrategy*& __get_m_allocator();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*> const& __get_m_allocator() const;

  constexpr void __set_m_allocator(::UnityEngine::ResourceManagement::Util::IAllocationStrategy* value);

  constexpr ::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>*& __get_m_UpdateReceivers();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>*> const& __get_m_UpdateReceivers() const;

  constexpr void __set_m_UpdateReceivers(::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>*& __get_m_UpdateReceiversToRemove();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>*> const& __get_m_UpdateReceiversToRemove() const;

  constexpr void __set_m_UpdateReceiversToRemove(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>* value);

  constexpr bool& __get_m_UpdatingReceivers();

  constexpr bool const& __get_m_UpdatingReceivers() const;

  constexpr void __set_m_UpdatingReceivers(bool value);

  constexpr bool& __get_m_InsideUpdateMethod();

  constexpr bool const& __get_m_InsideUpdateMethod() const;

  constexpr void __set_m_InsideUpdateMethod(bool value);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*& __get_m_providerMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*> const&
  __get_m_providerMap() const;

  constexpr void __set_m_providerMap(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*, ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*&
  __get_m_AssetOperationCache();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*, ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*> const&
  __get_m_AssetOperationCache() const;

  constexpr void __set_m_AssetOperationCache(
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*, ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* value);

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>*& __get_m_TrackedInstanceOperations();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>*> const&
  __get_m_TrackedInstanceOperations() const;

  constexpr void __set_m_TrackedInstanceOperations(::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>* value);

  constexpr ::GlobalNamespace::DelegateList_1<float_t>*& __get_m_UpdateCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DelegateList_1<float_t>*> const& __get_m_UpdateCallbacks() const;

  constexpr void __set_m_UpdateCallbacks(::GlobalNamespace::DelegateList_1<float_t>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*& __get_m_DeferredCompleteCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*> const&
  __get_m_DeferredCompleteCallbacks() const;

  constexpr void __set_m_DeferredCompleteCallbacks(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* value);

  constexpr bool& __get_m_InsideExecuteDeferredCallbacksMethod();

  constexpr bool const& __get_m_InsideExecuteDeferredCallbacksMethod() const;

  constexpr void __set_m_InsideExecuteDeferredCallbacksMethod(bool value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest>*& __get_m_DeferredCallbacksToRegister();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest>*> const&
  __get_m_DeferredCallbacksToRegister() const;

  constexpr void __set_m_DeferredCallbacksToRegister(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest>* value);

  constexpr ::System::Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType, int32_t,
                               ::System::Object*>*&
  __get_m_obsoleteDiagnosticsHandler();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,
                                                                   ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType, int32_t, ::System::Object*>*> const&
  __get_m_obsoleteDiagnosticsHandler() const;

  constexpr void __set_m_obsoleteDiagnosticsHandler(::System::Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,
                                                                       ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType, int32_t, ::System::Object*>* value);

  constexpr ::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>*& __get_m_diagnosticsHandler();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>*> const& __get_m_diagnosticsHandler() const;

  constexpr void __set_m_diagnosticsHandler(::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>* value);

  constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*& __get_m_ReleaseOpNonCached();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*> const& __get_m_ReleaseOpNonCached() const;

  constexpr void __set_m_ReleaseOpNonCached(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* value);

  constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*& __get_m_ReleaseOpCached();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*> const& __get_m_ReleaseOpCached() const;

  constexpr void __set_m_ReleaseOpCached(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* value);

  constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*& __get_m_ReleaseInstanceOp();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*> const& __get_m_ReleaseInstanceOp() const;

  constexpr void __set_m_ReleaseInstanceOp(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* value);

  constexpr ::UnityEngine::Networking::CertificateHandler*& __get__CertificateHandlerInstance_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::CertificateHandler*> const& __get__CertificateHandlerInstance_k__BackingField() const;

  constexpr void __set__CertificateHandlerInstance_k__BackingField(::UnityEngine::Networking::CertificateHandler* value);

  constexpr bool& __get_m_RegisteredForCallbacks();

  constexpr bool const& __get_m_RegisteredForCallbacks() const;

  constexpr void __set_m_RegisteredForCallbacks(bool value);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>*& __get_m_ProviderOperationTypeCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>*> const& __get_m_ProviderOperationTypeCache() const;

  constexpr void __set_m_ProviderOperationTypeCache(::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>* value);

  static inline void setStaticF__ExceptionHandler_k__BackingField(::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::System::Exception*>* value);

  static inline ::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::System::Exception*>* getStaticF__ExceptionHandler_k__BackingField();

  static inline void setStaticF_s_GroupOperationTypeHash(int32_t value);

  static inline int32_t getStaticF_s_GroupOperationTypeHash();

  static inline void setStaticF_s_InstanceOperationTypeHash(int32_t value);

  static inline int32_t getStaticF_s_InstanceOperationTypeHash();

  /// @brief Method get_ExceptionHandler, addr 0x2bc9b54, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::System::Exception*>* get_ExceptionHandler();

  /// @brief Method set_ExceptionHandler, addr 0x2bc9bac, size 0x5c, virtual false, abstract: false, final false
  static inline void set_ExceptionHandler(::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::System::Exception*>* value);

  /// @brief Method get_InternalIdTransformFunc, addr 0x2bc9c08, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* get_InternalIdTransformFunc();

  /// @brief Method set_InternalIdTransformFunc, addr 0x2bc9c10, size 0x8, virtual false, abstract: false, final false
  inline void set_InternalIdTransformFunc(::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* value);

  /// @brief Method TransformInternalId, addr 0x2bc9c18, size 0xc4, virtual false, abstract: false, final false
  inline ::StringW TransformInternalId(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  /// @brief Method get_WebRequestOverride, addr 0x2bc9cdc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* get_WebRequestOverride();

  /// @brief Method set_WebRequestOverride, addr 0x2bc9ce4, size 0x8, virtual false, abstract: false, final false
  inline void set_WebRequestOverride(::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* value);

  /// @brief Method get_OperationCacheCount, addr 0x2bc9cec, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_OperationCacheCount();

  /// @brief Method get_InstanceOperationCount, addr 0x2bc9d3c, size 0x48, virtual false, abstract: false, final false
  inline int32_t get_InstanceOperationCount();

  /// @brief Method AddUpdateReceiver, addr 0x2bc9d84, size 0x68, virtual false, abstract: false, final false
  inline void AddUpdateReceiver(::UnityEngine::ResourceManagement::IUpdateReceiver* receiver);

  /// @brief Method RemoveUpdateReciever, addr 0x2bc9dec, size 0x12c, virtual false, abstract: false, final false
  inline void RemoveUpdateReciever(::UnityEngine::ResourceManagement::IUpdateReceiver* receiver);

  /// @brief Method get_Allocator, addr 0x2bc9f18, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::Util::IAllocationStrategy* get_Allocator();

  /// @brief Method set_Allocator, addr 0x2bc9f20, size 0x8, virtual false, abstract: false, final false
  inline void set_Allocator(::UnityEngine::ResourceManagement::Util::IAllocationStrategy* value);

  /// @brief Method get_ResourceProviders, addr 0x2bc9f28, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>* get_ResourceProviders();

  /// @brief Method get_CertificateHandlerInstance, addr 0x2bc9f30, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::CertificateHandler* get_CertificateHandlerInstance();

  /// @brief Method set_CertificateHandlerInstance, addr 0x2bc9f38, size 0x8, virtual false, abstract: false, final false
  inline void set_CertificateHandlerInstance(::UnityEngine::Networking::CertificateHandler* value);

  static inline ::UnityEngine::ResourceManagement::ResourceManager* New_ctor(::UnityEngine::ResourceManagement::Util::IAllocationStrategy* alloc);

  /// @brief Method .ctor, addr 0x2bc9f40, size 0x48c, virtual false, abstract: false, final false
  /// @param alloc: ::UnityEngine::ResourceManagement::Util::IAllocationStrategy* (default: nullptr)
  inline void _ctor(::UnityEngine::ResourceManagement::Util::IAllocationStrategy* alloc = nullptr);

  /// @brief Method OnObjectAdded, addr 0x2bca5a4, size 0x74, virtual false, abstract: false, final false
  inline void OnObjectAdded(::System::Object* obj);

  /// @brief Method OnObjectRemoved, addr 0x2bca618, size 0x74, virtual false, abstract: false, final false
  inline void OnObjectRemoved(::System::Object* obj);

  /// @brief Method RegisterForCallbacks, addr 0x2bca68c, size 0xcc, virtual false, abstract: false, final false
  inline void RegisterForCallbacks();

  /// @brief Method ClearDiagnosticsCallback, addr 0x2bca758, size 0x8, virtual false, abstract: false, final false
  inline void ClearDiagnosticsCallback();

  /// @brief Method ClearDiagnosticCallbacks, addr 0x2bca760, size 0x8, virtual false, abstract: false, final false
  inline void ClearDiagnosticCallbacks();

  /// @brief Method UnregisterDiagnosticCallback, addr 0x2bca768, size 0xfc, virtual false, abstract: false, final false
  inline void UnregisterDiagnosticCallback(::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>* func);

  /// @brief Method RegisterDiagnosticCallback, addr 0x2bca864, size 0x8, virtual false, abstract: false, final false
  inline void RegisterDiagnosticCallback(::System::Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,
                                                            ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType, int32_t, ::System::Object*>* func);

  /// @brief Method RegisterDiagnosticCallback, addr 0x2bca86c, size 0xa8, virtual false, abstract: false, final false
  inline void RegisterDiagnosticCallback(::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>* func);

  /// @brief Method PostDiagnosticEvent, addr 0x2bca914, size 0x118, virtual false, abstract: false, final false
  inline void PostDiagnosticEvent(::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext context);

  /// @brief Method GetResourceProvider, addr 0x2bcaa2c, size 0x448, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* GetResourceProvider(::System::Type* t,
                                                                                                      ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  /// @brief Method GetDefaultTypeForLocation, addr 0x2bcae74, size 0x148, virtual false, abstract: false, final false
  inline ::System::Type* GetDefaultTypeForLocation(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* loc);

  /// @brief Method CalculateLocationsHash, addr 0x2bcafbc, size 0x450, virtual false, abstract: false, final false
  /// @param t: ::System::Type* (default: nullptr)
  inline int32_t CalculateLocationsHash(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, ::System::Type* t = nullptr);

  /// @brief Method ProvideResource, addr 0x2bcb40c, size 0x7d0, virtual false, abstract: false, final false
  /// @param desiredType: ::System::Type* (default: nullptr)
  /// @param releaseDependenciesOnFailure: bool (default: true)
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle ProvideResource(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                                                  ::System::Type* desiredType = nullptr, bool releaseDependenciesOnFailure = true);

  /// @brief Method ProvideResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> ProvideResource(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  /// @brief Method StartOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>
  StartOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>* operation, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dependency);

  /// @brief Method StartOperation, addr 0x2bcc544, size 0x174, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle StartOperation(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* operation,
                                                                                                 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dependency);

  /// @brief Method OnInstanceOperationDestroy, addr 0x2bcc6b8, size 0x144, virtual false, abstract: false, final false
  inline void OnInstanceOperationDestroy(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* o);

  /// @brief Method OnOperationDestroyNonCached, addr 0x2bcc7fc, size 0xd4, virtual false, abstract: false, final false
  inline void OnOperationDestroyNonCached(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* o);

  /// @brief Method OnOperationDestroyCached, addr 0x2bcc8d0, size 0x1d4, virtual false, abstract: false, final false
  inline void OnOperationDestroyCached(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* o);

  /// @brief Method CreateOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline T CreateOperation(::System::Type* actualType, int32_t typeHash, ::UnityEngine::ResourceManagement::Util::IOperationCacheKey* cacheKey,
                           ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* onDestroyAction);

  /// @brief Method AddOperationToCache, addr 0x2bccb1c, size 0x88, virtual false, abstract: false, final false
  inline void AddOperationToCache(::UnityEngine::ResourceManagement::Util::IOperationCacheKey* key, ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* operation);

  /// @brief Method RemoveOperationFromCache, addr 0x2bccaa4, size 0x78, virtual false, abstract: false, final false
  inline bool RemoveOperationFromCache(::UnityEngine::ResourceManagement::Util::IOperationCacheKey* key);

  /// @brief Method IsOperationCached, addr 0x2bccba4, size 0x58, virtual false, abstract: false, final false
  inline bool IsOperationCached(::UnityEngine::ResourceManagement::Util::IOperationCacheKey* key);

  /// @brief Method CachedOperationCount, addr 0x2bccbfc, size 0x50, virtual false, abstract: false, final false
  inline int32_t CachedOperationCount();

  /// @brief Method CreateCompletedOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> CreateCompletedOperation(TObject result, ::StringW errorMsg);

  /// @brief Method CreateCompletedOperationWithException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> CreateCompletedOperationWithException(TObject result, ::System::Exception* exception);

  /// @brief Method CreateCompletedOperationInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  /// @param releaseDependenciesOnFailure: bool (default: true)
  template <typename TObject>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> CreateCompletedOperationInternal(TObject result, bool success, ::System::Exception* exception,
                                                                                                                              bool releaseDependenciesOnFailure = true);

  /// @brief Method Release, addr 0x2bccc4c, size 0x8, virtual false, abstract: false, final false
  inline void Release(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle);

  /// @brief Method Acquire, addr 0x2bccd08, size 0x20, virtual false, abstract: false, final false
  inline void Acquire(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle);

  /// @brief Method AcquireGroupOpFromCache, addr 0x2bccdec, size 0x13c, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation* AcquireGroupOpFromCache(::UnityEngine::ResourceManagement::Util::IOperationCacheKey* key);

  /// @brief Method CreateGroupOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
  CreateGroupOperation(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations);

  /// @brief Method CreateGroupOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
  CreateGroupOperation(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, bool allowFailedDependencies);

  /// @brief Method CreateGenericGroupOperation, addr 0x2bccf28, size 0x19c, virtual false, abstract: false, final false
  /// @param releasedCachedOpOnComplete: bool (default: false)
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
  CreateGenericGroupOperation(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* operations, bool releasedCachedOpOnComplete = false);

  /// @brief Method ProvideResourceGroupCached, addr 0x2bcbdc8, size 0x77c, virtual false, abstract: false, final false
  /// @param releaseDependenciesOnFailure: bool (default: true)
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
  ProvideResourceGroupCached(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, int32_t groupHash,
                             ::System::Type* desiredType, ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* callback,
                             bool releaseDependenciesOnFailure = true);

  /// @brief Method ProvideResources, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  /// @param callback: ::System::Action_1<TObject>* (default: nullptr)
  template <typename TObject>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  ProvideResources(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, ::System::Action_1<TObject>* callback = nullptr);

  /// @brief Method ProvideResources, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  /// @param callback: ::System::Action_1<TObject>* (default: nullptr)
  template <typename TObject>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
  ProvideResources(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, bool releaseDependenciesOnFailure,
                   ::System::Action_1<TObject>* callback = nullptr);

  /// @brief Method CreateChainOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject, typename TObjectDependency>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>
  CreateChainOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency> dependentOp,
                       ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>,
                                        ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* callback);

  /// @brief Method CreateChainOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> CreateChainOperation(
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dependentOp,
      ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* callback);

  /// @brief Method CreateChainOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  /// @param releaseDependenciesOnFailure: bool (default: true)
  template <typename TObject, typename TObjectDependency>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>
  CreateChainOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency> dependentOp,
                       ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>,
                                        ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* callback,
                       bool releaseDependenciesOnFailure = true);

  /// @brief Method CreateChainOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  /// @param releaseDependenciesOnFailure: bool (default: true)
  template <typename TObject>
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> CreateChainOperation(
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dependentOp,
      ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* callback,
      bool releaseDependenciesOnFailure = true);

  /// @brief Method ProvideScene, addr 0x2bcd330, size 0x140, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  ProvideScene(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider* sceneProvider, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
               ::UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority);

  /// @brief Method ReleaseScene, addr 0x2bcd470, size 0x130, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  ReleaseScene(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider* sceneProvider,
               ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> sceneLoadHandle);

  /// @brief Method ProvideInstance, addr 0x2bcd5a0, size 0x2b4, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::GameObject*>
  ProvideInstance(::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* provider, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                  ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters);

  /// @brief Method CleanupSceneInstances, addr 0x2bcd884, size 0x408, virtual false, abstract: false, final false
  inline void CleanupSceneInstances(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method ExecuteDeferredCallbacks, addr 0x2bcdc8c, size 0x1b4, virtual false, abstract: false, final false
  inline void ExecuteDeferredCallbacks();

  /// @brief Method RegisterForDeferredCallback, addr 0x2bcde40, size 0x210, virtual false, abstract: false, final false
  /// @param incrementRefCount: bool (default: true)
  inline void RegisterForDeferredCallback(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* op, bool incrementRefCount = true);

  /// @brief Method Update, addr 0x2bce050, size 0x414, virtual false, abstract: false, final false
  inline void Update(float_t unscaledDeltaTime);

  /// @brief Method Dispose, addr 0x2bce464, size 0xd8, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method <.ctor>b__53_0, addr 0x2bce61c, size 0x4, virtual false, abstract: false, final false
  inline void __ctor_b__53_0(::UnityEngine::ResourceManagement::IUpdateReceiver* x);

  // Ctor Parameters [CppParam { name: "", ty: "ResourceManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourceManager(ResourceManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourceManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourceManager(ResourceManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceManager();

public:
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
  ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>* ___m_TrackedInstanceOperations;

  /// @brief Field m_UpdateCallbacks, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::DelegateList_1<float_t>* ___m_UpdateCallbacks;

  /// @brief Field m_DeferredCompleteCallbacks, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* ___m_DeferredCompleteCallbacks;

  /// @brief Field m_InsideExecuteDeferredCallbacksMethod, offset: 0x80, size: 0x1, def value: None
  bool ___m_InsideExecuteDeferredCallbacksMethod;

  /// @brief Field m_DeferredCallbacksToRegister, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest>* ___m_DeferredCallbacksToRegister;

  /// @brief Field m_obsoleteDiagnosticsHandler, offset: 0x90, size: 0x8, def value: None
  ::System::Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType, int32_t, ::System::Object*>*
      ___m_obsoleteDiagnosticsHandler;

  /// @brief Field m_diagnosticsHandler, offset: 0x98, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>* ___m_diagnosticsHandler;

  /// @brief Field m_ReleaseOpNonCached, offset: 0xa0, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* ___m_ReleaseOpNonCached;

  /// @brief Field m_ReleaseOpCached, offset: 0xa8, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* ___m_ReleaseOpCached;

  /// @brief Field m_ReleaseInstanceOp, offset: 0xb0, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* ___m_ReleaseInstanceOp;

  /// @brief Field <CertificateHandlerInstance>k__BackingField, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::Networking::CertificateHandler* ____CertificateHandlerInstance_k__BackingField;

  /// @brief Field m_RegisteredForCallbacks, offset: 0xc0, size: 0x1, def value: None
  bool ___m_RegisteredForCallbacks;

  /// @brief Field m_ProviderOperationTypeCache, offset: 0xc8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>* ___m_ProviderOperationTypeCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceManager, 0xd0>, "Size mismatch!");

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

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager, ___m_InsideExecuteDeferredCallbacksMethod) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager, ___m_DeferredCallbacksToRegister) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager, ___m_obsoleteDiagnosticsHandler) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager, ___m_diagnosticsHandler) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager, ___m_ReleaseOpNonCached) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager, ___m_ReleaseOpCached) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager, ___m_ReleaseInstanceOp) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager, ____CertificateHandlerInstance_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager, ___m_RegisteredForCallbacks) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceManager, ___m_ProviderOperationTypeCache) == 0xc8, "Offset mismatch!");

} // namespace UnityEngine::ResourceManagement
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType, "UnityEngine.ResourceManagement", "ResourceManager/DiagnosticEventType");
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceManager*, "UnityEngine.ResourceManagement", "ResourceManager");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1, "UnityEngine.ResourceManagement", "ResourceManager/CompletedOperation`1");
NEED_NO_BOX(::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*, "UnityEngine.ResourceManagement", "ResourceManager/InstanceOperation");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass92_0_1, "UnityEngine.ResourceManagement", "ResourceManager/<>c__DisplayClass92_0`1");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest, "UnityEngine.ResourceManagement", "ResourceManager/DeferredCallbackRegisterRequest");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext, "UnityEngine.ResourceManagement", "ResourceManager/DiagnosticEventContext");
