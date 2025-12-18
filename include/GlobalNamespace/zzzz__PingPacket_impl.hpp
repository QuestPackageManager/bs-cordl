#pragma once
// IWYU pragma private; include "GlobalNamespace/PingPacket.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PingPacket_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PingPacket.get_pool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GlobalNamespace::PingPacket*>* (*)()>(&::GlobalNamespace::PingPacket::get_pool)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3232608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PingPacket*>::get(), "get_pool",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PingPacket.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PingPacket::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::PingPacket::Serialize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x323264c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PingPacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PingPacket.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PingPacket::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::PingPacket::Deserialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3232660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PingPacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PingPacket.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PingPacket* (::GlobalNamespace::PingPacket::*)(int64_t)>(&::GlobalNamespace::PingPacket::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3232680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PingPacket*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PingPacket.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PingPacket::*)()>(&::GlobalNamespace::PingPacket::Release)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3232688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PingPacket*>::get(), "Release",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PingPacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PingPacket::*)()>(&::GlobalNamespace::PingPacket::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32326e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PingPacket*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int64_t& GlobalNamespace::PingPacket::__cordl_internal_get_pingTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pingTime;
}
constexpr int64_t const& GlobalNamespace::PingPacket::__cordl_internal_get_pingTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pingTime;
}
constexpr void GlobalNamespace::PingPacket::__cordl_internal_set_pingTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pingTime = value;
}
inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::PingPacket*>* GlobalNamespace::PingPacket::get_pool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PingPacket*>::get(), "get_pool",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::GlobalNamespace::PingPacket*>*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PingPacket::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PingPacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::PingPacket::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PingPacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline ::GlobalNamespace::PingPacket* GlobalNamespace::PingPacket::Init(int64_t pingTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PingPacket*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PingPacket*, false>(this, ___internal_method, pingTime);
}
inline void GlobalNamespace::PingPacket::Release() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PingPacket*>::get(), "Release",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PingPacket::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PingPacket*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PingPacket* GlobalNamespace::PingPacket::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PingPacket*>());
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::PingPacket::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::PingPacket::i___LiteNetLib__Utils__INetSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr GlobalNamespace::PingPacket::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPoolablePacket"
constexpr ::GlobalNamespace::IPoolablePacket* GlobalNamespace::PingPacket::i___GlobalNamespace__IPoolablePacket() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PingPacket::PingPacket() {}
