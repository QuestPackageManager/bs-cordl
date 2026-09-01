#pragma once
// IWYU pragma private; include "UnityEngine\Experimental\Playables\TextureMixerPlayable.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_impl.hpp"
#include "UnityEngine/Experimental/Playables/zzzz__TextureMixerPlayable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Playables::TextureMixerPlayable.GetHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableHandle (::UnityEngine::Experimental::Playables::TextureMixerPlayable::*)()>(
    &::UnityEngine::Experimental::Playables::TextureMixerPlayable::GetHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b309ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Playables::TextureMixerPlayable>(), { "GetHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Playables::TextureMixerPlayable.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Experimental::Playables::TextureMixerPlayable::*)(::UnityEngine::Experimental::Playables::TextureMixerPlayable)>(
    &::UnityEngine::Experimental::Playables::TextureMixerPlayable::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6b309b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Playables::TextureMixerPlayable>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::Experimental::Playables::TextureMixerPlayable>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Experimental::Playables::TextureMixerPlayable::GetHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Playables::TextureMixerPlayable>(), { "GetHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle>(*this, ___internal_method);
}
inline bool UnityEngine::Experimental::Playables::TextureMixerPlayable::Equals(::UnityEngine::Experimental::Playables::TextureMixerPlayable other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Playables::TextureMixerPlayable>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::Experimental::Playables::TextureMixerPlayable>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr UnityEngine::Experimental::Playables::TextureMixerPlayable::operator ::UnityEngine::Playables::IPlayable*() {
  return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Playables::IPlayable"
constexpr ::UnityEngine::Playables::IPlayable* UnityEngine::Experimental::Playables::TextureMixerPlayable::i___UnityEngine__Playables__IPlayable() {
  return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Experimental::Playables::TextureMixerPlayable>"
constexpr UnityEngine::Experimental::Playables::TextureMixerPlayable::operator ::System::IEquatable_1<::UnityEngine::Experimental::Playables::TextureMixerPlayable>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Experimental::Playables::TextureMixerPlayable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Experimental::Playables::TextureMixerPlayable>"
constexpr ::System::IEquatable_1<::UnityEngine::Experimental::Playables::TextureMixerPlayable>*
UnityEngine::Experimental::Playables::TextureMixerPlayable::i___System__IEquatable_1___UnityEngine__Experimental__Playables__TextureMixerPlayable_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Experimental::Playables::TextureMixerPlayable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Playables::TextureMixerPlayable::TextureMixerPlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept {
  this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Playables::TextureMixerPlayable::TextureMixerPlayable() {}
