#pragma once
// IWYU pragma private; include "UnityEngine\ResourceManagement\ResourceManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__InstantiationParameters_impl.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_impl.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
#include "GlobalNamespace/zzzz__DelegateList_1_def.hpp"
#include "GlobalNamespace/zzzz__ListWithEvents_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Networking/zzzz__CertificateHandler_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__DownloadStatus_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__GroupOperation_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__IAsyncOperation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__IInstanceProvider_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__IResourceProvider_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ISceneProvider_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__InstantiationParameters_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneReleaseMode_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__IAllocationStrategy_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__IOperationCacheKey_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__IUpdateReceiver_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneParameters_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType::ResourceManager_DiagnosticEventType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType::ResourceManager_DiagnosticEventType() {}
constexpr ::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType::AsyncOperationFail{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType::AsyncOperationCreate{ static_cast<int32_t>(
    0x1) };
constexpr ::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType::AsyncOperationPercentComplete{
  static_cast<int32_t>(0x2)
};
constexpr ::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType::AsyncOperationComplete{ static_cast<int32_t>(
    0x3) };
constexpr ::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType::AsyncOperationReferenceCount{
  static_cast<int32_t>(0x4)
};
constexpr ::UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType UnityEngine::ResourceManagement::ResourceManager_DiagnosticEventType::AsyncOperationDestroy{ static_cast<int32_t>(
    0x5) };
// Ctor Parameters [CppParam { name: "operation", ty: "::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "incrementRefCount", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::ResourceManager_DeferredCallbackRegisterRequest::ResourceManager_DeferredCallbackRegisterRequest(
    ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* operation, bool incrementRefCount) noexcept {
  this->operation = operation;
  this->incrementRefCount = incrementRefCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceManager_DeferredCallbackRegisterRequest::ResourceManager_DeferredCallbackRegisterRequest() {}
template <typename TObject> constexpr bool& UnityEngine::ResourceManagement::ResourceManager_CompletedOperation_1<TObject>::__cordl_internal_get_m_Success() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Success;
}
template <typename TObject> constexpr bool const& UnityEngine::ResourceManagement::ResourceManager_CompletedOperation_1<TObject>::__cordl_internal_get_m_Success() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Success;
}
template <typename TObject> constexpr void UnityEngine::ResourceManagement::ResourceManager_CompletedOperation_1<TObject>::__cordl_internal_set_m_Success(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Success = value;
}
template <typename TObject> constexpr ::System::Exception*& UnityEngine::ResourceManagement::ResourceManager_CompletedOperation_1<TObject>::__cordl_internal_get_m_Exception() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Exception;
}
template <typename TObject> constexpr ::System::Exception* const& UnityEngine::ResourceManagement::ResourceManager_CompletedOperation_1<TObject>::__cordl_internal_get_m_Exception() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Exception;
}
template <typename TObject> constexpr void UnityEngine::ResourceManagement::ResourceManager_CompletedOperation_1<TObject>::__cordl_internal_set_m_Exception(::System::Exception* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Exception = value;
}
template <typename TObject> constexpr bool& UnityEngine::ResourceManagement::ResourceManager_CompletedOperation_1<TObject>::__cordl_internal_get_m_ReleaseDependenciesOnFailure() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReleaseDependenciesOnFailure;
}
template <typename TObject> constexpr bool const& UnityEngine::ResourceManagement::ResourceManager_CompletedOperation_1<TObject>::__cordl_internal_get_m_ReleaseDependenciesOnFailure() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReleaseDependenciesOnFailure;
}
template <typename TObject> constexpr void UnityEngine::ResourceManagement::ResourceManager_CompletedOperation_1<TObject>::__cordl_internal_set_m_ReleaseDependenciesOnFailure(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReleaseDependenciesOnFailure = value;
}
template <typename TObject> inline void UnityEngine::ResourceManagement::ResourceManager_CompletedOperation_1<TObject>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager_CompletedOperation_1<TObject>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::ResourceManager_CompletedOperation_1<TObject>::Init(TObject result, bool success, ::StringW errorMsg, bool releaseDependenciesOnFailure) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager_CompletedOperation_1<TObject>*>(),
                                                           { "Init", {}, { ::i2c::type_of<TObject>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, success, errorMsg, releaseDependenciesOnFailure);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::ResourceManager_CompletedOperation_1<TObject>::Init(TObject result, bool success, ::System::Exception* exception, bool releaseDependenciesOnFailure) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager_CompletedOperation_1<TObject>*>(),
                                                           { "Init", {}, { ::i2c::type_of<TObject>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, success, exception, releaseDependenciesOnFailure);
}
template <typename TObject> inline ::StringW UnityEngine::ResourceManagement::ResourceManager_CompletedOperation_1<TObject>::get_DebugName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager_CompletedOperation_1<TObject>*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename TObject> inline bool UnityEngine::ResourceManagement::ResourceManager_CompletedOperation_1<TObject>::InvokeWaitForCompletion() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager_CompletedOperation_1<TObject>*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::ResourceManager_CompletedOperation_1<TObject>::Execute() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager_CompletedOperation_1<TObject>*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::ResourceManager_CompletedOperation_1<TObject>* UnityEngine::ResourceManagement::ResourceManager_CompletedOperation_1<TObject>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::ResourceManager_CompletedOperation_1<TObject>*>());
}
// Ctor Parameters []
template <typename TObject> constexpr ::UnityEngine::ResourceManagement::ResourceManager_CompletedOperation_1<TObject>::ResourceManager_CompletedOperation_1() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::*)(
    ::UnityEngine::ResourceManagement::ResourceManager*, ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*,
    ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>)>(
    &::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::Init)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x690f568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*>(),
                            { "Init",
                              {},
                              { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceManager*>(), ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*>(),
                                ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>(),
                                ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation.GetDownloadStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus (::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::*)(
    ::System::Collections::Generic::HashSet_1<::System::Object*>*)>(&::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::GetDownloadStatus)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6910260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation.GetDependencies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(
    &::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::GetDependencies)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6910340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation.get_DebugName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::*)()>(
    &::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::get_DebugName)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6910424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation.InstanceScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SceneManagement::Scene (::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::*)()>(
    &::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::InstanceScene)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6910560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*>(), { "InstanceScene", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation.Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::*)()>(
    &::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::Destroy)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6910568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation.get_Progress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::*)()>(
    &::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::get_Progress)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6910620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation.InvokeWaitForCompletion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::*)()>(
    &::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x691066c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::*)()>(
    &::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::Execute)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x69107cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::*)()>(
    &::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6910a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>&
UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::__cordl_internal_get_m_dependency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_dependency;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> const&
UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::__cordl_internal_get_m_dependency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_dependency;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::__cordl_internal_set_m_dependency(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_dependency = value;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters&
UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::__cordl_internal_get_m_instantiationParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_instantiationParams;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters const&
UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::__cordl_internal_get_m_instantiationParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_instantiationParams;
}
constexpr void
UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::__cordl_internal_set_m_instantiationParams(::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_instantiationParams = value;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*& UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::__cordl_internal_get_m_instanceProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_instanceProvider;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* const&
UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::__cordl_internal_get_m_instanceProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_instanceProvider;
}
constexpr void
UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::__cordl_internal_set_m_instanceProvider(::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_instanceProvider = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::__cordl_internal_get_m_instance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_instance;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::__cordl_internal_get_m_instance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_instance;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::__cordl_internal_set_m_instance(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_instance = value;
}
constexpr ::UnityEngine::SceneManagement::Scene& UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::__cordl_internal_get_m_scene() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_scene;
}
constexpr ::UnityEngine::SceneManagement::Scene const& UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::__cordl_internal_get_m_scene() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_scene;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::__cordl_internal_set_m_scene(::UnityEngine::SceneManagement::Scene value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_scene = value;
}
inline void
UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::Init(::UnityEngine::ResourceManagement::ResourceManager* rm,
                                                                         ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* instanceProvider,
                                                                         ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiationParams,
                                                                         ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> dependency) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*>(),
                          { "Init",
                            {},
                            { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceManager*>(), ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*>(),
                              ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>(),
                              ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rm, instanceProvider, instantiationParams, dependency);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus
UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::GetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>* visited) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>(this, ___internal_method, visited);
}
inline void UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::GetDependencies(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* deps) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deps);
}
inline ::StringW UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::get_DebugName() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::SceneManagement::Scene UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::InstanceScene() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*>(), { "InstanceScene", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::Scene>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::Destroy() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::get_Progress() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::InvokeWaitForCompletion() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::Execute() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation* UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation::ResourceManager_InstanceOperation() {}
template <typename TObject> constexpr ::System::Action_1<TObject>*& UnityEngine::ResourceManagement::ResourceManager___c__DisplayClass90_0_1<TObject>::__cordl_internal_get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TObject> constexpr ::System::Action_1<TObject>* const& UnityEngine::ResourceManagement::ResourceManager___c__DisplayClass90_0_1<TObject>::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TObject> constexpr void UnityEngine::ResourceManagement::ResourceManager___c__DisplayClass90_0_1<TObject>::__cordl_internal_set_callback(::System::Action_1<TObject>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___callback = value;
}
template <typename TObject> constexpr bool& UnityEngine::ResourceManagement::ResourceManager___c__DisplayClass90_0_1<TObject>::__cordl_internal_get_releaseDependenciesOnFailure() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___releaseDependenciesOnFailure;
}
template <typename TObject> constexpr bool const& UnityEngine::ResourceManagement::ResourceManager___c__DisplayClass90_0_1<TObject>::__cordl_internal_get_releaseDependenciesOnFailure() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___releaseDependenciesOnFailure;
}
template <typename TObject> constexpr void UnityEngine::ResourceManagement::ResourceManager___c__DisplayClass90_0_1<TObject>::__cordl_internal_set_releaseDependenciesOnFailure(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___releaseDependenciesOnFailure = value;
}
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::ResourceManager*& UnityEngine::ResourceManagement::ResourceManager___c__DisplayClass90_0_1<TObject>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::ResourceManager* const& UnityEngine::ResourceManagement::ResourceManager___c__DisplayClass90_0_1<TObject>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TObject>
constexpr void UnityEngine::ResourceManagement::ResourceManager___c__DisplayClass90_0_1<TObject>::__cordl_internal_set___4__this(::UnityEngine::ResourceManagement::ResourceManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
template <typename TObject> inline void UnityEngine::ResourceManagement::ResourceManager___c__DisplayClass90_0_1<TObject>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager___c__DisplayClass90_0_1<TObject>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::ResourceManager___c__DisplayClass90_0_1<TObject>::_ProvideResources_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager___c__DisplayClass90_0_1<TObject>*>(),
                                                           { "<ProvideResources>b__0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
UnityEngine::ResourceManagement::ResourceManager___c__DisplayClass90_0_1<TObject>::_ProvideResources_b__1(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle resultHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager___c__DisplayClass90_0_1<TObject>*>(),
                                                           { "<ProvideResources>b__1", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>>(this, ___internal_method,
                                                                                                                                                                            resultHandle);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::ResourceManager___c__DisplayClass90_0_1<TObject>* UnityEngine::ResourceManagement::ResourceManager___c__DisplayClass90_0_1<TObject>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::ResourceManager___c__DisplayClass90_0_1<TObject>*>());
}
// Ctor Parameters []
template <typename TObject> constexpr ::UnityEngine::ResourceManagement::ResourceManager___c__DisplayClass90_0_1<TObject>::ResourceManager___c__DisplayClass90_0_1() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.get_ExceptionHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::System::Exception*>* (*)()>(
    &::UnityEngine::ResourceManagement::ResourceManager::get_ExceptionHandler)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x690b2f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(), { "get_ExceptionHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.set_ExceptionHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::System::Exception*>*)>(
    &::UnityEngine::ResourceManagement::ResourceManager::set_ExceptionHandler)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x690b350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                         { "set_ExceptionHandler", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::System::Exception*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.get_InternalIdTransformFunc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* (
    ::UnityEngine::ResourceManagement::ResourceManager::*)()>(&::UnityEngine::ResourceManagement::ResourceManager::get_InternalIdTransformFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x690b3b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(), { "get_InternalIdTransformFunc", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.set_InternalIdTransformFunc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(
    ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>*)>(&::UnityEngine::ResourceManagement::ResourceManager::set_InternalIdTransformFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x690b3b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                            { "set_InternalIdTransformFunc", {}, { ::i2c::type_of<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.TransformInternalId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(
    &::UnityEngine::ResourceManagement::ResourceManager::TransformInternalId)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x690b3c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                             { "TransformInternalId", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.get_WebRequestOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* (::UnityEngine::ResourceManagement::ResourceManager::*)()>(
    &::UnityEngine::ResourceManagement::ResourceManager::get_WebRequestOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x690b494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(), { "get_WebRequestOverride", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.set_WebRequestOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*)>(
    &::UnityEngine::ResourceManagement::ResourceManager::set_WebRequestOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x690b49c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                             { "set_WebRequestOverride", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.get_OperationCacheCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ResourceManagement::ResourceManager::*)()>(
    &::UnityEngine::ResourceManagement::ResourceManager::get_OperationCacheCount)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x690b4a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(), { "get_OperationCacheCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.get_InstanceOperationCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ResourceManagement::ResourceManager::*)()>(
    &::UnityEngine::ResourceManagement::ResourceManager::get_InstanceOperationCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x690b4fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(), { "get_InstanceOperationCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.get_DeferredCompleteCallbacksCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ResourceManagement::ResourceManager::*)()>(
    &::UnityEngine::ResourceManagement::ResourceManager::get_DeferredCompleteCallbacksCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x690b54c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(), { "get_DeferredCompleteCallbacksCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.get_DeferredCallbackCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ResourceManagement::ResourceManager::*)()>(
    &::UnityEngine::ResourceManagement::ResourceManager::get_DeferredCallbackCount)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x690b59c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(), { "get_DeferredCallbackCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.AddUpdateReceiver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::IUpdateReceiver*)>(
    &::UnityEngine::ResourceManagement::ResourceManager::AddUpdateReceiver)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x690b5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                                                           { "AddUpdateReceiver", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::IUpdateReceiver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.RemoveUpdateReciever
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::IUpdateReceiver*)>(
    &::UnityEngine::ResourceManagement::ResourceManager::RemoveUpdateReciever)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x690b668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                                                           { "RemoveUpdateReciever", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::IUpdateReceiver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.get_Allocator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::Util::IAllocationStrategy* (::UnityEngine::ResourceManagement::ResourceManager::*)()>(
    &::UnityEngine::ResourceManagement::ResourceManager::get_Allocator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x690b7b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(), { "get_Allocator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.set_Allocator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::Util::IAllocationStrategy*)>(
    &::UnityEngine::ResourceManagement::ResourceManager::set_Allocator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x690b7b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                             { "set_Allocator", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.get_ResourceProviders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>* (
    ::UnityEngine::ResourceManagement::ResourceManager::*)()>(&::UnityEngine::ResourceManagement::ResourceManager::get_ResourceProviders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x690b7c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(), { "get_ResourceProviders", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.get_CertificateHandlerInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::CertificateHandler* (::UnityEngine::ResourceManagement::ResourceManager::*)()>(
    &::UnityEngine::ResourceManagement::ResourceManager::get_CertificateHandlerInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x690b7c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(), { "get_CertificateHandlerInstance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.set_CertificateHandlerInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::Networking::CertificateHandler*)>(
    &::UnityEngine::ResourceManagement::ResourceManager::set_CertificateHandlerInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x690b7d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                             { "set_CertificateHandlerInstance", {}, { ::i2c::type_of<::UnityEngine::Networking::CertificateHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::Util::IAllocationStrategy*)>(
    &::UnityEngine::ResourceManagement::ResourceManager::_ctor)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0x690b7d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.OnObjectAdded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::System::Object*)>(
    &::UnityEngine::ResourceManagement::ResourceManager::OnObjectAdded)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x690c14c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(), { "OnObjectAdded", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.OnObjectRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::System::Object*)>(
    &::UnityEngine::ResourceManagement::ResourceManager::OnObjectRemoved)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x690c1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(), { "OnObjectRemoved", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.RegisterForCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)()>(&::UnityEngine::ResourceManagement::ResourceManager::RegisterForCallbacks)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x690c23c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(), { "RegisterForCallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.GetResourceProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* (
    ::UnityEngine::ResourceManagement::ResourceManager::*)(::System::Type*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(
    &::UnityEngine::ResourceManagement::ResourceManager::GetResourceProvider)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x690c348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                            { "GetResourceProvider", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.GetDefaultTypeForLocation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Type* (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(
        &::UnityEngine::ResourceManagement::ResourceManager::GetDefaultTypeForLocation)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x690c77c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                             { "GetDefaultTypeForLocation", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.CalculateLocationsHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ResourceManagement::ResourceManager::*)(
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*, ::System::Type*)>(
    &::UnityEngine::ResourceManagement::ResourceManager::CalculateLocationsHash)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x690c8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                             { "CalculateLocationsHash",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(),
                                                                 ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.ProvideResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (::UnityEngine::ResourceManagement::ResourceManager::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::System::Type*, bool)>(&::UnityEngine::ResourceManagement::ResourceManager::ProvideResource)> {
  constexpr static std::size_t size = 0x7c0;
  constexpr static std::size_t addrs = 0x690ccac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
            { "ProvideResource", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.GetOperationFromCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* (
    ::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::System::Type*)>(
    &::UnityEngine::ResourceManagement::ResourceManager::GetOperationFromCache)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x690df44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                            { "GetOperationFromCache", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.CreateCacheKeyForLocation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::Util::IOperationCacheKey* (
    ::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*,
                                                           ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::System::Type*)>(
    &::UnityEngine::ResourceManagement::ResourceManager::CreateCacheKeyForLocation)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x690d490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                             { "CreateCacheKeyForLocation",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>(),
                                                                 ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.StartOperation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (::UnityEngine::ResourceManagement::ResourceManager::*)(
    ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(
    &::UnityEngine::ResourceManagement::ResourceManager::StartOperation)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x690ddd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                                                           { "StartOperation",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>(),
                                                                                               ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.OnInstanceOperationDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*)>(
    &::UnityEngine::ResourceManagement::ResourceManager::OnInstanceOperationDestroy)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x690e09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                             { "OnInstanceOperationDestroy", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.OnOperationDestroyNonCached
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*)>(
    &::UnityEngine::ResourceManagement::ResourceManager::OnOperationDestroyNonCached)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x690e204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                             { "OnOperationDestroyNonCached", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.OnOperationDestroyCached
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*)>(
    &::UnityEngine::ResourceManagement::ResourceManager::OnOperationDestroyCached)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x690e2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                             { "OnOperationDestroyCached", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.AddOperationToCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*,
                                                                                                                    ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*)>(
    &::UnityEngine::ResourceManagement::ResourceManager::AddOperationToCache)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x690e5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                                                           { "AddOperationToCache",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>(),
                                                                                               ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.RemoveOperationFromCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*)>(
    &::UnityEngine::ResourceManagement::ResourceManager::RemoveOperationFromCache)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x690e520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                             { "RemoveOperationFromCache", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.IsOperationCached
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*)>(
    &::UnityEngine::ResourceManagement::ResourceManager::IsOperationCached)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x690e644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                             { "IsOperationCached", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.CachedOperationCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ResourceManagement::ResourceManager::*)()>(&::UnityEngine::ResourceManagement::ResourceManager::CachedOperationCount)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x690e6c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(), { "CachedOperationCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.ClearOperationCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)()>(&::UnityEngine::ResourceManagement::ResourceManager::ClearOperationCache)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x690e718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(), { "ClearOperationCache", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(
    &::UnityEngine::ResourceManagement::ResourceManager::Release)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x690e76c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                             { "Release", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.Acquire
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(
    &::UnityEngine::ResourceManagement::ResourceManager::Acquire)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x690e82c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                             { "Acquire", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.AcquireGroupOpFromCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation* (
    ::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*)>(
    &::UnityEngine::ResourceManagement::ResourceManager::AcquireGroupOpFromCache)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x690e91c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                             { "AcquireGroupOpFromCache", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.CreateGenericGroupOperation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> (
        ::UnityEngine::ResourceManagement::ResourceManager::*)(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*, bool)>(
    &::UnityEngine::ResourceManagement::ResourceManager::CreateGenericGroupOperation)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x690ea64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                            { "CreateGenericGroupOperation",
                              {},
                              { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.ProvideResourceGroupCached
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> (::UnityEngine::ResourceManagement::ResourceManager::*)(
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*, int32_t, ::System::Type*,
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*, bool)>(&::UnityEngine::ResourceManagement::ResourceManager::ProvideResourceGroupCached)> {
  constexpr static std::size_t size = 0x780;
  constexpr static std::size_t addrs = 0x690d654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                { "ProvideResourceGroupCached",
                                                  {},
                                                  { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>(),
                                                    ::i2c::type_of<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.ProvideScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (
    ::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*,
                                                           ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::SceneManagement::LoadSceneMode, bool, int32_t)>(
    &::UnityEngine::ResourceManagement::ResourceManager::ProvideScene)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x690ed80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                             { "ProvideScene",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*>(),
                                                                 ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                                                                 ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.ProvideScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (
    ::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*,
                                                           ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::SceneManagement::LoadSceneParameters, bool,
                                                           int32_t)>(&::UnityEngine::ResourceManagement::ResourceManager::ProvideScene)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x690eed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                             { "ProvideScene",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*>(),
                                                                 ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                                                                 ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.ProvideScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (
    ::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*,
                                                           ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::SceneManagement::LoadSceneParameters,
                                                           ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode, bool, int32_t)>(
    &::UnityEngine::ResourceManagement::ResourceManager::ProvideScene)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x690f020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                            { "ProvideScene",
                              {},
                              { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*>(),
                                ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(),
                                ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.ReleaseScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (
    ::UnityEngine::ResourceManagement::ResourceManager::*)(
    ::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*,
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>)>(
    &::UnityEngine::ResourceManagement::ResourceManager::ReleaseScene)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x690f178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                         { "ReleaseScene",
                           {},
                           { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*>(),
                             ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.ProvideInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> (::UnityEngine::ResourceManagement::ResourceManager::*)(
        ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,
        ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters)>(&::UnityEngine::ResourceManagement::ResourceManager::ProvideInstance)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x690f2c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                                                           { "ProvideInstance",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*>(),
                                                                                               ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                                                                                               ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.CleanupSceneInstances
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::SceneManagement::Scene)>(
    &::UnityEngine::ResourceManagement::ResourceManager::CleanupSceneInstances)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x690f598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                                                           { "CleanupSceneInstances", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.ExecuteDeferredCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)()>(&::UnityEngine::ResourceManagement::ResourceManager::ExecuteDeferredCallbacks)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x690f908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(), { "ExecuteDeferredCallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.RegisterForDeferredCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*, bool)>(
    &::UnityEngine::ResourceManagement::ResourceManager::RegisterForDeferredCallback)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x690fad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                         { "RegisterForDeferredCallback", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(float_t)>(&::UnityEngine::ResourceManagement::ResourceManager::Update)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x690fcf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(), { "Update", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)()>(&::UnityEngine::ResourceManagement::ResourceManager::Dispose)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6910060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.__ctor_b__53_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::IUpdateReceiver*)>(
    &::UnityEngine::ResourceManagement::ResourceManager::__ctor_b__53_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x691025c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                                                           { "<.ctor>b__53_0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::IUpdateReceiver*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>*&
UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get__InternalIdTransformFunc_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InternalIdTransformFunc_k__BackingField;
}
constexpr ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* const&
UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get__InternalIdTransformFunc_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InternalIdTransformFunc_k__BackingField;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set__InternalIdTransformFunc_k__BackingField(
    ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____InternalIdTransformFunc_k__BackingField = value;
}
constexpr ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get__WebRequestOverride_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____WebRequestOverride_k__BackingField;
}
constexpr ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* const& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get__WebRequestOverride_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____WebRequestOverride_k__BackingField;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set__WebRequestOverride_k__BackingField(::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____WebRequestOverride_k__BackingField = value;
}
constexpr bool& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_CallbackHooksEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CallbackHooksEnabled;
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_CallbackHooksEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CallbackHooksEnabled;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_CallbackHooksEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CallbackHooksEnabled = value;
}
constexpr ::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*&
UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_ResourceProviders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResourceProviders;
}
constexpr ::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>* const&
UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_ResourceProviders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResourceProviders;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_ResourceProviders(
    ::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ResourceProviders = value;
}
constexpr ::UnityEngine::ResourceManagement::Util::IAllocationStrategy*& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_allocator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_allocator;
}
constexpr ::UnityEngine::ResourceManagement::Util::IAllocationStrategy* const& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_allocator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_allocator;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_allocator(::UnityEngine::ResourceManagement::Util::IAllocationStrategy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_allocator = value;
}
constexpr ::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>*& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_UpdateReceivers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateReceivers;
}
constexpr ::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>* const&
UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_UpdateReceivers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateReceivers;
}
constexpr void
UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_UpdateReceivers(::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdateReceivers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>*&
UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_UpdateReceiversToRemove() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateReceiversToRemove;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>* const&
UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_UpdateReceiversToRemove() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateReceiversToRemove;
}
constexpr void
UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_UpdateReceiversToRemove(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdateReceiversToRemove = value;
}
constexpr bool& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_UpdatingReceivers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdatingReceivers;
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_UpdatingReceivers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdatingReceivers;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_UpdatingReceivers(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdatingReceivers = value;
}
constexpr bool& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_InsideUpdateMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InsideUpdateMethod;
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_InsideUpdateMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InsideUpdateMethod;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_InsideUpdateMethod(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InsideUpdateMethod = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*&
UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_providerMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_providerMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>* const&
UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_providerMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_providerMap;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_providerMap(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_providerMap = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*, ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*&
UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_AssetOperationCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetOperationCache;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*, ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* const&
UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_AssetOperationCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetOperationCache;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_AssetOperationCache(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*, ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AssetOperationCache = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*>*&
UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_TrackedInstanceOperations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackedInstanceOperations;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*>* const&
UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_TrackedInstanceOperations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackedInstanceOperations;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_TrackedInstanceOperations(
    ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::ResourceManager_InstanceOperation*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TrackedInstanceOperations = value;
}
constexpr ::GlobalNamespace::DelegateList_1<float_t>*& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_UpdateCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateCallbacks;
}
constexpr ::GlobalNamespace::DelegateList_1<float_t>* const& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_UpdateCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateCallbacks;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_UpdateCallbacks(::GlobalNamespace::DelegateList_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdateCallbacks = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*&
UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_DeferredCompleteCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeferredCompleteCallbacks;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* const&
UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_DeferredCompleteCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeferredCompleteCallbacks;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_DeferredCompleteCallbacks(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DeferredCompleteCallbacks = value;
}
constexpr bool& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_InsideExecuteDeferredCallbacksMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InsideExecuteDeferredCallbacksMethod;
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_InsideExecuteDeferredCallbacksMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InsideExecuteDeferredCallbacksMethod;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_InsideExecuteDeferredCallbacksMethod(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InsideExecuteDeferredCallbacksMethod = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::ResourceManager_DeferredCallbackRegisterRequest>*&
UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_DeferredCallbacksToRegister() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeferredCallbacksToRegister;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::ResourceManager_DeferredCallbackRegisterRequest>* const&
UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_DeferredCallbacksToRegister() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeferredCallbacksToRegister;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_DeferredCallbacksToRegister(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::ResourceManager_DeferredCallbackRegisterRequest>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DeferredCallbacksToRegister = value;
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_ReleaseOpNonCached() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReleaseOpNonCached;
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* const&
UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_ReleaseOpNonCached() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReleaseOpNonCached;
}
constexpr void
UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_ReleaseOpNonCached(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReleaseOpNonCached = value;
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_ReleaseOpCached() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReleaseOpCached;
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* const&
UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_ReleaseOpCached() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReleaseOpCached;
}
constexpr void
UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_ReleaseOpCached(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReleaseOpCached = value;
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_ReleaseInstanceOp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReleaseInstanceOp;
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* const&
UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_ReleaseInstanceOp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReleaseInstanceOp;
}
constexpr void
UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_ReleaseInstanceOp(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReleaseInstanceOp = value;
}
constexpr ::UnityEngine::Networking::CertificateHandler*& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get__CertificateHandlerInstance_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CertificateHandlerInstance_k__BackingField;
}
constexpr ::UnityEngine::Networking::CertificateHandler* const& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get__CertificateHandlerInstance_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CertificateHandlerInstance_k__BackingField;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set__CertificateHandlerInstance_k__BackingField(::UnityEngine::Networking::CertificateHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CertificateHandlerInstance_k__BackingField = value;
}
constexpr bool& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_RegisteredForCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RegisteredForCallbacks;
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_RegisteredForCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RegisteredForCallbacks;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_RegisteredForCallbacks(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RegisteredForCallbacks = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>*& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_ProviderOperationTypeCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProviderOperationTypeCache;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>* const&
UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_ProviderOperationTypeCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProviderOperationTypeCache;
}
constexpr void
UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_ProviderOperationTypeCache(::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ProviderOperationTypeCache = value;
}
inline void UnityEngine::ResourceManagement::ResourceManager::setStaticF__ExceptionHandler_k__BackingField(
    ::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::System::Exception*>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::System::Exception*>*, "<ExceptionHandler>k__BackingField",
                                    ::UnityEngine::ResourceManagement::ResourceManager*>(
      std::forward<::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::System::Exception*>*>(value));
}
inline ::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::System::Exception*>*
UnityEngine::ResourceManagement::ResourceManager::getStaticF__ExceptionHandler_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::System::Exception*>*, "<ExceptionHandler>k__BackingField",
                                           ::UnityEngine::ResourceManagement::ResourceManager*>();
}
inline void UnityEngine::ResourceManagement::ResourceManager::setStaticF_s_GroupOperationTypeHash(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_GroupOperationTypeHash", ::UnityEngine::ResourceManagement::ResourceManager*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::ResourceManagement::ResourceManager::getStaticF_s_GroupOperationTypeHash() {
  return ::cordl_internals::getStaticField<int32_t, "s_GroupOperationTypeHash", ::UnityEngine::ResourceManagement::ResourceManager*>();
}
inline void UnityEngine::ResourceManagement::ResourceManager::setStaticF_s_InstanceOperationTypeHash(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_InstanceOperationTypeHash", ::UnityEngine::ResourceManagement::ResourceManager*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::ResourceManagement::ResourceManager::getStaticF_s_InstanceOperationTypeHash() {
  return ::cordl_internals::getStaticField<int32_t, "s_InstanceOperationTypeHash", ::UnityEngine::ResourceManagement::ResourceManager*>();
}
inline ::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::System::Exception*>* UnityEngine::ResourceManagement::ResourceManager::get_ExceptionHandler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(), { "get_ExceptionHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::System::Exception*>*>(nullptr, ___internal_method);
}
inline void
UnityEngine::ResourceManagement::ResourceManager::set_ExceptionHandler(::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::System::Exception*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                          { "set_ExceptionHandler", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::System::Exception*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* UnityEngine::ResourceManagement::ResourceManager::get_InternalIdTransformFunc() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(), { "get_InternalIdTransformFunc", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>*>(this, ___internal_method);
}
inline void
UnityEngine::ResourceManagement::ResourceManager::set_InternalIdTransformFunc(::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                          { "set_InternalIdTransformFunc", {}, { ::i2c::type_of<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::ResourceManagement::ResourceManager::TransformInternalId(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                           { "TransformInternalId", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, location);
}
inline ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* UnityEngine::ResourceManagement::ResourceManager::get_WebRequestOverride() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(), { "get_WebRequestOverride", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceManager::set_WebRequestOverride(::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                           { "set_WebRequestOverride", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::ResourceManagement::ResourceManager::get_OperationCacheCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(), { "get_OperationCacheCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::ResourceManagement::ResourceManager::get_InstanceOperationCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(), { "get_InstanceOperationCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::ResourceManagement::ResourceManager::get_DeferredCompleteCallbacksCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(), { "get_DeferredCompleteCallbacksCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::ResourceManagement::ResourceManager::get_DeferredCallbackCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(), { "get_DeferredCallbackCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceManager::AddUpdateReceiver(::UnityEngine::ResourceManagement::IUpdateReceiver* receiver) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                                                         { "AddUpdateReceiver", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::IUpdateReceiver*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, receiver);
}
inline void UnityEngine::ResourceManagement::ResourceManager::RemoveUpdateReciever(::UnityEngine::ResourceManagement::IUpdateReceiver* receiver) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                                                         { "RemoveUpdateReciever", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::IUpdateReceiver*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, receiver);
}
inline ::UnityEngine::ResourceManagement::Util::IAllocationStrategy* UnityEngine::ResourceManagement::ResourceManager::get_Allocator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(), { "get_Allocator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceManager::set_Allocator(::UnityEngine::ResourceManagement::Util::IAllocationStrategy* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                           { "set_Allocator", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>* UnityEngine::ResourceManagement::ResourceManager::get_ResourceProviders() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(), { "get_ResourceProviders", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*>(this, ___internal_method);
}
inline ::UnityEngine::Networking::CertificateHandler* UnityEngine::ResourceManagement::ResourceManager::get_CertificateHandlerInstance() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(), { "get_CertificateHandlerInstance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::CertificateHandler*>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceManager::set_CertificateHandlerInstance(::UnityEngine::Networking::CertificateHandler* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                           { "set_CertificateHandlerInstance", {}, { ::i2c::type_of<::UnityEngine::Networking::CertificateHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::ResourceManagement::ResourceManager::_ctor(::UnityEngine::ResourceManagement::Util::IAllocationStrategy* alloc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alloc);
}
inline void UnityEngine::ResourceManagement::ResourceManager::OnObjectAdded(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(), { "OnObjectAdded", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void UnityEngine::ResourceManagement::ResourceManager::OnObjectRemoved(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(), { "OnObjectRemoved", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void UnityEngine::ResourceManagement::ResourceManager::RegisterForCallbacks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(), { "RegisterForCallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*
UnityEngine::ResourceManagement::ResourceManager::GetResourceProvider(::System::Type* t, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                          { "GetResourceProvider", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>(this, ___internal_method, t, location);
}
inline ::System::Type* UnityEngine::ResourceManagement::ResourceManager::GetDefaultTypeForLocation(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* loc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                           { "GetDefaultTypeForLocation", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, loc);
}
inline int32_t
UnityEngine::ResourceManagement::ResourceManager::CalculateLocationsHash(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations,
                                                                         ::System::Type* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                           { "CalculateLocationsHash",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(),
                                                               ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, locations, t);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle
UnityEngine::ResourceManagement::ResourceManager::ProvideResource(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::System::Type* desiredType,
                                                                  bool releaseDependenciesOnFailure) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
          { "ProvideResource", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(this, ___internal_method, location, desiredType, releaseDependenciesOnFailure);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*
UnityEngine::ResourceManagement::ResourceManager::GetOperationFromCache(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::System::Type* desiredType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                          { "GetOperationFromCache", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>(this, ___internal_method, location, desiredType);
}
inline ::UnityEngine::ResourceManagement::Util::IOperationCacheKey*
UnityEngine::ResourceManagement::ResourceManager::CreateCacheKeyForLocation(::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* provider,
                                                                            ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::System::Type* desiredType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                           { "CreateCacheKeyForLocation",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>(),
                                                               ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>(this, ___internal_method, provider, location, desiredType);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>
UnityEngine::ResourceManagement::ResourceManager::ProvideResource(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                              { "ProvideResource", { ::i2c::class_of<TObject>() }, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(this, ___internal_method, location);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>
UnityEngine::ResourceManagement::ResourceManager::StartOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>* operation,
                                                                 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dependency) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                                                              { "StartOperation",
                                                                                                { ::i2c::class_of<TObject>() },
                                                                                                { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>(),
                                                                                                  ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(this, ___internal_method, operation, dependency);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle
UnityEngine::ResourceManagement::ResourceManager::StartOperation(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* operation,
                                                                 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dependency) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                                                         { "StartOperation",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>(),
                                                                                             ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(this, ___internal_method, operation, dependency);
}
inline void UnityEngine::ResourceManagement::ResourceManager::OnInstanceOperationDestroy(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                           { "OnInstanceOperationDestroy", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline void UnityEngine::ResourceManagement::ResourceManager::OnOperationDestroyNonCached(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                           { "OnOperationDestroyNonCached", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline void UnityEngine::ResourceManagement::ResourceManager::OnOperationDestroyCached(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                           { "OnOperationDestroyCached", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
template <typename T>
inline T UnityEngine::ResourceManagement::ResourceManager::CreateOperation(::System::Type* actualType, int32_t typeHash, ::UnityEngine::ResourceManagement::Util::IOperationCacheKey* cacheKey,
                                                                           ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* onDestroyAction) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                              { "CreateOperation",
                                                { ::i2c::class_of<T>() },
                                                { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>(),
                                                  ::i2c::type_of<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, actualType, typeHash, cacheKey, onDestroyAction);
}
inline void UnityEngine::ResourceManagement::ResourceManager::AddOperationToCache(::UnityEngine::ResourceManagement::Util::IOperationCacheKey* key,
                                                                                  ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* operation) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                                                         { "AddOperationToCache",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>(),
                                                                                             ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, operation);
}
inline bool UnityEngine::ResourceManagement::ResourceManager::RemoveOperationFromCache(::UnityEngine::ResourceManagement::Util::IOperationCacheKey* key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                           { "RemoveOperationFromCache", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline bool UnityEngine::ResourceManagement::ResourceManager::IsOperationCached(::UnityEngine::ResourceManagement::Util::IOperationCacheKey* key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                           { "IsOperationCached", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline int32_t UnityEngine::ResourceManagement::ResourceManager::CachedOperationCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(), { "CachedOperationCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceManager::ClearOperationCache() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(), { "ClearOperationCache", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::ResourceManagement::ResourceManager::CreateCompletedOperation(TObject result,
                                                                                                                                                                      ::StringW errorMsg) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                           { "CreateCompletedOperation", { ::i2c::class_of<TObject>() }, { ::i2c::type_of<TObject>(), ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(this, ___internal_method, result, errorMsg);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>
UnityEngine::ResourceManagement::ResourceManager::CreateCompletedOperationWithException(TObject result, ::System::Exception* exception) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                              { "CreateCompletedOperationWithException", { ::i2c::class_of<TObject>() }, { ::i2c::type_of<TObject>(), ::i2c::type_of<::System::Exception*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(this, ___internal_method, result, exception);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>
UnityEngine::ResourceManagement::ResourceManager::CreateCompletedOperationInternal(TObject result, bool success, ::System::Exception* exception, bool releaseDependenciesOnFailure) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                           { "CreateCompletedOperationInternal",
                                                             { ::i2c::class_of<TObject>() },
                                                             { ::i2c::type_of<TObject>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(this, ___internal_method, result, success, exception,
                                                                                                                                  releaseDependenciesOnFailure);
}
inline void UnityEngine::ResourceManagement::ResourceManager::Release(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                           { "Release", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>
UnityEngine::ResourceManagement::ResourceManager::Acquire(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> handle) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                       { "Acquire", { ::i2c::class_of<TObject>() }, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(this, ___internal_method, handle);
}
inline void UnityEngine::ResourceManagement::ResourceManager::Acquire(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                           { "Acquire", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*
UnityEngine::ResourceManagement::ResourceManager::AcquireGroupOpFromCache(::UnityEngine::ResourceManagement::Util::IOperationCacheKey* key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                           { "AcquireGroupOpFromCache", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*>(this, ___internal_method, key);
}
template <typename T>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
UnityEngine::ResourceManagement::ResourceManager::CreateGroupOperation(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                              { "CreateGroupOperation",
                                                { ::i2c::class_of<T>() },
                                                { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>(
      this, ___internal_method, locations);
}
template <typename T>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
UnityEngine::ResourceManagement::ResourceManager::CreateGroupOperation(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations,
                                                                       bool allowFailedDependencies) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                          { "CreateGroupOperation",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>(
      this, ___internal_method, locations, allowFailedDependencies);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
UnityEngine::ResourceManagement::ResourceManager::CreateGenericGroupOperation(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* operations, bool releasedCachedOpOnComplete) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                          { "CreateGenericGroupOperation",
                            {},
                            { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>(
      this, ___internal_method, operations, releasedCachedOpOnComplete);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
UnityEngine::ResourceManagement::ResourceManager::ProvideResourceGroupCached(
    ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations, int32_t groupHash, ::System::Type* desiredType,
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* callback, bool releaseDependenciesOnFailure) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                              { "ProvideResourceGroupCached",
                                                {},
                                                { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>(),
                                                  ::i2c::type_of<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>(
      this, ___internal_method, locations, groupHash, desiredType, callback, releaseDependenciesOnFailure);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
UnityEngine::ResourceManagement::ResourceManager::ProvideResources(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations,
                                                                   ::System::Action_1<TObject>* callback) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                           { "ProvideResources",
                                                             { ::i2c::class_of<TObject>() },
                                                             { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(),
                                                               ::i2c::type_of<::System::Action_1<TObject>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>>(this, ___internal_method,
                                                                                                                                                                            locations, callback);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>
UnityEngine::ResourceManagement::ResourceManager::ProvideResources(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations,
                                                                   bool releaseDependenciesOnFailure, ::System::Action_1<TObject>* callback) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                           { "ProvideResources",
                                                             { ::i2c::class_of<TObject>() },
                                                             { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action_1<TObject>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>>(
      this, ___internal_method, locations, releaseDependenciesOnFailure, callback);
}
template <typename TObject, typename TObjectDependency>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>
UnityEngine::ResourceManagement::ResourceManager::CreateChainOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency> dependentOp,
                                                                       ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>,
                                                                                        ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* callback) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                           { "CreateChainOperation",
                                                             { ::i2c::class_of<TObject>(), ::i2c::class_of<TObjectDependency>() },
                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>>(),
                                                               ::i2c::type_of<::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>,
                                                                                               ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>(), ::i2c::class_of<TObjectDependency>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(this, ___internal_method, dependentOp, callback);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::ResourceManagement::ResourceManager::CreateChainOperation(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dependentOp,
    ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* callback) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                           { "CreateChainOperation",
                                                             { ::i2c::class_of<TObject>() },
                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                                                               ::i2c::type_of<::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,
                                                                                               ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(this, ___internal_method, dependentOp, callback);
}
template <typename TObject, typename TObjectDependency>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>
UnityEngine::ResourceManagement::ResourceManager::CreateChainOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency> dependentOp,
                                                                       ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>,
                                                                                        ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* callback,
                                                                       bool releaseDependenciesOnFailure) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                           { "CreateChainOperation",
                                                             { ::i2c::class_of<TObject>(), ::i2c::class_of<TObjectDependency>() },
                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>>(),
                                                               ::i2c::type_of<::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>,
                                                                                               ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*>(),
                                                               ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>(), ::i2c::class_of<TObjectDependency>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(this, ___internal_method, dependentOp, callback,
                                                                                                                                  releaseDependenciesOnFailure);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::ResourceManagement::ResourceManager::CreateChainOperation(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dependentOp,
    ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* callback,
    bool releaseDependenciesOnFailure) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                           { "CreateChainOperation",
                                                             { ::i2c::class_of<TObject>() },
                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(),
                                                               ::i2c::type_of<::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,
                                                                                               ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*>(),
                                                               ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(this, ___internal_method, dependentOp, callback,
                                                                                                                                  releaseDependenciesOnFailure);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::ResourceManagement::ResourceManager::ProvideScene(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider* sceneProvider,
                                                               ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                               ::UnityEngine::SceneManagement::LoadSceneMode loadSceneMode, bool activateOnLoad, int32_t priority) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                           { "ProvideScene",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*>(),
                                                               ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                                                               ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      this, ___internal_method, sceneProvider, location, loadSceneMode, activateOnLoad, priority);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::ResourceManagement::ResourceManager::ProvideScene(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider* sceneProvider,
                                                               ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                               ::UnityEngine::SceneManagement::LoadSceneParameters loadSceneParameters, bool activateOnLoad, int32_t priority) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                           { "ProvideScene",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*>(),
                                                               ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                                                               ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      this, ___internal_method, sceneProvider, location, loadSceneParameters, activateOnLoad, priority);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::ResourceManagement::ResourceManager::ProvideScene(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider* sceneProvider,
                                                               ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                               ::UnityEngine::SceneManagement::LoadSceneParameters loadSceneParameters,
                                                               ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode releaseMode, bool activateOnLoad, int32_t priority) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                          { "ProvideScene",
                            {},
                            { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*>(),
                              ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneParameters>(),
                              ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      this, ___internal_method, sceneProvider, location, loadSceneParameters, releaseMode, activateOnLoad, priority);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
UnityEngine::ResourceManagement::ResourceManager::ReleaseScene(
    ::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider* sceneProvider,
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> sceneLoadHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                          { "ReleaseScene",
                            {},
                            { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*>(),
                              ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(
      this, ___internal_method, sceneProvider, sceneLoadHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>
UnityEngine::ResourceManagement::ResourceManager::ProvideInstance(::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* provider,
                                                                  ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                  ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                                                         { "ProvideInstance",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*>(),
                                                                                             ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                                                                                             ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>(this, ___internal_method, provider,
                                                                                                                                                              location, instantiateParameters);
}
inline void UnityEngine::ResourceManagement::ResourceManager::CleanupSceneInstances(::UnityEngine::SceneManagement::Scene scene) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                                                         { "CleanupSceneInstances", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scene);
}
inline void UnityEngine::ResourceManagement::ResourceManager::ExecuteDeferredCallbacks() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(), { "ExecuteDeferredCallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceManager::RegisterForDeferredCallback(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* op, bool incrementRefCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                       { "RegisterForDeferredCallback", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op, incrementRefCount);
}
inline void UnityEngine::ResourceManagement::ResourceManager::Update(float_t unscaledDeltaTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(), { "Update", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unscaledDeltaTime);
}
inline void UnityEngine::ResourceManagement::ResourceManager::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceManager::__ctor_b__53_0(::UnityEngine::ResourceManagement::IUpdateReceiver* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceManager*>(),
                                                                                         { "<.ctor>b__53_0", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::IUpdateReceiver*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::UnityEngine::ResourceManagement::ResourceManager* UnityEngine::ResourceManagement::ResourceManager::New_ctor(::UnityEngine::ResourceManagement::Util::IAllocationStrategy* alloc) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::ResourceManager*>(alloc));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::ResourceManagement::ResourceManager::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::ResourceManagement::ResourceManager::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceManager::ResourceManager() {}
