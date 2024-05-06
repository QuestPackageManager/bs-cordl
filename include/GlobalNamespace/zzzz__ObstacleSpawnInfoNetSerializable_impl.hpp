#pragma once
#include "GlobalNamespace/zzzz__NoteLineLayer_impl.hpp"
#include "GlobalNamespace/zzzz__PoolableSerializable_impl.hpp"
#include "GlobalNamespace/zzzz__Vector3Serializable_impl.hpp"
#include "GlobalNamespace/zzzz__ObstacleSpawnInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ObstacleSpawnInfoNetSerializable.Obtain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ObstacleSpawnInfoNetSerializable* (*)()>(
    &::GlobalNamespace::ObstacleSpawnInfoNetSerializable::Obtain)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x15058fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>::get(),
                                                                               "Obtain", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleSpawnInfoNetSerializable.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ObstacleSpawnInfoNetSerializable* (
    ::GlobalNamespace::ObstacleSpawnInfoNetSerializable::*)(float_t, int32_t, ::GlobalNamespace::NoteLineLayer, float_t, int32_t, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3,
                                                            ::UnityEngine::Vector3, float_t, float_t, float_t, float_t, float_t)>(&::GlobalNamespace::ObstacleSpawnInfoNetSerializable::Init)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1505960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 14>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleSpawnInfoNetSerializable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleSpawnInfoNetSerializable::*)()>(
    &::GlobalNamespace::ObstacleSpawnInfoNetSerializable::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1505a80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleSpawnInfoNetSerializable.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleSpawnInfoNetSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::ObstacleSpawnInfoNetSerializable::Serialize)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x1505ad8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleSpawnInfoNetSerializable.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleSpawnInfoNetSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::ObstacleSpawnInfoNetSerializable::Deserialize)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x1505bdc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>::get(), 11));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_get_time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___time;
}
constexpr float_t const& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_get_time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___time;
}
constexpr void GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_set_time(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___time = value;
}
constexpr int32_t& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_get_lineIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineIndex;
}
constexpr int32_t const& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_get_lineIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineIndex;
}
constexpr void GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_set_lineIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lineIndex = value;
}
constexpr ::GlobalNamespace::NoteLineLayer& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_get_lineLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineLayer;
}
constexpr ::GlobalNamespace::NoteLineLayer const& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_get_lineLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineLayer;
}
constexpr void GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_set_lineLayer(::GlobalNamespace::NoteLineLayer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lineLayer = value;
}
constexpr float_t& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_get_duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr float_t const& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_get_duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr void GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_set_duration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___duration = value;
}
constexpr int32_t& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_get_width() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___width;
}
constexpr int32_t const& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_get_width() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___width;
}
constexpr void GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_set_width(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___width = value;
}
constexpr int32_t& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_get_height() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___height;
}
constexpr int32_t const& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_get_height() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___height;
}
constexpr void GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_set_height(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___height = value;
}
constexpr ::GlobalNamespace::Vector3Serializable& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_get_moveStartPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveStartPos;
}
constexpr ::GlobalNamespace::Vector3Serializable const& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_get_moveStartPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveStartPos;
}
constexpr void GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_set_moveStartPos(::GlobalNamespace::Vector3Serializable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___moveStartPos = value;
}
constexpr ::GlobalNamespace::Vector3Serializable& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_get_moveEndPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveEndPos;
}
constexpr ::GlobalNamespace::Vector3Serializable const& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_get_moveEndPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveEndPos;
}
constexpr void GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_set_moveEndPos(::GlobalNamespace::Vector3Serializable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___moveEndPos = value;
}
constexpr ::GlobalNamespace::Vector3Serializable& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_get_jumpEndPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___jumpEndPos;
}
constexpr ::GlobalNamespace::Vector3Serializable const& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_get_jumpEndPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___jumpEndPos;
}
constexpr void GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_set_jumpEndPos(::GlobalNamespace::Vector3Serializable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___jumpEndPos = value;
}
constexpr float_t& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_get_obstacleHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstacleHeight;
}
constexpr float_t const& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_get_obstacleHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstacleHeight;
}
constexpr void GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_set_obstacleHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___obstacleHeight = value;
}
constexpr float_t& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_get_moveDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveDuration;
}
constexpr float_t const& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_get_moveDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveDuration;
}
constexpr void GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_set_moveDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___moveDuration = value;
}
constexpr float_t& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_get_jumpDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___jumpDuration;
}
constexpr float_t const& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_get_jumpDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___jumpDuration;
}
constexpr void GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_set_jumpDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___jumpDuration = value;
}
constexpr float_t& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_get_noteLinesDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteLinesDistance;
}
constexpr float_t const& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_get_noteLinesDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteLinesDistance;
}
constexpr void GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_set_noteLinesDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteLinesDistance = value;
}
constexpr float_t& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_get_rotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotation;
}
constexpr float_t const& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_get_rotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotation;
}
constexpr void GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_set_rotation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotation = value;
}
inline ::GlobalNamespace::ObstacleSpawnInfoNetSerializable* GlobalNamespace::ObstacleSpawnInfoNetSerializable::Obtain() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>::get(),
                                                                             "Obtain", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::ObstacleSpawnInfoNetSerializable* GlobalNamespace::ObstacleSpawnInfoNetSerializable::Init(float_t time, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer lineLayer,
                                                                                                                    float_t duration, int32_t width, int32_t height,
                                                                                                                    ::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos,
                                                                                                                    ::UnityEngine::Vector3 jumpEndPos, float_t obstacleHeight, float_t moveDuration,
                                                                                                                    float_t jumpDuration, float_t noteLinesDistance, float_t rotation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 14>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*, false>(
      this, ___internal_method, time, lineIndex, lineLayer, duration, width, height, moveStartPos, moveEndPos, jumpEndPos, obstacleHeight, moveDuration, jumpDuration, noteLinesDistance, rotation);
}
inline ::GlobalNamespace::ObstacleSpawnInfoNetSerializable* GlobalNamespace::ObstacleSpawnInfoNetSerializable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>());
}
inline void GlobalNamespace::ObstacleSpawnInfoNetSerializable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ObstacleSpawnInfoNetSerializable::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::ObstacleSpawnInfoNetSerializable::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObstacleSpawnInfoNetSerializable::ObstacleSpawnInfoNetSerializable() {}
