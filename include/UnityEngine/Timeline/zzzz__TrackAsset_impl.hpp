#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\TrackAsset.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBinding_impl.hpp"
#include "UnityEngine/Timeline/zzzz__DiscreteTime_impl.hpp"
#include "UnityEngine/Timeline/zzzz__MarkerList_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayableAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBinding_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Timeline/zzzz__ICurvesOwner_def.hpp"
#include "UnityEngine/Timeline/zzzz__IMarker_def.hpp"
#include "UnityEngine/Timeline/zzzz__IPropertyCollector_def.hpp"
#include "UnityEngine/Timeline/zzzz__IPropertyPreview_def.hpp"
#include "UnityEngine/Timeline/zzzz__IntervalTree_1_def.hpp"
#include "UnityEngine/Timeline/zzzz__RuntimeElement_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineAsset_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackBindingTypeAttribute_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::TrackAsset_Versions::TrackAsset_Versions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TrackAsset_Versions::TrackAsset_Versions() {}
constexpr ::UnityEngine::Timeline::TrackAsset_Versions UnityEngine::Timeline::TrackAsset_Versions::Initial{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Timeline::TrackAsset_Versions UnityEngine::Timeline::TrackAsset_Versions::RotationAsEuler{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Timeline::TrackAsset_Versions UnityEngine::Timeline::TrackAsset_Versions::RootMotionUpgrade{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Timeline::TrackAsset_Versions UnityEngine::Timeline::TrackAsset_Versions::AnimatedTrackProperties{ static_cast<int32_t>(0x3) };
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TrackAsset_TrackAssetUpgrade::TrackAsset_TrackAssetUpgrade() {}
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset_TransientBuildData.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::TrackAsset_TransientBuildData (*)()>(&::UnityEngine::Timeline::TrackAsset_TransientBuildData::Create)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x69bee98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset_TransientBuildData>(), { "Create", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset_TransientBuildData.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset_TransientBuildData::*)()>(&::UnityEngine::Timeline::TrackAsset_TransientBuildData::Clear)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x69bc980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset_TransientBuildData>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Timeline::TrackAsset_TransientBuildData UnityEngine::Timeline::TrackAsset_TransientBuildData::Create() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset_TransientBuildData>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TrackAsset_TransientBuildData>(nullptr, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset_TransientBuildData::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset_TransientBuildData>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "trackList", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "clipList", ty: "::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "markerList", ty:
// "::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::TrackAsset_TransientBuildData::TrackAsset_TransientBuildData(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* trackList,
                                                                                                ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* clipList,
                                                                                                ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>* markerList) noexcept {
  this->trackList = trackList;
  this->clipList = clipList;
  this->markerList = markerList;
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TrackAsset_TransientBuildData::TrackAsset_TransientBuildData() {}
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset___c::*)()>(&::UnityEngine::Timeline::TrackAsset___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69bf000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset___c._SortClips_b__121_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Timeline::TrackAsset___c::*)(::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Timeline::TimelineClip*)>(
    &::UnityEngine::Timeline::TrackAsset___c::_SortClips_b__121_0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x69bf004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset___c*>(),
                                         { "<SortClips>b__121_0", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>(), ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Timeline::TrackAsset___c::setStaticF___9(::UnityEngine::Timeline::TrackAsset___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Timeline::TrackAsset___c*, "<>9", ::UnityEngine::Timeline::TrackAsset___c*>(std::forward<::UnityEngine::Timeline::TrackAsset___c*>(value));
}
inline ::UnityEngine::Timeline::TrackAsset___c* UnityEngine::Timeline::TrackAsset___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Timeline::TrackAsset___c*, "<>9", ::UnityEngine::Timeline::TrackAsset___c*>();
}
inline void UnityEngine::Timeline::TrackAsset___c::setStaticF___9__121_0(::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>*, "<>9__121_0", ::UnityEngine::Timeline::TrackAsset___c*>(
      std::forward<::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>* UnityEngine::Timeline::TrackAsset___c::getStaticF___9__121_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>*, "<>9__121_0", ::UnityEngine::Timeline::TrackAsset___c*>();
}
inline void UnityEngine::Timeline::TrackAsset___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Timeline::TrackAsset___c::_SortClips_b__121_0(::UnityEngine::Timeline::TimelineClip* clip1, ::UnityEngine::Timeline::TimelineClip* clip2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset___c*>(),
                                              { "<SortClips>b__121_0", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>(), ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, clip1, clip2);
}
inline ::UnityEngine::Timeline::TrackAsset___c* UnityEngine::Timeline::TrackAsset___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::TrackAsset___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TrackAsset___c::TrackAsset___c() {}
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset__get_outputs_d__65._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset__get_outputs_d__65::*)(int32_t)>(&::UnityEngine::Timeline::TrackAsset__get_outputs_d__65::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x69b9a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset__get_outputs_d__65*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset__get_outputs_d__65.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset__get_outputs_d__65::*)()>(
    &::UnityEngine::Timeline::TrackAsset__get_outputs_d__65::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69bf078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset__get_outputs_d__65*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset__get_outputs_d__65.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::TrackAsset__get_outputs_d__65::*)()>(&::UnityEngine::Timeline::TrackAsset__get_outputs_d__65::MoveNext)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x69bf07c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset__get_outputs_d__65*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset__get_outputs_d__65.System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableBinding (::UnityEngine::Timeline::TrackAsset__get_outputs_d__65::*)()>(
    &::UnityEngine::Timeline::TrackAsset__get_outputs_d__65::System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x69bf2cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset__get_outputs_d__65*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset__get_outputs_d__65.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset__get_outputs_d__65::*)()>(
    &::UnityEngine::Timeline::TrackAsset__get_outputs_d__65::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x69bf2dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset__get_outputs_d__65*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset__get_outputs_d__65.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Timeline::TrackAsset__get_outputs_d__65::*)()>(
    &::UnityEngine::Timeline::TrackAsset__get_outputs_d__65::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x69bf314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset__get_outputs_d__65*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset__get_outputs_d__65.System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>* (::UnityEngine::Timeline::TrackAsset__get_outputs_d__65::*)()>(
        &::UnityEngine::Timeline::TrackAsset__get_outputs_d__65::System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x69bf378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset__get_outputs_d__65*>(),
                                                                                           { "System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset__get_outputs_d__65.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::Timeline::TrackAsset__get_outputs_d__65::*)()>(
    &::UnityEngine::Timeline::TrackAsset__get_outputs_d__65::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69bf410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset__get_outputs_d__65*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Timeline::TrackAsset__get_outputs_d__65::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& UnityEngine::Timeline::TrackAsset__get_outputs_d__65::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void UnityEngine::Timeline::TrackAsset__get_outputs_d__65::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::UnityEngine::Playables::PlayableBinding& UnityEngine::Timeline::TrackAsset__get_outputs_d__65::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::UnityEngine::Playables::PlayableBinding const& UnityEngine::Timeline::TrackAsset__get_outputs_d__65::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void UnityEngine::Timeline::TrackAsset__get_outputs_d__65::__cordl_internal_set___2__current(::UnityEngine::Playables::PlayableBinding value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& UnityEngine::Timeline::TrackAsset__get_outputs_d__65::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& UnityEngine::Timeline::TrackAsset__get_outputs_d__65::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void UnityEngine::Timeline::TrackAsset__get_outputs_d__65::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::UnityW<::UnityEngine::Timeline::TrackAsset>& UnityEngine::Timeline::TrackAsset__get_outputs_d__65::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::UnityEngine::Timeline::TrackAsset> const& UnityEngine::Timeline::TrackAsset__get_outputs_d__65::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::Timeline::TrackAsset__get_outputs_d__65::__cordl_internal_set___4__this(::UnityW<::UnityEngine::Timeline::TrackAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
inline void UnityEngine::Timeline::TrackAsset__get_outputs_d__65::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset__get_outputs_d__65*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::Timeline::TrackAsset__get_outputs_d__65::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset__get_outputs_d__65*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TrackAsset__get_outputs_d__65::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset__get_outputs_d__65*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Playables::PlayableBinding UnityEngine::Timeline::TrackAsset__get_outputs_d__65::System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset__get_outputs_d__65*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableBinding>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset__get_outputs_d__65::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset__get_outputs_d__65*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Timeline::TrackAsset__get_outputs_d__65::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset__get_outputs_d__65*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*
UnityEngine::Timeline::TrackAsset__get_outputs_d__65::System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset__get_outputs_d__65*>(),
                                                                                         { "System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::Timeline::TrackAsset__get_outputs_d__65::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset__get_outputs_d__65*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::TrackAsset__get_outputs_d__65* UnityEngine::Timeline::TrackAsset__get_outputs_d__65::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::TrackAsset__get_outputs_d__65*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>"
constexpr UnityEngine::Timeline::TrackAsset__get_outputs_d__65::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*
UnityEngine::Timeline::TrackAsset__get_outputs_d__65::i___System__Collections__Generic__IEnumerable_1___UnityEngine__Playables__PlayableBinding_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::Timeline::TrackAsset__get_outputs_d__65::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::Timeline::TrackAsset__get_outputs_d__65::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>"
constexpr UnityEngine::Timeline::TrackAsset__get_outputs_d__65::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*
UnityEngine::Timeline::TrackAsset__get_outputs_d__65::i___System__Collections__Generic__IEnumerator_1___UnityEngine__Playables__PlayableBinding_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::Timeline::TrackAsset__get_outputs_d__65::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::Timeline::TrackAsset__get_outputs_d__65::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Timeline::TrackAsset__get_outputs_d__65::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Timeline::TrackAsset__get_outputs_d__65::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TrackAsset__get_outputs_d__65::TrackAsset__get_outputs_d__65() {}
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.OnBeforeTrackSerialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::OnBeforeTrackSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69b8cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { ::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.OnAfterTrackDeserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::OnAfterTrackDeserialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69b8cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { ::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.OnUpgradeFromVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(int32_t)>(&::UnityEngine::Timeline::TrackAsset::OnUpgradeFromVersion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69b8cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { ::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(
    &::UnityEngine::Timeline::TrackAsset::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x69b8cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(
    &::UnityEngine::Timeline::TrackAsset::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x69b8e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.UpgradeToLatestVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::UpgradeToLatestVersion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69b927c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "UpgradeToLatestVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.add_OnClipPlayableCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Playables::Playable>*)>(
    &::UnityEngine::Timeline::TrackAsset::add_OnClipPlayableCreate)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x69b929c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(),
                            { "add_OnClipPlayableCreate",
                              {},
                              { ::i2c::type_of<::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Playables::Playable>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.remove_OnClipPlayableCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Playables::Playable>*)>(
    &::UnityEngine::Timeline::TrackAsset::remove_OnClipPlayableCreate)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x69b93a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(),
                            { "remove_OnClipPlayableCreate",
                              {},
                              { ::i2c::type_of<::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Playables::Playable>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.add_OnTrackAnimationPlayableCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::System::Action_3<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Playables::Playable>*)>(
        &::UnityEngine::Timeline::TrackAsset::add_OnTrackAnimationPlayableCreate)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x69b94ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(),
                            { "add_OnTrackAnimationPlayableCreate",
                              {},
                              { ::i2c::type_of<::System::Action_3<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Playables::Playable>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.remove_OnTrackAnimationPlayableCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::System::Action_3<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Playables::Playable>*)>(
        &::UnityEngine::Timeline::TrackAsset::remove_OnTrackAnimationPlayableCreate)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x69b95b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(),
                            { "remove_OnTrackAnimationPlayableCreate",
                              {},
                              { ::i2c::type_of<::System::Action_3<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Playables::Playable>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_start)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x69b96bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "get_start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_end
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_end)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x69b6db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "get_end", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_duration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_duration)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x69b9834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "get_duration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_muted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_muted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b98a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "get_muted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.set_muted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(bool)>(&::UnityEngine::Timeline::TrackAsset::set_muted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b98a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "set_muted", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_mutedInHierarchy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_mutedInHierarchy)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x69b69c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "get_mutedInHierarchy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_timelineAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Timeline::TimelineAsset> (::UnityEngine::Timeline::TrackAsset::*)()>(
    &::UnityEngine::Timeline::TrackAsset::get_timelineAsset)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x69b7170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "get_timelineAsset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_parent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Playables::PlayableAsset> (::UnityEngine::Timeline::TrackAsset::*)()>(
    &::UnityEngine::Timeline::TrackAsset::get_parent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b98b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "get_parent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.set_parent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Playables::PlayableAsset*)>(&::UnityEngine::Timeline::TrackAsset::set_parent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b98b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "set_parent", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetClips
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>* (::UnityEngine::Timeline::TrackAsset::*)()>(
    &::UnityEngine::Timeline::TrackAsset::GetClips)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69b2690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "GetClips", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_clips
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Timeline::TimelineClip*> (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_clips)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x69aea04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "get_clips", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_isEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_isEmpty)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x69b98c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { ::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_hasClips
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_hasClips)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x69ac568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "get_hasClips", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_hasCurves
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_hasCurves)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x69b9934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "get_hasCurves", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_isSubTrack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_isSubTrack)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x69af36c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "get_isSubTrack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_outputs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* (::UnityEngine::Timeline::TrackAsset::*)()>(
    &::UnityEngine::Timeline::TrackAsset::get_outputs)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x69b99cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { ::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetChildTracks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* (::UnityEngine::Timeline::TrackAsset::*)()>(
    &::UnityEngine::Timeline::TrackAsset::GetChildTracks)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x69b0f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "GetChildTracks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_customPlayableTypename
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_customPlayableTypename)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b9c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "get_customPlayableTypename", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.set_customPlayableTypename
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::StringW)>(&::UnityEngine::Timeline::TrackAsset::set_customPlayableTypename)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b9c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "set_customPlayableTypename", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_curves
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AnimationClip> (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_curves)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b9c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "get_curves", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.set_curves
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::AnimationClip*)>(&::UnityEngine::Timeline::TrackAsset::set_curves)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b9c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "set_curves", {}, { ::i2c::type_of<::UnityEngine::AnimationClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Timeline::TrackAsset::*)()>(
    &::UnityEngine::Timeline::TrackAsset::UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x69b9ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "UnityEngine.Timeline.ICurvesOwner.get_defaultCurvesName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.UnityEngine_Timeline_ICurvesOwner_get_asset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::Timeline::TrackAsset::*)()>(
    &::UnityEngine::Timeline::TrackAsset::UnityEngine_Timeline_ICurvesOwner_get_asset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69b9ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "UnityEngine.Timeline.ICurvesOwner.get_asset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.UnityEngine_Timeline_ICurvesOwner_get_assetOwner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::Timeline::TrackAsset::*)()>(
    &::UnityEngine::Timeline::TrackAsset::UnityEngine_Timeline_ICurvesOwner_get_assetOwner)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69b9ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "UnityEngine.Timeline.ICurvesOwner.get_assetOwner", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.UnityEngine_Timeline_ICurvesOwner_get_targetTrack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Timeline::TrackAsset> (::UnityEngine::Timeline::TrackAsset::*)()>(
    &::UnityEngine::Timeline::TrackAsset::UnityEngine_Timeline_ICurvesOwner_get_targetTrack)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69b9cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "UnityEngine.Timeline.ICurvesOwner.get_targetTrack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_subTracksObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ScriptableObject>>* (::UnityEngine::Timeline::TrackAsset::*)()>(
    &::UnityEngine::Timeline::TrackAsset::get_subTracksObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b9cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "get_subTracksObjects", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_locked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_locked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b9cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "get_locked", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.set_locked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(bool)>(&::UnityEngine::Timeline::TrackAsset::set_locked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b9d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "set_locked", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_lockedInHierarchy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_lockedInHierarchy)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x69b9d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "get_lockedInHierarchy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_supportsNotifications
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_supportsNotifications)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x69b9ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "get_supportsNotifications", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.__internalAwake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::__internalAwake)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x69b9f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "__internalAwake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreateCurves
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::StringW)>(&::UnityEngine::Timeline::TrackAsset::CreateCurves)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x69ba040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "CreateCurves", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreateTrackMixer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*,
                                                                                                                                   int32_t)>(&::UnityEngine::Timeline::TrackAsset::CreateTrackMixer)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x69ba0f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { ::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreatePlayable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::TrackAsset::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&::UnityEngine::Timeline::TrackAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x69ba16c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(),
                                                             { "CreatePlayable", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreateDefaultClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::TimelineClip* (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::CreateDefaultClip)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x69ba1c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "CreateDefaultClip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.DeleteClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Timeline::TimelineClip*)>(&::UnityEngine::Timeline::TrackAsset::DeleteClip)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x69ba4b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "DeleteClip", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreateMarker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::IMarker* (::UnityEngine::Timeline::TrackAsset::*)(::System::Type*, double_t)>(
    &::UnityEngine::Timeline::TrackAsset::CreateMarker)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69ba5dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "CreateMarker", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.DeleteMarker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Timeline::IMarker*)>(&::UnityEngine::Timeline::TrackAsset::DeleteMarker)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69ba8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "DeleteMarker", {}, { ::i2c::type_of<::UnityEngine::Timeline::IMarker*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetMarkers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>* (::UnityEngine::Timeline::TrackAsset::*)()>(
    &::UnityEngine::Timeline::TrackAsset::GetMarkers)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x69b9280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "GetMarkers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetMarkerCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::GetMarkerCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b99c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "GetMarkerCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetMarker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::IMarker* (::UnityEngine::Timeline::TrackAsset::*)(int32_t)>(&::UnityEngine::Timeline::TrackAsset::GetMarker)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69bab40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "GetMarker", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreateClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::TimelineClip* (::UnityEngine::Timeline::TrackAsset::*)(::System::Type*)>(
    &::UnityEngine::Timeline::TrackAsset::CreateClip)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x69babb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "CreateClip", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreateAndAddNewClipOfType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::TimelineClip* (::UnityEngine::Timeline::TrackAsset::*)(::System::Type*)>(
    &::UnityEngine::Timeline::TrackAsset::CreateAndAddNewClipOfType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x69ba488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "CreateAndAddNewClipOfType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreateClipOfType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::TimelineClip* (::UnityEngine::Timeline::TrackAsset::*)(::System::Type*)>(
    &::UnityEngine::Timeline::TrackAsset::CreateClipOfType)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x69baf3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "CreateClipOfType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreateClipFromPlayableAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::TimelineClip* (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Playables::IPlayableAsset*)>(
    &::UnityEngine::Timeline::TrackAsset::CreateClipFromPlayableAsset)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x69bb38c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(),
                                                                                           { "CreateClipFromPlayableAsset", {}, { ::i2c::type_of<::UnityEngine::Playables::IPlayableAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreateClipFromAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::TimelineClip* (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::ScriptableObject*)>(
    &::UnityEngine::Timeline::TrackAsset::CreateClipFromAsset)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x69bb10c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "CreateClipFromAsset", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetMarkersRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ScriptableObject>>* (::UnityEngine::Timeline::TrackAsset::*)()>(
    &::UnityEngine::Timeline::TrackAsset::GetMarkersRaw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69bb80c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "GetMarkersRaw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.ClearMarkers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::ClearMarkers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69bb814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "ClearMarkers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.AddMarker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::ScriptableObject*)>(&::UnityEngine::Timeline::TrackAsset::AddMarker)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69bb894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "AddMarker", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.DeleteMarkerRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::ScriptableObject*)>(&::UnityEngine::Timeline::TrackAsset::DeleteMarkerRaw)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x69bb98c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "DeleteMarkerRaw", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetTimeRangeHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::GetTimeRangeHash)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x69bba88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "GetTimeRangeHash", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.AddClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Timeline::TimelineClip*)>(&::UnityEngine::Timeline::TrackAsset::AddClip)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x69b3618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "AddClip", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreateNotificationsPlayable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::TrackAsset::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable)>(
    &::UnityEngine::Timeline::TrackAsset::CreateNotificationsPlayable)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x69bbd2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(),
                                                             { "CreateNotificationsPlayable",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Playables::Playable>(),
                                                                 ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Playables::Playable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreatePlayableGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::TrackAsset::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*, ::UnityEngine::Playables::Playable)>(
    &::UnityEngine::Timeline::TrackAsset::CreatePlayableGraph)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x69bc3b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(),
                                                                                           { "CreatePlayableGraph",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::GameObject*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Playables::Playable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CompileClips
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::TrackAsset::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Collections::Generic::IList_1<::UnityEngine::Timeline::TimelineClip*>*,
    ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*)>(&::UnityEngine::Timeline::TrackAsset::CompileClips)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x69bca78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { ::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GatherCompilableTracks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*)>(
    &::UnityEngine::Timeline::TrackAsset::GatherCompilableTracks)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x69bd008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(),
                                                { "GatherCompilableTracks", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GatherNotifications
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>*)>(
    &::UnityEngine::Timeline::TrackAsset::GatherNotifications)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x69bc04c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(),
                                                             { "GatherNotifications", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreateMixerPlayableGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::TrackAsset::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*)>(
    &::UnityEngine::Timeline::TrackAsset::CreateMixerPlayableGraph)> {
  constexpr static std::size_t size = 0x5fc;
  constexpr static std::size_t addrs = 0x69bd3ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { ::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.ConfigureTrackAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*,
                                                                                                     ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable)>(
    &::UnityEngine::Timeline::TrackAsset::ConfigureTrackAnimation)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x69bceac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "ConfigureTrackAnimation",
                                                                                       {},
                                                                                       { ::i2c::type_of<::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*>(),
                                                                                         ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Playables::Playable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.SortClips
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::SortClips)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x69bd9e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "SortClips", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.ClearClipsInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::ClearClipsInternal)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x69bdb18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "ClearClipsInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.ClearSubTracksInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::ClearSubTracksInternal)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x69bdb90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "ClearSubTracksInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.OnClipMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::OnClipMove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b3268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "OnClipMove", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreateNewClipContainerInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::TimelineClip* (::UnityEngine::Timeline::TrackAsset::*)()>(
    &::UnityEngine::Timeline::TrackAsset::CreateNewClipContainerInternal)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x69bb5ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "CreateNewClipContainerInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.AddChild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Timeline::TrackAsset*)>(&::UnityEngine::Timeline::TrackAsset::AddChild)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x69b80c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "AddChild", {}, { ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.MoveLastTrackBefore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Timeline::TrackAsset*)>(
    &::UnityEngine::Timeline::TrackAsset::MoveLastTrackBefore)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x69bdc08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "MoveLastTrackBefore", {}, { ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.RemoveSubTrack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Timeline::TrackAsset*)>(&::UnityEngine::Timeline::TrackAsset::RemoveSubTrack)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x69b62c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "RemoveSubTrack", {}, { ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.RemoveClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Timeline::TimelineClip*)>(&::UnityEngine::Timeline::TrackAsset::RemoveClip)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x69b35ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "RemoveClip", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetEvaluationTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::by_ref<double_t>, ::by_ref<double_t>)>(
    &::UnityEngine::Timeline::TrackAsset::GetEvaluationTime)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x69b1a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { ::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetSequenceTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::by_ref<double_t>, ::by_ref<double_t>)>(&::UnityEngine::Timeline::TrackAsset::GetSequenceTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x69b1dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { ::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GatherProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*)>(
    &::UnityEngine::Timeline::TrackAsset::GatherProperties)> {
  constexpr static std::size_t size = 0x6ac;
  constexpr static std::size_t addrs = 0x69bde30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { ::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetGameObjectBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Playables::PlayableDirector*)>(
    &::UnityEngine::Timeline::TrackAsset::GetGameObjectBinding)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x69ac878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "GetGameObjectBinding", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableDirector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.ValidateClipType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)(::System::Type*)>(&::UnityEngine::Timeline::TrackAsset::ValidateClipType)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x69bacc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "ValidateClipType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.OnCreateClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Timeline::TimelineClip*)>(&::UnityEngine::Timeline::TrackAsset::OnCreateClip)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69aca50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { ::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.UpdateDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::UpdateDuration)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x69b9720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "UpdateDuration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CalculateItemsHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::CalculateItemsHash)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x69af664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { ::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreatePlayable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::TrackAsset::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*)>(&::UnityEngine::Timeline::TrackAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x69be600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { ::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.Invalidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::Invalidate)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x69b91f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "Invalidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetNotificationDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::GetNotificationDuration)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x69b1ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "GetNotificationDuration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CanCompileClips
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::CanCompileClips)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x69ac5c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { ::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CanCreateTrackMixer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::CanCreateTrackMixer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x69be8d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { ::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.IsCompilable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::IsCompilable)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x69be8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "IsCompilable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.UpdateChildTrackCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::UpdateChildTrackCache)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x69b9a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "UpdateChildTrackCache", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.Hash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::Hash)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x69bec60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { ::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetClipsHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::GetClipsHash)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x69be4dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "GetClipsHash", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetAnimationClipHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::AnimationClip*)>(&::UnityEngine::Timeline::TrackAsset::GetAnimationClipHash)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x69af564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "GetAnimationClipHash", {}, { ::i2c::type_of<::UnityEngine::AnimationClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.HasNotifications
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::HasNotifications)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x69bde14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "HasNotifications", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CanCompileNotifications
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::CanCompileNotifications)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x69bd3b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "CanCompileNotifications", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CanCreateMixerRecursive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::CanCreateMixerRecursive)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x69bc68c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "CanCreateMixerRecursive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x69acab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Timeline::TrackAsset::__cordl_internal_get_m_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr int32_t const& UnityEngine::Timeline::TrackAsset::__cordl_internal_get_m_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr void UnityEngine::Timeline::TrackAsset::__cordl_internal_set_m_Version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Version = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& UnityEngine::Timeline::TrackAsset::__cordl_internal_get_m_AnimClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AnimClip;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& UnityEngine::Timeline::TrackAsset::__cordl_internal_get_m_AnimClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AnimClip;
}
constexpr void UnityEngine::Timeline::TrackAsset::__cordl_internal_set_m_AnimClip(::UnityW<::UnityEngine::AnimationClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AnimClip = value;
}
constexpr bool& UnityEngine::Timeline::TrackAsset::__cordl_internal_get_m_Locked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Locked;
}
constexpr bool const& UnityEngine::Timeline::TrackAsset::__cordl_internal_get_m_Locked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Locked;
}
constexpr void UnityEngine::Timeline::TrackAsset::__cordl_internal_set_m_Locked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Locked = value;
}
constexpr bool& UnityEngine::Timeline::TrackAsset::__cordl_internal_get_m_Muted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Muted;
}
constexpr bool const& UnityEngine::Timeline::TrackAsset::__cordl_internal_get_m_Muted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Muted;
}
constexpr void UnityEngine::Timeline::TrackAsset::__cordl_internal_set_m_Muted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Muted = value;
}
constexpr ::StringW& UnityEngine::Timeline::TrackAsset::__cordl_internal_get_m_CustomPlayableFullTypename() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CustomPlayableFullTypename;
}
constexpr ::StringW const& UnityEngine::Timeline::TrackAsset::__cordl_internal_get_m_CustomPlayableFullTypename() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CustomPlayableFullTypename;
}
constexpr void UnityEngine::Timeline::TrackAsset::__cordl_internal_set_m_CustomPlayableFullTypename(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CustomPlayableFullTypename = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& UnityEngine::Timeline::TrackAsset::__cordl_internal_get_m_Curves() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Curves;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& UnityEngine::Timeline::TrackAsset::__cordl_internal_get_m_Curves() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Curves;
}
constexpr void UnityEngine::Timeline::TrackAsset::__cordl_internal_set_m_Curves(::UnityW<::UnityEngine::AnimationClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Curves = value;
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset>& UnityEngine::Timeline::TrackAsset::__cordl_internal_get_m_Parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Parent;
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset> const& UnityEngine::Timeline::TrackAsset::__cordl_internal_get_m_Parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Parent;
}
constexpr void UnityEngine::Timeline::TrackAsset::__cordl_internal_set_m_Parent(::UnityW<::UnityEngine::Playables::PlayableAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Parent = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ScriptableObject>>*& UnityEngine::Timeline::TrackAsset::__cordl_internal_get_m_Children() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Children;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ScriptableObject>>* const& UnityEngine::Timeline::TrackAsset::__cordl_internal_get_m_Children() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Children;
}
constexpr void UnityEngine::Timeline::TrackAsset::__cordl_internal_set_m_Children(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ScriptableObject>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Children = value;
}
constexpr int32_t& UnityEngine::Timeline::TrackAsset::__cordl_internal_get_m_ItemsHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemsHash;
}
constexpr int32_t const& UnityEngine::Timeline::TrackAsset::__cordl_internal_get_m_ItemsHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemsHash;
}
constexpr void UnityEngine::Timeline::TrackAsset::__cordl_internal_set_m_ItemsHash(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ItemsHash = value;
}
constexpr ::ArrayW<::UnityEngine::Timeline::TimelineClip*>& UnityEngine::Timeline::TrackAsset::__cordl_internal_get_m_ClipsCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClipsCache;
}
constexpr ::ArrayW<::UnityEngine::Timeline::TimelineClip*> const& UnityEngine::Timeline::TrackAsset::__cordl_internal_get_m_ClipsCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClipsCache;
}
constexpr void UnityEngine::Timeline::TrackAsset::__cordl_internal_set_m_ClipsCache(::ArrayW<::UnityEngine::Timeline::TimelineClip*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClipsCache = value;
}
constexpr ::UnityEngine::Timeline::DiscreteTime& UnityEngine::Timeline::TrackAsset::__cordl_internal_get_m_Start() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Start;
}
constexpr ::UnityEngine::Timeline::DiscreteTime const& UnityEngine::Timeline::TrackAsset::__cordl_internal_get_m_Start() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Start;
}
constexpr void UnityEngine::Timeline::TrackAsset::__cordl_internal_set_m_Start(::UnityEngine::Timeline::DiscreteTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Start = value;
}
constexpr ::UnityEngine::Timeline::DiscreteTime& UnityEngine::Timeline::TrackAsset::__cordl_internal_get_m_End() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_End;
}
constexpr ::UnityEngine::Timeline::DiscreteTime const& UnityEngine::Timeline::TrackAsset::__cordl_internal_get_m_End() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_End;
}
constexpr void UnityEngine::Timeline::TrackAsset::__cordl_internal_set_m_End(::UnityEngine::Timeline::DiscreteTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_End = value;
}
constexpr bool& UnityEngine::Timeline::TrackAsset::__cordl_internal_get_m_CacheSorted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CacheSorted;
}
constexpr bool const& UnityEngine::Timeline::TrackAsset::__cordl_internal_get_m_CacheSorted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CacheSorted;
}
constexpr void UnityEngine::Timeline::TrackAsset::__cordl_internal_set_m_CacheSorted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CacheSorted = value;
}
constexpr ::System::Nullable_1<bool>& UnityEngine::Timeline::TrackAsset::__cordl_internal_get_m_SupportsNotifications() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SupportsNotifications;
}
constexpr ::System::Nullable_1<bool> const& UnityEngine::Timeline::TrackAsset::__cordl_internal_get_m_SupportsNotifications() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SupportsNotifications;
}
constexpr void UnityEngine::Timeline::TrackAsset::__cordl_internal_set_m_SupportsNotifications(::System::Nullable_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SupportsNotifications = value;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*& UnityEngine::Timeline::TrackAsset::__cordl_internal_get_m_ChildTrackCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChildTrackCache;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* const& UnityEngine::Timeline::TrackAsset::__cordl_internal_get_m_ChildTrackCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChildTrackCache;
}
constexpr void UnityEngine::Timeline::TrackAsset::__cordl_internal_set_m_ChildTrackCache(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ChildTrackCache = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*& UnityEngine::Timeline::TrackAsset::__cordl_internal_get_m_Clips() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Clips;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* const& UnityEngine::Timeline::TrackAsset::__cordl_internal_get_m_Clips() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Clips;
}
constexpr void UnityEngine::Timeline::TrackAsset::__cordl_internal_set_m_Clips(::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Clips = value;
}
constexpr ::UnityEngine::Timeline::MarkerList& UnityEngine::Timeline::TrackAsset::__cordl_internal_get_m_Markers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Markers;
}
constexpr ::UnityEngine::Timeline::MarkerList const& UnityEngine::Timeline::TrackAsset::__cordl_internal_get_m_Markers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Markers;
}
constexpr void UnityEngine::Timeline::TrackAsset::__cordl_internal_set_m_Markers(::UnityEngine::Timeline::MarkerList value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Markers = value;
}
inline void UnityEngine::Timeline::TrackAsset::setStaticF_s_BuildData(::UnityEngine::Timeline::TrackAsset_TransientBuildData value) {
  ::cordl_internals::setStaticField<::UnityEngine::Timeline::TrackAsset_TransientBuildData, "s_BuildData", ::UnityEngine::Timeline::TrackAsset*>(
      std::forward<::UnityEngine::Timeline::TrackAsset_TransientBuildData>(value));
}
inline ::UnityEngine::Timeline::TrackAsset_TransientBuildData UnityEngine::Timeline::TrackAsset::getStaticF_s_BuildData() {
  return ::cordl_internals::getStaticField<::UnityEngine::Timeline::TrackAsset_TransientBuildData, "s_BuildData", ::UnityEngine::Timeline::TrackAsset*>();
}
inline void UnityEngine::Timeline::TrackAsset::setStaticF_OnClipPlayableCreate(
    ::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Playables::Playable>* value) {
  ::cordl_internals::setStaticField<::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Playables::Playable>*, "OnClipPlayableCreate",
                                    ::UnityEngine::Timeline::TrackAsset*>(
      std::forward<::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Playables::Playable>*>(value));
}
inline ::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Playables::Playable>*
UnityEngine::Timeline::TrackAsset::getStaticF_OnClipPlayableCreate() {
  return ::cordl_internals::getStaticField<::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Playables::Playable>*, "OnClipPlayableCreate",
                                           ::UnityEngine::Timeline::TrackAsset*>();
}
inline void UnityEngine::Timeline::TrackAsset::setStaticF_OnTrackAnimationPlayableCreate(
    ::System::Action_3<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Playables::Playable>* value) {
  ::cordl_internals::setStaticField<::System::Action_3<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Playables::Playable>*,
                                    "OnTrackAnimationPlayableCreate", ::UnityEngine::Timeline::TrackAsset*>(
      std::forward<::System::Action_3<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Playables::Playable>*>(value));
}
inline ::System::Action_3<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Playables::Playable>*
UnityEngine::Timeline::TrackAsset::getStaticF_OnTrackAnimationPlayableCreate() {
  return ::cordl_internals::getStaticField<::System::Action_3<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Playables::Playable>*,
                                           "OnTrackAnimationPlayableCreate", ::UnityEngine::Timeline::TrackAsset*>();
}
inline void UnityEngine::Timeline::TrackAsset::setStaticF_s_EmptyCache(::ArrayW<::UnityW<::UnityEngine::Timeline::TrackAsset>> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityW<::UnityEngine::Timeline::TrackAsset>>, "s_EmptyCache", ::UnityEngine::Timeline::TrackAsset*>(
      std::forward<::ArrayW<::UnityW<::UnityEngine::Timeline::TrackAsset>>>(value));
}
inline ::ArrayW<::UnityW<::UnityEngine::Timeline::TrackAsset>> UnityEngine::Timeline::TrackAsset::getStaticF_s_EmptyCache() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityW<::UnityEngine::Timeline::TrackAsset>>, "s_EmptyCache", ::UnityEngine::Timeline::TrackAsset*>();
}
inline void UnityEngine::Timeline::TrackAsset::setStaticF_s_TrackBindingTypeAttributeCache(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::Timeline::TrackBindingTypeAttribute*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::Timeline::TrackBindingTypeAttribute*>*, "s_TrackBindingTypeAttributeCache",
                                    ::UnityEngine::Timeline::TrackAsset*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::Timeline::TrackBindingTypeAttribute*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::Timeline::TrackBindingTypeAttribute*>*
UnityEngine::Timeline::TrackAsset::getStaticF_s_TrackBindingTypeAttributeCache() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::Timeline::TrackBindingTypeAttribute*>*, "s_TrackBindingTypeAttributeCache",
                                           ::UnityEngine::Timeline::TrackAsset*>();
}
inline void UnityEngine::Timeline::TrackAsset::OnBeforeTrackSerialize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::OnAfterTrackDeserialize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::OnUpgradeFromVersion(int32_t oldVersion) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldVersion);
}
inline void UnityEngine::Timeline::TrackAsset::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::UpgradeToLatestVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "UpgradeToLatestVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::add_OnClipPlayableCreate(
    ::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Playables::Playable>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(),
                          { "add_OnClipPlayableCreate",
                            {},
                            { ::i2c::type_of<::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Playables::Playable>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Timeline::TrackAsset::remove_OnClipPlayableCreate(
    ::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Playables::Playable>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(),
                          { "remove_OnClipPlayableCreate",
                            {},
                            { ::i2c::type_of<::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Playables::Playable>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Timeline::TrackAsset::add_OnTrackAnimationPlayableCreate(
    ::System::Action_3<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Playables::Playable>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(),
                          { "add_OnTrackAnimationPlayableCreate",
                            {},
                            { ::i2c::type_of<::System::Action_3<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Playables::Playable>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Timeline::TrackAsset::remove_OnTrackAnimationPlayableCreate(
    ::System::Action_3<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Playables::Playable>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(),
                          { "remove_OnTrackAnimationPlayableCreate",
                            {},
                            { ::i2c::type_of<::System::Action_3<::UnityW<::UnityEngine::Timeline::TrackAsset>, ::UnityW<::UnityEngine::GameObject>, ::UnityEngine::Playables::Playable>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline double_t UnityEngine::Timeline::TrackAsset::get_start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "get_start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t UnityEngine::Timeline::TrackAsset::get_end() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "get_end", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t UnityEngine::Timeline::TrackAsset::get_duration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "get_duration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TrackAsset::get_muted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "get_muted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::set_muted(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "set_muted", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Timeline::TrackAsset::get_mutedInHierarchy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "get_mutedInHierarchy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Timeline::TimelineAsset> UnityEngine::Timeline::TrackAsset::get_timelineAsset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "get_timelineAsset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Timeline::TimelineAsset>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Playables::PlayableAsset> UnityEngine::Timeline::TrackAsset::get_parent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "get_parent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Playables::PlayableAsset>>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::set_parent(::UnityEngine::Playables::PlayableAsset* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "set_parent", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>* UnityEngine::Timeline::TrackAsset::GetClips() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "GetClips", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>*>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Timeline::TimelineClip*> UnityEngine::Timeline::TrackAsset::get_clips() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "get_clips", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Timeline::TimelineClip*>>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TrackAsset::get_isEmpty() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TrackAsset::get_hasClips() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "get_hasClips", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TrackAsset::get_hasCurves() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "get_hasCurves", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TrackAsset::get_isSubTrack() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "get_isSubTrack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* UnityEngine::Timeline::TrackAsset::get_outputs() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* UnityEngine::Timeline::TrackAsset::GetChildTracks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "GetChildTracks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*>(this, ___internal_method);
}
inline ::StringW UnityEngine::Timeline::TrackAsset::get_customPlayableTypename() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "get_customPlayableTypename", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::set_customPlayableTypename(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "set_customPlayableTypename", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AnimationClip> UnityEngine::Timeline::TrackAsset::get_curves() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "get_curves", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AnimationClip>>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::set_curves(::UnityEngine::AnimationClip* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "set_curves", {}, { ::i2c::type_of<::UnityEngine::AnimationClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Timeline::TrackAsset::UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "UnityEngine.Timeline.ICurvesOwner.get_defaultCurvesName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Timeline::TrackAsset::UnityEngine_Timeline_ICurvesOwner_get_asset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "UnityEngine.Timeline.ICurvesOwner.get_asset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Timeline::TrackAsset::UnityEngine_Timeline_ICurvesOwner_get_assetOwner() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "UnityEngine.Timeline.ICurvesOwner.get_assetOwner", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Timeline::TrackAsset> UnityEngine::Timeline::TrackAsset::UnityEngine_Timeline_ICurvesOwner_get_targetTrack() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "UnityEngine.Timeline.ICurvesOwner.get_targetTrack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Timeline::TrackAsset>>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ScriptableObject>>* UnityEngine::Timeline::TrackAsset::get_subTracksObjects() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "get_subTracksObjects", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ScriptableObject>>*>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TrackAsset::get_locked() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "get_locked", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::set_locked(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "set_locked", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Timeline::TrackAsset::get_lockedInHierarchy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "get_lockedInHierarchy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TrackAsset::get_supportsNotifications() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "get_supportsNotifications", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::__internalAwake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "__internalAwake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::CreateCurves(::StringW curvesClipName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "CreateCurves", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curvesClipName);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::TrackAsset::CreateTrackMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, int32_t inputCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(this, ___internal_method, graph, go, inputCount);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::TrackAsset::CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(),
                                                           { "CreatePlayable", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(this, ___internal_method, graph, go);
}
inline ::UnityEngine::Timeline::TimelineClip* UnityEngine::Timeline::TrackAsset::CreateDefaultClip() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "CreateDefaultClip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip*>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::Timeline::TimelineClip* UnityEngine::Timeline::TrackAsset::CreateClip() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "CreateClip", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip*>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TrackAsset::DeleteClip(::UnityEngine::Timeline::TimelineClip* clip) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "DeleteClip", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clip);
}
inline ::UnityEngine::Timeline::IMarker* UnityEngine::Timeline::TrackAsset::CreateMarker(::System::Type* type, double_t time) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "CreateMarker", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::IMarker*>(this, ___internal_method, type, time);
}
template <typename T> inline T UnityEngine::Timeline::TrackAsset::CreateMarker(double_t time) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "CreateMarker", { ::i2c::class_of<T>() }, { ::i2c::type_of<double_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, time);
}
inline bool UnityEngine::Timeline::TrackAsset::DeleteMarker(::UnityEngine::Timeline::IMarker* marker) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "DeleteMarker", {}, { ::i2c::type_of<::UnityEngine::Timeline::IMarker*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, marker);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>* UnityEngine::Timeline::TrackAsset::GetMarkers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "GetMarkers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>*>(this, ___internal_method);
}
inline int32_t UnityEngine::Timeline::TrackAsset::GetMarkerCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "GetMarkerCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::IMarker* UnityEngine::Timeline::TrackAsset::GetMarker(int32_t idx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "GetMarker", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::IMarker*>(this, ___internal_method, idx);
}
inline ::UnityEngine::Timeline::TimelineClip* UnityEngine::Timeline::TrackAsset::CreateClip(::System::Type* requestedType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "CreateClip", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip*>(this, ___internal_method, requestedType);
}
inline ::UnityEngine::Timeline::TimelineClip* UnityEngine::Timeline::TrackAsset::CreateAndAddNewClipOfType(::System::Type* requestedType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "CreateAndAddNewClipOfType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip*>(this, ___internal_method, requestedType);
}
inline ::UnityEngine::Timeline::TimelineClip* UnityEngine::Timeline::TrackAsset::CreateClipOfType(::System::Type* requestedType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "CreateClipOfType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip*>(this, ___internal_method, requestedType);
}
inline ::UnityEngine::Timeline::TimelineClip* UnityEngine::Timeline::TrackAsset::CreateClipFromPlayableAsset(::UnityEngine::Playables::IPlayableAsset* asset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(),
                                                                                         { "CreateClipFromPlayableAsset", {}, { ::i2c::type_of<::UnityEngine::Playables::IPlayableAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip*>(this, ___internal_method, asset);
}
inline ::UnityEngine::Timeline::TimelineClip* UnityEngine::Timeline::TrackAsset::CreateClipFromAsset(::UnityEngine::ScriptableObject* playableAsset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "CreateClipFromAsset", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip*>(this, ___internal_method, playableAsset);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ScriptableObject>>* UnityEngine::Timeline::TrackAsset::GetMarkersRaw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "GetMarkersRaw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ScriptableObject>>*>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::ClearMarkers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "ClearMarkers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::AddMarker(::UnityEngine::ScriptableObject* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "AddMarker", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline bool UnityEngine::Timeline::TrackAsset::DeleteMarkerRaw(::UnityEngine::ScriptableObject* marker) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "DeleteMarkerRaw", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, marker);
}
inline int32_t UnityEngine::Timeline::TrackAsset::GetTimeRangeHash() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "GetTimeRangeHash", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::AddClip(::UnityEngine::Timeline::TimelineClip* newClip) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "AddClip", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newClip);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::TrackAsset::CreateNotificationsPlayable(::UnityEngine::Playables::PlayableGraph graph,
                                                                                                         ::UnityEngine::Playables::Playable mixerPlayable, ::UnityEngine::GameObject* go,
                                                                                                         ::UnityEngine::Playables::Playable timelinePlayable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "CreateNotificationsPlayable",
                                                                                     {},
                                                                                     { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Playables::Playable>(),
                                                                                       ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Playables::Playable>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(this, ___internal_method, graph, mixerPlayable, go, timelinePlayable);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::TrackAsset::CreatePlayableGraph(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go,
                                                                                                 ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* tree,
                                                                                                 ::UnityEngine::Playables::Playable timelinePlayable) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(),
                                                                                         { "CreatePlayableGraph",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::GameObject*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Playables::Playable>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(this, ___internal_method, graph, go, tree, timelinePlayable);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::TrackAsset::CompileClips(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go,
                                                                                          ::System::Collections::Generic::IList_1<::UnityEngine::Timeline::TimelineClip*>* timelineClips,
                                                                                          ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* tree) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(this, ___internal_method, graph, go, timelineClips, tree);
}
inline void UnityEngine::Timeline::TrackAsset::GatherCompilableTracks(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>* tracks) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(),
                                              { "GatherCompilableTracks", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tracks);
}
inline void UnityEngine::Timeline::TrackAsset::GatherNotifications(::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>* markers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(),
                                                           { "GatherNotifications", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markers);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::TrackAsset::CreateMixerPlayableGraph(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go,
                                                                                                      ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* tree) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(this, ___internal_method, graph, go, tree);
}
inline void UnityEngine::Timeline::TrackAsset::ConfigureTrackAnimation(::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* tree, ::UnityEngine::GameObject* go,
                                                                       ::UnityEngine::Playables::Playable blend) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(),
                                                                                         { "ConfigureTrackAnimation",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*>(),
                                                                                             ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Playables::Playable>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tree, go, blend);
}
inline void UnityEngine::Timeline::TrackAsset::SortClips() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "SortClips", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::ClearClipsInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "ClearClipsInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::ClearSubTracksInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "ClearSubTracksInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::OnClipMove() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "OnClipMove", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::TimelineClip* UnityEngine::Timeline::TrackAsset::CreateNewClipContainerInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "CreateNewClipContainerInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip*>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::AddChild(::UnityEngine::Timeline::TrackAsset* child) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "AddChild", {}, { ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, child);
}
inline void UnityEngine::Timeline::TrackAsset::MoveLastTrackBefore(::UnityEngine::Timeline::TrackAsset* asset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "MoveLastTrackBefore", {}, { ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asset);
}
inline bool UnityEngine::Timeline::TrackAsset::RemoveSubTrack(::UnityEngine::Timeline::TrackAsset* child) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "RemoveSubTrack", {}, { ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, child);
}
inline void UnityEngine::Timeline::TrackAsset::RemoveClip(::UnityEngine::Timeline::TimelineClip* clip) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "RemoveClip", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip);
}
inline void UnityEngine::Timeline::TrackAsset::GetEvaluationTime(::by_ref<double_t> outStart, ::by_ref<double_t> outDuration) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outStart, outDuration);
}
inline void UnityEngine::Timeline::TrackAsset::GetSequenceTime(::by_ref<double_t> outStart, ::by_ref<double_t> outDuration) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outStart, outDuration);
}
inline void UnityEngine::Timeline::TrackAsset::GatherProperties(::UnityEngine::Playables::PlayableDirector* director, ::UnityEngine::Timeline::IPropertyCollector* driver) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, director, driver);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::Timeline::TrackAsset::GetGameObjectBinding(::UnityEngine::Playables::PlayableDirector* director) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "GetGameObjectBinding", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableDirector*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, director);
}
inline bool UnityEngine::Timeline::TrackAsset::ValidateClipType(::System::Type* clipType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "ValidateClipType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clipType);
}
inline void UnityEngine::Timeline::TrackAsset::OnCreateClip(::UnityEngine::Timeline::TimelineClip* clip) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip);
}
inline void UnityEngine::Timeline::TrackAsset::UpdateDuration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "UpdateDuration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Timeline::TrackAsset::CalculateItemsHash() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::TrackAsset::CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* gameObject,
                                                                                            ::UnityEngine::Timeline::TimelineClip* clip) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(this, ___internal_method, graph, gameObject, clip);
}
inline void UnityEngine::Timeline::TrackAsset::Invalidate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "Invalidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline double_t UnityEngine::Timeline::TrackAsset::GetNotificationDuration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "GetNotificationDuration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TrackAsset::CanCompileClips() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TrackAsset::CanCreateTrackMixer() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TrackAsset::IsCompilable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "IsCompilable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::UpdateChildTrackCache() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "UpdateChildTrackCache", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Timeline::TrackAsset::Hash() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Timeline::TrackAsset::GetClipsHash() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "GetClipsHash", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Timeline::TrackAsset::GetAnimationClipHash(::UnityEngine::AnimationClip* clip) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "GetAnimationClipHash", {}, { ::i2c::type_of<::UnityEngine::AnimationClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, clip);
}
inline bool UnityEngine::Timeline::TrackAsset::HasNotifications() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "HasNotifications", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TrackAsset::CanCompileNotifications() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "CanCompileNotifications", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TrackAsset::CanCreateMixerRecursive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { "CanCreateMixerRecursive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAsset*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::TrackAsset* UnityEngine::Timeline::TrackAsset::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::TrackAsset*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr UnityEngine::Timeline::TrackAsset::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Timeline::TrackAsset::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Timeline::IPropertyPreview"
constexpr UnityEngine::Timeline::TrackAsset::operator ::UnityEngine::Timeline::IPropertyPreview*() noexcept {
  return static_cast<::UnityEngine::Timeline::IPropertyPreview*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Timeline::IPropertyPreview"
constexpr ::UnityEngine::Timeline::IPropertyPreview* UnityEngine::Timeline::TrackAsset::i___UnityEngine__Timeline__IPropertyPreview() noexcept {
  return static_cast<::UnityEngine::Timeline::IPropertyPreview*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Timeline::ICurvesOwner"
constexpr UnityEngine::Timeline::TrackAsset::operator ::UnityEngine::Timeline::ICurvesOwner*() noexcept {
  return static_cast<::UnityEngine::Timeline::ICurvesOwner*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Timeline::ICurvesOwner"
constexpr ::UnityEngine::Timeline::ICurvesOwner* UnityEngine::Timeline::TrackAsset::i___UnityEngine__Timeline__ICurvesOwner() noexcept {
  return static_cast<::UnityEngine::Timeline::ICurvesOwner*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TrackAsset::TrackAsset() {}
