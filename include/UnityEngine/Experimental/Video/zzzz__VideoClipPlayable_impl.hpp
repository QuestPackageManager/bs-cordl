#pragma once
// IWYU pragma private; include "UnityEngine\Experimental\Video\VideoClipPlayable.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_impl.hpp"
#include "UnityEngine/Experimental/Video/zzzz__VideoClipPlayable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Video::VideoClipPlayable.GetHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableHandle (::UnityEngine::Experimental::Video::VideoClipPlayable::*)()>(
    &::UnityEngine::Experimental::Video::VideoClipPlayable::GetHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e2fa20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Video::VideoClipPlayable>(), { "GetHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Video::VideoClipPlayable.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Experimental::Video::VideoClipPlayable::*)(::UnityEngine::Experimental::Video::VideoClipPlayable)>(
    &::UnityEngine::Experimental::Video::VideoClipPlayable::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e2fa2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Video::VideoClipPlayable>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::Experimental::Video::VideoClipPlayable>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Experimental::Video::VideoClipPlayable::GetHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Video::VideoClipPlayable>(), { "GetHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle>(*this, ___internal_method);
}
inline bool UnityEngine::Experimental::Video::VideoClipPlayable::Equals(::UnityEngine::Experimental::Video::VideoClipPlayable other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Video::VideoClipPlayable>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::Experimental::Video::VideoClipPlayable>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr UnityEngine::Experimental::Video::VideoClipPlayable::operator ::UnityEngine::Playables::IPlayable*() {
  return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Playables::IPlayable"
constexpr ::UnityEngine::Playables::IPlayable* UnityEngine::Experimental::Video::VideoClipPlayable::i___UnityEngine__Playables__IPlayable() {
  return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Experimental::Video::VideoClipPlayable>"
constexpr UnityEngine::Experimental::Video::VideoClipPlayable::operator ::System::IEquatable_1<::UnityEngine::Experimental::Video::VideoClipPlayable>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Experimental::Video::VideoClipPlayable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Experimental::Video::VideoClipPlayable>"
constexpr ::System::IEquatable_1<::UnityEngine::Experimental::Video::VideoClipPlayable>*
UnityEngine::Experimental::Video::VideoClipPlayable::i___System__IEquatable_1___UnityEngine__Experimental__Video__VideoClipPlayable_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Experimental::Video::VideoClipPlayable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Video::VideoClipPlayable::VideoClipPlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept {
  this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Video::VideoClipPlayable::VideoClipPlayable() {}
