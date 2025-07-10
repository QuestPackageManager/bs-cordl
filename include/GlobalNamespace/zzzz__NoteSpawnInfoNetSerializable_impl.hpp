#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteSpawnInfoNetSerializable.hpp"
#include "GlobalNamespace/zzzz__ColorType_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_impl.hpp"
#include "GlobalNamespace/zzzz__NoteData_impl.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_impl.hpp"
#include "GlobalNamespace/zzzz__PoolableSerializable_impl.hpp"
#include "GlobalNamespace/zzzz__Vector3Serializable_impl.hpp"
#include "GlobalNamespace/zzzz__NoteSpawnInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteSpawnInfoNetSerializable.Obtain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteSpawnInfoNetSerializable* (*)()>(&::GlobalNamespace::NoteSpawnInfoNetSerializable::Obtain)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2722ccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteSpawnInfoNetSerializable*>::get(),
                                                                               "Obtain", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteSpawnInfoNetSerializable.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteSpawnInfoNetSerializable* (
    ::GlobalNamespace::NoteSpawnInfoNetSerializable::*)(float_t, float_t, int32_t, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteData_GameplayType,
                                                        ::GlobalNamespace::NoteData_ScoringType, ::GlobalNamespace::ColorType, ::GlobalNamespace::NoteCutDirection, float_t, float_t, int32_t, float_t,
                                                        ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, float_t, float_t)>(
    &::GlobalNamespace::NoteSpawnInfoNetSerializable::Init)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2722d30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteSpawnInfoNetSerializable*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 20>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData_GameplayType>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData_ScoringType>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteSpawnInfoNetSerializable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteSpawnInfoNetSerializable::*)()>(
    &::GlobalNamespace::NoteSpawnInfoNetSerializable::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2722e48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteSpawnInfoNetSerializable*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteSpawnInfoNetSerializable.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteSpawnInfoNetSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::NoteSpawnInfoNetSerializable::Serialize)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x2722ea0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteSpawnInfoNetSerializable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteSpawnInfoNetSerializable*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteSpawnInfoNetSerializable.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteSpawnInfoNetSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::NoteSpawnInfoNetSerializable::Deserialize)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x27230b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteSpawnInfoNetSerializable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteSpawnInfoNetSerializable*>::get(), 11));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___time;
}
constexpr float_t const& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___time;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_set_time(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___time = value;
}
constexpr float_t& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_beat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beat;
}
constexpr float_t const& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_beat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beat;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_set_beat(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beat = value;
}
constexpr int32_t& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_lineIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineIndex;
}
constexpr int32_t const& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_lineIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineIndex;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_set_lineIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lineIndex = value;
}
constexpr ::GlobalNamespace::NoteLineLayer& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_noteLineLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteLineLayer;
}
constexpr ::GlobalNamespace::NoteLineLayer const& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_noteLineLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteLineLayer;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_set_noteLineLayer(::GlobalNamespace::NoteLineLayer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteLineLayer = value;
}
constexpr ::GlobalNamespace::NoteLineLayer& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_beforeJumpNoteLineLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beforeJumpNoteLineLayer;
}
constexpr ::GlobalNamespace::NoteLineLayer const& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_beforeJumpNoteLineLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beforeJumpNoteLineLayer;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_set_beforeJumpNoteLineLayer(::GlobalNamespace::NoteLineLayer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beforeJumpNoteLineLayer = value;
}
constexpr ::GlobalNamespace::NoteData_GameplayType& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_gameplayType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayType;
}
constexpr ::GlobalNamespace::NoteData_GameplayType const& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_gameplayType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayType;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_set_gameplayType(::GlobalNamespace::NoteData_GameplayType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameplayType = value;
}
constexpr ::GlobalNamespace::NoteData_ScoringType& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_scoringType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scoringType;
}
constexpr ::GlobalNamespace::NoteData_ScoringType const& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_scoringType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scoringType;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_set_scoringType(::GlobalNamespace::NoteData_ScoringType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scoringType = value;
}
constexpr ::GlobalNamespace::ColorType& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_colorType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorType;
}
constexpr ::GlobalNamespace::ColorType const& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_colorType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorType;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_set_colorType(::GlobalNamespace::ColorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorType = value;
}
constexpr ::GlobalNamespace::NoteCutDirection& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_cutDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cutDirection;
}
constexpr ::GlobalNamespace::NoteCutDirection const& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_cutDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cutDirection;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_set_cutDirection(::GlobalNamespace::NoteCutDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cutDirection = value;
}
constexpr float_t& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_timeToNextColorNote() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeToNextColorNote;
}
constexpr float_t const& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_timeToNextColorNote() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeToNextColorNote;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_set_timeToNextColorNote(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___timeToNextColorNote = value;
}
constexpr float_t& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_timeToPrevColorNote() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeToPrevColorNote;
}
constexpr float_t const& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_timeToPrevColorNote() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeToPrevColorNote;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_set_timeToPrevColorNote(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___timeToPrevColorNote = value;
}
constexpr int32_t& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_flipLineIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flipLineIndex;
}
constexpr int32_t const& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_flipLineIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flipLineIndex;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_set_flipLineIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___flipLineIndex = value;
}
constexpr float_t& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_flipYSide() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flipYSide;
}
constexpr float_t const& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_flipYSide() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flipYSide;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_set_flipYSide(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___flipYSide = value;
}
constexpr ::GlobalNamespace::Vector3Serializable& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_moveStartOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveStartOffset;
}
constexpr ::GlobalNamespace::Vector3Serializable const& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_moveStartOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveStartOffset;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_set_moveStartOffset(::GlobalNamespace::Vector3Serializable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___moveStartOffset = value;
}
constexpr ::GlobalNamespace::Vector3Serializable& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_moveEndOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveEndOffset;
}
constexpr ::GlobalNamespace::Vector3Serializable const& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_moveEndOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveEndOffset;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_set_moveEndOffset(::GlobalNamespace::Vector3Serializable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___moveEndOffset = value;
}
constexpr ::GlobalNamespace::Vector3Serializable& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_jumpEndOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___jumpEndOffset;
}
constexpr ::GlobalNamespace::Vector3Serializable const& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_jumpEndOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___jumpEndOffset;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_set_jumpEndOffset(::GlobalNamespace::Vector3Serializable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___jumpEndOffset = value;
}
constexpr float_t& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_gravityBase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gravityBase;
}
constexpr float_t const& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_gravityBase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gravityBase;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_set_gravityBase(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gravityBase = value;
}
constexpr float_t& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_rotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotation;
}
constexpr float_t const& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_rotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotation;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_set_rotation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotation = value;
}
constexpr float_t& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_cutDirectionAngleOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cutDirectionAngleOffset;
}
constexpr float_t const& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_cutDirectionAngleOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cutDirectionAngleOffset;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_set_cutDirectionAngleOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cutDirectionAngleOffset = value;
}
constexpr float_t& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_cutSfxVolumeMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cutSfxVolumeMultiplier;
}
constexpr float_t const& GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_get_cutSfxVolumeMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cutSfxVolumeMultiplier;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__cordl_internal_set_cutSfxVolumeMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cutSfxVolumeMultiplier = value;
}
inline ::GlobalNamespace::NoteSpawnInfoNetSerializable* GlobalNamespace::NoteSpawnInfoNetSerializable::Obtain() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteSpawnInfoNetSerializable*>::get(), "Obtain",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteSpawnInfoNetSerializable*, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::NoteSpawnInfoNetSerializable* GlobalNamespace::NoteSpawnInfoNetSerializable::Init(
    float_t time, float_t beat, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer, ::GlobalNamespace::NoteLineLayer beforeJumpNoteLineLayer,
    ::GlobalNamespace::NoteData_GameplayType gameplayType, ::GlobalNamespace::NoteData_ScoringType scoringType, ::GlobalNamespace::ColorType colorType,
    ::GlobalNamespace::NoteCutDirection cutDirection, float_t timeToNextColorNote, float_t timeToPrevColorNote, int32_t flipLineIndex, float_t flipYSide, ::UnityEngine::Vector3 moveStartOffset,
    ::UnityEngine::Vector3 moveEndOffset, ::UnityEngine::Vector3 jumpEndOffset, float_t gravityBase, float_t rotation, float_t cutDirectionAngleOffset, float_t cutSfxVolumeMultiplier) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteSpawnInfoNetSerializable*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 20>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData_GameplayType>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData_ScoringType>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteSpawnInfoNetSerializable*, false>(
      this, ___internal_method, time, beat, lineIndex, noteLineLayer, beforeJumpNoteLineLayer, gameplayType, scoringType, colorType, cutDirection, timeToNextColorNote, timeToPrevColorNote,
      flipLineIndex, flipYSide, moveStartOffset, moveEndOffset, jumpEndOffset, gravityBase, rotation, cutDirectionAngleOffset, cutSfxVolumeMultiplier);
}
inline void GlobalNamespace::NoteSpawnInfoNetSerializable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteSpawnInfoNetSerializable*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteSpawnInfoNetSerializable::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteSpawnInfoNetSerializable*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::NoteSpawnInfoNetSerializable::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteSpawnInfoNetSerializable*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline ::GlobalNamespace::NoteSpawnInfoNetSerializable* GlobalNamespace::NoteSpawnInfoNetSerializable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NoteSpawnInfoNetSerializable*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteSpawnInfoNetSerializable::NoteSpawnInfoNetSerializable() {}
