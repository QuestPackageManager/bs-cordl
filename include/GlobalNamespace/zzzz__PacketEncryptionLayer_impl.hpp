#pragma once
// IWYU pragma private; include "GlobalNamespace\PacketEncryptionLayer.hpp"
#include "LiteNetLib/Layers/zzzz__PacketLayerBase_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PacketEncryptionLayer_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
#include "GlobalNamespace/zzzz__EncryptionUtility_def.hpp"
#include "GlobalNamespace/zzzz__ExpiringDictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__PacketEncryptionLayer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics.get_packetsReceivedPlaintext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::*)()>(
    &::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::get_packetsReceivedPlaintext)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x33388e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*>(), { "get_packetsReceivedPlaintext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics.get_packetsReceivedEncrypted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::*)()>(
    &::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::get_packetsReceivedEncrypted)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x33388c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*>(), { "get_packetsReceivedEncrypted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics.get_packetsReceivedRejected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::*)()>(
    &::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::get_packetsReceivedRejected)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3338900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*>(), { "get_packetsReceivedRejected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics.get_packetsSentPlaintext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::*)()>(
    &::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::get_packetsSentPlaintext)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3338890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*>(), { "get_packetsSentPlaintext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics.get_packetsSentEncrypted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::*)()>(
    &::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::get_packetsSentEncrypted)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3338874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*>(), { "get_packetsSentEncrypted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics.get_packetsSentRejected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::*)()>(
    &::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::get_packetsSentRejected)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x33388ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*>(), { "get_packetsSentRejected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics.get_encryptionProcessingTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::*)()>(
    &::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::get_encryptionProcessingTime)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x333891c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*>(), { "get_encryptionProcessingTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics.get_decryptionProcessingTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::*)()>(
    &::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::get_decryptionProcessingTime)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x33389a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*>(), { "get_decryptionProcessingTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics.IncrementPacketsReceivedPlaintext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::*)()>(
    &::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::IncrementPacketsReceivedPlaintext)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x333c710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*>(), { "IncrementPacketsReceivedPlaintext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics.IncrementPacketsReceivedEncrypted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::*)()>(
    &::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::IncrementPacketsReceivedEncrypted)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x333c6d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*>(), { "IncrementPacketsReceivedEncrypted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics.IncrementPacketsReceivedRejected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::*)()>(
    &::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::IncrementPacketsReceivedRejected)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x333c72c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*>(), { "IncrementPacketsReceivedRejected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics.IncrementPacketsSentPlaintext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::*)()>(
    &::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::IncrementPacketsSentPlaintext)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x333cb60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*>(), { "IncrementPacketsSentPlaintext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics.IncrementPacketsSentEncrypted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::*)()>(
    &::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::IncrementPacketsSentEncrypted)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x333cb24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*>(), { "IncrementPacketsSentEncrypted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics.IncrementPacketsSentRejected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::*)()>(
    &::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::IncrementPacketsSentRejected)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x333cb7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*>(), { "IncrementPacketsSentRejected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics.AddEncryptionProcessingTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::*)(int64_t)>(
    &::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::AddEncryptionProcessingTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x333cb40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*>(), { "AddEncryptionProcessingTime", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics.AddDecryptionProcessingTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::*)(int64_t)>(
    &::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::AddDecryptionProcessingTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x333c6f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*>(), { "AddDecryptionProcessingTime", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::*)()>(
    &::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x333c17c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int64_t& GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::__cordl_internal_get__packetsReceivedPlaintext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packetsReceivedPlaintext;
}
constexpr int64_t const& GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::__cordl_internal_get__packetsReceivedPlaintext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packetsReceivedPlaintext;
}
constexpr void GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::__cordl_internal_set__packetsReceivedPlaintext(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____packetsReceivedPlaintext = value;
}
constexpr int64_t& GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::__cordl_internal_get__packetsReceivedEncrypted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packetsReceivedEncrypted;
}
constexpr int64_t const& GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::__cordl_internal_get__packetsReceivedEncrypted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packetsReceivedEncrypted;
}
constexpr void GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::__cordl_internal_set__packetsReceivedEncrypted(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____packetsReceivedEncrypted = value;
}
constexpr int64_t& GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::__cordl_internal_get__packetsReceivedRejected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packetsReceivedRejected;
}
constexpr int64_t const& GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::__cordl_internal_get__packetsReceivedRejected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packetsReceivedRejected;
}
constexpr void GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::__cordl_internal_set__packetsReceivedRejected(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____packetsReceivedRejected = value;
}
constexpr int64_t& GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::__cordl_internal_get__packetsSentPlaintext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packetsSentPlaintext;
}
constexpr int64_t const& GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::__cordl_internal_get__packetsSentPlaintext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packetsSentPlaintext;
}
constexpr void GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::__cordl_internal_set__packetsSentPlaintext(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____packetsSentPlaintext = value;
}
constexpr int64_t& GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::__cordl_internal_get__packetsSentEncrypted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packetsSentEncrypted;
}
constexpr int64_t const& GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::__cordl_internal_get__packetsSentEncrypted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packetsSentEncrypted;
}
constexpr void GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::__cordl_internal_set__packetsSentEncrypted(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____packetsSentEncrypted = value;
}
constexpr int64_t& GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::__cordl_internal_get__packetsSentRejected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packetsSentRejected;
}
constexpr int64_t const& GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::__cordl_internal_get__packetsSentRejected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packetsSentRejected;
}
constexpr void GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::__cordl_internal_set__packetsSentRejected(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____packetsSentRejected = value;
}
constexpr int64_t& GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::__cordl_internal_get__encryptionProcessingTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encryptionProcessingTime;
}
constexpr int64_t const& GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::__cordl_internal_get__encryptionProcessingTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encryptionProcessingTime;
}
constexpr void GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::__cordl_internal_set__encryptionProcessingTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____encryptionProcessingTime = value;
}
constexpr int64_t& GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::__cordl_internal_get__decryptionProcessingTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____decryptionProcessingTime;
}
constexpr int64_t const& GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::__cordl_internal_get__decryptionProcessingTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____decryptionProcessingTime;
}
constexpr void GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::__cordl_internal_set__decryptionProcessingTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____decryptionProcessingTime = value;
}
inline int64_t GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::get_packetsReceivedPlaintext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*>(), { "get_packetsReceivedPlaintext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::get_packetsReceivedEncrypted() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*>(), { "get_packetsReceivedEncrypted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::get_packetsReceivedRejected() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*>(), { "get_packetsReceivedRejected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::get_packetsSentPlaintext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*>(), { "get_packetsSentPlaintext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::get_packetsSentEncrypted() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*>(), { "get_packetsSentEncrypted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::get_packetsSentRejected() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*>(), { "get_packetsSentRejected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::get_encryptionProcessingTime() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*>(), { "get_encryptionProcessingTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::get_decryptionProcessingTime() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*>(), { "get_decryptionProcessingTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::IncrementPacketsReceivedPlaintext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*>(), { "IncrementPacketsReceivedPlaintext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::IncrementPacketsReceivedEncrypted() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*>(), { "IncrementPacketsReceivedEncrypted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::IncrementPacketsReceivedRejected() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*>(), { "IncrementPacketsReceivedRejected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::IncrementPacketsSentPlaintext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*>(), { "IncrementPacketsSentPlaintext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::IncrementPacketsSentEncrypted() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*>(), { "IncrementPacketsSentEncrypted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::IncrementPacketsSentRejected() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*>(), { "IncrementPacketsSentRejected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::AddEncryptionProcessingTime(int64_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*>(), { "AddEncryptionProcessingTime", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline void GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::AddDecryptionProcessingTime(int64_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*>(), { "AddDecryptionProcessingTime", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline void GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics* GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics::PacketEncryptionLayer_EncryptionStatistics() {}
//  Writing Method size for method: ::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c::*)()>(
    &::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x333e250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c._GetSortedEncryptionStates_b__4_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EncryptionUtility_IEncryptionState* (
    ::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c::*)(::System::Collections::Generic::KeyValuePair_2<int32_t, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>)>(
    &::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c::_GetSortedEncryptionStates_b__4_1)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x333e254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c*>(),
            { "<GetSortedEncryptionStates>b__4_1", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<int32_t, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c::setStaticF___9(::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c*, "<>9", ::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c*>(
      std::forward<::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c*>(value));
}
inline ::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c* GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c*, "<>9", ::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c*>();
}
inline void GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c::setStaticF___9__4_1(
    ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>*,
      "<>9__4_1", ::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c*>(
      std::forward<
          ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>*>(
          value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>*
GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c::getStaticF___9__4_1() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>*,
      "<>9__4_1", ::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c*>();
}
inline void GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EncryptionUtility_IEncryptionState* GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c::_GetSortedEncryptionStates_b__4_1(
    ::System::Collections::Generic::KeyValuePair_2<int32_t, ::GlobalNamespace::EncryptionUtility_IEncryptionState*> kvp) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c*>(),
          { "<GetSortedEncryptionStates>b__4_1", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<int32_t, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EncryptionUtility_IEncryptionState*>(this, ___internal_method, kvp);
}
inline ::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c* GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c::PendingEncryptionStateList_PacketEncryptionLayer___c() {}
//  Writing Method size for method: ::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0::*)()>(
    &::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x333e0e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0._GetSortedEncryptionStates_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0::*)(
    ::System::Collections::Generic::KeyValuePair_2<int32_t, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>)>(
    &::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0::_GetSortedEncryptionStates_b__0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x333e298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0*>(),
            { "<GetSortedEncryptionStates>b__0", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<int32_t, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0::__cordl_internal_get_port() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___port;
}
constexpr int32_t const& GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0::__cordl_internal_get_port() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___port;
}
constexpr void GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0::__cordl_internal_set_port(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___port = value;
}
inline void GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0::_GetSortedEncryptionStates_b__0(
    ::System::Collections::Generic::KeyValuePair_2<int32_t, ::GlobalNamespace::EncryptionUtility_IEncryptionState*> kvp) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0*>(),
          { "<GetSortedEncryptionStates>b__0", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<int32_t, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, kvp);
}
inline ::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0* GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass4_0() {}
//  Writing Method size for method: ::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0::*)()>(
    &::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x333e160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0._Remove_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0::*)(
    ::System::Collections::Generic::KeyValuePair_2<int32_t, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>)>(
    &::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0::_Remove_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x333e318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0*>(),
                            { "<Remove>b__0", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<int32_t, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::EncryptionUtility_IEncryptionState*& GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0::__cordl_internal_get_encryptionState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptionState;
}
constexpr ::GlobalNamespace::EncryptionUtility_IEncryptionState* const&
GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0::__cordl_internal_get_encryptionState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptionState;
}
constexpr void
GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0::__cordl_internal_set_encryptionState(::GlobalNamespace::EncryptionUtility_IEncryptionState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encryptionState = value;
}
inline void GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0::_Remove_b__0(
    ::System::Collections::Generic::KeyValuePair_2<int32_t, ::GlobalNamespace::EncryptionUtility_IEncryptionState*> kvp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0*>(),
                                       { "<Remove>b__0", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<int32_t, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, kvp);
}
inline ::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0* GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0::PendingEncryptionStateList_PacketEncryptionLayer___c__DisplayClass8_0() {}
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList.get_isEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList::*)()>(
    &::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList::get_isEmpty)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x333cea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList*>(), { "get_isEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList::*)()>(
    &::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList::Dispose)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x333df18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList.GetSortedEncryptionStates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::EncryptionUtility_IEncryptionState*> (::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList::*)(
    int32_t)>(&::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList::GetSortedEncryptionStates)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x333d760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList*>(), { "GetSortedEncryptionStates", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList.TryGetEncryptionState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList::*)(
    int32_t, ::by_ref<::GlobalNamespace::EncryptionUtility_IEncryptionState*>)>(&::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList::TryGetEncryptionState)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x333d430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList*>(),
                                                { "TryGetEncryptionState", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::EncryptionUtility_IEncryptionState*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList::*)(int32_t, ::GlobalNamespace::EncryptionUtility_IEncryptionState*)>(
    &::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList::Add)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x333e0e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList*>(),
                                                             { "Add", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::EncryptionUtility_IEncryptionState*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList::*)(int32_t)>(
    &::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList::Remove)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x333ce3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList*>(), { "Remove", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList::*)(int32_t, ::GlobalNamespace::EncryptionUtility_IEncryptionState*)>(
    &::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList::Remove)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x333dc28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList*>(),
                                                             { "Remove", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::EncryptionUtility_IEncryptionState*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList::*)()>(
    &::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x333e164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>*&
GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList::__cordl_internal_get__pendingStatesByPort() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pendingStatesByPort;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>* const&
GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList::__cordl_internal_get__pendingStatesByPort() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pendingStatesByPort;
}
constexpr void GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList::__cordl_internal_set__pendingStatesByPort(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pendingStatesByPort = value;
}
inline bool GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList::get_isEmpty() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList*>(), { "get_isEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::EncryptionUtility_IEncryptionState*> GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList::GetSortedEncryptionStates(int32_t port) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList*>(), { "GetSortedEncryptionStates", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::EncryptionUtility_IEncryptionState*>>(this, ___internal_method, port);
}
inline bool GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList::TryGetEncryptionState(int32_t port, ::by_ref<::GlobalNamespace::EncryptionUtility_IEncryptionState*> encryptionState) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList*>(),
                                              { "TryGetEncryptionState", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::EncryptionUtility_IEncryptionState*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, port, encryptionState);
}
inline void GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList::Add(int32_t port, ::GlobalNamespace::EncryptionUtility_IEncryptionState* encryptionState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList*>(),
                                                           { "Add", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::EncryptionUtility_IEncryptionState*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, port, encryptionState);
}
inline bool GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList::Remove(int32_t port) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList*>(), { "Remove", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, port);
}
inline bool GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList::Remove(int32_t port, ::GlobalNamespace::EncryptionUtility_IEncryptionState* encryptionState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList*>(),
                                                           { "Remove", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::EncryptionUtility_IEncryptionState*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, port, encryptionState);
}
inline void GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList* GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList::PacketEncryptionLayer_PendingEncryptionStateList() {}
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer__AddEncryptedEndpointAsync_d__25.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PacketEncryptionLayer__AddEncryptedEndpointAsync_d__25::*)()>(
    &::GlobalNamespace::PacketEncryptionLayer__AddEncryptedEndpointAsync_d__25::MoveNext)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x333e370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer__AddEncryptedEndpointAsync_d__25>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer__AddEncryptedEndpointAsync_d__25.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PacketEncryptionLayer__AddEncryptedEndpointAsync_d__25::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::PacketEncryptionLayer__AddEncryptedEndpointAsync_d__25::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x333e734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer__AddEncryptedEndpointAsync_d__25>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PacketEncryptionLayer__AddEncryptedEndpointAsync_d__25::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer__AddEncryptedEndpointAsync_d__25>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::PacketEncryptionLayer__AddEncryptedEndpointAsync_d__25::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer__AddEncryptedEndpointAsync_d__25>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::PacketEncryptionLayer__AddEncryptedEndpointAsync_d__25::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::PacketEncryptionLayer__AddEncryptedEndpointAsync_d__25::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EncryptionUtility_IEncryptionState*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::PacketEncryptionLayer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "preMasterSecret", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "serverRandom", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "clientRandom", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "isClient", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "endPoint", ty: "::System::Net::IPEndPoint*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EncryptionUtility_IEncryptionState*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PacketEncryptionLayer__AddEncryptedEndpointAsync_d__25::PacketEncryptionLayer__AddEncryptedEndpointAsync_d__25(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EncryptionUtility_IEncryptionState*> __t__builder,
    ::GlobalNamespace::PacketEncryptionLayer* __4__this, ::ArrayW<uint8_t> preMasterSecret, ::ArrayW<uint8_t> serverRandom, ::ArrayW<uint8_t> clientRandom, bool isClient,
    ::System::Net::IPEndPoint* endPoint, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EncryptionUtility_IEncryptionState*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->preMasterSecret = preMasterSecret;
  this->serverRandom = serverRandom;
  this->clientRandom = clientRandom;
  this->isClient = isClient;
  this->endPoint = endPoint;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PacketEncryptionLayer__AddEncryptedEndpointAsync_d__25::PacketEncryptionLayer__AddEncryptedEndpointAsync_d__25() {}
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer__AddPendingEncryptedEndpointAsync_d__27.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PacketEncryptionLayer__AddPendingEncryptedEndpointAsync_d__27::*)()>(
    &::GlobalNamespace::PacketEncryptionLayer__AddPendingEncryptedEndpointAsync_d__27::MoveNext)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x333e7b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer__AddPendingEncryptedEndpointAsync_d__27>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer__AddPendingEncryptedEndpointAsync_d__27.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PacketEncryptionLayer__AddPendingEncryptedEndpointAsync_d__27::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::PacketEncryptionLayer__AddPendingEncryptedEndpointAsync_d__27::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x333ec58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer__AddPendingEncryptedEndpointAsync_d__27>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PacketEncryptionLayer__AddPendingEncryptedEndpointAsync_d__27::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer__AddPendingEncryptedEndpointAsync_d__27>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::PacketEncryptionLayer__AddPendingEncryptedEndpointAsync_d__27::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer__AddPendingEncryptedEndpointAsync_d__27>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::PacketEncryptionLayer__AddPendingEncryptedEndpointAsync_d__27::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::PacketEncryptionLayer__AddPendingEncryptedEndpointAsync_d__27::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::PacketEncryptionLayer*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "preMasterSecret", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "serverRandom", ty: "::ArrayW<uint8_t>", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "clientRandom", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "isClient", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "endPoint", ty: "::System::Net::IPEndPoint*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EncryptionUtility_IEncryptionState*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PacketEncryptionLayer__AddPendingEncryptedEndpointAsync_d__27::PacketEncryptionLayer__AddPendingEncryptedEndpointAsync_d__27(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::PacketEncryptionLayer* __4__this, ::ArrayW<uint8_t> preMasterSecret,
    ::ArrayW<uint8_t> serverRandom, ::ArrayW<uint8_t> clientRandom, bool isClient, ::System::Net::IPEndPoint* endPoint,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EncryptionUtility_IEncryptionState*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->preMasterSecret = preMasterSecret;
  this->serverRandom = serverRandom;
  this->clientRandom = clientRandom;
  this->isClient = isClient;
  this->endPoint = endPoint;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PacketEncryptionLayer__AddPendingEncryptedEndpointAsync_d__27::PacketEncryptionLayer__AddPendingEncryptedEndpointAsync_d__27() {}
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer.get_filterUnencryptedTraffic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PacketEncryptionLayer::*)()>(&::GlobalNamespace::PacketEncryptionLayer::get_filterUnencryptedTraffic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x333c15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(), { "get_filterUnencryptedTraffic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer.set_filterUnencryptedTraffic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PacketEncryptionLayer::*)(bool)>(&::GlobalNamespace::PacketEncryptionLayer::set_filterUnencryptedTraffic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x333c164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(), { "set_filterUnencryptedTraffic", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer.get_enableStatistics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PacketEncryptionLayer::*)()>(&::GlobalNamespace::PacketEncryptionLayer::get_enableStatistics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x333c16c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(), { "get_enableStatistics", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer.set_enableStatistics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PacketEncryptionLayer::*)(bool)>(&::GlobalNamespace::PacketEncryptionLayer::set_enableStatistics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x333c174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(), { "set_enableStatistics", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PacketEncryptionLayer::*)(::BGNet::Core::ITimeProvider*, ::BGNet::Core::ITaskUtility*)>(
    &::GlobalNamespace::PacketEncryptionLayer::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x33376b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::BGNet::Core::ITimeProvider*>(), ::i2c::type_of<::BGNet::Core::ITaskUtility*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer.ProcessInboundPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PacketEncryptionLayer::*)(::System::Net::IPEndPoint*, ::by_ref<::ArrayW<uint8_t>>, ::by_ref<int32_t>,
                                                                                                          ::by_ref<int32_t>)>(&::GlobalNamespace::PacketEncryptionLayer::ProcessInboundPacket)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x333c180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(), { ::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer.ProcessOutBoundPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PacketEncryptionLayer::*)(::System::Net::IPEndPoint*, ::by_ref<::ArrayW<uint8_t>>, ::by_ref<int32_t>,
                                                                                                          ::by_ref<int32_t>)>(&::GlobalNamespace::PacketEncryptionLayer::ProcessOutBoundPacket)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x333c748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(), { ::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer.SetUnencryptedTrafficFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PacketEncryptionLayer::*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::PacketEncryptionLayer::SetUnencryptedTrafficFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x333cb98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(), { "SetUnencryptedTrafficFilter", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer.AddEncryptedEndpoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EncryptionUtility_IEncryptionState* (
    ::GlobalNamespace::PacketEncryptionLayer::*)(::System::Net::IPEndPoint*, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, bool)>(
    &::GlobalNamespace::PacketEncryptionLayer::AddEncryptedEndpoint)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x333cba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(),
                                                                                           { "AddEncryptedEndpoint",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                               ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer.AddEncryptedEndpointAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::EncryptionUtility_IEncryptionState*>* (
    ::GlobalNamespace::PacketEncryptionLayer::*)(::System::Net::IPEndPoint*, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, bool)>(
    &::GlobalNamespace::PacketEncryptionLayer::AddEncryptedEndpointAsync)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x333cd18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(),
                                                                                           { "AddEncryptedEndpointAsync",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                               ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer.RemoveEncryptedEndpoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PacketEncryptionLayer::*)(::System::Net::IPEndPoint*, ::GlobalNamespace::EncryptionUtility_IEncryptionState*)>(
    &::GlobalNamespace::PacketEncryptionLayer::RemoveEncryptedEndpoint)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x3339280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(),
                            { "RemoveEncryptedEndpoint", {}, { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::GlobalNamespace::EncryptionUtility_IEncryptionState*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer.AddPendingEncryptedEndpointAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::PacketEncryptionLayer::*)(::System::Net::IPEndPoint*, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, bool)>(
        &::GlobalNamespace::PacketEncryptionLayer::AddPendingEncryptedEndpointAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x333cefc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(),
                                                                                           { "AddPendingEncryptedEndpointAsync",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                               ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer.PollUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PacketEncryptionLayer::*)()>(&::GlobalNamespace::PacketEncryptionLayer::PollUpdate)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x333cff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(), { "PollUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer.RemoveAllEndpoints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PacketEncryptionLayer::*)()>(&::GlobalNamespace::PacketEncryptionLayer::RemoveAllEndpoints)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x333829c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(), { "RemoveAllEndpoints", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer.TryGetEncryptionState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PacketEncryptionLayer::*)(
    ::System::Net::IPEndPoint*, ::by_ref<::GlobalNamespace::EncryptionUtility_IEncryptionState*>)>(&::GlobalNamespace::PacketEncryptionLayer::TryGetEncryptionState)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x333d1b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(),
                            { "TryGetEncryptionState", {}, { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::EncryptionUtility_IEncryptionState*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer.TryGetPendingEncryptionState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PacketEncryptionLayer::*)(
    ::System::Net::IPEndPoint*, ::by_ref<::GlobalNamespace::EncryptionUtility_IEncryptionState*>)>(&::GlobalNamespace::PacketEncryptionLayer::TryGetPendingEncryptionState)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x333d2d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(),
            { "TryGetPendingEncryptionState", {}, { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::EncryptionUtility_IEncryptionState*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer.TryGetPotentialPendingEncryptionStates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PacketEncryptionLayer::*)(
    ::System::Net::IPEndPoint*, ::by_ref<::ArrayW<::GlobalNamespace::EncryptionUtility_IEncryptionState*>>)>(&::GlobalNamespace::PacketEncryptionLayer::TryGetPotentialPendingEncryptionStates)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x333d604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(),
                                                { "TryGetPotentialPendingEncryptionStates",
                                                  {},
                                                  { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::EncryptionUtility_IEncryptionState*>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer.PromotePendingEncryptionState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PacketEncryptionLayer::*)(::System::Net::IPEndPoint*, ::GlobalNamespace::EncryptionUtility_IEncryptionState*)>(
    &::GlobalNamespace::PacketEncryptionLayer::PromotePendingEncryptionState)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x333d970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(),
                            { "PromotePendingEncryptionState", {}, { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::GlobalNamespace::EncryptionUtility_IEncryptionState*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer.MatchesFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PacketEncryptionLayer::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::GlobalNamespace::PacketEncryptionLayer::MatchesFilter)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x333de00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(),
                                                             { "MatchesFilter", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer.ProcessInboundPacketInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PacketEncryptionLayer::*)(::System::Net::IPEndPoint*, ::by_ref<::ArrayW<uint8_t>>, ::by_ref<int32_t>, ::by_ref<int32_t>,
                                                                                                          ::by_ref<bool>)>(&::GlobalNamespace::PacketEncryptionLayer::ProcessInboundPacketInternal)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x333c398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(),
                                                             { "ProcessInboundPacketInternal",
                                                               {},
                                                               { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                 ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer.ProcessOutBoundPacketInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PacketEncryptionLayer::*)(::System::Net::IPEndPoint*, ::by_ref<::ArrayW<uint8_t>>, ::by_ref<int32_t>, ::by_ref<int32_t>,
                                                                                                          ::by_ref<bool>)>(&::GlobalNamespace::PacketEncryptionLayer::ProcessOutBoundPacketInternal)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x333c938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(),
                                                             { "ProcessOutBoundPacketInternal",
                                                               {},
                                                               { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                 ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PacketEncryptionLayer.Log
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::PacketEncryptionLayer::Log)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x333de8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics*& GlobalNamespace::PacketEncryptionLayer::__cordl_internal_get_statistics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___statistics;
}
constexpr ::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics* const& GlobalNamespace::PacketEncryptionLayer::__cordl_internal_get_statistics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___statistics;
}
constexpr void GlobalNamespace::PacketEncryptionLayer::__cordl_internal_set_statistics(::GlobalNamespace::PacketEncryptionLayer_EncryptionStatistics* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___statistics = value;
}
constexpr ::BGNet::Core::ITaskUtility*& GlobalNamespace::PacketEncryptionLayer::__cordl_internal_get__taskUtility() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskUtility;
}
constexpr ::BGNet::Core::ITaskUtility* const& GlobalNamespace::PacketEncryptionLayer::__cordl_internal_get__taskUtility() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskUtility;
}
constexpr void GlobalNamespace::PacketEncryptionLayer::__cordl_internal_set__taskUtility(::BGNet::Core::ITaskUtility* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____taskUtility = value;
}
constexpr ::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPEndPoint*, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>*&
GlobalNamespace::PacketEncryptionLayer::__cordl_internal_get__encryptionStates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encryptionStates;
}
constexpr ::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPEndPoint*, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>* const&
GlobalNamespace::PacketEncryptionLayer::__cordl_internal_get__encryptionStates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encryptionStates;
}
constexpr void GlobalNamespace::PacketEncryptionLayer::__cordl_internal_set__encryptionStates(
    ::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPEndPoint*, ::GlobalNamespace::EncryptionUtility_IEncryptionState*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____encryptionStates = value;
}
constexpr ::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPAddress*, ::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList*>*&
GlobalNamespace::PacketEncryptionLayer::__cordl_internal_get__pendingEncryptionStates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pendingEncryptionStates;
}
constexpr ::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPAddress*, ::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList*>* const&
GlobalNamespace::PacketEncryptionLayer::__cordl_internal_get__pendingEncryptionStates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pendingEncryptionStates;
}
constexpr void GlobalNamespace::PacketEncryptionLayer::__cordl_internal_set__pendingEncryptionStates(
    ::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPAddress*, ::GlobalNamespace::PacketEncryptionLayer_PendingEncryptionStateList*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pendingEncryptionStates = value;
}
constexpr ::ArrayW<uint8_t>& GlobalNamespace::PacketEncryptionLayer::__cordl_internal_get__unencryptedTrafficFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unencryptedTrafficFilter;
}
constexpr ::ArrayW<uint8_t> const& GlobalNamespace::PacketEncryptionLayer::__cordl_internal_get__unencryptedTrafficFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unencryptedTrafficFilter;
}
constexpr void GlobalNamespace::PacketEncryptionLayer::__cordl_internal_set__unencryptedTrafficFilter(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____unencryptedTrafficFilter = value;
}
constexpr bool& GlobalNamespace::PacketEncryptionLayer::__cordl_internal_get__filterUnencryptedTraffic_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterUnencryptedTraffic_k__BackingField;
}
constexpr bool const& GlobalNamespace::PacketEncryptionLayer::__cordl_internal_get__filterUnencryptedTraffic_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterUnencryptedTraffic_k__BackingField;
}
constexpr void GlobalNamespace::PacketEncryptionLayer::__cordl_internal_set__filterUnencryptedTraffic_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____filterUnencryptedTraffic_k__BackingField = value;
}
constexpr bool& GlobalNamespace::PacketEncryptionLayer::__cordl_internal_get__enableStatistics_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableStatistics_k__BackingField;
}
constexpr bool const& GlobalNamespace::PacketEncryptionLayer::__cordl_internal_get__enableStatistics_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableStatistics_k__BackingField;
}
constexpr void GlobalNamespace::PacketEncryptionLayer::__cordl_internal_set__enableStatistics_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enableStatistics_k__BackingField = value;
}
inline void GlobalNamespace::PacketEncryptionLayer::setStaticF__stopwatch(::System::Diagnostics::Stopwatch* value) {
  ::cordl_internals::setStaticField<::System::Diagnostics::Stopwatch*, "_stopwatch", ::GlobalNamespace::PacketEncryptionLayer*>(std::forward<::System::Diagnostics::Stopwatch*>(value));
}
inline ::System::Diagnostics::Stopwatch* GlobalNamespace::PacketEncryptionLayer::getStaticF__stopwatch() {
  return ::cordl_internals::getStaticField<::System::Diagnostics::Stopwatch*, "_stopwatch", ::GlobalNamespace::PacketEncryptionLayer*>();
}
inline bool GlobalNamespace::PacketEncryptionLayer::get_filterUnencryptedTraffic() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(), { "get_filterUnencryptedTraffic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PacketEncryptionLayer::set_filterUnencryptedTraffic(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(), { "set_filterUnencryptedTraffic", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PacketEncryptionLayer::get_enableStatistics() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(), { "get_enableStatistics", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PacketEncryptionLayer::set_enableStatistics(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(), { "set_enableStatistics", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PacketEncryptionLayer::_ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::BGNet::Core::ITimeProvider*>(), ::i2c::type_of<::BGNet::Core::ITaskUtility*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeProvider, taskUtility);
}
inline void GlobalNamespace::PacketEncryptionLayer::ProcessInboundPacket(::System::Net::IPEndPoint* remoteEndPoint, ::by_ref<::ArrayW<uint8_t>> data, ::by_ref<int32_t> offset,
                                                                         ::by_ref<int32_t> length) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, remoteEndPoint, data, offset, length);
}
inline void GlobalNamespace::PacketEncryptionLayer::ProcessOutBoundPacket(::System::Net::IPEndPoint* remoteEndPoint, ::by_ref<::ArrayW<uint8_t>> data, ::by_ref<int32_t> offset,
                                                                          ::by_ref<int32_t> length) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, remoteEndPoint, data, offset, length);
}
inline void GlobalNamespace::PacketEncryptionLayer::SetUnencryptedTrafficFilter(::ArrayW<uint8_t> unencryptedTrafficFilter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(), { "SetUnencryptedTrafficFilter", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unencryptedTrafficFilter);
}
inline ::GlobalNamespace::EncryptionUtility_IEncryptionState* GlobalNamespace::PacketEncryptionLayer::AddEncryptedEndpoint(::System::Net::IPEndPoint* endPoint, ::ArrayW<uint8_t> preMasterSecret,
                                                                                                                           ::ArrayW<uint8_t> serverRandom, ::ArrayW<uint8_t> clientRandom,
                                                                                                                           bool isClient) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(),
                                                                                         { "AddEncryptedEndpoint",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                             ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EncryptionUtility_IEncryptionState*>(this, ___internal_method, endPoint, preMasterSecret, serverRandom, clientRandom, isClient);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EncryptionUtility_IEncryptionState*>*
GlobalNamespace::PacketEncryptionLayer::AddEncryptedEndpointAsync(::System::Net::IPEndPoint* endPoint, ::ArrayW<uint8_t> preMasterSecret, ::ArrayW<uint8_t> serverRandom,
                                                                  ::ArrayW<uint8_t> clientRandom, bool isClient) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(),
                                                                                         { "AddEncryptedEndpointAsync",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                             ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::EncryptionUtility_IEncryptionState*>*>(this, ___internal_method, endPoint, preMasterSecret,
                                                                                                                                          serverRandom, clientRandom, isClient);
}
inline bool GlobalNamespace::PacketEncryptionLayer::RemoveEncryptedEndpoint(::System::Net::IPEndPoint* endPoint, ::GlobalNamespace::EncryptionUtility_IEncryptionState* encryptedState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(),
                                       { "RemoveEncryptedEndpoint", {}, { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::GlobalNamespace::EncryptionUtility_IEncryptionState*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, endPoint, encryptedState);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::PacketEncryptionLayer::AddPendingEncryptedEndpointAsync(::System::Net::IPEndPoint* endPoint, ::ArrayW<uint8_t> preMasterSecret,
                                                                                                                  ::ArrayW<uint8_t> serverRandom, ::ArrayW<uint8_t> clientRandom, bool isClient) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(),
                                                                                         { "AddPendingEncryptedEndpointAsync",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                             ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, endPoint, preMasterSecret, serverRandom, clientRandom, isClient);
}
inline void GlobalNamespace::PacketEncryptionLayer::PollUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(), { "PollUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PacketEncryptionLayer::RemoveAllEndpoints() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(), { "RemoveAllEndpoints", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PacketEncryptionLayer::TryGetEncryptionState(::System::Net::IPEndPoint* endPoint, ::by_ref<::GlobalNamespace::EncryptionUtility_IEncryptionState*> state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(),
                          { "TryGetEncryptionState", {}, { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::EncryptionUtility_IEncryptionState*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, endPoint, state);
}
inline bool GlobalNamespace::PacketEncryptionLayer::TryGetPendingEncryptionState(::System::Net::IPEndPoint* endPoint, ::by_ref<::GlobalNamespace::EncryptionUtility_IEncryptionState*> state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(),
                       { "TryGetPendingEncryptionState", {}, { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::EncryptionUtility_IEncryptionState*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, endPoint, state);
}
inline bool GlobalNamespace::PacketEncryptionLayer::TryGetPotentialPendingEncryptionStates(::System::Net::IPEndPoint* endPoint,
                                                                                           ::by_ref<::ArrayW<::GlobalNamespace::EncryptionUtility_IEncryptionState*>> encryptionStates) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(),
                                              { "TryGetPotentialPendingEncryptionStates",
                                                {},
                                                { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::EncryptionUtility_IEncryptionState*>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, endPoint, encryptionStates);
}
inline void GlobalNamespace::PacketEncryptionLayer::PromotePendingEncryptionState(::System::Net::IPEndPoint* endPoint, ::GlobalNamespace::EncryptionUtility_IEncryptionState* state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(),
                          { "PromotePendingEncryptionState", {}, { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::GlobalNamespace::EncryptionUtility_IEncryptionState*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, endPoint, state);
}
inline bool GlobalNamespace::PacketEncryptionLayer::MatchesFilter(::ArrayW<uint8_t> data, int32_t offset, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(),
                                                           { "MatchesFilter", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, offset, length);
}
inline bool GlobalNamespace::PacketEncryptionLayer::ProcessInboundPacketInternal(::System::Net::IPEndPoint* remoteEndPoint, ::by_ref<::ArrayW<uint8_t>> data, ::by_ref<int32_t> offset,
                                                                                 ::by_ref<int32_t> length, ::by_ref<bool> encrypted) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(),
                                                           { "ProcessInboundPacketInternal",
                                                             {},
                                                             { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                               ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, remoteEndPoint, data, offset, length, encrypted);
}
inline bool GlobalNamespace::PacketEncryptionLayer::ProcessOutBoundPacketInternal(::System::Net::IPEndPoint* remoteEndPoint, ::by_ref<::ArrayW<uint8_t>> data, ::by_ref<int32_t> offset,
                                                                                  ::by_ref<int32_t> length, ::by_ref<bool> encrypted) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(),
                                                           { "ProcessOutBoundPacketInternal",
                                                             {},
                                                             { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                               ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, remoteEndPoint, data, offset, length, encrypted);
}
inline void GlobalNamespace::PacketEncryptionLayer::Log(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PacketEncryptionLayer*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline ::GlobalNamespace::PacketEncryptionLayer* GlobalNamespace::PacketEncryptionLayer::New_ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PacketEncryptionLayer*>(timeProvider, taskUtility));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PacketEncryptionLayer::PacketEncryptionLayer() {}
