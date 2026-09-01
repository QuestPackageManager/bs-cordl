#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\AnimationPlayableAsset.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBinding_impl.hpp"
#include "UnityEngine/Timeline/zzzz__AppliedOffsetMode_impl.hpp"
#include "UnityEngine/Timeline/zzzz__MatchTargetFields_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Timeline/zzzz__AnimationPlayableAsset_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBinding_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Timeline/zzzz__AnimationPlayableAsset_def.hpp"
#include "UnityEngine/Timeline/zzzz__AppliedOffsetMode_def.hpp"
#include "UnityEngine/Timeline/zzzz__ClipCaps_def.hpp"
#include "UnityEngine/Timeline/zzzz__IPropertyCollector_def.hpp"
#include "UnityEngine/Timeline/zzzz__IPropertyPreview_def.hpp"
#include "UnityEngine/Timeline/zzzz__ITimelineClipAsset_def.hpp"
#include "UnityEngine/Timeline/zzzz__MatchTargetFields_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode::AnimationPlayableAsset_LoopMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode::AnimationPlayableAsset_LoopMode() {}
constexpr ::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode UnityEngine::Timeline::AnimationPlayableAsset_LoopMode::UseSourceAsset{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode UnityEngine::Timeline::AnimationPlayableAsset_LoopMode::On{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode UnityEngine::Timeline::AnimationPlayableAsset_LoopMode::Off{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::AnimationPlayableAsset_Versions::AnimationPlayableAsset_Versions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::AnimationPlayableAsset_Versions::AnimationPlayableAsset_Versions() {}
constexpr ::UnityEngine::Timeline::AnimationPlayableAsset_Versions UnityEngine::Timeline::AnimationPlayableAsset_Versions::Initial{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Timeline::AnimationPlayableAsset_Versions UnityEngine::Timeline::AnimationPlayableAsset_Versions::RotationAsEuler{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset_AnimationPlayableAssetUpgrade.ConvertRotationToEuler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Timeline::AnimationPlayableAsset*)>(
    &::UnityEngine::Timeline::AnimationPlayableAsset_AnimationPlayableAssetUpgrade::ConvertRotationToEuler)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x69adef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset_AnimationPlayableAssetUpgrade*>(),
                                                                                           { "ConvertRotationToEuler", {}, { ::i2c::type_of<::UnityEngine::Timeline::AnimationPlayableAsset*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Timeline::AnimationPlayableAsset_AnimationPlayableAssetUpgrade::ConvertRotationToEuler(::UnityEngine::Timeline::AnimationPlayableAsset* asset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset_AnimationPlayableAssetUpgrade*>(),
                                                                                         { "ConvertRotationToEuler", {}, { ::i2c::type_of<::UnityEngine::Timeline::AnimationPlayableAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, asset);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::AnimationPlayableAsset_AnimationPlayableAssetUpgrade::AnimationPlayableAsset_AnimationPlayableAssetUpgrade() {}
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::*)(int32_t)>(
    &::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x69ad5ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::*)()>(
    &::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69ae0a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::*)()>(
    &::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::MoveNext)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x69ae0a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45.System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableBinding (::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::*)()>(
    &::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x69ae128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::*)()>(
    &::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x69ae138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::*)()>(
    &::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x69ae170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45.System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>* (::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::*)()>(
        &::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x69ae1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45*>(),
                                                                                           { "System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::*)()>(
    &::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69ae26c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::UnityEngine::Playables::PlayableBinding& UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::UnityEngine::Playables::PlayableBinding const& UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::__cordl_internal_set___2__current(::UnityEngine::Playables::PlayableBinding value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::UnityW<::UnityEngine::Timeline::AnimationPlayableAsset>& UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::UnityEngine::Timeline::AnimationPlayableAsset> const& UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::__cordl_internal_set___4__this(::UnityW<::UnityEngine::Timeline::AnimationPlayableAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
inline void UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Playables::PlayableBinding
UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableBinding>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*
UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45*>(),
                                                                                         { "System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45* UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>"
constexpr UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*
UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::i___System__Collections__Generic__IEnumerable_1___UnityEngine__Playables__PlayableBinding_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>"
constexpr UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*
UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::i___System__Collections__Generic__IEnumerator_1___UnityEngine__Playables__PlayableBinding_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::AnimationPlayableAsset__get_outputs_d__45::AnimationPlayableAsset__get_outputs_d__45() {}
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.get_position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Timeline::AnimationPlayableAsset::*)()>(&::UnityEngine::Timeline::AnimationPlayableAsset::get_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69ad1b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "get_position", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.set_position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationPlayableAsset::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::Timeline::AnimationPlayableAsset::set_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69ad1c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "set_position", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.get_rotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::Timeline::AnimationPlayableAsset::*)()>(
    &::UnityEngine::Timeline::AnimationPlayableAsset::get_rotation)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x69ad1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "get_rotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.set_rotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationPlayableAsset::*)(::UnityEngine::Quaternion)>(
    &::UnityEngine::Timeline::AnimationPlayableAsset::set_rotation)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x69ad1fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "set_rotation", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.get_eulerAngles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Timeline::AnimationPlayableAsset::*)()>(
    &::UnityEngine::Timeline::AnimationPlayableAsset::get_eulerAngles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69ad238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "get_eulerAngles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.set_eulerAngles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationPlayableAsset::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::Timeline::AnimationPlayableAsset::set_eulerAngles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69ad244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "set_eulerAngles", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.get_useTrackMatchFields
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::AnimationPlayableAsset::*)()>(&::UnityEngine::Timeline::AnimationPlayableAsset::get_useTrackMatchFields)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69ad250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "get_useTrackMatchFields", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.set_useTrackMatchFields
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationPlayableAsset::*)(bool)>(&::UnityEngine::Timeline::AnimationPlayableAsset::set_useTrackMatchFields)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69ad258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "set_useTrackMatchFields", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.get_matchTargetFields
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::MatchTargetFields (::UnityEngine::Timeline::AnimationPlayableAsset::*)()>(
    &::UnityEngine::Timeline::AnimationPlayableAsset::get_matchTargetFields)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69ad260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "get_matchTargetFields", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.set_matchTargetFields
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationPlayableAsset::*)(::UnityEngine::Timeline::MatchTargetFields)>(
    &::UnityEngine::Timeline::AnimationPlayableAsset::set_matchTargetFields)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69ad268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(),
                                                                                           { "set_matchTargetFields", {}, { ::i2c::type_of<::UnityEngine::Timeline::MatchTargetFields>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.get_removeStartOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::AnimationPlayableAsset::*)()>(&::UnityEngine::Timeline::AnimationPlayableAsset::get_removeStartOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69ad270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "get_removeStartOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.set_removeStartOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationPlayableAsset::*)(bool)>(&::UnityEngine::Timeline::AnimationPlayableAsset::set_removeStartOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69ad278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "set_removeStartOffset", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.get_applyFootIK
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::AnimationPlayableAsset::*)()>(&::UnityEngine::Timeline::AnimationPlayableAsset::get_applyFootIK)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69ad280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "get_applyFootIK", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.set_applyFootIK
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationPlayableAsset::*)(bool)>(&::UnityEngine::Timeline::AnimationPlayableAsset::set_applyFootIK)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69ad288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "set_applyFootIK", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.get_loop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode (::UnityEngine::Timeline::AnimationPlayableAsset::*)()>(
    &::UnityEngine::Timeline::AnimationPlayableAsset::get_loop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69ad290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "get_loop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.set_loop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationPlayableAsset::*)(::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode)>(
    &::UnityEngine::Timeline::AnimationPlayableAsset::set_loop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69ad298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(),
                                                                                           { "set_loop", {}, { ::i2c::type_of<::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.get_hasRootTransforms
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::AnimationPlayableAsset::*)()>(&::UnityEngine::Timeline::AnimationPlayableAsset::get_hasRootTransforms)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x69ad2a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "get_hasRootTransforms", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.get_appliedOffsetMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::AppliedOffsetMode (::UnityEngine::Timeline::AnimationPlayableAsset::*)()>(
    &::UnityEngine::Timeline::AnimationPlayableAsset::get_appliedOffsetMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69ad41c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "get_appliedOffsetMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.set_appliedOffsetMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationPlayableAsset::*)(::UnityEngine::Timeline::AppliedOffsetMode)>(
    &::UnityEngine::Timeline::AnimationPlayableAsset::set_appliedOffsetMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69ad424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(),
                                                                                           { "set_appliedOffsetMode", {}, { ::i2c::type_of<::UnityEngine::Timeline::AppliedOffsetMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.get_clip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AnimationClip> (::UnityEngine::Timeline::AnimationPlayableAsset::*)()>(
    &::UnityEngine::Timeline::AnimationPlayableAsset::get_clip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69ad42c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "get_clip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.set_clip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationPlayableAsset::*)(::UnityEngine::AnimationClip*)>(
    &::UnityEngine::Timeline::AnimationPlayableAsset::set_clip)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x69ad434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "set_clip", {}, { ::i2c::type_of<::UnityEngine::AnimationClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.get_duration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Timeline::AnimationPlayableAsset::*)()>(&::UnityEngine::Timeline::AnimationPlayableAsset::get_duration)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x69ad4f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { ::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.get_outputs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* (
    ::UnityEngine::Timeline::AnimationPlayableAsset::*)()>(&::UnityEngine::Timeline::AnimationPlayableAsset::get_outputs)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x69ad57c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { ::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.CreatePlayable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::AnimationPlayableAsset::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&::UnityEngine::Timeline::AnimationPlayableAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x69ad60c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { ::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.CreatePlayable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::AnimationClip*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, bool, ::UnityEngine::Timeline::AppliedOffsetMode, bool,
    ::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode)>(&::UnityEngine::Timeline::AnimationPlayableAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0x69ad6e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(),
                                         { "CreatePlayable",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                             ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Timeline::AppliedOffsetMode>(), ::i2c::type_of<bool>(),
                                             ::i2c::type_of<::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.ShouldApplyOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Timeline::AppliedOffsetMode, ::UnityEngine::AnimationClip*)>(
    &::UnityEngine::Timeline::AnimationPlayableAsset::ShouldApplyOffset)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x69adb68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(),
                                                { "ShouldApplyOffset", {}, { ::i2c::type_of<::UnityEngine::Timeline::AppliedOffsetMode>(), ::i2c::type_of<::UnityEngine::AnimationClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.ShouldApplyScaleRemove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Timeline::AppliedOffsetMode)>(&::UnityEngine::Timeline::AnimationPlayableAsset::ShouldApplyScaleRemove)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x69adb50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(),
                                                                                           { "ShouldApplyScaleRemove", {}, { ::i2c::type_of<::UnityEngine::Timeline::AppliedOffsetMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.get_clipCaps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::ClipCaps (::UnityEngine::Timeline::AnimationPlayableAsset::*)()>(
    &::UnityEngine::Timeline::AnimationPlayableAsset::get_clipCaps)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x69adbec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "get_clipCaps", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.ResetOffsets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationPlayableAsset::*)()>(&::UnityEngine::Timeline::AnimationPlayableAsset::ResetOffsets)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x69adcd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "ResetOffsets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.GatherProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationPlayableAsset::*)(
    ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*)>(&::UnityEngine::Timeline::AnimationPlayableAsset::GatherProperties)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x69add44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(),
                            { "GatherProperties", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableDirector*>(), ::i2c::type_of<::UnityEngine::Timeline::IPropertyCollector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.HasRootTransforms
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::AnimationClip*)>(&::UnityEngine::Timeline::AnimationPlayableAsset::HasRootTransforms)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x69ad34c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "HasRootTransforms", {}, { ::i2c::type_of<::UnityEngine::AnimationClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationPlayableAsset::*)()>(
    &::UnityEngine::Timeline::AnimationPlayableAsset::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x69addfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationPlayableAsset::*)()>(
    &::UnityEngine::Timeline::AnimationPlayableAsset::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x69ade60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.OnUpgradeFromVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationPlayableAsset::*)(int32_t)>(&::UnityEngine::Timeline::AnimationPlayableAsset::OnUpgradeFromVersion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x69adee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "OnUpgradeFromVersion", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AnimationPlayableAsset::*)()>(&::UnityEngine::Timeline::AnimationPlayableAsset::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x69adf44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AnimationClip>& UnityEngine::Timeline::AnimationPlayableAsset::__cordl_internal_get_m_Clip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Clip;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& UnityEngine::Timeline::AnimationPlayableAsset::__cordl_internal_get_m_Clip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Clip;
}
constexpr void UnityEngine::Timeline::AnimationPlayableAsset::__cordl_internal_set_m_Clip(::UnityW<::UnityEngine::AnimationClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Clip = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Timeline::AnimationPlayableAsset::__cordl_internal_get_m_Position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Position;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Timeline::AnimationPlayableAsset::__cordl_internal_get_m_Position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Position;
}
constexpr void UnityEngine::Timeline::AnimationPlayableAsset::__cordl_internal_set_m_Position(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Position = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Timeline::AnimationPlayableAsset::__cordl_internal_get_m_EulerAngles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EulerAngles;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Timeline::AnimationPlayableAsset::__cordl_internal_get_m_EulerAngles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EulerAngles;
}
constexpr void UnityEngine::Timeline::AnimationPlayableAsset::__cordl_internal_set_m_EulerAngles(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EulerAngles = value;
}
constexpr bool& UnityEngine::Timeline::AnimationPlayableAsset::__cordl_internal_get_m_UseTrackMatchFields() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseTrackMatchFields;
}
constexpr bool const& UnityEngine::Timeline::AnimationPlayableAsset::__cordl_internal_get_m_UseTrackMatchFields() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseTrackMatchFields;
}
constexpr void UnityEngine::Timeline::AnimationPlayableAsset::__cordl_internal_set_m_UseTrackMatchFields(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseTrackMatchFields = value;
}
constexpr ::UnityEngine::Timeline::MatchTargetFields& UnityEngine::Timeline::AnimationPlayableAsset::__cordl_internal_get_m_MatchTargetFields() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MatchTargetFields;
}
constexpr ::UnityEngine::Timeline::MatchTargetFields const& UnityEngine::Timeline::AnimationPlayableAsset::__cordl_internal_get_m_MatchTargetFields() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MatchTargetFields;
}
constexpr void UnityEngine::Timeline::AnimationPlayableAsset::__cordl_internal_set_m_MatchTargetFields(::UnityEngine::Timeline::MatchTargetFields value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MatchTargetFields = value;
}
constexpr bool& UnityEngine::Timeline::AnimationPlayableAsset::__cordl_internal_get_m_RemoveStartOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RemoveStartOffset;
}
constexpr bool const& UnityEngine::Timeline::AnimationPlayableAsset::__cordl_internal_get_m_RemoveStartOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RemoveStartOffset;
}
constexpr void UnityEngine::Timeline::AnimationPlayableAsset::__cordl_internal_set_m_RemoveStartOffset(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RemoveStartOffset = value;
}
constexpr bool& UnityEngine::Timeline::AnimationPlayableAsset::__cordl_internal_get_m_ApplyFootIK() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ApplyFootIK;
}
constexpr bool const& UnityEngine::Timeline::AnimationPlayableAsset::__cordl_internal_get_m_ApplyFootIK() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ApplyFootIK;
}
constexpr void UnityEngine::Timeline::AnimationPlayableAsset::__cordl_internal_set_m_ApplyFootIK(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ApplyFootIK = value;
}
constexpr ::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode& UnityEngine::Timeline::AnimationPlayableAsset::__cordl_internal_get_m_Loop() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Loop;
}
constexpr ::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode const& UnityEngine::Timeline::AnimationPlayableAsset::__cordl_internal_get_m_Loop() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Loop;
}
constexpr void UnityEngine::Timeline::AnimationPlayableAsset::__cordl_internal_set_m_Loop(::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Loop = value;
}
constexpr ::UnityEngine::Timeline::AppliedOffsetMode& UnityEngine::Timeline::AnimationPlayableAsset::__cordl_internal_get__appliedOffsetMode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appliedOffsetMode_k__BackingField;
}
constexpr ::UnityEngine::Timeline::AppliedOffsetMode const& UnityEngine::Timeline::AnimationPlayableAsset::__cordl_internal_get__appliedOffsetMode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appliedOffsetMode_k__BackingField;
}
constexpr void UnityEngine::Timeline::AnimationPlayableAsset::__cordl_internal_set__appliedOffsetMode_k__BackingField(::UnityEngine::Timeline::AppliedOffsetMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appliedOffsetMode_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Timeline::AnimationPlayableAsset::__cordl_internal_get_m_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr int32_t const& UnityEngine::Timeline::AnimationPlayableAsset::__cordl_internal_get_m_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr void UnityEngine::Timeline::AnimationPlayableAsset::__cordl_internal_set_m_Version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Version = value;
}
constexpr ::UnityEngine::Quaternion& UnityEngine::Timeline::AnimationPlayableAsset::__cordl_internal_get_m_Rotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Rotation;
}
constexpr ::UnityEngine::Quaternion const& UnityEngine::Timeline::AnimationPlayableAsset::__cordl_internal_get_m_Rotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Rotation;
}
constexpr void UnityEngine::Timeline::AnimationPlayableAsset::__cordl_internal_set_m_Rotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Rotation = value;
}
inline void UnityEngine::Timeline::AnimationPlayableAsset::setStaticF_k_LatestVersion(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_LatestVersion", ::UnityEngine::Timeline::AnimationPlayableAsset*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Timeline::AnimationPlayableAsset::getStaticF_k_LatestVersion() {
  return ::cordl_internals::getStaticField<int32_t, "k_LatestVersion", ::UnityEngine::Timeline::AnimationPlayableAsset*>();
}
inline ::UnityEngine::Vector3 UnityEngine::Timeline::AnimationPlayableAsset::get_position() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "get_position", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationPlayableAsset::set_position(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "set_position", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion UnityEngine::Timeline::AnimationPlayableAsset::get_rotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "get_rotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationPlayableAsset::set_rotation(::UnityEngine::Quaternion value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "set_rotation", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::Timeline::AnimationPlayableAsset::get_eulerAngles() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "get_eulerAngles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationPlayableAsset::set_eulerAngles(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "set_eulerAngles", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Timeline::AnimationPlayableAsset::get_useTrackMatchFields() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "get_useTrackMatchFields", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationPlayableAsset::set_useTrackMatchFields(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "set_useTrackMatchFields", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Timeline::MatchTargetFields UnityEngine::Timeline::AnimationPlayableAsset::get_matchTargetFields() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "get_matchTargetFields", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::MatchTargetFields>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationPlayableAsset::set_matchTargetFields(::UnityEngine::Timeline::MatchTargetFields value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(),
                                                                                         { "set_matchTargetFields", {}, { ::i2c::type_of<::UnityEngine::Timeline::MatchTargetFields>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Timeline::AnimationPlayableAsset::get_removeStartOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "get_removeStartOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationPlayableAsset::set_removeStartOffset(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "set_removeStartOffset", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Timeline::AnimationPlayableAsset::get_applyFootIK() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "get_applyFootIK", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationPlayableAsset::set_applyFootIK(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "set_applyFootIK", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode UnityEngine::Timeline::AnimationPlayableAsset::get_loop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "get_loop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationPlayableAsset::set_loop(::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(),
                                                                                         { "set_loop", {}, { ::i2c::type_of<::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Timeline::AnimationPlayableAsset::get_hasRootTransforms() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "get_hasRootTransforms", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::AppliedOffsetMode UnityEngine::Timeline::AnimationPlayableAsset::get_appliedOffsetMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "get_appliedOffsetMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::AppliedOffsetMode>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationPlayableAsset::set_appliedOffsetMode(::UnityEngine::Timeline::AppliedOffsetMode value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(),
                                                                                         { "set_appliedOffsetMode", {}, { ::i2c::type_of<::UnityEngine::Timeline::AppliedOffsetMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AnimationClip> UnityEngine::Timeline::AnimationPlayableAsset::get_clip() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "get_clip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AnimationClip>>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationPlayableAsset::set_clip(::UnityEngine::AnimationClip* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "set_clip", {}, { ::i2c::type_of<::UnityEngine::AnimationClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t UnityEngine::Timeline::AnimationPlayableAsset::get_duration() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* UnityEngine::Timeline::AnimationPlayableAsset::get_outputs() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*>(this, ___internal_method);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::AnimationPlayableAsset::CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(this, ___internal_method, graph, go);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::AnimationPlayableAsset::CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::AnimationClip* clip,
                                                                                                        ::UnityEngine::Vector3 positionOffset, ::UnityEngine::Vector3 eulerOffset,
                                                                                                        bool removeStartOffset, ::UnityEngine::Timeline::AppliedOffsetMode mode, bool applyFootIK,
                                                                                                        ::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode loop) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(),
                                              { "CreatePlayable",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                  ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Timeline::AppliedOffsetMode>(),
                                                  ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Timeline::AnimationPlayableAsset_LoopMode>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(nullptr, ___internal_method, graph, clip, positionOffset, eulerOffset, removeStartOffset, mode, applyFootIK, loop);
}
inline bool UnityEngine::Timeline::AnimationPlayableAsset::ShouldApplyOffset(::UnityEngine::Timeline::AppliedOffsetMode mode, ::UnityEngine::AnimationClip* clip) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(),
                                              { "ShouldApplyOffset", {}, { ::i2c::type_of<::UnityEngine::Timeline::AppliedOffsetMode>(), ::i2c::type_of<::UnityEngine::AnimationClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mode, clip);
}
inline bool UnityEngine::Timeline::AnimationPlayableAsset::ShouldApplyScaleRemove(::UnityEngine::Timeline::AppliedOffsetMode mode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(),
                                                                                         { "ShouldApplyScaleRemove", {}, { ::i2c::type_of<::UnityEngine::Timeline::AppliedOffsetMode>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mode);
}
inline ::UnityEngine::Timeline::ClipCaps UnityEngine::Timeline::AnimationPlayableAsset::get_clipCaps() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "get_clipCaps", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::ClipCaps>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationPlayableAsset::ResetOffsets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "ResetOffsets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationPlayableAsset::GatherProperties(::UnityEngine::Playables::PlayableDirector* director, ::UnityEngine::Timeline::IPropertyCollector* driver) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(),
                                       { "GatherProperties", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableDirector*>(), ::i2c::type_of<::UnityEngine::Timeline::IPropertyCollector*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, director, driver);
}
inline bool UnityEngine::Timeline::AnimationPlayableAsset::HasRootTransforms(::UnityEngine::AnimationClip* clip) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "HasRootTransforms", {}, { ::i2c::type_of<::UnityEngine::AnimationClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, clip);
}
inline void UnityEngine::Timeline::AnimationPlayableAsset::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationPlayableAsset::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationPlayableAsset::OnUpgradeFromVersion(int32_t oldVersion) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { "OnUpgradeFromVersion", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldVersion);
}
inline void UnityEngine::Timeline::AnimationPlayableAsset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AnimationPlayableAsset*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::AnimationPlayableAsset* UnityEngine::Timeline::AnimationPlayableAsset::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::AnimationPlayableAsset*>());
}
/// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
constexpr UnityEngine::Timeline::AnimationPlayableAsset::operator ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept {
  return static_cast<::UnityEngine::Timeline::ITimelineClipAsset*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Timeline::ITimelineClipAsset"
constexpr ::UnityEngine::Timeline::ITimelineClipAsset* UnityEngine::Timeline::AnimationPlayableAsset::i___UnityEngine__Timeline__ITimelineClipAsset() noexcept {
  return static_cast<::UnityEngine::Timeline::ITimelineClipAsset*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Timeline::IPropertyPreview"
constexpr UnityEngine::Timeline::AnimationPlayableAsset::operator ::UnityEngine::Timeline::IPropertyPreview*() noexcept {
  return static_cast<::UnityEngine::Timeline::IPropertyPreview*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Timeline::IPropertyPreview"
constexpr ::UnityEngine::Timeline::IPropertyPreview* UnityEngine::Timeline::AnimationPlayableAsset::i___UnityEngine__Timeline__IPropertyPreview() noexcept {
  return static_cast<::UnityEngine::Timeline::IPropertyPreview*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr UnityEngine::Timeline::AnimationPlayableAsset::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Timeline::AnimationPlayableAsset::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::AnimationPlayableAsset::AnimationPlayableAsset() {}
