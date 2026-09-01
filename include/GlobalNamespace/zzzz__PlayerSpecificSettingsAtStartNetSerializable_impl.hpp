#pragma once
// IWYU pragma private; include "GlobalNamespace\PlayerSpecificSettingsAtStartNetSerializable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettingsAtStartNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettingsNetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable.get_activePlayersAtGameStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* (
    ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::*)()>(&::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::get_activePlayersAtGameStart)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x32b8e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>(), { "get_activePlayersAtGameStart", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable.get_activePlayerSpecificSettingsAtGameStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* (
    ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::*)()>(&::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::get_activePlayerSpecificSettingsAtGameStart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b9070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>(), { "get_activePlayerSpecificSettingsAtGameStart", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable.set_activePlayerSpecificSettingsAtGameStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*)>(
        &::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::set_activePlayerSpecificSettingsAtGameStart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b9078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>(),
            { "set_activePlayerSpecificSettingsAtGameStart", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::*)()>(
    &::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32b9080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::*)(
    ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*)>(&::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b9084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::Serialize)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x32b908c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>(),
                                                                                           { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::Deserialize)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x32b945c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>(),
                                                                                           { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*&
GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::__cordl_internal_get__activePlayerSpecificSettingsAtGameStart_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activePlayerSpecificSettingsAtGameStart_k__BackingField;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* const&
GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::__cordl_internal_get__activePlayerSpecificSettingsAtGameStart_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activePlayerSpecificSettingsAtGameStart_k__BackingField;
}
constexpr void GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::__cordl_internal_set__activePlayerSpecificSettingsAtGameStart_k__BackingField(
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activePlayerSpecificSettingsAtGameStart_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*&
GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::__cordl_internal_get__activePlayersAtGameStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activePlayersAtGameStart;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* const&
GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::__cordl_internal_get__activePlayersAtGameStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activePlayersAtGameStart;
}
constexpr void GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::__cordl_internal_set__activePlayersAtGameStart(
    ::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activePlayersAtGameStart = value;
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::get_activePlayersAtGameStart() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>(), { "get_activePlayersAtGameStart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*
GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::get_activePlayerSpecificSettingsAtGameStart() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>(), { "get_activePlayerSpecificSettingsAtGameStart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::set_activePlayerSpecificSettingsAtGameStart(
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>(),
          { "set_activePlayerSpecificSettingsAtGameStart", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::_ctor(
    ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* activePlayerSpecificSettingsAtGameStart) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activePlayerSpecificSettingsAtGameStart);
}
inline void GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>(),
                                                                                         { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>(),
                                                                                         { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>());
}
inline ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::New_ctor(
    ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* activePlayerSpecificSettingsAtGameStart) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>(activePlayerSpecificSettingsAtGameStart));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::i___LiteNetLib__Utils__INetSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::PlayerSpecificSettingsAtStartNetSerializable() {}
