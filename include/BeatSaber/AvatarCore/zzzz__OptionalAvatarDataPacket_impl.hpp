#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__OptionalAvatarDataPacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__OptionalAvatarData_def.hpp"
#include "GlobalNamespace/zzzz__ByteArrayNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::OptionalAvatarDataPacket.get_pool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>* (*)()>(
    &::BeatSaber::AvatarCore::OptionalAvatarDataPacket::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xe10ccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>::get(),
                                                                               "get_pool", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::OptionalAvatarDataPacket.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::OptionalAvatarDataPacket::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::BeatSaber::AvatarCore::OptionalAvatarDataPacket::Serialize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xe10d0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>::get(), "Serialize", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::OptionalAvatarDataPacket.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::OptionalAvatarDataPacket::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::BeatSaber::AvatarCore::OptionalAvatarDataPacket::Deserialize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe10d50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>::get(), "Deserialize", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::OptionalAvatarDataPacket.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::OptionalAvatarDataPacket::*)()>(
    &::BeatSaber::AvatarCore::OptionalAvatarDataPacket::Release)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xe10d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>::get(),
                                                                               "Release", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::OptionalAvatarDataPacket.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::AvatarCore::OptionalAvatarDataPacket* (
    ::BeatSaber::AvatarCore::OptionalAvatarDataPacket::*)(::BeatSaber::AvatarCore::OptionalAvatarData)>(&::BeatSaber::AvatarCore::OptionalAvatarDataPacket::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe10dfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>::get(), "Init", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::OptionalAvatarData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::OptionalAvatarDataPacket.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::AvatarCore::OptionalAvatarDataPacket* (
    ::BeatSaber::AvatarCore::OptionalAvatarDataPacket::*)(uint32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::BeatSaber::AvatarCore::OptionalAvatarDataPacket::Init)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xe10e04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>::get(), "Init", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::OptionalAvatarDataPacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::OptionalAvatarDataPacket::*)()>(
    &::BeatSaber::AvatarCore::OptionalAvatarDataPacket::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xe10e38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr BeatSaber::AvatarCore::OptionalAvatarDataPacket::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr BeatSaber::AvatarCore::OptionalAvatarDataPacket::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
constexpr uint32_t& BeatSaber::AvatarCore::OptionalAvatarDataPacket::__get_dataType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataType;
}
constexpr uint32_t const& BeatSaber::AvatarCore::OptionalAvatarDataPacket::__get_dataType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataType;
}
constexpr void BeatSaber::AvatarCore::OptionalAvatarDataPacket::__set_dataType(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dataType = value;
}
constexpr ::GlobalNamespace::ByteArrayNetSerializable*& BeatSaber::AvatarCore::OptionalAvatarDataPacket::__get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ByteArrayNetSerializable*> const& BeatSaber::AvatarCore::OptionalAvatarDataPacket::__get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void BeatSaber::AvatarCore::OptionalAvatarDataPacket::__set_data(::GlobalNamespace::ByteArrayNetSerializable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::PacketPool_1<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>* BeatSaber::AvatarCore::OptionalAvatarDataPacket::get_pool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>::get(),
                                                                             "get_pool", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>*, false>(nullptr, ___internal_method);
}
inline void BeatSaber::AvatarCore::OptionalAvatarDataPacket::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>::get(), "Serialize", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void BeatSaber::AvatarCore::OptionalAvatarDataPacket::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>::get(), "Deserialize", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void BeatSaber::AvatarCore::OptionalAvatarDataPacket::Release() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>::get(),
                                                                             "Release", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatSaber::AvatarCore::OptionalAvatarDataPacket* BeatSaber::AvatarCore::OptionalAvatarDataPacket::Init(::BeatSaber::AvatarCore::OptionalAvatarData optionalAvatarData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>::get(), "Init", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::OptionalAvatarData>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*, false>(this, ___internal_method, optionalAvatarData);
}
inline ::BeatSaber::AvatarCore::OptionalAvatarDataPacket* BeatSaber::AvatarCore::OptionalAvatarDataPacket::Init(uint32_t dataType, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>::get(), "Init", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*, false>(this, ___internal_method, dataType, data, length);
}
inline ::BeatSaber::AvatarCore::OptionalAvatarDataPacket* BeatSaber::AvatarCore::OptionalAvatarDataPacket::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>());
}
inline void BeatSaber::AvatarCore::OptionalAvatarDataPacket::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::OptionalAvatarDataPacket::OptionalAvatarDataPacket() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
