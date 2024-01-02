#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "RootMotion/zzzz__TriggerEventBroadcaster_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::RootMotion::TriggerEventBroadcaster.OnTriggerEnter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::TriggerEventBroadcaster::*)(::UnityEngine::Collider*)>(
    &::RootMotion::TriggerEventBroadcaster::OnTriggerEnter)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x123f7fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::TriggerEventBroadcaster*>::get(), "OnTriggerEnter", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::TriggerEventBroadcaster.OnTriggerStay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::TriggerEventBroadcaster::*)(::UnityEngine::Collider*)>(
    &::RootMotion::TriggerEventBroadcaster::OnTriggerStay)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x123f8b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::TriggerEventBroadcaster*>::get(), "OnTriggerStay", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::TriggerEventBroadcaster.OnTriggerExit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::TriggerEventBroadcaster::*)(::UnityEngine::Collider*)>(
    &::RootMotion::TriggerEventBroadcaster::OnTriggerExit)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x123f964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::TriggerEventBroadcaster*>::get(), "OnTriggerExit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::TriggerEventBroadcaster._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::TriggerEventBroadcaster::*)()>(&::RootMotion::TriggerEventBroadcaster::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x123fa18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::TriggerEventBroadcaster*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::GameObject*& RootMotion::TriggerEventBroadcaster::__get_target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& RootMotion::TriggerEventBroadcaster::__get_target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr void RootMotion::TriggerEventBroadcaster::__set_target(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RootMotion::TriggerEventBroadcaster::OnTriggerEnter(::UnityEngine::Collider* collider) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::TriggerEventBroadcaster*>::get(), "OnTriggerEnter", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collider);
}
inline void RootMotion::TriggerEventBroadcaster::OnTriggerStay(::UnityEngine::Collider* collider) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::TriggerEventBroadcaster*>::get(), "OnTriggerStay", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collider);
}
inline void RootMotion::TriggerEventBroadcaster::OnTriggerExit(::UnityEngine::Collider* collider) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::TriggerEventBroadcaster*>::get(), "OnTriggerExit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collider);
}
inline ::RootMotion::TriggerEventBroadcaster* RootMotion::TriggerEventBroadcaster::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::TriggerEventBroadcaster*>());
}
inline void RootMotion::TriggerEventBroadcaster::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::TriggerEventBroadcaster*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::TriggerEventBroadcaster::TriggerEventBroadcaster() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
