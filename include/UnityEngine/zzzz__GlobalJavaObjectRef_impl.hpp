#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GlobalJavaObjectRef_def.hpp"
//  Writing Method size for method: ::UnityEngine::GlobalJavaObjectRef._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GlobalJavaObjectRef::*)(void*)>(&::UnityEngine::GlobalJavaObjectRef::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x33b7b98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GlobalJavaObjectRef*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GlobalJavaObjectRef.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GlobalJavaObjectRef::*)()>(&::UnityEngine::GlobalJavaObjectRef::Finalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x33b7c88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GlobalJavaObjectRef*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GlobalJavaObjectRef*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GlobalJavaObjectRef.op_Implicit_void_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(::UnityEngine::GlobalJavaObjectRef*)>(&::UnityEngine::GlobalJavaObjectRef::op_Implicit_void_)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x33b7d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GlobalJavaObjectRef*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GlobalJavaObjectRef*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GlobalJavaObjectRef.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GlobalJavaObjectRef::*)()>(&::UnityEngine::GlobalJavaObjectRef::Dispose)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x33b7d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GlobalJavaObjectRef*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::GlobalJavaObjectRef::__cordl_internal_get_m_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_disposed;
}
constexpr bool const& UnityEngine::GlobalJavaObjectRef::__cordl_internal_get_m_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_disposed;
}
constexpr void UnityEngine::GlobalJavaObjectRef::__cordl_internal_set_m_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_disposed = value;
}
constexpr void*& UnityEngine::GlobalJavaObjectRef::__cordl_internal_get_m_jobject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_jobject;
}
constexpr void* const& UnityEngine::GlobalJavaObjectRef::__cordl_internal_get_m_jobject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_jobject;
}
constexpr void UnityEngine::GlobalJavaObjectRef::__cordl_internal_set_m_jobject(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_jobject = value;
}
inline ::UnityEngine::GlobalJavaObjectRef* UnityEngine::GlobalJavaObjectRef::New_ctor(void* jobject) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::GlobalJavaObjectRef*>(jobject));
}
inline void UnityEngine::GlobalJavaObjectRef::_ctor(void* jobject) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GlobalJavaObjectRef*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, jobject);
}
inline void UnityEngine::GlobalJavaObjectRef::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GlobalJavaObjectRef*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void* UnityEngine::GlobalJavaObjectRef::op_Implicit_void_(::UnityEngine::GlobalJavaObjectRef* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GlobalJavaObjectRef*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GlobalJavaObjectRef*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, obj);
}
inline void UnityEngine::GlobalJavaObjectRef::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GlobalJavaObjectRef*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::GlobalJavaObjectRef::GlobalJavaObjectRef() {}
