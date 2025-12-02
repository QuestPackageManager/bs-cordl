#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapObjectAvoidanceYOffsetEvaluator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectAvoidanceYOffsetEvaluator_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectAvoidanceYOffsetEvaluator_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__IJumpOffsetYProvider_def.hpp"
#include "GlobalNamespace/zzzz__IVariableMovementDataProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator_BufferData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator_BufferData::*)(float_t, float_t)>(
    &::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator_BufferData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3182f60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator_BufferData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator_BufferData::_ctor(float_t songTime, float_t yOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator_BufferData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, songTime, yOffset);
}
// Ctor Parameters [CppParam { name: "songTime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "yOffset", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator_BufferData::BeatmapObjectAvoidanceYOffsetEvaluator_BufferData(float_t songTime, float_t yOffset) noexcept {
  this->songTime = songTime;
  this->yOffset = yOffset;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator_BufferData::BeatmapObjectAvoidanceYOffsetEvaluator_BufferData() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::*)(
    ::GlobalNamespace::IAudioTimeSource*, ::GlobalNamespace::IJumpOffsetYProvider*, ::GlobalNamespace::IVariableMovementDataProvider*, float_t)>(
    &::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::_ctor)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x3182da4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAudioTimeSource*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IJumpOffsetYProvider*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IVariableMovementDataProvider*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator.ManualUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::*)()>(
    &::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::ManualUpdate)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x3182f68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*>::get(), "ManualUpdate",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator.GetJumpOffsetYAtJumpStartSongTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::*)(float_t)>(
    &::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::GetJumpOffsetYAtJumpStartSongTime)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x31830e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*>::get(), "GetJumpOffsetYAtJumpStartSongTime",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__cordl_internal_get__currentYJumpOffsetBufferEndIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentYJumpOffsetBufferEndIndex;
}
constexpr int32_t const& GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__cordl_internal_get__currentYJumpOffsetBufferEndIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentYJumpOffsetBufferEndIndex;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__cordl_internal_set__currentYJumpOffsetBufferEndIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentYJumpOffsetBufferEndIndex = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__cordl_internal_get__jumpDurationToDesiredZPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpDurationToDesiredZPosition;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__cordl_internal_get__jumpDurationToDesiredZPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpDurationToDesiredZPosition;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__cordl_internal_set__jumpDurationToDesiredZPosition(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____jumpDurationToDesiredZPosition = value;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator_BufferData, ::Array<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator_BufferData>*>&
GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__cordl_internal_get__yJumpOffsetBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yJumpOffsetBuffer;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator_BufferData, ::Array<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator_BufferData>*> const&
GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__cordl_internal_get__yJumpOffsetBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yJumpOffsetBuffer;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__cordl_internal_set__yJumpOffsetBuffer(
    ::ArrayW<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator_BufferData, ::Array<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator_BufferData>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____yJumpOffsetBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IAudioTimeSource*& GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__cordl_internal_get__audioTimeSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr ::GlobalNamespace::IAudioTimeSource* const& GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__cordl_internal_get__audioTimeSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IJumpOffsetYProvider*& GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__cordl_internal_get__jumpOffsetYProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpOffsetYProvider;
}
constexpr ::GlobalNamespace::IJumpOffsetYProvider* const& GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__cordl_internal_get__jumpOffsetYProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpOffsetYProvider;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__cordl_internal_set__jumpOffsetYProvider(::GlobalNamespace::IJumpOffsetYProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____jumpOffsetYProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::_ctor(::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::IJumpOffsetYProvider* jumpOffsetYProvider,
                                                                           ::GlobalNamespace::IVariableMovementDataProvider* variableMovementDataProvider, float_t moveToPlayerHeadTParam) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAudioTimeSource*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IJumpOffsetYProvider*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IVariableMovementDataProvider*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioTimeSource, jumpOffsetYProvider, variableMovementDataProvider, moveToPlayerHeadTParam);
}
inline void GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::ManualUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*>::get(),
                                                                             "ManualUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::GetJumpOffsetYAtJumpStartSongTime(float_t lastDeltaTime) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*>::get(), "GetJumpOffsetYAtJumpStartSongTime",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, lastDeltaTime);
}
inline ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*
GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::New_ctor(::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::IJumpOffsetYProvider* jumpOffsetYProvider,
                                                                  ::GlobalNamespace::IVariableMovementDataProvider* variableMovementDataProvider, float_t moveToPlayerHeadTParam) {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*>(audioTimeSource, jumpOffsetYProvider, variableMovementDataProvider, moveToPlayerHeadTParam));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::BeatmapObjectAvoidanceYOffsetEvaluator() {}
