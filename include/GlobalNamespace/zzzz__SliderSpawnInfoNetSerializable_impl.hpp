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
  constexpr static std::size_t addrs = 0x151a9ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get(),
                                                                               "Obtain", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderSpawnInfoNetSerializable.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SliderSpawnInfoNetSerializable* (
    ::GlobalNamespace::SliderSpawnInfoNetSerializable::*)(::GlobalNamespace::ColorType, ::GlobalNamespace::__SliderData__Type, bool, float_t, int32_t, ::GlobalNamespace::NoteLineLayer,
                                                          ::GlobalNamespace::NoteLineLayer, float_t, ::GlobalNamespace::NoteCutDirection, float_t, bool, float_t, int32_t,
                                                          ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteLineLayer, float_t, ::GlobalNamespace::NoteCutDirection, float_t,
                                                          ::GlobalNamespace::SliderMidAnchorMode, int32_t, float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t,
                                                          ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, float_t, float_t)>(
    &::GlobalNamespace::SliderSpawnInfoNetSerializable::Init)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x151aa10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 32>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SliderData__Type>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
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
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
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
//  Writing Method size for method: ::GlobalNamespace::SliderSpawnInfoNetSerializable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderSpawnInfoNetSerializable::*)()>(
    &::GlobalNamespace::SliderSpawnInfoNetSerializable::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x151ac54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderSpawnInfoNetSerializable.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderSpawnInfoNetSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::SliderSpawnInfoNetSerializable::Serialize)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x151acac;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x151aee4;

  inline static const ::MethodInfo* methodInfo() {

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
constexpr ::GlobalNamespace::__SliderData__Type& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_sliderType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sliderType;
}
constexpr ::GlobalNamespace::__SliderData__Type const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_sliderType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sliderType;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_sliderType(::GlobalNamespace::__SliderData__Type value) {
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
constexpr ::GlobalNamespace::Vector3Serializable& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_headMoveStartPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headMoveStartPos;
}
constexpr ::GlobalNamespace::Vector3Serializable const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_headMoveStartPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headMoveStartPos;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_headMoveStartPos(::GlobalNamespace::Vector3Serializable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headMoveStartPos = value;
}
constexpr ::GlobalNamespace::Vector3Serializable& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_headJumpStartPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headJumpStartPos;
}
constexpr ::GlobalNamespace::Vector3Serializable const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_headJumpStartPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headJumpStartPos;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_headJumpStartPos(::GlobalNamespace::Vector3Serializable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headJumpStartPos = value;
}
constexpr ::GlobalNamespace::Vector3Serializable& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_headJumpEndPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headJumpEndPos;
}
constexpr ::GlobalNamespace::Vector3Serializable const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_headJumpEndPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headJumpEndPos;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_headJumpEndPos(::GlobalNamespace::Vector3Serializable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headJumpEndPos = value;
}
constexpr float_t& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_headJumpGravity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headJumpGravity;
}
constexpr float_t const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_headJumpGravity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headJumpGravity;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_headJumpGravity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headJumpGravity = value;
}
constexpr ::GlobalNamespace::Vector3Serializable& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_tailMoveStartPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailMoveStartPos;
}
constexpr ::GlobalNamespace::Vector3Serializable const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_tailMoveStartPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailMoveStartPos;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_tailMoveStartPos(::GlobalNamespace::Vector3Serializable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tailMoveStartPos = value;
}
constexpr ::GlobalNamespace::Vector3Serializable& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_tailJumpStartPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailJumpStartPos;
}
constexpr ::GlobalNamespace::Vector3Serializable const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_tailJumpStartPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailJumpStartPos;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_tailJumpStartPos(::GlobalNamespace::Vector3Serializable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tailJumpStartPos = value;
}
constexpr ::GlobalNamespace::Vector3Serializable& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_tailJumpEndPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailJumpEndPos;
}
constexpr ::GlobalNamespace::Vector3Serializable const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_tailJumpEndPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailJumpEndPos;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_tailJumpEndPos(::GlobalNamespace::Vector3Serializable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tailJumpEndPos = value;
}
constexpr float_t& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_tailJumpGravity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailJumpGravity;
}
constexpr float_t const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_tailJumpGravity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tailJumpGravity;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_tailJumpGravity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tailJumpGravity = value;
}
constexpr float_t& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_moveDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveDuration;
}
constexpr float_t const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_moveDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveDuration;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_moveDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___moveDuration = value;
}
constexpr float_t& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_jumpDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___jumpDuration;
}
constexpr float_t const& GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_get_jumpDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___jumpDuration;
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__cordl_internal_set_jumpDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___jumpDuration = value;
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
    ::GlobalNamespace::ColorType colorType, ::GlobalNamespace::__SliderData__Type sliderType, bool hasHeadNote, float_t headTime, int32_t headLineIndex, ::GlobalNamespace::NoteLineLayer headLineLayer,
    ::GlobalNamespace::NoteLineLayer headBeforeJumpLineLayer, float_t headControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection headCutDirection, float_t headCutDirectionAngleOffset,
    bool hasTailNote, float_t tailTime, int32_t tailLineIndex, ::GlobalNamespace::NoteLineLayer tailLineLayer, ::GlobalNamespace::NoteLineLayer tailBeforeJumpLineLayer,
    float_t tailControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection tailCutDirection, float_t tailCutDirectionAngleOffset, ::GlobalNamespace::SliderMidAnchorMode midAnchorMode,
    int32_t sliceCount, float_t squishAmount, ::UnityEngine::Vector3 headMoveStartPos, ::UnityEngine::Vector3 headJumpStartPos, ::UnityEngine::Vector3 headJumpEndPos, float_t headJumpGravity,
    ::UnityEngine::Vector3 tailMoveStartPos, ::UnityEngine::Vector3 tailJumpStartPos, ::UnityEngine::Vector3 tailJumpEndPos, float_t tailJumpGravity, float_t moveDuration, float_t jumpDuration,
    float_t rotation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 32>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SliderData__Type>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
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
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SliderSpawnInfoNetSerializable*, false>(
      this, ___internal_method, colorType, sliderType, hasHeadNote, headTime, headLineIndex, headLineLayer, headBeforeJumpLineLayer, headControlPointLengthMultiplier, headCutDirection,
      headCutDirectionAngleOffset, hasTailNote, tailTime, tailLineIndex, tailLineLayer, tailBeforeJumpLineLayer, tailControlPointLengthMultiplier, tailCutDirection, tailCutDirectionAngleOffset,
      midAnchorMode, sliceCount, squishAmount, headMoveStartPos, headJumpStartPos, headJumpEndPos, headJumpGravity, tailMoveStartPos, tailJumpStartPos, tailJumpEndPos, tailJumpGravity, moveDuration,
      jumpDuration, rotation);
}
inline ::GlobalNamespace::SliderSpawnInfoNetSerializable* GlobalNamespace::SliderSpawnInfoNetSerializable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SliderSpawnInfoNetSerializable*>());
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
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderSpawnInfoNetSerializable::SliderSpawnInfoNetSerializable() {}
