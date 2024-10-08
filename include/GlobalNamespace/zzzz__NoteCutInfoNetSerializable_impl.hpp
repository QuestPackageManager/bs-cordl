#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteCutInfoNetSerializable.hpp"
#include "GlobalNamespace/zzzz__ColorType_impl.hpp"
#include "GlobalNamespace/zzzz__NoteData_impl.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_impl.hpp"
#include "GlobalNamespace/zzzz__PoolableSerializable_impl.hpp"
#include "GlobalNamespace/zzzz__QuaternionSerializable_impl.hpp"
#include "GlobalNamespace/zzzz__Vector3Serializable_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteCutInfoNetSerializable.Obtain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteCutInfoNetSerializable* (*)()>(&::GlobalNamespace::NoteCutInfoNetSerializable::Obtain)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x26dff8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfoNetSerializable*>::get(), "Obtain",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutInfoNetSerializable.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutInfoNetSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::NoteCutInfoNetSerializable::Deserialize)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x26dfff0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfoNetSerializable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfoNetSerializable*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutInfoNetSerializable.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutInfoNetSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::NoteCutInfoNetSerializable::Serialize)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x26e01d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfoNetSerializable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfoNetSerializable*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutInfoNetSerializable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutInfoNetSerializable::*)()>(&::GlobalNamespace::NoteCutInfoNetSerializable::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26e041c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfoNetSerializable*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutInfoNetSerializable.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteCutInfoNetSerializable* (
    ::GlobalNamespace::NoteCutInfoNetSerializable::*)(ByRef<::GlobalNamespace::NoteCutInfo>, ::GlobalNamespace::NoteData*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3,
                                                      ::UnityEngine::Vector3)>(&::GlobalNamespace::NoteCutInfoNetSerializable::Init)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x26e047c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfoNetSerializable*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutInfoNetSerializable.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteCutInfoNetSerializable* (
    ::GlobalNamespace::NoteCutInfoNetSerializable::*)(float_t, bool, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::GlobalNamespace::__NoteData__GameplayType,
                                                      ::GlobalNamespace::ColorType, ::GlobalNamespace::NoteLineLayer, int32_t, float_t, float_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion,
                                                      ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::NoteCutInfoNetSerializable::Init)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x26e0558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfoNetSerializable*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 15>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NoteData__GameplayType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_get_saberSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saberSpeed;
}
constexpr float_t const& GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_get_saberSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saberSpeed;
}
constexpr void GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_set_saberSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___saberSpeed = value;
}
constexpr bool& GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_get_cutWasOk() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cutWasOk;
}
constexpr bool const& GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_get_cutWasOk() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cutWasOk;
}
constexpr void GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_set_cutWasOk(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cutWasOk = value;
}
constexpr ::GlobalNamespace::Vector3Serializable& GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_get_saberDir() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saberDir;
}
constexpr ::GlobalNamespace::Vector3Serializable const& GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_get_saberDir() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saberDir;
}
constexpr void GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_set_saberDir(::GlobalNamespace::Vector3Serializable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___saberDir = value;
}
constexpr ::GlobalNamespace::Vector3Serializable& GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_get_cutPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cutPoint;
}
constexpr ::GlobalNamespace::Vector3Serializable const& GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_get_cutPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cutPoint;
}
constexpr void GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_set_cutPoint(::GlobalNamespace::Vector3Serializable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cutPoint = value;
}
constexpr ::GlobalNamespace::Vector3Serializable& GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_get_cutNormal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cutNormal;
}
constexpr ::GlobalNamespace::Vector3Serializable const& GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_get_cutNormal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cutNormal;
}
constexpr void GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_set_cutNormal(::GlobalNamespace::Vector3Serializable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cutNormal = value;
}
constexpr ::GlobalNamespace::Vector3Serializable& GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_get_notePosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notePosition;
}
constexpr ::GlobalNamespace::Vector3Serializable const& GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_get_notePosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notePosition;
}
constexpr void GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_set_notePosition(::GlobalNamespace::Vector3Serializable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___notePosition = value;
}
constexpr ::GlobalNamespace::Vector3Serializable& GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_get_noteScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteScale;
}
constexpr ::GlobalNamespace::Vector3Serializable const& GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_get_noteScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteScale;
}
constexpr void GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_set_noteScale(::GlobalNamespace::Vector3Serializable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteScale = value;
}
constexpr ::GlobalNamespace::QuaternionSerializable& GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_get_noteRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteRotation;
}
constexpr ::GlobalNamespace::QuaternionSerializable const& GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_get_noteRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteRotation;
}
constexpr void GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_set_noteRotation(::GlobalNamespace::QuaternionSerializable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteRotation = value;
}
constexpr ::GlobalNamespace::__NoteData__GameplayType& GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_get_gameplayType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayType;
}
constexpr ::GlobalNamespace::__NoteData__GameplayType const& GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_get_gameplayType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayType;
}
constexpr void GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_set_gameplayType(::GlobalNamespace::__NoteData__GameplayType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameplayType = value;
}
constexpr ::GlobalNamespace::ColorType& GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_get_colorType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorType;
}
constexpr ::GlobalNamespace::ColorType const& GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_get_colorType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorType;
}
constexpr void GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_set_colorType(::GlobalNamespace::ColorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorType = value;
}
constexpr float_t& GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_get_noteTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteTime;
}
constexpr float_t const& GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_get_noteTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteTime;
}
constexpr void GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_set_noteTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteTime = value;
}
constexpr int32_t& GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_get_noteLineIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteLineIndex;
}
constexpr int32_t const& GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_get_noteLineIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteLineIndex;
}
constexpr void GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_set_noteLineIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteLineIndex = value;
}
constexpr ::GlobalNamespace::NoteLineLayer& GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_get_lineLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineLayer;
}
constexpr ::GlobalNamespace::NoteLineLayer const& GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_get_lineLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineLayer;
}
constexpr void GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_set_lineLayer(::GlobalNamespace::NoteLineLayer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lineLayer = value;
}
constexpr float_t& GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_get_timeToNextColorNote() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeToNextColorNote;
}
constexpr float_t const& GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_get_timeToNextColorNote() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeToNextColorNote;
}
constexpr void GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_set_timeToNextColorNote(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___timeToNextColorNote = value;
}
constexpr ::GlobalNamespace::Vector3Serializable& GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_get_moveVec() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveVec;
}
constexpr ::GlobalNamespace::Vector3Serializable const& GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_get_moveVec() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveVec;
}
constexpr void GlobalNamespace::NoteCutInfoNetSerializable::__cordl_internal_set_moveVec(::GlobalNamespace::Vector3Serializable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___moveVec = value;
}
inline ::GlobalNamespace::NoteCutInfoNetSerializable* GlobalNamespace::NoteCutInfoNetSerializable::Obtain() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfoNetSerializable*>::get(), "Obtain",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteCutInfoNetSerializable*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::NoteCutInfoNetSerializable::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfoNetSerializable*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void GlobalNamespace::NoteCutInfoNetSerializable::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfoNetSerializable*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline ::GlobalNamespace::NoteCutInfoNetSerializable* GlobalNamespace::NoteCutInfoNetSerializable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NoteCutInfoNetSerializable*>());
}
inline void GlobalNamespace::NoteCutInfoNetSerializable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfoNetSerializable*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteCutInfoNetSerializable* GlobalNamespace::NoteCutInfoNetSerializable::Init(ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo, ::GlobalNamespace::NoteData* noteData,
                                                                                                        ::UnityEngine::Vector3 notePosition, ::UnityEngine::Quaternion noteRotation,
                                                                                                        ::UnityEngine::Vector3 noteScale, ::UnityEngine::Vector3 moveVec) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfoNetSerializable*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteCutInfoNetSerializable*, false>(this, ___internal_method, noteCutInfo, noteData, notePosition, noteRotation, noteScale, moveVec);
}
inline ::GlobalNamespace::NoteCutInfoNetSerializable*
GlobalNamespace::NoteCutInfoNetSerializable::Init(float_t saberSpeed, bool cutWasOk, ::UnityEngine::Vector3 saberDir, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Vector3 cutNormal,
                                                  ::GlobalNamespace::__NoteData__GameplayType gameplayType, ::GlobalNamespace::ColorType colorType, ::GlobalNamespace::NoteLineLayer lineLayer,
                                                  int32_t noteLineIndex, float_t noteTime, float_t timeToNextColorNote, ::UnityEngine::Vector3 notePosition, ::UnityEngine::Quaternion noteRotation,
                                                  ::UnityEngine::Vector3 noteScale, ::UnityEngine::Vector3 moveVec) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfoNetSerializable*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 15>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NoteData__GameplayType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteCutInfoNetSerializable*, false>(this, ___internal_method, saberSpeed, cutWasOk, saberDir, cutPoint, cutNormal, gameplayType,
                                                                                                    colorType, lineLayer, noteLineIndex, noteTime, timeToNextColorNote, notePosition, noteRotation,
                                                                                                    noteScale, moveVec);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteCutInfoNetSerializable::NoteCutInfoNetSerializable() {}
