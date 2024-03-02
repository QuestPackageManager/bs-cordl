#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngineInternal/Input/zzzz__NativeUpdateCallback_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngineInternal/Input/zzzz__NativeInputEventBuffer_def.hpp"
#include "UnityEngineInternal/Input/zzzz__NativeInputUpdateType_def.hpp"
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeUpdateCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngineInternal::Input::NativeUpdateCallback::*)(::System::Object*, void*)>(
    &::UnityEngineInternal::Input::NativeUpdateCallback::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2e07c94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeUpdateCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::Input::NativeUpdateCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngineInternal::Input::NativeUpdateCallback::*)(
    ::UnityEngineInternal::Input::NativeInputUpdateType, ::cordl_internals::Ptr<::UnityEngineInternal::Input::NativeInputEventBuffer>)>(&::UnityEngineInternal::Input::NativeUpdateCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2e07d58;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeUpdateCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeUpdateCallback*>::get(), 13));
    return ___internal_method;
  }
};
inline ::UnityEngineInternal::Input::NativeUpdateCallback* UnityEngineInternal::Input::NativeUpdateCallback::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngineInternal::Input::NativeUpdateCallback*>(object, method));
}
inline void UnityEngineInternal::Input::NativeUpdateCallback::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeUpdateCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngineInternal::Input::NativeUpdateCallback::Invoke(::UnityEngineInternal::Input::NativeInputUpdateType updateType,
                                                                     ::cordl_internals::Ptr<::UnityEngineInternal::Input::NativeInputEventBuffer> buffer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::Input::NativeUpdateCallback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updateType, buffer);
}
// Ctor Parameters []
constexpr ::UnityEngineInternal::Input::NativeUpdateCallback::NativeUpdateCallback() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
