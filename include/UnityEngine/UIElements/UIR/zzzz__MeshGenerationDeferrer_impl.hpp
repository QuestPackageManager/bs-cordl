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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::MeshGenerationDeferrer::*)(::Unity::Jobs::JobHandle)>(
    &::UnityEngine::UIElements::UIR::MeshGenerationDeferrer::AddMeshGenerationJob)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b12ec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>::get(), "AddMeshGenerationJob", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer.AddMeshGenerationCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::MeshGenerationDeferrer::*)(
    ::UnityEngine::UIElements::UIR::MeshGenerationCallback*, ::System::Object*, ::UnityEngine::UIElements::MeshGenerationCallbackType, bool)>(
    &::UnityEngine::UIElements::UIR::MeshGenerationDeferrer::AddMeshGenerationCallback)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6b12f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>::get(), "AddMeshGenerationCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::MeshGenerationCallback*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshGenerationCallbackType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer.ProcessDeferredWork
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::MeshGenerationDeferrer::*)(Il2CppObject*)>(
    &::UnityEngine::UIElements::UIR::MeshGenerationDeferrer::ProcessDeferredWork)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x6b13078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>::get(), "ProcessDeferredWork",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo, Il2CppObject*)>(
    &::UnityEngine::UIElements::UIR::MeshGenerationDeferrer::Invoke)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x6b1330c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>::get(), "Invoke", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer.get_disposed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UIR::MeshGenerationDeferrer::*)()>(
    &::UnityEngine::UIElements::UIR::MeshGenerationDeferrer::get_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b134e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>::get(),
                                                                               "get_disposed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer.set_disposed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::MeshGenerationDeferrer::*)(bool)>(
    &::UnityEngine::UIElements::UIR::MeshGenerationDeferrer::set_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b134ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>::get(), "set_disposed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::MeshGenerationDeferrer::*)()>(
    &::UnityEngine::UIElements::UIR::MeshGenerationDeferrer::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b134f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::MeshGenerationDeferrer::*)(bool)>(
    &::UnityEngine::UIElements::UIR::MeshGenerationDeferrer::Dispose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6b1355c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::MeshGenerationDeferrer::*)()>(
    &::UnityEngine::UIElements::UIR::MeshGenerationDeferrer::_ctor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x6b13594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Fork)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_WorkThenFork)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Work)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_JobDependentFork)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_JobDependentWorkThenFork)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_JobDependentWork)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Dependencies)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DependencyMerger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>::get(), "AddMeshGenerationJob", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, jobHandle);
}
inline void UnityEngine::UIElements::UIR::MeshGenerationDeferrer::AddMeshGenerationCallback(::UnityEngine::UIElements::UIR::MeshGenerationCallback* callback, ::System::Object* userData,
                                                                                            ::UnityEngine::UIElements::MeshGenerationCallbackType callbackType, bool isJobDependent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>::get(), "AddMeshGenerationCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::MeshGenerationCallback*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshGenerationCallbackType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, userData, callbackType, isJobDependent);
}
inline void UnityEngine::UIElements::UIR::MeshGenerationDeferrer::ProcessDeferredWork(Il2CppObject* meshGenerationContext) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>::get(), "ProcessDeferredWork",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, meshGenerationContext);
}
inline void UnityEngine::UIElements::UIR::MeshGenerationDeferrer::Invoke(::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo ci, Il2CppObject* mgc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>::get(), "Invoke", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer_CallbackInfo>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ci, mgc);
}
inline bool UnityEngine::UIElements::UIR::MeshGenerationDeferrer::get_disposed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>::get(),
                                                                             "get_disposed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::MeshGenerationDeferrer::set_disposed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>::get(), "set_disposed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::MeshGenerationDeferrer::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::MeshGenerationDeferrer::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void UnityEngine::UIElements::UIR::MeshGenerationDeferrer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::MeshGenerationDeferrer* UnityEngine::UIElements::UIR::MeshGenerationDeferrer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UIR::MeshGenerationDeferrer*>());
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
