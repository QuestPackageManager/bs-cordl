#pragma once
// IWYU pragma private; include "UnityEngine\RuntimeAnimatorController.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__RuntimeAnimatorController_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
//  Writing Method size for method: ::UnityEngine::RuntimeAnimatorController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RuntimeAnimatorController::*)()>(&::UnityEngine::RuntimeAnimatorController::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6a45970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RuntimeAnimatorController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RuntimeAnimatorController.get_animationClips
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::AnimationClip>> (::UnityEngine::RuntimeAnimatorController::*)()>(
    &::UnityEngine::RuntimeAnimatorController::get_animationClips)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a47120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RuntimeAnimatorController*>(), { "get_animationClips", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RuntimeAnimatorController.get_animationClips_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::AnimationClip>> (*)(::System::IntPtr)>(
    &::UnityEngine::RuntimeAnimatorController::get_animationClips_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a471a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RuntimeAnimatorController*>(), { "get_animationClips_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::RuntimeAnimatorController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RuntimeAnimatorController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::AnimationClip>> UnityEngine::RuntimeAnimatorController::get_animationClips() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RuntimeAnimatorController*>(), { "get_animationClips", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::AnimationClip>>>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::AnimationClip>> UnityEngine::RuntimeAnimatorController::get_animationClips_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RuntimeAnimatorController*>(), { "get_animationClips_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::AnimationClip>>>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::RuntimeAnimatorController* UnityEngine::RuntimeAnimatorController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::RuntimeAnimatorController*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::RuntimeAnimatorController::RuntimeAnimatorController() {}
