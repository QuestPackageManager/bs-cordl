#pragma once
// IWYU pragma private; include "GlobalNamespace\StandardScoreSyncStateDeltaNetSerializable.hpp"
#include "GlobalNamespace/zzzz__StandardScoreSyncState_impl.hpp"
#include "GlobalNamespace/zzzz__SyncStateId_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__StandardScoreSyncStateDeltaNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__IPacketPool_1_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "GlobalNamespace/zzzz__ISyncStateDeltaSerializable_1_def.hpp"
#include "GlobalNamespace/zzzz__StandardScoreSyncState_def.hpp"
#include "GlobalNamespace/zzzz__SyncStateId_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable.get_pool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IPacketPool_1<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>* (*)()>(
    &::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::get_pool)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32beb50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>(), { "get_pool", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable.get_baseId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SyncStateId (::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::*)()>(
    &::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::get_baseId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32beb94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>(), { "get_baseId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable.set_baseId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::*)(::GlobalNamespace::SyncStateId)>(
    &::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::set_baseId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32beb9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>(),
                                                                                           { "set_baseId", {}, { ::i2c::type_of<::GlobalNamespace::SyncStateId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable.get_timeOffsetMs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::*)()>(
    &::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::get_timeOffsetMs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32beba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>(), { "get_timeOffsetMs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable.set_timeOffsetMs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::*)(int32_t)>(
    &::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::set_timeOffsetMs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32bebac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>(), { "set_timeOffsetMs", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable.get_delta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::StandardScoreSyncState (::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::*)()>(
    &::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::get_delta)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x32bebb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>(), { "get_delta", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable.set_delta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::*)(::GlobalNamespace::StandardScoreSyncState)>(
    &::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::set_delta)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x32bebc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>(),
                                                                                           { "set_delta", {}, { ::i2c::type_of<::GlobalNamespace::StandardScoreSyncState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::Serialize)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x32bebdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>(),
                                                                                           { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::Deserialize)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x32becc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>(),
                                                                                           { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::*)()>(
    &::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::Release)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x32bed38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>(), { "Release", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::*)()>(
    &::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32bede8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::StandardScoreSyncState& GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::__cordl_internal_get__delta() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delta;
}
constexpr ::GlobalNamespace::StandardScoreSyncState const& GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::__cordl_internal_get__delta() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delta;
}
constexpr void GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::__cordl_internal_set__delta(::GlobalNamespace::StandardScoreSyncState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____delta = value;
}
constexpr ::GlobalNamespace::SyncStateId& GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::__cordl_internal_get__baseId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseId_k__BackingField;
}
constexpr ::GlobalNamespace::SyncStateId const& GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::__cordl_internal_get__baseId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseId_k__BackingField;
}
constexpr void GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::__cordl_internal_set__baseId_k__BackingField(::GlobalNamespace::SyncStateId value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____baseId_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::__cordl_internal_get__timeOffsetMs_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeOffsetMs_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::__cordl_internal_get__timeOffsetMs_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeOffsetMs_k__BackingField;
}
constexpr void GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::__cordl_internal_set__timeOffsetMs_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeOffsetMs_k__BackingField = value;
}
inline ::GlobalNamespace::IPacketPool_1<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>* GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::get_pool() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>(), { "get_pool", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IPacketPool_1<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>*>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::SyncStateId GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::get_baseId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>(), { "get_baseId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SyncStateId>(this, ___internal_method);
}
inline void GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::set_baseId(::GlobalNamespace::SyncStateId value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>(), { "set_baseId", {}, { ::i2c::type_of<::GlobalNamespace::SyncStateId>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::get_timeOffsetMs() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>(), { "get_timeOffsetMs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::set_timeOffsetMs(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>(), { "set_timeOffsetMs", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::StandardScoreSyncState GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::get_delta() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>(), { "get_delta", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StandardScoreSyncState>(this, ___internal_method);
}
inline void GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::set_delta(::GlobalNamespace::StandardScoreSyncState value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>(),
                                                                                         { "set_delta", {}, { ::i2c::type_of<::GlobalNamespace::StandardScoreSyncState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>(),
                                                                                         { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>(),
                                                                                         { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::Release() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>(), { "Release", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable* GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>());
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::i___LiteNetLib__Utils__INetSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPoolablePacket"
constexpr ::GlobalNamespace::IPoolablePacket* GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::i___GlobalNamespace__IPoolablePacket() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::StandardScoreSyncState>"
constexpr GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::operator ::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::StandardScoreSyncState>*() noexcept {
  return static_cast<::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::StandardScoreSyncState>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::StandardScoreSyncState>"
constexpr ::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::StandardScoreSyncState>*
GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::i___GlobalNamespace__ISyncStateDeltaSerializable_1___GlobalNamespace__StandardScoreSyncState_() noexcept {
  return static_cast<::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::StandardScoreSyncState>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::StandardScoreSyncStateDeltaNetSerializable() {}
