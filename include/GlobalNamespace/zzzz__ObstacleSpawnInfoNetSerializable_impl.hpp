#pragma once
// IWYU pragma private; include "GlobalNamespace\ObstacleSpawnInfoNetSerializable.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ObstacleSpawnInfoNetSerializable* (*)()>(&::GlobalNamespace::ObstacleSpawnInfoNetSerializable::Obtain)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x37801f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>(), { "Obtain", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleSpawnInfoNetSerializable.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ObstacleSpawnInfoNetSerializable* (
    ::GlobalNamespace::ObstacleSpawnInfoNetSerializable::*)(float_t, float_t, float_t, int32_t, ::GlobalNamespace::NoteLineLayer, float_t, int32_t, int32_t, ::UnityEngine::Vector3, float_t, float_t,
                                                            float_t)>(&::GlobalNamespace::ObstacleSpawnInfoNetSerializable::Init)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3780260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>(),
                                                             { "Init",
                                                               {},
                                                               { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleSpawnInfoNetSerializable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleSpawnInfoNetSerializable::*)()>(&::GlobalNamespace::ObstacleSpawnInfoNetSerializable::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x37802e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleSpawnInfoNetSerializable.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleSpawnInfoNetSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::ObstacleSpawnInfoNetSerializable::Serialize)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x3780338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleSpawnInfoNetSerializable.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleSpawnInfoNetSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::ObstacleSpawnInfoNetSerializable::Deserialize)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x37804c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>(), 11 }));
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
constexpr float_t& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_get_startBeat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startBeat;
}
constexpr float_t const& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_get_startBeat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startBeat;
}
constexpr void GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_set_startBeat(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startBeat = value;
}
constexpr float_t& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_get_endBeat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endBeat;
}
constexpr float_t const& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_get_endBeat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endBeat;
}
constexpr void GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_set_endBeat(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endBeat = value;
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
constexpr ::GlobalNamespace::Vector3Serializable& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_get_moveOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveOffset;
}
constexpr ::GlobalNamespace::Vector3Serializable const& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_get_moveOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveOffset;
}
constexpr void GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_set_moveOffset(::GlobalNamespace::Vector3Serializable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___moveOffset = value;
}
constexpr float_t& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_get_obstacleWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstacleWidth;
}
constexpr float_t const& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_get_obstacleWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstacleWidth;
}
constexpr void GlobalNamespace::ObstacleSpawnInfoNetSerializable::__cordl_internal_set_obstacleWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___obstacleWidth = value;
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
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>(), { "Obtain", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::ObstacleSpawnInfoNetSerializable* GlobalNamespace::ObstacleSpawnInfoNetSerializable::Init(float_t time, float_t startBeat, float_t endBeat, int32_t lineIndex,
                                                                                                                    ::GlobalNamespace::NoteLineLayer lineLayer, float_t duration, int32_t width,
                                                                                                                    int32_t height, ::UnityEngine::Vector3 moveOffset, float_t obstacleWidth,
                                                                                                                    float_t obstacleHeight, float_t rotation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>(),
                                                           { "Init",
                                                             {},
                                                             { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>(this, ___internal_method, time, startBeat, endBeat, lineIndex, lineLayer, duration, width, height,
                                                                                                   moveOffset, obstacleWidth, obstacleHeight, rotation);
}
inline void GlobalNamespace::ObstacleSpawnInfoNetSerializable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ObstacleSpawnInfoNetSerializable::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void GlobalNamespace::ObstacleSpawnInfoNetSerializable::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline ::GlobalNamespace::ObstacleSpawnInfoNetSerializable* GlobalNamespace::ObstacleSpawnInfoNetSerializable::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObstacleSpawnInfoNetSerializable::ObstacleSpawnInfoNetSerializable() {}
