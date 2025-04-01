#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Controls/ButtonControl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_impl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::ButtonControl.get_pressPointOrDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Controls::ButtonControl::*)()>(
    &::UnityEngine::InputSystem::Controls::ButtonControl::get_pressPointOrDefault)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x455ce48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::ButtonControl*>::get(),
                                                                               "get_pressPointOrDefault", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::ButtonControl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::ButtonControl::*)()>(
    &::UnityEngine::InputSystem::Controls::ButtonControl::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x455c53c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::ButtonControl*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::ButtonControl.IsValueConsideredPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Controls::ButtonControl::*)(float_t)>(
    &::UnityEngine::InputSystem::Controls::ButtonControl::IsValueConsideredPressed)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x455ceb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::ButtonControl*>::get(), "IsValueConsideredPressed",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::ButtonControl.get_isPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Controls::ButtonControl::*)()>(
    &::UnityEngine::InputSystem::Controls::ButtonControl::get_isPressed)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x455cf20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::ButtonControl*>::get(),
                                                                               "get_isPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::ButtonControl.get_wasPressedThisFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Controls::ButtonControl::*)()>(
    &::UnityEngine::InputSystem::Controls::ButtonControl::get_wasPressedThisFrame)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x455cfc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::ButtonControl*>::get(),
                                                                               "get_wasPressedThisFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::ButtonControl.get_wasReleasedThisFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Controls::ButtonControl::*)()>(
    &::UnityEngine::InputSystem::Controls::ButtonControl::get_wasReleasedThisFrame)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x455d0e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::ButtonControl*>::get(),
                                                                               "get_wasReleasedThisFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::InputSystem::Controls::ButtonControl::__cordl_internal_get_pressPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pressPoint;
}
constexpr float_t const& UnityEngine::InputSystem::Controls::ButtonControl::__cordl_internal_get_pressPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pressPoint;
}
constexpr void UnityEngine::InputSystem::Controls::ButtonControl::__cordl_internal_set_pressPoint(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pressPoint = value;
}
inline void UnityEngine::InputSystem::Controls::ButtonControl::setStaticF_s_GlobalDefaultButtonPressPoint(float_t value) {
  ::cordl_internals::setStaticField<float_t, "s_GlobalDefaultButtonPressPoint", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::ButtonControl*>::get>(
      std::forward<float_t>(value));
}
inline float_t UnityEngine::InputSystem::Controls::ButtonControl::getStaticF_s_GlobalDefaultButtonPressPoint() {
  return ::cordl_internals::getStaticField<float_t, "s_GlobalDefaultButtonPressPoint",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::ButtonControl*>::get>();
}
inline void UnityEngine::InputSystem::Controls::ButtonControl::setStaticF_s_GlobalDefaultButtonReleaseThreshold(float_t value) {
  ::cordl_internals::setStaticField<float_t, "s_GlobalDefaultButtonReleaseThreshold",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::ButtonControl*>::get>(std::forward<float_t>(value));
}
inline float_t UnityEngine::InputSystem::Controls::ButtonControl::getStaticF_s_GlobalDefaultButtonReleaseThreshold() {
  return ::cordl_internals::getStaticField<float_t, "s_GlobalDefaultButtonReleaseThreshold",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::ButtonControl*>::get>();
}
inline float_t UnityEngine::InputSystem::Controls::ButtonControl::get_pressPointOrDefault() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::ButtonControl*>::get(),
                                                                             "get_pressPointOrDefault", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Controls::ButtonControl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::ButtonControl*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Controls::ButtonControl::IsValueConsideredPressed(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::ButtonControl*>::get(), "IsValueConsideredPressed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::Controls::ButtonControl::get_isPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::ButtonControl*>::get(),
                                                                             "get_isPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Controls::ButtonControl::get_wasPressedThisFrame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::ButtonControl*>::get(),
                                                                             "get_wasPressedThisFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Controls::ButtonControl::get_wasReleasedThisFrame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::ButtonControl*>::get(),
                                                                             "get_wasReleasedThisFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::Controls::ButtonControl::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Controls::ButtonControl*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl::ButtonControl() {}
