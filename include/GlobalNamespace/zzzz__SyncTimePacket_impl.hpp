#pragma once
// IWYU pragma private; include "GlobalNamespace/SyncTimePacket.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SyncTimePacket_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SyncTimePacket.get_pool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GlobalNamespace::SyncTimePacket*>* (*)()>(
    &::GlobalNamespace::SyncTimePacket::get_pool)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x323252c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SyncTimePacket*>::get(), "get_pool",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncTimePacket.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SyncTimePacket::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::SyncTimePacket::Serialize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3232570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SyncTimePacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncTimePacket.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SyncTimePacket::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::SyncTimePacket::Deserialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3232584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SyncTimePacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncTimePacket.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SyncTimePacket* (::GlobalNamespace::SyncTimePacket::*)(int64_t)>(
    &::GlobalNamespace::SyncTimePacket::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32325a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SyncTimePacket*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncTimePacket.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SyncTimePacket::*)()>(&::GlobalNamespace::SyncTimePacket::Release)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32325ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SyncTimePacket*>::get(), "Release",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncTimePacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SyncTimePacket::*)()>(&::GlobalNamespace::SyncTimePacket::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3232604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SyncTimePacket*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int64_t& GlobalNamespace::SyncTimePacket::__cordl_internal_get_syncTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncTime;
}
constexpr int64_t const& GlobalNamespace::SyncTimePacket::__cordl_internal_get_syncTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncTime;
}
constexpr void GlobalNamespace::SyncTimePacket::__cordl_internal_set_syncTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___syncTime = value;
}
inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::SyncTimePacket*>* GlobalNamespace::SyncTimePacket::get_pool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SyncTimePacket*>::get(), "get_pool",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::GlobalNamespace::SyncTimePacket*>*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SyncTimePacket::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SyncTimePacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::SyncTimePacket::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SyncTimePacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline ::GlobalNamespace::SyncTimePacket* GlobalNamespace::SyncTimePacket::Init(int64_t syncTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SyncTimePacket*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SyncTimePacket*, false>(this, ___internal_method, syncTime);
}
inline void GlobalNamespace::SyncTimePacket::Release() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SyncTimePacket*>::get(), "Release",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SyncTimePacket::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SyncTimePacket*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SyncTimePacket* GlobalNamespace::SyncTimePacket::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SyncTimePacket*>());
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::SyncTimePacket::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::SyncTimePacket::i___LiteNetLib__Utils__INetSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr GlobalNamespace::SyncTimePacket::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPoolablePacket"
constexpr ::GlobalNamespace::IPoolablePacket* GlobalNamespace::SyncTimePacket::i___GlobalNamespace__IPoolablePacket() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SyncTimePacket::SyncTimePacket() {}
