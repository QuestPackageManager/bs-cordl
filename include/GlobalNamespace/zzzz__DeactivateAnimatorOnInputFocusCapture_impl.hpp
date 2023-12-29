#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DeactivateAnimatorOnInputFocusCapture_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::*)()>(
    &::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::Start)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1f8f20c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture*>::get(),
                                                                               "Start", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::*)()>(
    &::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::OnDestroy)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x1f8f45c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture*>::get(),
                                                                               "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture.HandleInputFocusCaptured
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::*)()>(
    &::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::HandleInputFocusCaptured)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1f8f41c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture*>::get(),
                                                                               "HandleInputFocusCaptured", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture.HandleInputFocusReleased
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::*)()>(
    &::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::HandleInputFocusReleased)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1f8f600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture*>::get(),
                                                                               "HandleInputFocusReleased", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::*)()>(
    &::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f8f624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Animator*& GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::__get__animator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animator;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animator*> const& GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::__get__animator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animator;
}
constexpr void GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::__set__animator(::UnityEngine::Animator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____animator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IVRPlatformHelper*& GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::__get__vrPlatformHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::__get__vrPlatformHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr void GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::__set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vrPlatformHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::__get__wasEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wasEnabled;
}
constexpr bool const& GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::__get__wasEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wasEnabled;
}
constexpr void GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::__set__wasEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____wasEnabled = value;
}
inline void GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture*>::get(),
                                                                             "Start", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture*>::get(),
                                                                             "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::HandleInputFocusCaptured() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture*>::get(),
                                                                             "HandleInputFocusCaptured", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::HandleInputFocusReleased() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture*>::get(),
                                                                             "HandleInputFocusReleased", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture* GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture*>());
}
inline void GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::DeactivateAnimatorOnInputFocusCapture() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
