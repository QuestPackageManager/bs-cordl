#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\GroupTrack.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_impl.hpp"
#include "UnityEngine/Timeline/zzzz__GroupTrack_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBinding_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::GroupTrack.CanCompileClips
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::GroupTrack::*)()>(&::UnityEngine::Timeline::GroupTrack::CanCompileClips)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69c7db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::GroupTrack*>(), { ::i2c::class_of<::UnityEngine::Timeline::GroupTrack*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::GroupTrack.get_outputs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* (::UnityEngine::Timeline::GroupTrack::*)()>(
    &::UnityEngine::Timeline::GroupTrack::get_outputs)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x69c7dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::GroupTrack*>(), { ::i2c::class_of<::UnityEngine::Timeline::GroupTrack*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::GroupTrack._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::GroupTrack::*)()>(&::UnityEngine::Timeline::GroupTrack::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x69c7e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::GroupTrack*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Timeline::GroupTrack::CanCompileClips() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::GroupTrack*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* UnityEngine::Timeline::GroupTrack::get_outputs() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::GroupTrack*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*>(this, ___internal_method);
}
inline void UnityEngine::Timeline::GroupTrack::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::GroupTrack*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::GroupTrack* UnityEngine::Timeline::GroupTrack::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::GroupTrack*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::GroupTrack::GroupTrack() {}
