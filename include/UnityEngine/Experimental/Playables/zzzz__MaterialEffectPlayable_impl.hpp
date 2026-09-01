#pragma once
// IWYU pragma private; include "UnityEngine\Experimental\Playables\MaterialEffectPlayable.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_impl.hpp"
#include "UnityEngine/Experimental/Playables/zzzz__MaterialEffectPlayable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Playables::MaterialEffectPlayable.GetHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableHandle (::UnityEngine::Experimental::Playables::MaterialEffectPlayable::*)()>(
    &::UnityEngine::Experimental::Playables::MaterialEffectPlayable::GetHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b30924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Playables::MaterialEffectPlayable>(), { "GetHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Playables::MaterialEffectPlayable.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Experimental::Playables::MaterialEffectPlayable::*)(::UnityEngine::Experimental::Playables::MaterialEffectPlayable)>(
    &::UnityEngine::Experimental::Playables::MaterialEffectPlayable::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6b30930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Playables::MaterialEffectPlayable>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::Experimental::Playables::MaterialEffectPlayable>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Experimental::Playables::MaterialEffectPlayable::GetHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Playables::MaterialEffectPlayable>(), { "GetHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle>(*this, ___internal_method);
}
inline bool UnityEngine::Experimental::Playables::MaterialEffectPlayable::Equals(::UnityEngine::Experimental::Playables::MaterialEffectPlayable other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Playables::MaterialEffectPlayable>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::Experimental::Playables::MaterialEffectPlayable>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr UnityEngine::Experimental::Playables::MaterialEffectPlayable::operator ::UnityEngine::Playables::IPlayable*() {
  return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Playables::IPlayable"
constexpr ::UnityEngine::Playables::IPlayable* UnityEngine::Experimental::Playables::MaterialEffectPlayable::i___UnityEngine__Playables__IPlayable() {
  return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Experimental::Playables::MaterialEffectPlayable>"
constexpr UnityEngine::Experimental::Playables::MaterialEffectPlayable::operator ::System::IEquatable_1<::UnityEngine::Experimental::Playables::MaterialEffectPlayable>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Experimental::Playables::MaterialEffectPlayable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Experimental::Playables::MaterialEffectPlayable>"
constexpr ::System::IEquatable_1<::UnityEngine::Experimental::Playables::MaterialEffectPlayable>*
UnityEngine::Experimental::Playables::MaterialEffectPlayable::i___System__IEquatable_1___UnityEngine__Experimental__Playables__MaterialEffectPlayable_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Experimental::Playables::MaterialEffectPlayable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Playables::MaterialEffectPlayable::MaterialEffectPlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept {
  this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Playables::MaterialEffectPlayable::MaterialEffectPlayable() {}
