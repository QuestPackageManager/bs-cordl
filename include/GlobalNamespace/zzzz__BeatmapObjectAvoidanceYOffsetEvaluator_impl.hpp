#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectAvoidanceYOffsetEvaluator_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectAvoidanceYOffsetEvaluator_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapObjectSpawnController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData::*)(float_t, float_t)>(
    &::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2217808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData::_ctor(float_t songTime, float_t yOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, songTime, yOffset);
}
// Ctor Parameters [CppParam { name: "songTime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "yOffset", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData(float_t songTime, float_t yOffset) noexcept {
  this->songTime = songTime;
  this->yOffset = yOffset;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::*)(
    ::GlobalNamespace::IAudioTimeSource*, ::GlobalNamespace::IBeatmapObjectSpawnController*, float_t, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData)>(
    &::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x22176b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAudioTimeSource*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapObjectSpawnController*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator.ManualUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::*)()>(
    &::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::ManualUpdate)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2217810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*>::get(), "ManualUpdate",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator.GetJumpOffsetYAtJumpStartSongTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::*)(float_t)>(
    &::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::GetJumpOffsetYAtJumpStartSongTime)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x2217988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*>::get(), "GetJumpOffsetYAtJumpStartSongTime",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__get__currentYJumpOffsetBufferEndIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentYJumpOffsetBufferEndIndex;
}
constexpr int32_t const& GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__get__currentYJumpOffsetBufferEndIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentYJumpOffsetBufferEndIndex;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__set__currentYJumpOffsetBufferEndIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentYJumpOffsetBufferEndIndex = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__get__jumpDurationToDesiredZPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpDurationToDesiredZPosition;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__get__jumpDurationToDesiredZPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpDurationToDesiredZPosition;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__set__jumpDurationToDesiredZPosition(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____jumpDurationToDesiredZPosition = value;
}
constexpr ::ArrayW<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData, ::Array<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData>*>&
GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__get__yJumpOffsetBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yJumpOffsetBuffer;
}
constexpr ::ArrayW<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData, ::Array<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData>*> const&
GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__get__yJumpOffsetBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yJumpOffsetBuffer;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__set__yJumpOffsetBuffer(
    ::ArrayW<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData, ::Array<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____yJumpOffsetBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IAudioTimeSource*& GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__get__audioTimeSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__get__audioTimeSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IBeatmapObjectSpawnController*& GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__get__beatmapObjectSpawnController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectSpawnController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapObjectSpawnController*> const&
GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__get__beatmapObjectSpawnController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectSpawnController;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__set__beatmapObjectSpawnController(::GlobalNamespace::IBeatmapObjectSpawnController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectSpawnController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*
GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::New_ctor(::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::IBeatmapObjectSpawnController* beatmapObjectSpawnController,
                                                                  float_t moveToPlayerHeadTParam, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData noteSpawnData) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*>(audioTimeSource, beatmapObjectSpawnController, moveToPlayerHeadTParam, noteSpawnData));
}
inline void GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::_ctor(::GlobalNamespace::IAudioTimeSource* audioTimeSource,
                                                                           ::GlobalNamespace::IBeatmapObjectSpawnController* beatmapObjectSpawnController, float_t moveToPlayerHeadTParam,
                                                                           ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData noteSpawnData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAudioTimeSource*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapObjectSpawnController*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioTimeSource, beatmapObjectSpawnController, moveToPlayerHeadTParam, noteSpawnData);
}
inline void GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::ManualUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*>::get(),
                                                                             "ManualUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::GetJumpOffsetYAtJumpStartSongTime(float_t lastDeltaTime) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*>::get(), "GetJumpOffsetYAtJumpStartSongTime",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, lastDeltaTime);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::BeatmapObjectAvoidanceYOffsetEvaluator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
