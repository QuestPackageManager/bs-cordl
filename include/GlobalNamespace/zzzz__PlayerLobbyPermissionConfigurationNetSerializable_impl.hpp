#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerLobbyPermissionConfigurationNetSerializable.hpp"
#include "GlobalNamespace/zzzz__PoolableSerializable_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerLobbyPermissionConfigurationNetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable.get_userId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::*)()>(
    &::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::get_userId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x377bd48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>(), { "get_userId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable.get_isServerOwner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::*)()>(
    &::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::get_isServerOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x377bd50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>(), { "get_isServerOwner", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable.get_hasRecommendBeatmapsPermission
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::*)()>(
    &::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::get_hasRecommendBeatmapsPermission)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x377bd58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>(), { "get_hasRecommendBeatmapsPermission", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable.get_hasRecommendGameplayModifiersPermission
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::*)()>(
    &::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::get_hasRecommendGameplayModifiersPermission)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x377bd60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>(), { "get_hasRecommendGameplayModifiersPermission", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable.get_hasKickVotePermission
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::*)()>(
    &::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::get_hasKickVotePermission)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x377bd68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>(), { "get_hasKickVotePermission", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable.get_hasInvitePermission
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::*)()>(
    &::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::get_hasInvitePermission)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x377bd70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>(), { "get_hasInvitePermission", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable.Obtain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable* (*)()>(
    &::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::Obtain)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x377bd78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>(), { "Obtain", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable* (
    ::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::*)(::StringW, bool, bool, bool, bool, bool)>(&::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::Init)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x377bde4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>(),
                            { "Init", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::*)()>(
    &::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x377be00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::Serialize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x377be58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::Deserialize)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x377bec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>(), 11 }));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::__cordl_internal_get__userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
constexpr ::StringW const& GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::__cordl_internal_get__userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
constexpr void GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::__cordl_internal_set__userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____userId = value;
}
constexpr bool& GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::__cordl_internal_get__isServerOwner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isServerOwner;
}
constexpr bool const& GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::__cordl_internal_get__isServerOwner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isServerOwner;
}
constexpr void GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::__cordl_internal_set__isServerOwner(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isServerOwner = value;
}
constexpr bool& GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::__cordl_internal_get__hasRecommendBeatmapsPermission() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasRecommendBeatmapsPermission;
}
constexpr bool const& GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::__cordl_internal_get__hasRecommendBeatmapsPermission() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasRecommendBeatmapsPermission;
}
constexpr void GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::__cordl_internal_set__hasRecommendBeatmapsPermission(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasRecommendBeatmapsPermission = value;
}
constexpr bool& GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::__cordl_internal_get__hasRecommendGameplayModifiersPermission() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasRecommendGameplayModifiersPermission;
}
constexpr bool const& GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::__cordl_internal_get__hasRecommendGameplayModifiersPermission() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasRecommendGameplayModifiersPermission;
}
constexpr void GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::__cordl_internal_set__hasRecommendGameplayModifiersPermission(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasRecommendGameplayModifiersPermission = value;
}
constexpr bool& GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::__cordl_internal_get__hasKickVotePermission() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasKickVotePermission;
}
constexpr bool const& GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::__cordl_internal_get__hasKickVotePermission() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasKickVotePermission;
}
constexpr void GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::__cordl_internal_set__hasKickVotePermission(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasKickVotePermission = value;
}
constexpr bool& GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::__cordl_internal_get__hasInvitePermission() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasInvitePermission;
}
constexpr bool const& GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::__cordl_internal_get__hasInvitePermission() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasInvitePermission;
}
constexpr void GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::__cordl_internal_set__hasInvitePermission(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasInvitePermission = value;
}
inline ::StringW GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::get_userId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>(), { "get_userId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::get_isServerOwner() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>(), { "get_isServerOwner", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::get_hasRecommendBeatmapsPermission() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>(), { "get_hasRecommendBeatmapsPermission", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::get_hasRecommendGameplayModifiersPermission() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>(), { "get_hasRecommendGameplayModifiersPermission", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::get_hasKickVotePermission() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>(), { "get_hasKickVotePermission", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::get_hasInvitePermission() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>(), { "get_hasInvitePermission", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable* GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::Obtain() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>(), { "Obtain", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*
GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::Init(::StringW userId, bool isServerOwner, bool hasRecommendBeatmapsPermission, bool hasRecommendGameplayModifiersPermission,
                                                                         bool hasKickVotePermission, bool hasInvitePermission) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>(),
                          { "Init", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>(
      this, ___internal_method, userId, isServerOwner, hasRecommendBeatmapsPermission, hasRecommendGameplayModifiersPermission, hasKickVotePermission, hasInvitePermission);
}
inline void GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline ::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable* GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::PlayerLobbyPermissionConfigurationNetSerializable() {}
