#pragma once
// IWYU pragma private; include "GlobalNamespace/SliderSpawnInfoNetSerializable.hpp"
#include "GlobalNamespace/zzzz__ColorType_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_impl.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_impl.hpp"
#include "GlobalNamespace/zzzz__PoolableSerializable_impl.hpp"
#include "GlobalNamespace/zzzz__SliderData_impl.hpp"
#include "GlobalNamespace/zzzz__SliderMidAnchorMode_impl.hpp"
#include "GlobalNamespace/zzzz__Vector3Serializable_impl.hpp"
#include "GlobalNamespace/zzzz__SliderSpawnInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "GlobalNamespace/zzzz__SliderMidAnchorMode_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SliderSpawnInfoNetSerializable.Obtain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SliderSpawnInfoNetSerializable* (*)()>(
    &::GlobalNamespace::SliderSpawnInfoNetSerializable::Obtain)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2726fec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get(),
                                                                               "Obtain", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderSpawnInfoNetSerializable.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SliderSpawnInfoNetSerializable* (
    ::GlobalNamespace::SliderSpawnInfoNetSerializable::*)(::GlobalNamespace::ColorType, ::GlobalNamespace::SliderData_Type, bool, float_t, float_t, int32_t, ::GlobalNamespace::NoteLineLayer,
                                                          ::GlobalNamespace::NoteLineLayer, float_t, ::GlobalNamespace::NoteCutDirection, float_t, bool, float_t, int32_t,
                                                          ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteLineLayer, float_t, ::GlobalNamespace::NoteCutDirection, float_t,
                                                          ::GlobalNamespace::SliderMidAnchorMode, int32_t, float_t, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, float_t, float_t)>(
    &::GlobalNamespace::SliderSpawnInfoNetSerializable::Init)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2727050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 27>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData_Type>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderMidAnchorMode>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderSpawnInfoNetSerializable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderSpawnInfoNetSerializable::*)()>(
    &::GlobalNamespace::SliderSpawnInfoNetSerializable::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2727168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderSpawnInfoNetSerializable.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderSpawnInfoNetSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::SliderSpawnInfoNetSerializable::Serialize)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x27271c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderSpawnInfoNetSerializable.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderSpawnInfoNetSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::SliderSpawnInfoNetSerializable::Deserialize)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2727468;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get(), 11));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ColorType& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_colorType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorType;
}
constexpr ::GlobalNamespace::ColorType const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_colorType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorType;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_colorType(::GlobalNamespace::ColorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorType = value;
}
constexpr ::GlobalNamespace::SliderData_Type& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_sliderType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sliderType;
}
constexpr ::GlobalNamespace::SliderData_Type const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_sliderType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sliderType;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_sliderType(::GlobalNamespace::SliderData_Type value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sliderType = value;
}
constexpr bool& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_hasHeadNote() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasHeadNote;
}
constexpr bool const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_hasHeadNote() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasHeadNote;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_hasHeadNote(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasHeadNote = value;
}
constexpr float_t& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_headTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headTime;
}
constexpr float_t const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_headTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headTime;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_headTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headTime = value;
}
constexpr float_t& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_headBeat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headBeat;
}
constexpr float_t const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_headBeat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headBeat;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_headBeat(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headBeat = value;
}
constexpr int32_t& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_headLineIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headLineIndex;
}
constexpr int32_t const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_headLineIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headLineIndex;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_headLineIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headLineIndex = value;
}
constexpr ::GlobalNamespace::NoteLineLayer& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_headLineLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headLineLayer;
}
constexpr ::GlobalNamespace::NoteLineLayer const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_headLineLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headLineLayer;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_headLineLayer(::GlobalNamespace::NoteLineLayer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headLineLayer = value;
}
constexpr ::GlobalNamespace::NoteLineLayer& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_headBeforeJumpLineLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headBeforeJumpLineLayer;
}
constexpr ::GlobalNamespace::NoteLineLayer const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_headBeforeJumpLineLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headBeforeJumpLineLayer;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_headBeforeJumpLineLayer(::GlobalNamespace::NoteLineLayer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headBeforeJumpLineLayer = value;
}
constexpr float_t& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_headControlPointLengthMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headControlPointLengthMultiplier;
}
constexpr float_t const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_headControlPointLengthMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headControlPointLengthMultiplier;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_headControlPointLengthMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headControlPointLengthMultiplier = value;
}
constexpr ::GlobalNamespace::NoteCutDirection& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_headCutDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headCutDirection;
}
constexpr ::GlobalNamespace::NoteCutDirection const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_headCutDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headCutDirection;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_headCutDirection(::GlobalNamespace::NoteCutDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headCutDirection = value;
}
constexpr float_t& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_headCutDirectionAngleOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headCutDirectionAngleOffset;
}
constexpr float_t const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_headCutDirectionAngleOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headCutDirectionAngleOffset;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_headCutDirectionAngleOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headCutDirectionAngleOffset = value;
}
constexpr bool& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_hasTailNote() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasTailNote;
}
constexpr bool const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_hasTailNote() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasTailNote;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_hasTailNote(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasTailNote = value;
}
constexpr float_t& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_tailTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailTime;
}
constexpr float_t const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_tailTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailTime;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_tailTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tailTime = value;
}
constexpr int32_t& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_tailLineIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailLineIndex;
}
constexpr int32_t const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_tailLineIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailLineIndex;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_tailLineIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tailLineIndex = value;
}
constexpr ::GlobalNamespace::NoteLineLayer& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_tailLineLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailLineLayer;
}
constexpr ::GlobalNamespace::NoteLineLayer const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_tailLineLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailLineLayer;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_tailLineLayer(::GlobalNamespace::NoteLineLayer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tailLineLayer = value;
}
constexpr ::GlobalNamespace::NoteLineLayer& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_tailBeforeJumpLineLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailBeforeJumpLineLayer;
}
constexpr ::GlobalNamespace::NoteLineLayer const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_tailBeforeJumpLineLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailBeforeJumpLineLayer;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_tailBeforeJumpLineLayer(::GlobalNamespace::NoteLineLayer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tailBeforeJumpLineLayer = value;
}
constexpr float_t& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_tailControlPointLengthMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailControlPointLengthMultiplier;
}
constexpr float_t const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_tailControlPointLengthMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailControlPointLengthMultiplier;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_tailControlPointLengthMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tailControlPointLengthMultiplier = value;
}
constexpr ::GlobalNamespace::NoteCutDirection& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_tailCutDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailCutDirection;
}
constexpr ::GlobalNamespace::NoteCutDirection const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_tailCutDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailCutDirection;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_tailCutDirection(::GlobalNamespace::NoteCutDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tailCutDirection = value;
}
constexpr float_t& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_tailCutDirectionAngleOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailCutDirectionAngleOffset;
}
constexpr float_t const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_tailCutDirectionAngleOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailCutDirectionAngleOffset;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_tailCutDirectionAngleOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tailCutDirectionAngleOffset = value;
}
constexpr ::GlobalNamespace::SliderMidAnchorMode& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_midAnchorMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___midAnchorMode;
}
constexpr ::GlobalNamespace::SliderMidAnchorMode const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_midAnchorMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___midAnchorMode;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_midAnchorMode(::GlobalNamespace::SliderMidAnchorMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___midAnchorMode = value;
}
constexpr int32_t& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_sliceCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sliceCount;
}
constexpr int32_t const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_sliceCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sliceCount;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_sliceCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sliceCount = value;
}
constexpr float_t& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_squishAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___squishAmount;
}
constexpr float_t const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_squishAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___squishAmount;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_squishAmount(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___squishAmount = value;
}
constexpr ::GlobalNamespace::Vector3Serializable& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_headNoteOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headNoteOffset;
}
constexpr ::GlobalNamespace::Vector3Serializable const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_headNoteOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headNoteOffset;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_headNoteOffset(::GlobalNamespace::Vector3Serializable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headNoteOffset = value;
}
constexpr float_t& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_headGravityBase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headGravityBase;
}
constexpr float_t const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_headGravityBase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headGravityBase;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_headGravityBase(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headGravityBase = value;
}
constexpr ::GlobalNamespace::Vector3Serializable& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_tailNoteOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailNoteOffset;
}
constexpr ::GlobalNamespace::Vector3Serializable const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_tailNoteOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailNoteOffset;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_tailNoteOffset(::GlobalNamespace::Vector3Serializable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tailNoteOffset = value;
}
constexpr float_t& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_tailGravityBase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailGravityBase;
}
constexpr float_t const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_tailGravityBase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailGravityBase;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_tailGravityBase(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tailGravityBase = value;
}
constexpr float_t& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_rotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotation;
}
constexpr float_t const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_rotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotation;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_rotation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotation = value;
}
inline ::GlobalNamespace::SliderSpawnInfoNetSerializable* GlobalNamespace::SliderSpawnInfoNetSerializable::Obtain() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get(),
                                                                             "Obtain", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SliderSpawnInfoNetSerializable*, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::SliderSpawnInfoNetSerializable* GlobalNamespace::SliderSpawnInfoNetSerializable::Init(
    ::GlobalNamespace::ColorType colorType, ::GlobalNamespace::SliderData_Type sliderType, bool hasHeadNote, float_t headTime, float_t headBeat, int32_t headLineIndex,
    ::GlobalNamespace::NoteLineLayer headLineLayer, ::GlobalNamespace::NoteLineLayer headBeforeJumpLineLayer, float_t headControlPointLengthMultiplier,
    ::GlobalNamespace::NoteCutDirection headCutDirection, float_t headCutDirectionAngleOffset, bool hasTailNote, float_t tailTime, int32_t tailLineIndex,
    ::GlobalNamespace::NoteLineLayer tailLineLayer, ::GlobalNamespace::NoteLineLayer tailBeforeJumpLineLayer, float_t tailControlPointLengthMultiplier,
    ::GlobalNamespace::NoteCutDirection tailCutDirection, float_t tailCutDirectionAngleOffset, ::GlobalNamespace::SliderMidAnchorMode midAnchorMode, int32_t sliceCount, float_t squishAmount,
    ::UnityEngine::Vector3 headNoteOffset, float_t headGravityBase, ::UnityEngine::Vector3 tailNoteOffset, float_t tailGravityBase, float_t rotation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 27>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData_Type>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderMidAnchorMode>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SliderSpawnInfoNetSerializable*, false>(
      this, ___internal_method, colorType, sliderType, hasHeadNote, headTime, headBeat, headLineIndex, headLineLayer, headBeforeJumpLineLayer, headControlPointLengthMultiplier, headCutDirection,
      headCutDirectionAngleOffset, hasTailNote, tailTime, tailLineIndex, tailLineLayer, tailBeforeJumpLineLayer, tailControlPointLengthMultiplier, tailCutDirection, tailCutDirectionAngleOffset,
      midAnchorMode, sliceCount, squishAmount, headNoteOffset, headGravityBase, tailNoteOffset, tailGravityBase, rotation);
}
inline void GlobalNamespace::SliderSpawnInfoNetSerializable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderSpawnInfoNetSerializable::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::SliderSpawnInfoNetSerializable::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline ::GlobalNamespace::SliderSpawnInfoNetSerializable* GlobalNamespace::SliderSpawnInfoNetSerializable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SliderSpawnInfoNetSerializable*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderSpawnInfoNetSerializable::SliderSpawnInfoNetSerializable() {}
