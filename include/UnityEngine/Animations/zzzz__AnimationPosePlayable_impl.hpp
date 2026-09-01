#pragma once
// IWYU pragma private; include "UnityEngine\Animations\AnimationPosePlayable.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimationPosePlayable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::AnimationPosePlayable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimationPosePlayable::*)(::UnityEngine::Playables::PlayableHandle)>(
    &::UnityEngine::Animations::AnimationPosePlayable::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6a49a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPosePlayable>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationPosePlayable.GetHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableHandle (::UnityEngine::Animations::AnimationPosePlayable::*)()>(
    &::UnityEngine::Animations::AnimationPosePlayable::GetHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6a49b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPosePlayable>(), { "GetHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationPosePlayable.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animations::AnimationPosePlayable::*)(::UnityEngine::Animations::AnimationPosePlayable)>(
    &::UnityEngine::Animations::AnimationPosePlayable::Equals)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6a49ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPosePlayable>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::Animations::AnimationPosePlayable>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Animations::AnimationPosePlayable::setStaticF_m_NullPlayable(::UnityEngine::Animations::AnimationPosePlayable value) {
  ::cordl_internals::setStaticField<::UnityEngine::Animations::AnimationPosePlayable, "m_NullPlayable", ::UnityEngine::Animations::AnimationPosePlayable>(
      std::forward<::UnityEngine::Animations::AnimationPosePlayable>(value));
}
inline ::UnityEngine::Animations::AnimationPosePlayable UnityEngine::Animations::AnimationPosePlayable::getStaticF_m_NullPlayable() {
  return ::cordl_internals::getStaticField<::UnityEngine::Animations::AnimationPosePlayable, "m_NullPlayable", ::UnityEngine::Animations::AnimationPosePlayable>();
}
inline void UnityEngine::Animations::AnimationPosePlayable::_ctor(::UnityEngine::Playables::PlayableHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPosePlayable>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle);
}
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Animations::AnimationPosePlayable::GetHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPosePlayable>(), { "GetHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle>(*this, ___internal_method);
}
inline bool UnityEngine::Animations::AnimationPosePlayable::Equals(::UnityEngine::Animations::AnimationPosePlayable other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationPosePlayable>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Animations::AnimationPosePlayable>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr UnityEngine::Animations::AnimationPosePlayable::operator ::UnityEngine::Playables::IPlayable*() {
  return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Playables::IPlayable"
constexpr ::UnityEngine::Playables::IPlayable* UnityEngine::Animations::AnimationPosePlayable::i___UnityEngine__Playables__IPlayable() {
  return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::AnimationPosePlayable>"
constexpr UnityEngine::Animations::AnimationPosePlayable::operator ::System::IEquatable_1<::UnityEngine::Animations::AnimationPosePlayable>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Animations::AnimationPosePlayable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Animations::AnimationPosePlayable>"
constexpr ::System::IEquatable_1<::UnityEngine::Animations::AnimationPosePlayable>*
UnityEngine::Animations::AnimationPosePlayable::i___System__IEquatable_1___UnityEngine__Animations__AnimationPosePlayable_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Animations::AnimationPosePlayable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Animations::AnimationPosePlayable::AnimationPosePlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept {
  this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::AnimationPosePlayable::AnimationPosePlayable() {}
