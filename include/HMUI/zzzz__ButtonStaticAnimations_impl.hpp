#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__ButtonStaticAnimations_def.hpp"
#include "HMUI/zzzz__NoTransitionsButton_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
//  Writing Method size for method: ::HMUI::ButtonStaticAnimations.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonStaticAnimations::*)()>(&::HMUI::ButtonStaticAnimations::Awake)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x25136f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonStaticAnimations.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonStaticAnimations::*)()>(&::HMUI::ButtonStaticAnimations::Start)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x251377c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonStaticAnimations.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonStaticAnimations::*)()>(&::HMUI::ButtonStaticAnimations::OnEnable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2513898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonStaticAnimations.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonStaticAnimations::*)()>(&::HMUI::ButtonStaticAnimations::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x25138b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonStaticAnimations.HandleButtonSelectionStateDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonStaticAnimations::*)(::HMUI::__NoTransitionsButton__SelectionState)>(
    &::HMUI::ButtonStaticAnimations::HandleButtonSelectionStateDidChange)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x25137a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations*>::get(), "HandleButtonSelectionStateDidChange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__NoTransitionsButton__SelectionState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonStaticAnimations._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonStaticAnimations::*)()>(&::HMUI::ButtonStaticAnimations::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2513984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::NoTransitionsButton>& HMUI::ButtonStaticAnimations::__cordl_internal_get__button() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____button;
}
constexpr ::UnityW<::HMUI::NoTransitionsButton> const& HMUI::ButtonStaticAnimations::__cordl_internal_get__button() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____button;
}
constexpr void HMUI::ButtonStaticAnimations::__cordl_internal_set__button(::UnityW<::HMUI::NoTransitionsButton> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____button)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& HMUI::ButtonStaticAnimations::__cordl_internal_get__normalClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalClip;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& HMUI::ButtonStaticAnimations::__cordl_internal_get__normalClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalClip;
}
constexpr void HMUI::ButtonStaticAnimations::__cordl_internal_set__normalClip(::UnityW<::UnityEngine::AnimationClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____normalClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& HMUI::ButtonStaticAnimations::__cordl_internal_get__highlightedClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightedClip;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& HMUI::ButtonStaticAnimations::__cordl_internal_get__highlightedClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightedClip;
}
constexpr void HMUI::ButtonStaticAnimations::__cordl_internal_set__highlightedClip(::UnityW<::UnityEngine::AnimationClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____highlightedClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& HMUI::ButtonStaticAnimations::__cordl_internal_get__pressedClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressedClip;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& HMUI::ButtonStaticAnimations::__cordl_internal_get__pressedClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressedClip;
}
constexpr void HMUI::ButtonStaticAnimations::__cordl_internal_set__pressedClip(::UnityW<::UnityEngine::AnimationClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pressedClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& HMUI::ButtonStaticAnimations::__cordl_internal_get__disabledClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledClip;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& HMUI::ButtonStaticAnimations::__cordl_internal_get__disabledClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledClip;
}
constexpr void HMUI::ButtonStaticAnimations::__cordl_internal_set__disabledClip(::UnityW<::UnityEngine::AnimationClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____disabledClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HMUI::ButtonStaticAnimations::__cordl_internal_get__didStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didStart;
}
constexpr bool const& HMUI::ButtonStaticAnimations::__cordl_internal_get__didStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didStart;
}
constexpr void HMUI::ButtonStaticAnimations::__cordl_internal_set__didStart(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____didStart = value;
}
inline void HMUI::ButtonStaticAnimations::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::ButtonStaticAnimations::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::ButtonStaticAnimations::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::ButtonStaticAnimations::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::ButtonStaticAnimations::HandleButtonSelectionStateDidChange(::HMUI::__NoTransitionsButton__SelectionState state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations*>::get(), "HandleButtonSelectionStateDidChange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__NoTransitionsButton__SelectionState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline ::HMUI::ButtonStaticAnimations* HMUI::ButtonStaticAnimations::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::ButtonStaticAnimations*>());
}
inline void HMUI::ButtonStaticAnimations::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::ButtonStaticAnimations::ButtonStaticAnimations() {}
