#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayersLobbyPermissionConfigurationNetSerializable.hpp"
#include "GlobalNamespace/zzzz__PoolableSerializable_impl.hpp"
#include "GlobalNamespace/zzzz__PlayersLobbyPermissionConfigurationNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PlayerLobbyPermissionConfigurationNetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable.get_playersPermission
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>* (
    ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::*)()>(&::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::get_playersPermission)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x377bf2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>(), { "get_playersPermission", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable.Obtain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable* (*)()>(
    &::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::Obtain)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x377bf34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>(), { "Obtain", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable* (
    ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>*)>(
    &::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::Init)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x377bfa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>(),
                                         { "Init", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::*)()>(
    &::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x377c01c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::Serialize)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x377c0c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::Deserialize)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x377c20c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::*)()>(
    &::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::Release)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x377c394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable.Retain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::*)()>(
    &::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::Retain)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x377c4e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>(), 8 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>*&
GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::__cordl_internal_get__playersPermission() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersPermission;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>* const&
GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::__cordl_internal_get__playersPermission() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersPermission;
}
constexpr void GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::__cordl_internal_set__playersPermission(
    ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playersPermission = value;
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>*
GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::get_playersPermission() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>(), { "get_playersPermission", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable* GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::Obtain() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>(), { "Obtain", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable* GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::Init(
    ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>* playersPermission) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>(),
                                       { "Init", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>(this, ___internal_method, playersPermission);
}
inline void GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::Release() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::Retain() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable* GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::PlayersLobbyPermissionConfigurationNetSerializable() {}
