#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ScreenBackButtonAnimationController_def.hpp"
#include "GlobalNamespace/zzzz__ScreenBackButtonAnimationController_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType::__ScreenBackButtonAnimationController__AnimationType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType::__ScreenBackButtonAnimationController__AnimationType() {}
constexpr ::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType::FadeIn{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType::FadeOut{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType::MoveIn{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType::MoveOut{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType::MoveIn2{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType::MoveOut2{ static_cast<int32_t>(0x5) };
//  Writing Method size for method: ::GlobalNamespace::ScreenBackButtonAnimationController.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenBackButtonAnimationController::*)()>(
    &::GlobalNamespace::ScreenBackButtonAnimationController::Awake)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x21aa830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenBackButtonAnimationController*>::get(),
                                                                               "Awake", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenBackButtonAnimationController.StartAnimation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenBackButtonAnimationController::*)(
    ::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType)>(&::GlobalNamespace::ScreenBackButtonAnimationController::StartAnimation)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x21aa850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenBackButtonAnimationController*>::get(), "StartAnimation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenBackButtonAnimationController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenBackButtonAnimationController::*)()>(
    &::GlobalNamespace::ScreenBackButtonAnimationController::_ctor)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x21aa8c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenBackButtonAnimationController*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Animator>& GlobalNamespace::ScreenBackButtonAnimationController::__cordl_internal_get__animator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& GlobalNamespace::ScreenBackButtonAnimationController::__cordl_internal_get__animator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animator;
}
constexpr void GlobalNamespace::ScreenBackButtonAnimationController::__cordl_internal_set__animator(::UnityW<::UnityEngine::Animator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____animator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType, int32_t>*&
GlobalNamespace::ScreenBackButtonAnimationController::__cordl_internal_get__animationHashes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationHashes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType, int32_t>*> const&
GlobalNamespace::ScreenBackButtonAnimationController::__cordl_internal_get__animationHashes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationHashes;
}
constexpr void GlobalNamespace::ScreenBackButtonAnimationController::__cordl_internal_set__animationHashes(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____animationHashes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ScreenBackButtonAnimationController::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenBackButtonAnimationController*>::get(),
                                                                             "Awake", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ScreenBackButtonAnimationController::StartAnimation(::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType animationType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenBackButtonAnimationController*>::get(), "StartAnimation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, animationType);
}
inline ::GlobalNamespace::ScreenBackButtonAnimationController* GlobalNamespace::ScreenBackButtonAnimationController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ScreenBackButtonAnimationController*>());
}
inline void GlobalNamespace::ScreenBackButtonAnimationController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenBackButtonAnimationController*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScreenBackButtonAnimationController::ScreenBackButtonAnimationController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
