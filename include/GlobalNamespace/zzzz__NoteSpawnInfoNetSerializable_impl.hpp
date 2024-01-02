#pragma once
#include "GlobalNamespace/zzzz__ColorType_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_impl.hpp"
#include "GlobalNamespace/zzzz__NoteData_impl.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_impl.hpp"
#include "GlobalNamespace/zzzz__PoolableSerializable_impl.hpp"
#include "GlobalNamespace/zzzz__Vector3Serializable_impl.hpp"
#include "GlobalNamespace/zzzz__NoteSpawnInfoNetSerializable_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteSpawnInfoNetSerializable.Obtain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteSpawnInfoNetSerializable* (*)()>(&::GlobalNamespace::NoteSpawnInfoNetSerializable::Obtain)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x12a4c54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteSpawnInfoNetSerializable*>::get(),
                                                                               "Obtain", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteSpawnInfoNetSerializable.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteSpawnInfoNetSerializable* (
    ::GlobalNamespace::NoteSpawnInfoNetSerializable::*)(float_t, int32_t, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::__NoteData__GameplayType,
                                                        ::GlobalNamespace::__NoteData__ScoringType, ::GlobalNamespace::ColorType, ::GlobalNamespace::NoteCutDirection, float_t, float_t, int32_t,
                                                        float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, float_t, float_t, float_t, float_t)>(
    &::GlobalNamespace::NoteSpawnInfoNetSerializable::Init)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x12a4cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteSpawnInfoNetSerializable*>::get(), "Init", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NoteData__GameplayType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NoteData__ScoringType>::get(),
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
  constexpr static std::size_t addrs = 0x12a4df8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteSpawnInfoNetSerializable*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteSpawnInfoNetSerializable.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteSpawnInfoNetSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::NoteSpawnInfoNetSerializable::Serialize)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x12a4e50;

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
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x12a4ff4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteSpawnInfoNetSerializable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteSpawnInfoNetSerializable*>::get(), 11));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___time;
}
constexpr float_t const& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___time;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_time(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___time = value;
}
constexpr int32_t& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_lineIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineIndex;
}
constexpr int32_t const& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_lineIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineIndex;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_lineIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lineIndex = value;
}
constexpr ::GlobalNamespace::NoteLineLayer& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_noteLineLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteLineLayer;
}
constexpr ::GlobalNamespace::NoteLineLayer const& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_noteLineLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteLineLayer;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_noteLineLayer(::GlobalNamespace::NoteLineLayer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteLineLayer = value;
}
constexpr ::GlobalNamespace::NoteLineLayer& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_beforeJumpNoteLineLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beforeJumpNoteLineLayer;
}
constexpr ::GlobalNamespace::NoteLineLayer const& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_beforeJumpNoteLineLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beforeJumpNoteLineLayer;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_beforeJumpNoteLineLayer(::GlobalNamespace::NoteLineLayer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beforeJumpNoteLineLayer = value;
}
constexpr ::GlobalNamespace::__NoteData__GameplayType& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_gameplayType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayType;
}
constexpr ::GlobalNamespace::__NoteData__GameplayType const& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_gameplayType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayType;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_gameplayType(::GlobalNamespace::__NoteData__GameplayType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameplayType = value;
}
constexpr ::GlobalNamespace::__NoteData__ScoringType& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_scoringType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scoringType;
}
constexpr ::GlobalNamespace::__NoteData__ScoringType const& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_scoringType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scoringType;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_scoringType(::GlobalNamespace::__NoteData__ScoringType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scoringType = value;
}
constexpr ::GlobalNamespace::ColorType& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_colorType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorType;
}
constexpr ::GlobalNamespace::ColorType const& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_colorType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorType;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_colorType(::GlobalNamespace::ColorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorType = value;
}
constexpr ::GlobalNamespace::NoteCutDirection& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_cutDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cutDirection;
}
constexpr ::GlobalNamespace::NoteCutDirection const& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_cutDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cutDirection;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_cutDirection(::GlobalNamespace::NoteCutDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cutDirection = value;
}
constexpr float_t& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_timeToNextColorNote() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeToNextColorNote;
}
constexpr float_t const& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_timeToNextColorNote() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeToNextColorNote;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_timeToNextColorNote(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___timeToNextColorNote = value;
}
constexpr float_t& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_timeToPrevColorNote() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeToPrevColorNote;
}
constexpr float_t const& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_timeToPrevColorNote() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeToPrevColorNote;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_timeToPrevColorNote(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___timeToPrevColorNote = value;
}
constexpr int32_t& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_flipLineIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flipLineIndex;
}
constexpr int32_t const& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_flipLineIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flipLineIndex;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_flipLineIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___flipLineIndex = value;
}
constexpr float_t& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_flipYSide() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flipYSide;
}
constexpr float_t const& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_flipYSide() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flipYSide;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_flipYSide(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___flipYSide = value;
}
constexpr ::GlobalNamespace::Vector3Serializable& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_moveStartPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveStartPos;
}
constexpr ::GlobalNamespace::Vector3Serializable const& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_moveStartPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveStartPos;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_moveStartPos(::GlobalNamespace::Vector3Serializable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___moveStartPos = value;
}
constexpr ::GlobalNamespace::Vector3Serializable& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_moveEndPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveEndPos;
}
constexpr ::GlobalNamespace::Vector3Serializable const& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_moveEndPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveEndPos;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_moveEndPos(::GlobalNamespace::Vector3Serializable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___moveEndPos = value;
}
constexpr ::GlobalNamespace::Vector3Serializable& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_jumpEndPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___jumpEndPos;
}
constexpr ::GlobalNamespace::Vector3Serializable const& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_jumpEndPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___jumpEndPos;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_jumpEndPos(::GlobalNamespace::Vector3Serializable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___jumpEndPos = value;
}
constexpr float_t& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_jumpGravity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___jumpGravity;
}
constexpr float_t const& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_jumpGravity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___jumpGravity;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_jumpGravity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___jumpGravity = value;
}
constexpr float_t& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_moveDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveDuration;
}
constexpr float_t const& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_moveDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveDuration;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_moveDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___moveDuration = value;
}
constexpr float_t& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_jumpDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___jumpDuration;
}
constexpr float_t const& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_jumpDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___jumpDuration;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_jumpDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___jumpDuration = value;
}
constexpr float_t& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_rotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotation;
}
constexpr float_t const& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_rotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotation;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_rotation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotation = value;
}
constexpr float_t& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_cutDirectionAngleOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cutDirectionAngleOffset;
}
constexpr float_t const& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_cutDirectionAngleOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cutDirectionAngleOffset;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_cutDirectionAngleOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cutDirectionAngleOffset = value;
}
constexpr float_t& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_cutSfxVolumeMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cutSfxVolumeMultiplier;
}
constexpr float_t const& GlobalNamespace::NoteSpawnInfoNetSerializable::__get_cutSfxVolumeMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cutSfxVolumeMultiplier;
}
constexpr void GlobalNamespace::NoteSpawnInfoNetSerializable::__set_cutSfxVolumeMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cutSfxVolumeMultiplier = value;
}
inline ::GlobalNamespace::NoteSpawnInfoNetSerializable* GlobalNamespace::NoteSpawnInfoNetSerializable::Obtain() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteSpawnInfoNetSerializable*>::get(), "Obtain",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteSpawnInfoNetSerializable*, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::NoteSpawnInfoNetSerializable* GlobalNamespace::NoteSpawnInfoNetSerializable::Init(
    float_t time, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer, ::GlobalNamespace::NoteLineLayer beforeJumpNoteLineLayer, ::GlobalNamespace::__NoteData__GameplayType gameplayType,
    ::GlobalNamespace::__NoteData__ScoringType scoringType, ::GlobalNamespace::ColorType colorType, ::GlobalNamespace::NoteCutDirection cutDirection, float_t timeToNextColorNote,
    float_t timeToPrevColorNote, int32_t flipLineIndex, float_t flipYSide, ::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos,
    float_t jumpGravity, float_t moveDuration, float_t jumpDuration, float_t rotation, float_t cutDirectionAngleOffset, float_t cutSfxVolumeMultiplier) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteSpawnInfoNetSerializable*>::get(), "Init", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NoteData__GameplayType>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NoteData__ScoringType>::get(),
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
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteSpawnInfoNetSerializable*, false>(
      this, ___internal_method, time, lineIndex, noteLineLayer, beforeJumpNoteLineLayer, gameplayType, scoringType, colorType, cutDirection, timeToNextColorNote, timeToPrevColorNote, flipLineIndex,
      flipYSide, moveStartPos, moveEndPos, jumpEndPos, jumpGravity, moveDuration, jumpDuration, rotation, cutDirectionAngleOffset, cutSfxVolumeMultiplier);
}
inline ::GlobalNamespace::NoteSpawnInfoNetSerializable* GlobalNamespace::NoteSpawnInfoNetSerializable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::NoteSpawnInfoNetSerializable*>());
}
inline void GlobalNamespace::NoteSpawnInfoNetSerializable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteSpawnInfoNetSerializable*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
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
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteSpawnInfoNetSerializable::NoteSpawnInfoNetSerializable() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
