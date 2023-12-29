#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SleepRigidbody2DWhenInvisible_def.hpp"
#include "UnityEngine/zzzz__Rigidbody2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SleepRigidbody2DWhenInvisible.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SleepRigidbody2DWhenInvisible::*)()>(
    &::GlobalNamespace::SleepRigidbody2DWhenInvisible::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1f99efc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SleepRigidbody2DWhenInvisible*>::get(),
                                                                               "Awake", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SleepRigidbody2DWhenInvisible.OnBecameInvisible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SleepRigidbody2DWhenInvisible::*)()>(
    &::GlobalNamespace::SleepRigidbody2DWhenInvisible::OnBecameInvisible)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1f99f00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SleepRigidbody2DWhenInvisible*>::get(),
                                                                               "OnBecameInvisible", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SleepRigidbody2DWhenInvisible._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SleepRigidbody2DWhenInvisible::*)()>(
    &::GlobalNamespace::SleepRigidbody2DWhenInvisible::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f99f1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SleepRigidbody2DWhenInvisible*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rigidbody2D*& GlobalNamespace::SleepRigidbody2DWhenInvisible::__get__rigidbody2D() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rigidbody2D;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rigidbody2D*> const& GlobalNamespace::SleepRigidbody2DWhenInvisible::__get__rigidbody2D() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rigidbody2D;
}
constexpr void GlobalNamespace::SleepRigidbody2DWhenInvisible::__set__rigidbody2D(::UnityEngine::Rigidbody2D* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rigidbody2D)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SleepRigidbody2DWhenInvisible::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SleepRigidbody2DWhenInvisible*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SleepRigidbody2DWhenInvisible::OnBecameInvisible() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SleepRigidbody2DWhenInvisible*>::get(),
                                                                             "OnBecameInvisible", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SleepRigidbody2DWhenInvisible* GlobalNamespace::SleepRigidbody2DWhenInvisible::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SleepRigidbody2DWhenInvisible*>());
}
inline void GlobalNamespace::SleepRigidbody2DWhenInvisible::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SleepRigidbody2DWhenInvisible*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SleepRigidbody2DWhenInvisible::SleepRigidbody2DWhenInvisible() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
