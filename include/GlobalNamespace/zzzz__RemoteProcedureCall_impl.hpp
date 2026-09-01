#pragma once
// IWYU pragma private; include "GlobalNamespace\RemoteProcedureCall.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "GlobalNamespace/zzzz__IRemoteProcedureCall_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
template <typename T> constexpr T& GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T>::__cordl_internal_get__v() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____v;
}
template <typename T> constexpr T const& GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T>::__cordl_internal_get__v() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____v;
}
template <typename T> constexpr void GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T>::__cordl_internal_set__v(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____v = value;
}
template <typename T> inline bool GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T>::get_hasValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T>*>(), { "get_hasValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline T GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T>::get_value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T>*>(), { "get_value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T>::Set(T v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T>*>(), { "Set", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
template <typename T> inline void GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T>*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T>::Release() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T>*>(), { "Release", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T>::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T>*>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
template <typename T> inline void GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T>::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T>*>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
template <typename T> inline void GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T>* GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::RemoteProcedureCall_TypeWrapper_1<T>::RemoteProcedureCall_TypeWrapper_1() {}
//  Writing Method size for method: ::GlobalNamespace::RemoteProcedureCall.get_syncTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::RemoteProcedureCall::*)()>(&::GlobalNamespace::RemoteProcedureCall::get_syncTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334068c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RemoteProcedureCall*>(), { "get_syncTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoteProcedureCall.set_syncTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RemoteProcedureCall::*)(int64_t)>(&::GlobalNamespace::RemoteProcedureCall::set_syncTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3340694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RemoteProcedureCall*>(), { "set_syncTime", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoteProcedureCall.SerializeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RemoteProcedureCall::*)(::LiteNetLib::Utils::NetDataWriter*, uint32_t)>(
    &::GlobalNamespace::RemoteProcedureCall::SerializeData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x334069c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::RemoteProcedureCall*>(), { ::i2c::class_of<::GlobalNamespace::RemoteProcedureCall*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoteProcedureCall.DeserializeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RemoteProcedureCall::*)(::LiteNetLib::Utils::NetDataReader*, uint32_t)>(
    &::GlobalNamespace::RemoteProcedureCall::DeserializeData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33406a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::RemoteProcedureCall*>(), { ::i2c::class_of<::GlobalNamespace::RemoteProcedureCall*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoteProcedureCall.LiteNetLib_Utils_INetSerializable_Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RemoteProcedureCall::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::RemoteProcedureCall::LiteNetLib_Utils_INetSerializable_Serialize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33406a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RemoteProcedureCall*>(),
                                                             { "LiteNetLib.Utils.INetSerializable.Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoteProcedureCall.LiteNetLib_Utils_INetSerializable_Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RemoteProcedureCall::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::RemoteProcedureCall::LiteNetLib_Utils_INetSerializable_Deserialize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33406e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RemoteProcedureCall*>(),
                                                             { "LiteNetLib.Utils.INetSerializable.Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoteProcedureCall.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RemoteProcedureCall::*)()>(&::GlobalNamespace::RemoteProcedureCall::Release)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x334072c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::RemoteProcedureCall*>(), { ::i2c::class_of<::GlobalNamespace::RemoteProcedureCall*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoteProcedureCall.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IRemoteProcedureCall* (::GlobalNamespace::RemoteProcedureCall::*)(int64_t)>(&::GlobalNamespace::RemoteProcedureCall::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3340844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RemoteProcedureCall*>(), { "Init", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoteProcedureCall._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RemoteProcedureCall::*)()>(&::GlobalNamespace::RemoteProcedureCall::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x334084c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RemoteProcedureCall*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int64_t& GlobalNamespace::RemoteProcedureCall::__cordl_internal_get__syncTime_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncTime_k__BackingField;
}
constexpr int64_t const& GlobalNamespace::RemoteProcedureCall::__cordl_internal_get__syncTime_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncTime_k__BackingField;
}
constexpr void GlobalNamespace::RemoteProcedureCall::__cordl_internal_set__syncTime_k__BackingField(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____syncTime_k__BackingField = value;
}
inline int64_t GlobalNamespace::RemoteProcedureCall::get_syncTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RemoteProcedureCall*>(), { "get_syncTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void GlobalNamespace::RemoteProcedureCall::set_syncTime(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RemoteProcedureCall*>(), { "set_syncTime", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::RemoteProcedureCall::SerializeData(::LiteNetLib::Utils::NetDataWriter* writer, uint32_t protocolVersion) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RemoteProcedureCall*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, protocolVersion);
}
inline void GlobalNamespace::RemoteProcedureCall::DeserializeData(::LiteNetLib::Utils::NetDataReader* reader, uint32_t protocolVersion) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RemoteProcedureCall*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, protocolVersion);
}
inline void GlobalNamespace::RemoteProcedureCall::LiteNetLib_Utils_INetSerializable_Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RemoteProcedureCall*>(),
                                                           { "LiteNetLib.Utils.INetSerializable.Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void GlobalNamespace::RemoteProcedureCall::LiteNetLib_Utils_INetSerializable_Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RemoteProcedureCall*>(),
                                                           { "LiteNetLib.Utils.INetSerializable.Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void GlobalNamespace::RemoteProcedureCall::Release() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RemoteProcedureCall*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::IRemoteProcedureCall* GlobalNamespace::RemoteProcedureCall::Init(int64_t syncTime) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RemoteProcedureCall*>(), { "Init", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IRemoteProcedureCall*>(this, ___internal_method, syncTime);
}
inline void GlobalNamespace::RemoteProcedureCall::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RemoteProcedureCall*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RemoteProcedureCall* GlobalNamespace::RemoteProcedureCall::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RemoteProcedureCall*>());
}
/// @brief Convert operator to "::GlobalNamespace::IRemoteProcedureCall"
constexpr GlobalNamespace::RemoteProcedureCall::operator ::GlobalNamespace::IRemoteProcedureCall*() noexcept {
  return static_cast<::GlobalNamespace::IRemoteProcedureCall*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IRemoteProcedureCall"
constexpr ::GlobalNamespace::IRemoteProcedureCall* GlobalNamespace::RemoteProcedureCall::i___GlobalNamespace__IRemoteProcedureCall() noexcept {
  return static_cast<::GlobalNamespace::IRemoteProcedureCall*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::RemoteProcedureCall::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::RemoteProcedureCall::i___LiteNetLib__Utils__INetSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr GlobalNamespace::RemoteProcedureCall::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPoolablePacket"
constexpr ::GlobalNamespace::IPoolablePacket* GlobalNamespace::RemoteProcedureCall::i___GlobalNamespace__IPoolablePacket() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RemoteProcedureCall::RemoteProcedureCall() {}
