#pragma once
// IWYU pragma private; include "UnityEngine\Animations\AnimationScriptPlayable.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimationScriptPlayable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::AnimationScriptPlayable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::AnimationScriptPlayable::*)(::UnityEngine::Playables::PlayableHandle)>(
    &::UnityEngine::Animations::AnimationScriptPlayable::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6a4a268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationScriptPlayable>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationScriptPlayable.GetHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableHandle (::UnityEngine::Animations::AnimationScriptPlayable::*)()>(
    &::UnityEngine::Animations::AnimationScriptPlayable::GetHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6a4a37c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationScriptPlayable>(), { "GetHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimationScriptPlayable.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animations::AnimationScriptPlayable::*)(::UnityEngine::Animations::AnimationScriptPlayable)>(
    &::UnityEngine::Animations::AnimationScriptPlayable::Equals)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6a4a388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationScriptPlayable>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::Animations::AnimationScriptPlayable>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Animations::AnimationScriptPlayable::setStaticF_m_NullPlayable(::UnityEngine::Animations::AnimationScriptPlayable value) {
  ::cordl_internals::setStaticField<::UnityEngine::Animations::AnimationScriptPlayable, "m_NullPlayable", ::UnityEngine::Animations::AnimationScriptPlayable>(
      std::forward<::UnityEngine::Animations::AnimationScriptPlayable>(value));
}
inline ::UnityEngine::Animations::AnimationScriptPlayable UnityEngine::Animations::AnimationScriptPlayable::getStaticF_m_NullPlayable() {
  return ::cordl_internals::getStaticField<::UnityEngine::Animations::AnimationScriptPlayable, "m_NullPlayable", ::UnityEngine::Animations::AnimationScriptPlayable>();
}
inline void UnityEngine::Animations::AnimationScriptPlayable::_ctor(::UnityEngine::Playables::PlayableHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationScriptPlayable>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle);
}
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Animations::AnimationScriptPlayable::GetHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationScriptPlayable>(), { "GetHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle>(*this, ___internal_method);
}
inline bool UnityEngine::Animations::AnimationScriptPlayable::Equals(::UnityEngine::Animations::AnimationScriptPlayable other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Animations::AnimationScriptPlayable>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::Animations::AnimationScriptPlayable>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr UnityEngine::Animations::AnimationScriptPlayable::operator ::UnityEngine::Playables::IPlayable*() {
  return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Playables::IPlayable"
constexpr ::UnityEngine::Playables::IPlayable* UnityEngine::Animations::AnimationScriptPlayable::i___UnityEngine__Playables__IPlayable() {
  return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::AnimationScriptPlayable>"
constexpr UnityEngine::Animations::AnimationScriptPlayable::operator ::System::IEquatable_1<::UnityEngine::Animations::AnimationScriptPlayable>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Animations::AnimationScriptPlayable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Animations::AnimationScriptPlayable>"
constexpr ::System::IEquatable_1<::UnityEngine::Animations::AnimationScriptPlayable>*
UnityEngine::Animations::AnimationScriptPlayable::i___System__IEquatable_1___UnityEngine__Animations__AnimationScriptPlayable_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Animations::AnimationScriptPlayable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Animations::AnimationScriptPlayable::AnimationScriptPlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept {
  this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::AnimationScriptPlayable::AnimationScriptPlayable() {}
