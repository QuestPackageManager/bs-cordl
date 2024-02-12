#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__CullingGroup_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__CullingGroupEvent_def.hpp"
#include "UnityEngine/zzzz__CullingGroup_def.hpp"
//  Writing Method size for method: ::UnityEngine::__CullingGroup__StateChanged._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__CullingGroup__StateChanged::*)(::System::Object*, void*)>(
    &::UnityEngine::__CullingGroup__StateChanged::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2cc9354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__CullingGroup__StateChanged*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__CullingGroup__StateChanged.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__CullingGroup__StateChanged::*)(::UnityEngine::CullingGroupEvent)>(
    &::UnityEngine::__CullingGroup__StateChanged::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2cc9418;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__CullingGroup__StateChanged*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__CullingGroup__StateChanged*>::get(), 13));
    return ___internal_method;
  }
};
inline ::UnityEngine::__CullingGroup__StateChanged* UnityEngine::__CullingGroup__StateChanged::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::__CullingGroup__StateChanged*>(object, method));
}
inline void UnityEngine::__CullingGroup__StateChanged::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__CullingGroup__StateChanged*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::__CullingGroup__StateChanged::Invoke(::UnityEngine::CullingGroupEvent sphere) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__CullingGroup__StateChanged*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sphere);
}
// Ctor Parameters []
constexpr ::UnityEngine::__CullingGroup__StateChanged::__CullingGroup__StateChanged() {}
//  Writing Method size for method: ::UnityEngine::CullingGroup.SendEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::CullingGroup*, void*, int32_t)>(&::UnityEngine::CullingGroup::SendEvents)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2cc92f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::CullingGroup*>::get(), "SendEvents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CullingGroup*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr void*& UnityEngine::CullingGroup::__cordl_internal_get_m_Ptr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void* const& UnityEngine::CullingGroup::__cordl_internal_get_m_Ptr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void UnityEngine::CullingGroup::__cordl_internal_set_m_Ptr(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Ptr = value;
}
constexpr ::UnityEngine::__CullingGroup__StateChanged*& UnityEngine::CullingGroup::__cordl_internal_get_m_OnStateChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnStateChanged;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::__CullingGroup__StateChanged*> const& UnityEngine::CullingGroup::__cordl_internal_get_m_OnStateChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnStateChanged;
}
constexpr void UnityEngine::CullingGroup::__cordl_internal_set_m_OnStateChanged(::UnityEngine::__CullingGroup__StateChanged* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnStateChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::CullingGroup::SendEvents(::UnityEngine::CullingGroup* cullingGroup, void* eventsPtr, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::CullingGroup*>::get(), "SendEvents", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CullingGroup*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cullingGroup, eventsPtr, count);
}
// Ctor Parameters []
constexpr ::UnityEngine::CullingGroup::CullingGroup() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
