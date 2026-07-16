#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/MeshGenerationDeferrer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshGenerationDeferrer_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__JobMerger_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshGenerationCallback_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshGenerationDeferrer_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationCallbackType_def.hpp"
// Ctor Parameters [CppParam { name: "callback", ty: "::UnityEngine::UIElements::UIR::MeshGenerationCallback*", modifiers: "", def_value: Some("{}") }, CppParam { name: "userData", ty:
// "::System::Object*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo::MeshGenerationDeferrer_CallbackInfo(::UnityEngine::UIElements::UIR::MeshGenerationCallback* callback,
                                                                                                                   ::System::Object* userData) noexcept {
  this->callback = callback;
  this->userData = userData;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo::MeshGenerationDeferrer_CallbackInfo() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer.AddMeshGenerationJob
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::MeshGenerationDeferrer::*)(::Unity::Jobs::JobHandle)>(
    &::UnityEngine::UIElements::UIR::MeshGenerationDeferrer::AddMeshGenerationJob)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6cdb1fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>(), { "AddMeshGenerationJob", {}, { ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer.AddMeshGenerationCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::MeshGenerationDeferrer::*)(::UnityEngine::UIElements::UIR::MeshGenerationCallback*, ::System::Object*,
                                                                                                                        ::UnityEngine::UIElements::MeshGenerationCallbackType, bool)>(
    &::UnityEngine::UIElements::UIR::MeshGenerationDeferrer::AddMeshGenerationCallback)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6cdb268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>(),
                                                             { "AddMeshGenerationCallback",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::UIR::MeshGenerationCallback*>(), ::i2c::type_of<::System::Object*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::MeshGenerationCallbackType>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer.ProcessDeferredWork
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::MeshGenerationDeferrer::*)(Il2CppObject*)>(
    &::UnityEngine::UIElements::UIR::MeshGenerationDeferrer::ProcessDeferredWork)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x6cdb3b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>(), { "ProcessDeferredWork", {}, { ::i2c::type_of<Il2CppObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo, Il2CppObject*)>(
    &::UnityEngine::UIElements::UIR::MeshGenerationDeferrer::Invoke)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x6cdb644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>(),
                                                { "Invoke", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>(), ::i2c::type_of<Il2CppObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer.get_disposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::MeshGenerationDeferrer::*)()>(&::UnityEngine::UIElements::UIR::MeshGenerationDeferrer::get_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cdb81c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>(), { "get_disposed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer.set_disposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::MeshGenerationDeferrer::*)(bool)>(&::UnityEngine::UIElements::UIR::MeshGenerationDeferrer::set_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cdb824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>(), { "set_disposed", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::MeshGenerationDeferrer::*)()>(&::UnityEngine::UIElements::UIR::MeshGenerationDeferrer::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6cdb82c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::MeshGenerationDeferrer::*)(bool)>(&::UnityEngine::UIElements::UIR::MeshGenerationDeferrer::Dispose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6cdb894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::MeshGenerationDeferrer::*)()>(&::UnityEngine::UIElements::UIR::MeshGenerationDeferrer::_ctor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x6cdb8cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>*&
UnityEngine::UIElements::UIR::MeshGenerationDeferrer::__cordl_internal_get_m_Fork() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Fork;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>* const&
UnityEngine::UIElements::UIR::MeshGenerationDeferrer::__cordl_internal_get_m_Fork() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Fork;
}
constexpr void
UnityEngine::UIElements::UIR::MeshGenerationDeferrer::__cordl_internal_set_m_Fork(::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Fork = value;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>*&
UnityEngine::UIElements::UIR::MeshGenerationDeferrer::__cordl_internal_get_m_WorkThenFork() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WorkThenFork;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>* const&
UnityEngine::UIElements::UIR::MeshGenerationDeferrer::__cordl_internal_get_m_WorkThenFork() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WorkThenFork;
}
constexpr void UnityEngine::UIElements::UIR::MeshGenerationDeferrer::__cordl_internal_set_m_WorkThenFork(
    ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WorkThenFork = value;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>*&
UnityEngine::UIElements::UIR::MeshGenerationDeferrer::__cordl_internal_get_m_Work() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Work;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>* const&
UnityEngine::UIElements::UIR::MeshGenerationDeferrer::__cordl_internal_get_m_Work() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Work;
}
constexpr void
UnityEngine::UIElements::UIR::MeshGenerationDeferrer::__cordl_internal_set_m_Work(::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Work = value;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>*&
UnityEngine::UIElements::UIR::MeshGenerationDeferrer::__cordl_internal_get_m_JobDependentFork() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_JobDependentFork;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>* const&
UnityEngine::UIElements::UIR::MeshGenerationDeferrer::__cordl_internal_get_m_JobDependentFork() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_JobDependentFork;
}
constexpr void UnityEngine::UIElements::UIR::MeshGenerationDeferrer::__cordl_internal_set_m_JobDependentFork(
    ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_JobDependentFork = value;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>*&
UnityEngine::UIElements::UIR::MeshGenerationDeferrer::__cordl_internal_get_m_JobDependentWorkThenFork() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_JobDependentWorkThenFork;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>* const&
UnityEngine::UIElements::UIR::MeshGenerationDeferrer::__cordl_internal_get_m_JobDependentWorkThenFork() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_JobDependentWorkThenFork;
}
constexpr void UnityEngine::UIElements::UIR::MeshGenerationDeferrer::__cordl_internal_set_m_JobDependentWorkThenFork(
    ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_JobDependentWorkThenFork = value;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>*&
UnityEngine::UIElements::UIR::MeshGenerationDeferrer::__cordl_internal_get_m_JobDependentWork() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_JobDependentWork;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>* const&
UnityEngine::UIElements::UIR::MeshGenerationDeferrer::__cordl_internal_get_m_JobDependentWork() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_JobDependentWork;
}
constexpr void UnityEngine::UIElements::UIR::MeshGenerationDeferrer::__cordl_internal_set_m_JobDependentWork(
    ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_JobDependentWork = value;
}
constexpr ::System::Collections::Generic::Queue_1<::Unity::Jobs::JobHandle>*& UnityEngine::UIElements::UIR::MeshGenerationDeferrer::__cordl_internal_get_m_Dependencies() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dependencies;
}
constexpr ::System::Collections::Generic::Queue_1<::Unity::Jobs::JobHandle>* const& UnityEngine::UIElements::UIR::MeshGenerationDeferrer::__cordl_internal_get_m_Dependencies() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dependencies;
}
constexpr void UnityEngine::UIElements::UIR::MeshGenerationDeferrer::__cordl_internal_set_m_Dependencies(::System::Collections::Generic::Queue_1<::Unity::Jobs::JobHandle>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Dependencies = value;
}
constexpr ::UnityEngine::UIElements::UIR::JobMerger*& UnityEngine::UIElements::UIR::MeshGenerationDeferrer::__cordl_internal_get_m_DependencyMerger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DependencyMerger;
}
constexpr ::UnityEngine::UIElements::UIR::JobMerger* const& UnityEngine::UIElements::UIR::MeshGenerationDeferrer::__cordl_internal_get_m_DependencyMerger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DependencyMerger;
}
constexpr void UnityEngine::UIElements::UIR::MeshGenerationDeferrer::__cordl_internal_set_m_DependencyMerger(::UnityEngine::UIElements::UIR::JobMerger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DependencyMerger = value;
}
constexpr bool& UnityEngine::UIElements::UIR::MeshGenerationDeferrer::__cordl_internal_get__disposed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::UIR::MeshGenerationDeferrer::__cordl_internal_get__disposed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::MeshGenerationDeferrer::__cordl_internal_set__disposed_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed_k__BackingField = value;
}
inline void UnityEngine::UIElements::UIR::MeshGenerationDeferrer::AddMeshGenerationJob(::Unity::Jobs::JobHandle jobHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>(), { "AddMeshGenerationJob", {}, { ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jobHandle);
}
inline void UnityEngine::UIElements::UIR::MeshGenerationDeferrer::AddMeshGenerationCallback(::UnityEngine::UIElements::UIR::MeshGenerationCallback* callback, ::System::Object* userData,
                                                                                            ::UnityEngine::UIElements::MeshGenerationCallbackType callbackType, bool isJobDependent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>(),
                                                           { "AddMeshGenerationCallback",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::UIR::MeshGenerationCallback*>(), ::i2c::type_of<::System::Object*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::MeshGenerationCallbackType>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, userData, callbackType, isJobDependent);
}
inline void UnityEngine::UIElements::UIR::MeshGenerationDeferrer::ProcessDeferredWork(Il2CppObject* meshGenerationContext) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>(), { "ProcessDeferredWork", {}, { ::i2c::type_of<Il2CppObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, meshGenerationContext);
}
inline void UnityEngine::UIElements::UIR::MeshGenerationDeferrer::Invoke(::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo ci, Il2CppObject* mgc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>(),
                                              { "Invoke", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>(), ::i2c::type_of<Il2CppObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ci, mgc);
}
inline bool UnityEngine::UIElements::UIR::MeshGenerationDeferrer::get_disposed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>(), { "get_disposed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::MeshGenerationDeferrer::set_disposed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>(), { "set_disposed", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::MeshGenerationDeferrer::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::MeshGenerationDeferrer::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void UnityEngine::UIElements::UIR::MeshGenerationDeferrer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer* UnityEngine::UIElements::UIR::MeshGenerationDeferrer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::UIR::MeshGenerationDeferrer::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::UIR::MeshGenerationDeferrer::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer::MeshGenerationDeferrer() {}
