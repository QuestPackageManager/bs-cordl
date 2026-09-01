#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\AnimationTrack.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBinding_impl.hpp"
#include "UnityEngine/Timeline/zzzz__AnimationPlayableAsset_impl.hpp"
#include "UnityEngine/Timeline/zzzz__MatchTargetFields_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TrackOffset_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Timeline/zzzz__AnimationTrack_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationLayerMixerPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBinding_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Timeline/zzzz__AnimationPlayableAsset_def.hpp"
#include "UnityEngine/Timeline/zzzz__AnimationTrack_def.hpp"
#include "UnityEngine/Timeline/zzzz__AppliedOffsetMode_def.hpp"
#include "UnityEngine/Timeline/zzzz__ILayerable_def.hpp"
#include "UnityEngine/Timeline/zzzz__IPropertyCollector_def.hpp"
#include "UnityEngine/Timeline/zzzz__IntervalTree_1_def.hpp"
#include "UnityEngine/Timeline/zzzz__MatchTargetFields_def.hpp"
#include "UnityEngine/Timeline/zzzz__RuntimeElement_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackOffset_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__AvatarMask_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack_AnimationTrackUpgrade.ConvertRotationsToEuler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Timeline::AnimationTrack*)>(&::UnityEngine::Timeline::AnimationTrack_AnimationTrackUpgrade::ConvertRotationsToEuler)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x69b2768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack_AnimationTrackUpgrade*>(),
                                                                                           { "ConvertRotationsToEuler", {}, { ::i2c::type_of<::UnityEngine::Timeline::AnimationTrack*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack_AnimationTrackUpgrade.ConvertRootMotion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Timeline::AnimationTrack*)>(&::UnityEngine::Timeline::AnimationTrack_AnimationTrackUpgrade::ConvertRootMotion)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x69b27fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack_AnimationTrackUpgrade*>(),
                                                                                           { "ConvertRootMotion", {}, { ::i2c::type_of<::UnityEngine::Timeline::AnimationTrack*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack_AnimationTrackUpgrade.ConvertInfiniteTrack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Timeline::AnimationTrack*)>(&::UnityEngine::Timeline::AnimationTrack_AnimationTrackUpgrade::ConvertInfiniteTrack)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x69b2884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack_AnimationTrackUpgrade*>(),
                                                                                           { "ConvertInfiniteTrack", {}, { ::i2c::type_of<::UnityEngine::Timeline::AnimationTrack*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Timeline::AnimationTrack_AnimationTrackUpgrade::ConvertRotationsToEuler(::UnityEngine::Timeline::AnimationTrack* track) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack_AnimationTrackUpgrade*>(),
                                                                                         { "ConvertRotationsToEuler", {}, { ::i2c::type_of<::UnityEngine::Timeline::AnimationTrack*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, track);
}
inline void UnityEngine::Timeline::AnimationTrack_AnimationTrackUpgrade::ConvertRootMotion(::UnityEngine::Timeline::AnimationTrack* track) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack_AnimationTrackUpgrade*>(),
                                                                                         { "ConvertRootMotion", {}, { ::i2c::type_of<::UnityEngine::Timeline::AnimationTrack*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, track);
}
inline void UnityEngine::Timeline::AnimationTrack_AnimationTrackUpgrade::ConvertInfiniteTrack(::UnityEngine::Timeline::AnimationTrack* track) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack_AnimationTrackUpgrade*>(),
                                                                                         { "ConvertInfiniteTrack", {}, { ::i2c::type_of<::UnityEngine::Timeline::AnimationTrack*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, track);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::AnimationTrack_AnimationTrackUpgrade::AnimationTrack_AnimationTrackUpgrade() {}
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::*)(int32_t)>(
    &::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x69ae9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::*)()>(
    &::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69b2adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::*)()>(&::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::MoveNext)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x69b2ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49.System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableBinding (::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::*)()>(
    &::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x69b2b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::*)()>(
    &::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x69b2b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::*)()>(
    &::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x69b2ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49.System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>* (::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::*)()>(
        &::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x69b2c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49*>(),
                                                                                           { "System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::*)()>(
    &::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69b2ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::UnityEngine::Playables::PlayableBinding& UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::UnityEngine::Playables::PlayableBinding const& UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::__cordl_internal_set___2__current(::UnityEngine::Playables::PlayableBinding value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::UnityW<::UnityEngine::Timeline::AnimationTrack>& UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::UnityEngine::Timeline::AnimationTrack> const& UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::__cordl_internal_set___4__this(::UnityW<::UnityEngine::Timeline::AnimationTrack> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
inline void UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Playables::PlayableBinding UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableBinding>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*
UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49*>(),
                                                                                         { "System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49* UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>"
constexpr UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*
UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::i___System__Collections__Generic__IEnumerable_1___UnityEngine__Playables__PlayableBinding_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>"
constexpr UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*
UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::i___System__Collections__Generic__IEnumerator_1___UnityEngine__Playables__PlayableBinding_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::AnimationTrack__get_outputs_d__49::AnimationTrack__get_outputs_d__49() {}
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::get_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69ae704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_position", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Vector3)>(&::UnityEngine::Timeline::AnimationTrack::set_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69ae710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "set_position", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_rotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::get_rotation)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x69ae71c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_rotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_rotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Quaternion)>(&::UnityEngine::Timeline::AnimationTrack::set_rotation)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x69ae74c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "set_rotation", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_eulerAngles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::get_eulerAngles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69ae788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_eulerAngles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_eulerAngles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Vector3)>(&::UnityEngine::Timeline::AnimationTrack::set_eulerAngles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69ae794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "set_eulerAngles", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_applyOffsets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::get_applyOffsets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69ae7a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_applyOffsets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_applyOffsets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(bool)>(&::UnityEngine::Timeline::AnimationTrack::set_applyOffsets)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69ae7a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "set_applyOffsets", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_trackOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::TrackOffset (::UnityEngine::Timeline::AnimationTrack::*)()>(
    &::UnityEngine::Timeline::AnimationTrack::get_trackOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69ae7ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_trackOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_trackOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Timeline::TrackOffset)>(
    &::UnityEngine::Timeline::AnimationTrack::set_trackOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69ae7b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "set_trackOffset", {}, { ::i2c::type_of<::UnityEngine::Timeline::TrackOffset>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_matchTargetFields
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::MatchTargetFields (::UnityEngine::Timeline::AnimationTrack::*)()>(
    &::UnityEngine::Timeline::AnimationTrack::get_matchTargetFields)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69ae7bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_matchTargetFields", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_matchTargetFields
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Timeline::MatchTargetFields)>(
    &::UnityEngine::Timeline::AnimationTrack::set_matchTargetFields)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x69ae7c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                                                                                           { "set_matchTargetFields", {}, { ::i2c::type_of<::UnityEngine::Timeline::MatchTargetFields>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_infiniteClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AnimationClip> (::UnityEngine::Timeline::AnimationTrack::*)()>(
    &::UnityEngine::Timeline::AnimationTrack::get_infiniteClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69ae838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_infiniteClip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_infiniteClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::AnimationClip*)>(&::UnityEngine::Timeline::AnimationTrack::set_infiniteClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69ae840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "set_infiniteClip", {}, { ::i2c::type_of<::UnityEngine::AnimationClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_infiniteClipRemoveOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::get_infiniteClipRemoveOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69ae848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_infiniteClipRemoveOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_infiniteClipRemoveOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(bool)>(&::UnityEngine::Timeline::AnimationTrack::set_infiniteClipRemoveOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69ae850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "set_infiniteClipRemoveOffset", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_avatarMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AvatarMask> (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::get_avatarMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69ae858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_avatarMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_avatarMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::AvatarMask*)>(&::UnityEngine::Timeline::AnimationTrack::set_avatarMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69ae860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "set_avatarMask", {}, { ::i2c::type_of<::UnityEngine::AvatarMask*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_applyAvatarMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::get_applyAvatarMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69ae868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_applyAvatarMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_applyAvatarMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(bool)>(&::UnityEngine::Timeline::AnimationTrack::set_applyAvatarMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69ae870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "set_applyAvatarMask", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.CanCompileClips
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::CanCompileClips)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x69ae878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { ::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_outputs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* (::UnityEngine::Timeline::AnimationTrack::*)()>(
    &::UnityEngine::Timeline::AnimationTrack::get_outputs)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x69ae940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { ::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_inClipMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::get_inClipMode)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x69ae9d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_inClipMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_infiniteClipOffsetPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Timeline::AnimationTrack::*)()>(
    &::UnityEngine::Timeline::AnimationTrack::get_infiniteClipOffsetPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69aeabc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_infiniteClipOffsetPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_infiniteClipOffsetPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::Timeline::AnimationTrack::set_infiniteClipOffsetPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69aeac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "set_infiniteClipOffsetPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_infiniteClipOffsetRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::Timeline::AnimationTrack::*)()>(
    &::UnityEngine::Timeline::AnimationTrack::get_infiniteClipOffsetRotation)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x69aead4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_infiniteClipOffsetRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_infiniteClipOffsetRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Quaternion)>(
    &::UnityEngine::Timeline::AnimationTrack::set_infiniteClipOffsetRotation)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x69aeb04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "set_infiniteClipOffsetRotation", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_infiniteClipOffsetEulerAngles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Timeline::AnimationTrack::*)()>(
    &::UnityEngine::Timeline::AnimationTrack::get_infiniteClipOffsetEulerAngles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69aeb40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_infiniteClipOffsetEulerAngles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_infiniteClipOffsetEulerAngles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::Timeline::AnimationTrack::set_infiniteClipOffsetEulerAngles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69aeb4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "set_infiniteClipOffsetEulerAngles", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_infiniteClipApplyFootIK
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::get_infiniteClipApplyFootIK)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69aeb58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_infiniteClipApplyFootIK", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_infiniteClipApplyFootIK
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(bool)>(&::UnityEngine::Timeline::AnimationTrack::set_infiniteClipApplyFootIK)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69aeb60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "set_infiniteClipApplyFootIK", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_infiniteClipTimeOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::get_infiniteClipTimeOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69aeb68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_infiniteClipTimeOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_infiniteClipTimeOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(double_t)>(&::UnityEngine::Timeline::AnimationTrack::set_infiniteClipTimeOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69aeb70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "set_infiniteClipTimeOffset", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_infiniteClipPreExtrapolation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::TimelineClip_ClipExtrapolation (::UnityEngine::Timeline::AnimationTrack::*)()>(
    &::UnityEngine::Timeline::AnimationTrack::get_infiniteClipPreExtrapolation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69aeb78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_infiniteClipPreExtrapolation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_infiniteClipPreExtrapolation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation)>(
    &::UnityEngine::Timeline::AnimationTrack::set_infiniteClipPreExtrapolation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69aeb80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                                                             { "set_infiniteClipPreExtrapolation", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip_ClipExtrapolation>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_infiniteClipPostExtrapolation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::TimelineClip_ClipExtrapolation (::UnityEngine::Timeline::AnimationTrack::*)()>(
    &::UnityEngine::Timeline::AnimationTrack::get_infiniteClipPostExtrapolation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69aeb88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_infiniteClipPostExtrapolation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_infiniteClipPostExtrapolation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation)>(
    &::UnityEngine::Timeline::AnimationTrack::set_infiniteClipPostExtrapolation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69aeb90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                                                             { "set_infiniteClipPostExtrapolation", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip_ClipExtrapolation>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_infiniteClipLoop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode (::UnityEngine::Timeline::AnimationTrack::*)()>(
    &::UnityEngine::Timeline::AnimationTrack::get_infiniteClipLoop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69aeb98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_infiniteClipLoop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_infiniteClipLoop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode)>(
    &::UnityEngine::Timeline::AnimationTrack::set_infiniteClipLoop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69aeba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                                                             { "set_infiniteClipLoop", {}, { ::i2c::type_of<::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.ResetOffsets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::ResetOffsets)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x69aeba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "ResetOffsets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.CreateClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::TimelineClip* (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::AnimationClip*)>(
    &::UnityEngine::Timeline::AnimationTrack::CreateClip)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x69aec1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "CreateClip", {}, { ::i2c::type_of<::UnityEngine::AnimationClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.CreateInfiniteClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::StringW)>(&::UnityEngine::Timeline::AnimationTrack::CreateInfiniteClip)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x69aeee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "CreateInfiniteClip", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.CreateRecordableClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::TimelineClip* (::UnityEngine::Timeline::AnimationTrack::*)(::StringW)>(
    &::UnityEngine::Timeline::AnimationTrack::CreateRecordableClip)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x69af000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "CreateRecordableClip", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.OnCreateClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Timeline::TimelineClip*)>(
    &::UnityEngine::Timeline::AnimationTrack::OnCreateClip)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x69af320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { ::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.CalculateItemsHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::CalculateItemsHash)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x69af4e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { ::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.UpdateClipOffsets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::UpdateClipOffsets)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69aec18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "UpdateClipOffsets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.CompileTrackPlayable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::AnimationTrack::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Timeline::AnimationTrack*, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*,
    ::UnityEngine::Timeline::AppliedOffsetMode)>(&::UnityEngine::Timeline::AnimationTrack::CompileTrackPlayable)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x69af70c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                                                { "CompileTrackPlayable",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Timeline::AnimationTrack*>(),
                                                    ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*>(),
                                                    ::i2c::type_of<::UnityEngine::Timeline::AppliedOffsetMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.UnityEngine_Timeline_ILayerable_CreateLayerMixer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::AnimationTrack::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, int32_t)>(&::UnityEngine::Timeline::AnimationTrack::UnityEngine_Timeline_ILayerable_CreateLayerMixer)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x69b00ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                                                { "UnityEngine.Timeline.ILayerable.CreateLayerMixer",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.CreateMixerPlayableGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::AnimationTrack::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*)>(
    &::UnityEngine::Timeline::AnimationTrack::CreateMixerPlayableGraph)> {
  constexpr static std::size_t size = 0x9c8;
  constexpr static std::size_t addrs = 0x69b0100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { ::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.GetDefaultBlendCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::GetDefaultBlendCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b1030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "GetDefaultBlendCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.AttachDefaultBlend
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animations::AnimationLayerMixerPlayable, bool)>(&::UnityEngine::Timeline::AnimationTrack::AttachDefaultBlend)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69b155c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                            { "AttachDefaultBlend",
                              {},
                              { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Animations::AnimationLayerMixerPlayable>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.AttachOffsetPlayable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::AnimationTrack::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::UnityEngine::Timeline::AnimationTrack::AttachOffsetPlayable)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x69b1570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                                                             { "AttachOffsetPlayable",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Playables::Playable>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.RequiresMotionXPlayable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Timeline::AppliedOffsetMode, ::UnityEngine::GameObject*)>(
    &::UnityEngine::Timeline::AnimationTrack::RequiresMotionXPlayable)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x69b1444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                                                { "RequiresMotionXPlayable", {}, { ::i2c::type_of<::UnityEngine::Timeline::AppliedOffsetMode>(), ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.UsesAbsoluteMotion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Timeline::AppliedOffsetMode)>(&::UnityEngine::Timeline::AnimationTrack::UsesAbsoluteMotion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x69b1560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "UsesAbsoluteMotion", {}, { ::i2c::type_of<::UnityEngine::Timeline::AppliedOffsetMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.HasController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::GameObject*)>(&::UnityEngine::Timeline::AnimationTrack::HasController)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x69b18c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "HasController", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.GetBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Animator> (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Playables::PlayableDirector*)>(
    &::UnityEngine::Timeline::AnimationTrack::GetBinding)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x69b16d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "GetBinding", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableDirector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.CreateGroupMixer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Animations::AnimationLayerMixerPlayable (*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, int32_t)>(
    &::UnityEngine::Timeline::AnimationTrack::CreateGroupMixer)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x69b1038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                            { "CreateGroupMixer", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.CreateInfiniteTrackPlayable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::AnimationTrack::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*,
    ::UnityEngine::Timeline::AppliedOffsetMode)>(&::UnityEngine::Timeline::AnimationTrack::CreateInfiniteTrackPlayable)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x69b10b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                                                                                           { "CreateInfiniteTrackPlayable",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::GameObject*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Timeline::AppliedOffsetMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.ApplyTrackOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::AnimationTrack::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::AppliedOffsetMode)>(
    &::UnityEngine::Timeline::AnimationTrack::ApplyTrackOffset)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x69afed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                                                             { "ApplyTrackOffset",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Playables::Playable>(),
                                                                 ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Timeline::AppliedOffsetMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.GetEvaluationTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::by_ref<double_t>, ::by_ref<double_t>)>(
    &::UnityEngine::Timeline::AnimationTrack::GetEvaluationTime)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x69b19f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { ::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.GetSequenceTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::by_ref<double_t>, ::by_ref<double_t>)>(
    &::UnityEngine::Timeline::AnimationTrack::GetSequenceTime)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x69b1cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { ::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.AssignAnimationClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::AnimationClip*)>(
    &::UnityEngine::Timeline::AnimationTrack::AssignAnimationClip)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x69aeccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                                                { "AssignAnimationClip", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.GatherProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*)>(
    &::UnityEngine::Timeline::AnimationTrack::GatherProperties)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69b1f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { ::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.GetAnimationClips
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AnimationClip>>*)>(
    &::UnityEngine::Timeline::AnimationTrack::GetAnimationClips)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0x69b1f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                                                             { "GetAnimationClips", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AnimationClip>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.GetOffsetMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::AppliedOffsetMode (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::GameObject*, bool)>(
    &::UnityEngine::Timeline::AnimationTrack::GetOffsetMode)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x69b0f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                                                                                           { "GetOffsetMode", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.IsRootTransformDisabledByMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::GameObject*, ::UnityEngine::Transform*)>(
    &::UnityEngine::Timeline::AnimationTrack::IsRootTransformDisabledByMask)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x69b0c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                                                             { "IsRootTransformDisabledByMask", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.GetGenericRootNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::GameObject*)>(
    &::UnityEngine::Timeline::AnimationTrack::GetGenericRootNode)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x69b0ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "GetGenericRootNode", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.AnimatesRootTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::AnimatesRootTransform)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x69afb24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "AnimatesRootTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.FindInHierarchyBreadthFirst
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (*)(::UnityEngine::Transform*, ::StringW)>(
    &::UnityEngine::Timeline::AnimationTrack::FindInHierarchyBreadthFirst)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x69b24ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                                                             { "FindInHierarchyBreadthFirst", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_openClipOffsetPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::get_openClipOffsetPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69b2694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_openClipOffsetPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_openClipOffsetPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::Timeline::AnimationTrack::set_openClipOffsetPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69b26a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "set_openClipOffsetPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_openClipOffsetRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::Timeline::AnimationTrack::*)()>(
    &::UnityEngine::Timeline::AnimationTrack::get_openClipOffsetRotation)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x69b26ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_openClipOffsetRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_openClipOffsetRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Quaternion)>(
    &::UnityEngine::Timeline::AnimationTrack::set_openClipOffsetRotation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69b26dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "set_openClipOffsetRotation", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_openClipOffsetEulerAngles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Timeline::AnimationTrack::*)()>(
    &::UnityEngine::Timeline::AnimationTrack::get_openClipOffsetEulerAngles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69b26e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_openClipOffsetEulerAngles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_openClipOffsetEulerAngles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::Timeline::AnimationTrack::set_openClipOffsetEulerAngles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69b26ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "set_openClipOffsetEulerAngles", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_openClipPreExtrapolation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::TimelineClip_ClipExtrapolation (::UnityEngine::Timeline::AnimationTrack::*)()>(
    &::UnityEngine::Timeline::AnimationTrack::get_openClipPreExtrapolation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b26f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_openClipPreExtrapolation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_openClipPreExtrapolation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation)>(
    &::UnityEngine::Timeline::AnimationTrack::set_openClipPreExtrapolation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b2700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                                                             { "set_openClipPreExtrapolation", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip_ClipExtrapolation>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_openClipPostExtrapolation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::TimelineClip_ClipExtrapolation (::UnityEngine::Timeline::AnimationTrack::*)()>(
    &::UnityEngine::Timeline::AnimationTrack::get_openClipPostExtrapolation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b2708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_openClipPostExtrapolation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_openClipPostExtrapolation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation)>(
    &::UnityEngine::Timeline::AnimationTrack::set_openClipPostExtrapolation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b2710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                                                             { "set_openClipPostExtrapolation", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip_ClipExtrapolation>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.OnUpgradeFromVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(int32_t)>(&::UnityEngine::Timeline::AnimationTrack::OnUpgradeFromVersion)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x69b2718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { ::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::_ctor)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x69b28a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation& UnityEngine::Timeline::AnimationTrack::__cordl_internal_get_m_InfiniteClipPreExtrapolation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InfiniteClipPreExtrapolation;
}
constexpr ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation const& UnityEngine::Timeline::AnimationTrack::__cordl_internal_get_m_InfiniteClipPreExtrapolation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InfiniteClipPreExtrapolation;
}
constexpr void UnityEngine::Timeline::AnimationTrack::__cordl_internal_set_m_InfiniteClipPreExtrapolation(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InfiniteClipPreExtrapolation = value;
}
constexpr ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation& UnityEngine::Timeline::AnimationTrack::__cordl_internal_get_m_InfiniteClipPostExtrapolation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InfiniteClipPostExtrapolation;
}
constexpr ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation const& UnityEngine::Timeline::AnimationTrack::__cordl_internal_get_m_InfiniteClipPostExtrapolation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InfiniteClipPostExtrapolation;
}
constexpr void UnityEngine::Timeline::AnimationTrack::__cordl_internal_set_m_InfiniteClipPostExtrapolation(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InfiniteClipPostExtrapolation = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Timeline::AnimationTrack::__cordl_internal_get_m_InfiniteClipOffsetPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InfiniteClipOffsetPosition;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Timeline::AnimationTrack::__cordl_internal_get_m_InfiniteClipOffsetPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InfiniteClipOffsetPosition;
}
constexpr void UnityEngine::Timeline::AnimationTrack::__cordl_internal_set_m_InfiniteClipOffsetPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InfiniteClipOffsetPosition = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Timeline::AnimationTrack::__cordl_internal_get_m_InfiniteClipOffsetEulerAngles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InfiniteClipOffsetEulerAngles;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Timeline::AnimationTrack::__cordl_internal_get_m_InfiniteClipOffsetEulerAngles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InfiniteClipOffsetEulerAngles;
}
constexpr void UnityEngine::Timeline::AnimationTrack::__cordl_internal_set_m_InfiniteClipOffsetEulerAngles(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InfiniteClipOffsetEulerAngles = value;
}
constexpr double_t& UnityEngine::Timeline::AnimationTrack::__cordl_internal_get_m_InfiniteClipTimeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InfiniteClipTimeOffset;
}
constexpr double_t const& UnityEngine::Timeline::AnimationTrack::__cordl_internal_get_m_InfiniteClipTimeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InfiniteClipTimeOffset;
}
constexpr void UnityEngine::Timeline::AnimationTrack::__cordl_internal_set_m_InfiniteClipTimeOffset(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InfiniteClipTimeOffset = value;
}
constexpr bool& UnityEngine::Timeline::AnimationTrack::__cordl_internal_get_m_InfiniteClipRemoveOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InfiniteClipRemoveOffset;
}
constexpr bool const& UnityEngine::Timeline::AnimationTrack::__cordl_internal_get_m_InfiniteClipRemoveOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InfiniteClipRemoveOffset;
}
constexpr void UnityEngine::Timeline::AnimationTrack::__cordl_internal_set_m_InfiniteClipRemoveOffset(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InfiniteClipRemoveOffset = value;
}
constexpr bool& UnityEngine::Timeline::AnimationTrack::__cordl_internal_get_m_InfiniteClipApplyFootIK() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InfiniteClipApplyFootIK;
}
constexpr bool const& UnityEngine::Timeline::AnimationTrack::__cordl_internal_get_m_InfiniteClipApplyFootIK() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InfiniteClipApplyFootIK;
}
constexpr void UnityEngine::Timeline::AnimationTrack::__cordl_internal_set_m_InfiniteClipApplyFootIK(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InfiniteClipApplyFootIK = value;
}
constexpr ::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode& UnityEngine::Timeline::AnimationTrack::__cordl_internal_get_mInfiniteClipLoop() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mInfiniteClipLoop;
}
constexpr ::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode const& UnityEngine::Timeline::AnimationTrack::__cordl_internal_get_mInfiniteClipLoop() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mInfiniteClipLoop;
}
constexpr void UnityEngine::Timeline::AnimationTrack::__cordl_internal_set_mInfiniteClipLoop(::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mInfiniteClipLoop = value;
}
constexpr ::UnityEngine::Timeline::MatchTargetFields& UnityEngine::Timeline::AnimationTrack::__cordl_internal_get_m_MatchTargetFields() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MatchTargetFields;
}
constexpr ::UnityEngine::Timeline::MatchTargetFields const& UnityEngine::Timeline::AnimationTrack::__cordl_internal_get_m_MatchTargetFields() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MatchTargetFields;
}
constexpr void UnityEngine::Timeline::AnimationTrack::__cordl_internal_set_m_MatchTargetFields(::UnityEngine::Timeline::MatchTargetFields value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MatchTargetFields = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Timeline::AnimationTrack::__cordl_internal_get_m_Position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Position;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Timeline::AnimationTrack::__cordl_internal_get_m_Position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Position;
}
constexpr void UnityEngine::Timeline::AnimationTrack::__cordl_internal_set_m_Position(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Position = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Timeline::AnimationTrack::__cordl_internal_get_m_EulerAngles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EulerAngles;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Timeline::AnimationTrack::__cordl_internal_get_m_EulerAngles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EulerAngles;
}
constexpr void UnityEngine::Timeline::AnimationTrack::__cordl_internal_set_m_EulerAngles(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EulerAngles = value;
}
constexpr ::UnityW<::UnityEngine::AvatarMask>& UnityEngine::Timeline::AnimationTrack::__cordl_internal_get_m_AvatarMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AvatarMask;
}
constexpr ::UnityW<::UnityEngine::AvatarMask> const& UnityEngine::Timeline::AnimationTrack::__cordl_internal_get_m_AvatarMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AvatarMask;
}
constexpr void UnityEngine::Timeline::AnimationTrack::__cordl_internal_set_m_AvatarMask(::UnityW<::UnityEngine::AvatarMask> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AvatarMask = value;
}
constexpr bool& UnityEngine::Timeline::AnimationTrack::__cordl_internal_get_m_ApplyAvatarMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ApplyAvatarMask;
}
constexpr bool const& UnityEngine::Timeline::AnimationTrack::__cordl_internal_get_m_ApplyAvatarMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ApplyAvatarMask;
}
constexpr void UnityEngine::Timeline::AnimationTrack::__cordl_internal_set_m_ApplyAvatarMask(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ApplyAvatarMask = value;
}
constexpr ::UnityEngine::Timeline::TrackOffset& UnityEngine::Timeline::AnimationTrack::__cordl_internal_get_m_TrackOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackOffset;
}
constexpr ::UnityEngine::Timeline::TrackOffset const& UnityEngine::Timeline::AnimationTrack::__cordl_internal_get_m_TrackOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackOffset;
}
constexpr void UnityEngine::Timeline::AnimationTrack::__cordl_internal_set_m_TrackOffset(::UnityEngine::Timeline::TrackOffset value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TrackOffset = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& UnityEngine::Timeline::AnimationTrack::__cordl_internal_get_m_InfiniteClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InfiniteClip;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& UnityEngine::Timeline::AnimationTrack::__cordl_internal_get_m_InfiniteClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InfiniteClip;
}
constexpr void UnityEngine::Timeline::AnimationTrack::__cordl_internal_set_m_InfiniteClip(::UnityW<::UnityEngine::AnimationClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InfiniteClip = value;
}
constexpr ::UnityEngine::Quaternion& UnityEngine::Timeline::AnimationTrack::__cordl_internal_get_m_OpenClipOffsetRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OpenClipOffsetRotation;
}
constexpr ::UnityEngine::Quaternion const& UnityEngine::Timeline::AnimationTrack::__cordl_internal_get_m_OpenClipOffsetRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OpenClipOffsetRotation;
}
constexpr void UnityEngine::Timeline::AnimationTrack::__cordl_internal_set_m_OpenClipOffsetRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OpenClipOffsetRotation = value;
}
constexpr ::UnityEngine::Quaternion& UnityEngine::Timeline::AnimationTrack::__cordl_internal_get_m_Rotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Rotation;
}
constexpr ::UnityEngine::Quaternion const& UnityEngine::Timeline::AnimationTrack::__cordl_internal_get_m_Rotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Rotation;
}
constexpr void UnityEngine::Timeline::AnimationTrack::__cordl_internal_set_m_Rotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Rotation = value;
}
constexpr bool& UnityEngine::Timeline::AnimationTrack::__cordl_internal_get_m_ApplyOffsets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ApplyOffsets;
}
constexpr bool const& UnityEngine::Timeline::AnimationTrack::__cordl_internal_get_m_ApplyOffsets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ApplyOffsets;
}
constexpr void UnityEngine::Timeline::AnimationTrack::__cordl_internal_set_m_ApplyOffsets(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ApplyOffsets = value;
}
inline void UnityEngine::Timeline::AnimationTrack::setStaticF_s_CachedQueue(::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>*, "s_CachedQueue", ::UnityEngine::Timeline::AnimationTrack*>(
      std::forward<::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>*>(value));
}
inline ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>* UnityEngine::Timeline::AnimationTrack::getStaticF_s_CachedQueue() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>*, "s_CachedQueue", ::UnityEngine::Timeline::AnimationTrack*>();
}
inline ::UnityEngine::Vector3 UnityEngine::Timeline::AnimationTrack::get_position() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_position", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_position(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "set_position", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion UnityEngine::Timeline::AnimationTrack::get_rotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_rotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_rotation(::UnityEngine::Quaternion value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "set_rotation", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::Timeline::AnimationTrack::get_eulerAngles() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_eulerAngles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_eulerAngles(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "set_eulerAngles", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Timeline::AnimationTrack::get_applyOffsets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_applyOffsets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_applyOffsets(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "set_applyOffsets", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Timeline::TrackOffset UnityEngine::Timeline::AnimationTrack::get_trackOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_trackOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TrackOffset>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_trackOffset(::UnityEngine::Timeline::TrackOffset value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "set_trackOffset", {}, { ::i2c::type_of<::UnityEngine::Timeline::TrackOffset>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Timeline::MatchTargetFields UnityEngine::Timeline::AnimationTrack::get_matchTargetFields() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_matchTargetFields", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::MatchTargetFields>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_matchTargetFields(::UnityEngine::Timeline::MatchTargetFields value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                                                                                         { "set_matchTargetFields", {}, { ::i2c::type_of<::UnityEngine::Timeline::MatchTargetFields>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AnimationClip> UnityEngine::Timeline::AnimationTrack::get_infiniteClip() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_infiniteClip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AnimationClip>>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_infiniteClip(::UnityEngine::AnimationClip* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "set_infiniteClip", {}, { ::i2c::type_of<::UnityEngine::AnimationClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Timeline::AnimationTrack::get_infiniteClipRemoveOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_infiniteClipRemoveOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_infiniteClipRemoveOffset(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "set_infiniteClipRemoveOffset", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AvatarMask> UnityEngine::Timeline::AnimationTrack::get_avatarMask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_avatarMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AvatarMask>>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_avatarMask(::UnityEngine::AvatarMask* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "set_avatarMask", {}, { ::i2c::type_of<::UnityEngine::AvatarMask*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Timeline::AnimationTrack::get_applyAvatarMask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_applyAvatarMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_applyAvatarMask(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "set_applyAvatarMask", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Timeline::AnimationTrack::CanCompileClips() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* UnityEngine::Timeline::AnimationTrack::get_outputs() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::AnimationTrack::get_inClipMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_inClipMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Timeline::AnimationTrack::get_infiniteClipOffsetPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_infiniteClipOffsetPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_infiniteClipOffsetPosition(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "set_infiniteClipOffsetPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion UnityEngine::Timeline::AnimationTrack::get_infiniteClipOffsetRotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_infiniteClipOffsetRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_infiniteClipOffsetRotation(::UnityEngine::Quaternion value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "set_infiniteClipOffsetRotation", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::Timeline::AnimationTrack::get_infiniteClipOffsetEulerAngles() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_infiniteClipOffsetEulerAngles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_infiniteClipOffsetEulerAngles(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "set_infiniteClipOffsetEulerAngles", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Timeline::AnimationTrack::get_infiniteClipApplyFootIK() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_infiniteClipApplyFootIK", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_infiniteClipApplyFootIK(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "set_infiniteClipApplyFootIK", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t UnityEngine::Timeline::AnimationTrack::get_infiniteClipTimeOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_infiniteClipTimeOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_infiniteClipTimeOffset(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "set_infiniteClipTimeOffset", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation UnityEngine::Timeline::AnimationTrack::get_infiniteClipPreExtrapolation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_infiniteClipPreExtrapolation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip_ClipExtrapolation>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_infiniteClipPreExtrapolation(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                                                           { "set_infiniteClipPreExtrapolation", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip_ClipExtrapolation>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation UnityEngine::Timeline::AnimationTrack::get_infiniteClipPostExtrapolation() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_infiniteClipPostExtrapolation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip_ClipExtrapolation>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_infiniteClipPostExtrapolation(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                                                           { "set_infiniteClipPostExtrapolation", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip_ClipExtrapolation>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode UnityEngine::Timeline::AnimationTrack::get_infiniteClipLoop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_infiniteClipLoop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_infiniteClipLoop(::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                                                           { "set_infiniteClipLoop", {}, { ::i2c::type_of<::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Timeline::AnimationTrack::ResetOffsets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "ResetOffsets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::TimelineClip* UnityEngine::Timeline::AnimationTrack::CreateClip(::UnityEngine::AnimationClip* clip) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "CreateClip", {}, { ::i2c::type_of<::UnityEngine::AnimationClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip*>(this, ___internal_method, clip);
}
inline void UnityEngine::Timeline::AnimationTrack::CreateInfiniteClip(::StringW infiniteClipName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "CreateInfiniteClip", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, infiniteClipName);
}
inline ::UnityEngine::Timeline::TimelineClip* UnityEngine::Timeline::AnimationTrack::CreateRecordableClip(::StringW animClipName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "CreateRecordableClip", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip*>(this, ___internal_method, animClipName);
}
inline void UnityEngine::Timeline::AnimationTrack::OnCreateClip(::UnityEngine::Timeline::TimelineClip* clip) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip);
}
inline int32_t UnityEngine::Timeline::AnimationTrack::CalculateItemsHash() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::UpdateClipOffsets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "UpdateClipOffsets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::AnimationTrack::CompileTrackPlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Timeline::AnimationTrack* track,
                                                                                                      ::UnityEngine::GameObject* go,
                                                                                                      ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* tree,
                                                                                                      ::UnityEngine::Timeline::AppliedOffsetMode mode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                          { "CompileTrackPlayable",
                            {},
                            { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Timeline::AnimationTrack*>(), ::i2c::type_of<::UnityEngine::GameObject*>(),
                              ::i2c::type_of<::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*>(), ::i2c::type_of<::UnityEngine::Timeline::AppliedOffsetMode>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(this, ___internal_method, graph, track, go, tree, mode);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::AnimationTrack::UnityEngine_Timeline_ILayerable_CreateLayerMixer(::UnityEngine::Playables::PlayableGraph graph,
                                                                                                                                  ::UnityEngine::GameObject* go, int32_t inputCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                                              { "UnityEngine.Timeline.ILayerable.CreateLayerMixer",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(this, ___internal_method, graph, go, inputCount);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::AnimationTrack::CreateMixerPlayableGraph(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go,
                                                                                                          ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* tree) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(this, ___internal_method, graph, go, tree);
}
inline int32_t UnityEngine::Timeline::AnimationTrack::GetDefaultBlendCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "GetDefaultBlendCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::AttachDefaultBlend(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Animations::AnimationLayerMixerPlayable mixer, bool requireOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                          { "AttachDefaultBlend",
                            {},
                            { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Animations::AnimationLayerMixerPlayable>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graph, mixer, requireOffset);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::AnimationTrack::AttachOffsetPlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Playables::Playable playable,
                                                                                                      ::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                                                           { "AttachOffsetPlayable",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Playables::Playable>(),
                                                               ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(this, ___internal_method, graph, playable, pos, rot);
}
inline bool UnityEngine::Timeline::AnimationTrack::RequiresMotionXPlayable(::UnityEngine::Timeline::AppliedOffsetMode mode, ::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                                              { "RequiresMotionXPlayable", {}, { ::i2c::type_of<::UnityEngine::Timeline::AppliedOffsetMode>(), ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, mode, gameObject);
}
inline bool UnityEngine::Timeline::AnimationTrack::UsesAbsoluteMotion(::UnityEngine::Timeline::AppliedOffsetMode mode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "UsesAbsoluteMotion", {}, { ::i2c::type_of<::UnityEngine::Timeline::AppliedOffsetMode>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mode);
}
inline bool UnityEngine::Timeline::AnimationTrack::HasController(::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "HasController", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameObject);
}
inline ::UnityW<::UnityEngine::Animator> UnityEngine::Timeline::AnimationTrack::GetBinding(::UnityEngine::Playables::PlayableDirector* director) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "GetBinding", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableDirector*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Animator>>(this, ___internal_method, director);
}
inline ::UnityEngine::Animations::AnimationLayerMixerPlayable UnityEngine::Timeline::AnimationTrack::CreateGroupMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go,
                                                                                                                      int32_t inputCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                          { "CreateGroupMixer", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::AnimationLayerMixerPlayable>(nullptr, ___internal_method, graph, go, inputCount);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::AnimationTrack::CreateInfiniteTrackPlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go,
                                                                                                             ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* tree,
                                                                                                             ::UnityEngine::Timeline::AppliedOffsetMode mode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                                                                                         { "CreateInfiniteTrackPlayable",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::GameObject*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Timeline::AppliedOffsetMode>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(this, ___internal_method, graph, go, tree, mode);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::AnimationTrack::ApplyTrackOffset(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Playables::Playable root,
                                                                                                  ::UnityEngine::GameObject* go, ::UnityEngine::Timeline::AppliedOffsetMode mode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                                                           { "ApplyTrackOffset",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Playables::Playable>(),
                                                               ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Timeline::AppliedOffsetMode>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(this, ___internal_method, graph, root, go, mode);
}
inline void UnityEngine::Timeline::AnimationTrack::GetEvaluationTime(::by_ref<double_t> outStart, ::by_ref<double_t> outDuration) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outStart, outDuration);
}
inline void UnityEngine::Timeline::AnimationTrack::GetSequenceTime(::by_ref<double_t> outStart, ::by_ref<double_t> outDuration) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outStart, outDuration);
}
inline void UnityEngine::Timeline::AnimationTrack::AssignAnimationClip(::UnityEngine::Timeline::TimelineClip* clip, ::UnityEngine::AnimationClip* animClip) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                                              { "AssignAnimationClip", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>(), ::i2c::type_of<::UnityEngine::AnimationClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip, animClip);
}
inline void UnityEngine::Timeline::AnimationTrack::GatherProperties(::UnityEngine::Playables::PlayableDirector* director, ::UnityEngine::Timeline::IPropertyCollector* driver) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, director, driver);
}
inline void UnityEngine::Timeline::AnimationTrack::GetAnimationClips(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AnimationClip>>* animClips) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                                                           { "GetAnimationClips", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AnimationClip>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animClips);
}
inline ::UnityEngine::Timeline::AppliedOffsetMode UnityEngine::Timeline::AnimationTrack::GetOffsetMode(::UnityEngine::GameObject* go, bool animatesRootTransform) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                                                                                         { "GetOffsetMode", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::AppliedOffsetMode>(this, ___internal_method, go, animatesRootTransform);
}
inline bool UnityEngine::Timeline::AnimationTrack::IsRootTransformDisabledByMask(::UnityEngine::GameObject* gameObject, ::UnityEngine::Transform* genericRootNode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                                                           { "IsRootTransformDisabledByMask", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameObject, genericRootNode);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::Timeline::AnimationTrack::GetGenericRootNode(::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "GetGenericRootNode", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, gameObject);
}
inline bool UnityEngine::Timeline::AnimationTrack::AnimatesRootTransform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "AnimatesRootTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::Timeline::AnimationTrack::FindInHierarchyBreadthFirst(::UnityEngine::Transform* t, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                                                           { "FindInHierarchyBreadthFirst", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(nullptr, ___internal_method, t, name);
}
inline ::UnityEngine::Vector3 UnityEngine::Timeline::AnimationTrack::get_openClipOffsetPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_openClipOffsetPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_openClipOffsetPosition(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "set_openClipOffsetPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion UnityEngine::Timeline::AnimationTrack::get_openClipOffsetRotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_openClipOffsetRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_openClipOffsetRotation(::UnityEngine::Quaternion value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "set_openClipOffsetRotation", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::Timeline::AnimationTrack::get_openClipOffsetEulerAngles() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_openClipOffsetEulerAngles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_openClipOffsetEulerAngles(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "set_openClipOffsetEulerAngles", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation UnityEngine::Timeline::AnimationTrack::get_openClipPreExtrapolation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_openClipPreExtrapolation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip_ClipExtrapolation>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_openClipPreExtrapolation(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                                                           { "set_openClipPreExtrapolation", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip_ClipExtrapolation>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Timeline::TimelineClip_ClipExtrapolation UnityEngine::Timeline::AnimationTrack::get_openClipPostExtrapolation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { "get_openClipPostExtrapolation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip_ClipExtrapolation>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_openClipPostExtrapolation(::UnityEngine::Timeline::TimelineClip_ClipExtrapolation value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(),
                                                           { "set_openClipPostExtrapolation", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip_ClipExtrapolation>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Timeline::AnimationTrack::OnUpgradeFromVersion(int32_t oldVersion) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldVersion);
}
inline void UnityEngine::Timeline::AnimationTrack::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationTrack*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::AnimationTrack* UnityEngine::Timeline::AnimationTrack::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::AnimationTrack*>());
}
/// @brief Convert operator to "::UnityEngine::Timeline::ILayerable"
constexpr UnityEngine::Timeline::AnimationTrack::operator ::UnityEngine::Timeline::ILayerable*() noexcept {
  return static_cast<::UnityEngine::Timeline::ILayerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Timeline::ILayerable"
constexpr ::UnityEngine::Timeline::ILayerable* UnityEngine::Timeline::AnimationTrack::i___UnityEngine__Timeline__ILayerable() noexcept {
  return static_cast<::UnityEngine::Timeline::ILayerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::AnimationTrack::AnimationTrack() {}
