#pragma once
#include "GlobalNamespace/zzzz__HMAutoincrementedRequestId_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "GlobalNamespace/zzzz__HMAsyncRequest_def.hpp"
#include "GlobalNamespace/zzzz__HMAsyncRequest_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__HMAsyncRequest__CancelHander._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__HMAsyncRequest__CancelHander::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__HMAsyncRequest__CancelHander::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x20f2f50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HMAsyncRequest__CancelHander*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__HMAsyncRequest__CancelHander.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__HMAsyncRequest__CancelHander::*)(::GlobalNamespace::HMAsyncRequest*)>(
    &::GlobalNamespace::__HMAsyncRequest__CancelHander::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x20f307c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HMAsyncRequest__CancelHander*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HMAsyncRequest__CancelHander*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__HMAsyncRequest__CancelHander.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::GlobalNamespace::__HMAsyncRequest__CancelHander::*)(::GlobalNamespace::HMAsyncRequest*, ::System::AsyncCallback*, ::System::Object*)>(
        &::GlobalNamespace::__HMAsyncRequest__CancelHander::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x20f3090;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HMAsyncRequest__CancelHander*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HMAsyncRequest__CancelHander*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__HMAsyncRequest__CancelHander.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__HMAsyncRequest__CancelHander::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__HMAsyncRequest__CancelHander::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x20f30b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HMAsyncRequest__CancelHander*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HMAsyncRequest__CancelHander*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__HMAsyncRequest__CancelHander* GlobalNamespace::__HMAsyncRequest__CancelHander::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__HMAsyncRequest__CancelHander*>(object, method));
}
inline void GlobalNamespace::__HMAsyncRequest__CancelHander::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HMAsyncRequest__CancelHander*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__HMAsyncRequest__CancelHander::Invoke(::GlobalNamespace::HMAsyncRequest* request) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HMAsyncRequest__CancelHander*>::get(), "Invoke", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HMAsyncRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request);
}
inline ::System::IAsyncResult* GlobalNamespace::__HMAsyncRequest__CancelHander::BeginInvoke(::GlobalNamespace::HMAsyncRequest* request, ::System::AsyncCallback* callback, ::System::Object* object) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HMAsyncRequest__CancelHander*>::get(), "BeginInvoke", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HMAsyncRequest*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, request, callback, object);
}
inline void GlobalNamespace::__HMAsyncRequest__CancelHander::EndInvoke(::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HMAsyncRequest__CancelHander*>::get(), "EndInvoke", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__HMAsyncRequest__CancelHander::__HMAsyncRequest__CancelHander() {}
//  Writing Method size for method: ::GlobalNamespace::HMAsyncRequest.get_CancelHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__HMAsyncRequest__CancelHander* (::GlobalNamespace::HMAsyncRequest::*)()>(
    &::GlobalNamespace::HMAsyncRequest::get_CancelHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f2ea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMAsyncRequest*>::get(), "get_CancelHandler",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HMAsyncRequest.set_CancelHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HMAsyncRequest::*)(::GlobalNamespace::__HMAsyncRequest__CancelHander*)>(
    &::GlobalNamespace::HMAsyncRequest::set_CancelHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f2eb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMAsyncRequest*>::get(), "set_CancelHandler", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__HMAsyncRequest__CancelHander*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HMAsyncRequest.get_cancelled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::HMAsyncRequest::*)()>(&::GlobalNamespace::HMAsyncRequest::get_cancelled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f2eb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMAsyncRequest*>::get(), "get_cancelled",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HMAsyncRequest.Cancel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HMAsyncRequest::*)()>(&::GlobalNamespace::HMAsyncRequest::Cancel)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x20f2ec0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMAsyncRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMAsyncRequest*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HMAsyncRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HMAsyncRequest::*)()>(&::GlobalNamespace::HMAsyncRequest::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x20f2ee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMAsyncRequest*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::HMAsyncRequest::__get__cancelled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cancelled;
}
constexpr bool const& GlobalNamespace::HMAsyncRequest::__get__cancelled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cancelled;
}
constexpr void GlobalNamespace::HMAsyncRequest::__set__cancelled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____cancelled = value;
}
constexpr ::GlobalNamespace::__HMAsyncRequest__CancelHander*& GlobalNamespace::HMAsyncRequest::__get__cancelHander() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cancelHander;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__HMAsyncRequest__CancelHander*> const& GlobalNamespace::HMAsyncRequest::__get__cancelHander() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cancelHander;
}
constexpr void GlobalNamespace::HMAsyncRequest::__set__cancelHander(::GlobalNamespace::__HMAsyncRequest__CancelHander* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cancelHander)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__HMAsyncRequest__CancelHander* GlobalNamespace::HMAsyncRequest::get_CancelHandler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMAsyncRequest*>::get(), "get_CancelHandler",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__HMAsyncRequest__CancelHander*, false>(this, ___internal_method);
}
inline void GlobalNamespace::HMAsyncRequest::set_CancelHandler(::GlobalNamespace::__HMAsyncRequest__CancelHander* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMAsyncRequest*>::get(), "set_CancelHandler", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__HMAsyncRequest__CancelHander*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::HMAsyncRequest::get_cancelled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMAsyncRequest*>::get(), "get_cancelled",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::HMAsyncRequest::Cancel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMAsyncRequest*>::get(), "Cancel",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::HMAsyncRequest* GlobalNamespace::HMAsyncRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::HMAsyncRequest*>());
}
inline void GlobalNamespace::HMAsyncRequest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMAsyncRequest*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HMAsyncRequest::HMAsyncRequest() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
