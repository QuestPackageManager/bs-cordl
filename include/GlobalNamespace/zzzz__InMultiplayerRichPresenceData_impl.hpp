#pragma once
// IWYU pragma private; include "GlobalNamespace/InMultiplayerRichPresenceData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__InMultiplayerRichPresenceData_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerRichPresenceData_def.hpp"
#include "GlobalNamespace/zzzz__IRichPresenceData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InMultiplayerRichPresenceData.get_apiName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::InMultiplayerRichPresenceData::*)()>(&::GlobalNamespace::InMultiplayerRichPresenceData::get_apiName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58fd938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InMultiplayerRichPresenceData*>(), { "get_apiName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InMultiplayerRichPresenceData.set_apiName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InMultiplayerRichPresenceData::*)(::StringW)>(&::GlobalNamespace::InMultiplayerRichPresenceData::set_apiName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58fd940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InMultiplayerRichPresenceData*>(), { "set_apiName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InMultiplayerRichPresenceData.get_localizedDescription
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::InMultiplayerRichPresenceData::*)()>(
    &::GlobalNamespace::InMultiplayerRichPresenceData::get_localizedDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58fd948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InMultiplayerRichPresenceData*>(), { "get_localizedDescription", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InMultiplayerRichPresenceData.set_localizedDescription
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InMultiplayerRichPresenceData::*)(::StringW)>(
    &::GlobalNamespace::InMultiplayerRichPresenceData::set_localizedDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58fd950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InMultiplayerRichPresenceData*>(), { "set_localizedDescription", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InMultiplayerRichPresenceData.get_multiplayerSecret
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::InMultiplayerRichPresenceData::*)()>(&::GlobalNamespace::InMultiplayerRichPresenceData::get_multiplayerSecret)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58fd958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InMultiplayerRichPresenceData*>(), { "get_multiplayerSecret", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InMultiplayerRichPresenceData.set_multiplayerSecret
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InMultiplayerRichPresenceData::*)(::StringW)>(
    &::GlobalNamespace::InMultiplayerRichPresenceData::set_multiplayerSecret)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58fd960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InMultiplayerRichPresenceData*>(), { "set_multiplayerSecret", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InMultiplayerRichPresenceData.get_atMaxPartySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InMultiplayerRichPresenceData::*)()>(&::GlobalNamespace::InMultiplayerRichPresenceData::get_atMaxPartySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58fd968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InMultiplayerRichPresenceData*>(), { "get_atMaxPartySize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InMultiplayerRichPresenceData.set_atMaxPartySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InMultiplayerRichPresenceData::*)(bool)>(&::GlobalNamespace::InMultiplayerRichPresenceData::set_atMaxPartySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58fd970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InMultiplayerRichPresenceData*>(), { "set_atMaxPartySize", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InMultiplayerRichPresenceData.get_canInvite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InMultiplayerRichPresenceData::*)()>(&::GlobalNamespace::InMultiplayerRichPresenceData::get_canInvite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58fd978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InMultiplayerRichPresenceData*>(), { "get_canInvite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InMultiplayerRichPresenceData.set_canInvite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InMultiplayerRichPresenceData::*)(bool)>(&::GlobalNamespace::InMultiplayerRichPresenceData::set_canInvite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58fd980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InMultiplayerRichPresenceData*>(), { "set_canInvite", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InMultiplayerRichPresenceData.get_isJoinable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::InMultiplayerRichPresenceData::*)()>(&::GlobalNamespace::InMultiplayerRichPresenceData::get_isJoinable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x58fd988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InMultiplayerRichPresenceData*>(), { "get_isJoinable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InMultiplayerRichPresenceData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InMultiplayerRichPresenceData::*)(::StringW, bool, bool)>(&::GlobalNamespace::InMultiplayerRichPresenceData::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x58fd9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InMultiplayerRichPresenceData*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::InMultiplayerRichPresenceData::__cordl_internal_get__apiName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____apiName_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::InMultiplayerRichPresenceData::__cordl_internal_get__apiName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____apiName_k__BackingField;
}
constexpr void GlobalNamespace::InMultiplayerRichPresenceData::__cordl_internal_set__apiName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____apiName_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::InMultiplayerRichPresenceData::__cordl_internal_get__localizedDescription_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizedDescription_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::InMultiplayerRichPresenceData::__cordl_internal_get__localizedDescription_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizedDescription_k__BackingField;
}
constexpr void GlobalNamespace::InMultiplayerRichPresenceData::__cordl_internal_set__localizedDescription_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localizedDescription_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::InMultiplayerRichPresenceData::__cordl_internal_get__multiplayerSecret_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSecret_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::InMultiplayerRichPresenceData::__cordl_internal_get__multiplayerSecret_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSecret_k__BackingField;
}
constexpr void GlobalNamespace::InMultiplayerRichPresenceData::__cordl_internal_set__multiplayerSecret_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerSecret_k__BackingField = value;
}
constexpr bool& GlobalNamespace::InMultiplayerRichPresenceData::__cordl_internal_get__atMaxPartySize_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____atMaxPartySize_k__BackingField;
}
constexpr bool const& GlobalNamespace::InMultiplayerRichPresenceData::__cordl_internal_get__atMaxPartySize_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____atMaxPartySize_k__BackingField;
}
constexpr void GlobalNamespace::InMultiplayerRichPresenceData::__cordl_internal_set__atMaxPartySize_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____atMaxPartySize_k__BackingField = value;
}
constexpr bool& GlobalNamespace::InMultiplayerRichPresenceData::__cordl_internal_get__canInvite_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canInvite_k__BackingField;
}
constexpr bool const& GlobalNamespace::InMultiplayerRichPresenceData::__cordl_internal_get__canInvite_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canInvite_k__BackingField;
}
constexpr void GlobalNamespace::InMultiplayerRichPresenceData::__cordl_internal_set__canInvite_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____canInvite_k__BackingField = value;
}
inline ::StringW GlobalNamespace::InMultiplayerRichPresenceData::get_apiName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InMultiplayerRichPresenceData*>(), { "get_apiName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::InMultiplayerRichPresenceData::set_apiName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InMultiplayerRichPresenceData*>(), { "set_apiName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::InMultiplayerRichPresenceData::get_localizedDescription() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InMultiplayerRichPresenceData*>(), { "get_localizedDescription", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::InMultiplayerRichPresenceData::set_localizedDescription(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InMultiplayerRichPresenceData*>(), { "set_localizedDescription", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::InMultiplayerRichPresenceData::get_multiplayerSecret() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InMultiplayerRichPresenceData*>(), { "get_multiplayerSecret", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::InMultiplayerRichPresenceData::set_multiplayerSecret(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InMultiplayerRichPresenceData*>(), { "set_multiplayerSecret", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::InMultiplayerRichPresenceData::get_atMaxPartySize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InMultiplayerRichPresenceData*>(), { "get_atMaxPartySize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::InMultiplayerRichPresenceData::set_atMaxPartySize(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InMultiplayerRichPresenceData*>(), { "set_atMaxPartySize", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::InMultiplayerRichPresenceData::get_canInvite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InMultiplayerRichPresenceData*>(), { "get_canInvite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::InMultiplayerRichPresenceData::set_canInvite(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InMultiplayerRichPresenceData*>(), { "set_canInvite", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::InMultiplayerRichPresenceData::get_isJoinable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InMultiplayerRichPresenceData*>(), { "get_isJoinable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::InMultiplayerRichPresenceData::_ctor(::StringW multiplayerSecret, bool canInvite, bool atMaxPartySize) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InMultiplayerRichPresenceData*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multiplayerSecret, canInvite, atMaxPartySize);
}
inline ::GlobalNamespace::InMultiplayerRichPresenceData* GlobalNamespace::InMultiplayerRichPresenceData::New_ctor(::StringW multiplayerSecret, bool canInvite, bool atMaxPartySize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::InMultiplayerRichPresenceData*>(multiplayerSecret, canInvite, atMaxPartySize));
}
/// @brief Convert operator to "::GlobalNamespace::IMultiplayerRichPresenceData"
constexpr GlobalNamespace::InMultiplayerRichPresenceData::operator ::GlobalNamespace::IMultiplayerRichPresenceData*() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerRichPresenceData*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IMultiplayerRichPresenceData"
constexpr ::GlobalNamespace::IMultiplayerRichPresenceData* GlobalNamespace::InMultiplayerRichPresenceData::i___GlobalNamespace__IMultiplayerRichPresenceData() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerRichPresenceData*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IRichPresenceData"
constexpr GlobalNamespace::InMultiplayerRichPresenceData::operator ::GlobalNamespace::IRichPresenceData*() noexcept {
  return static_cast<::GlobalNamespace::IRichPresenceData*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IRichPresenceData"
constexpr ::GlobalNamespace::IRichPresenceData* GlobalNamespace::InMultiplayerRichPresenceData::i___GlobalNamespace__IRichPresenceData() noexcept {
  return static_cast<::GlobalNamespace::IRichPresenceData*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InMultiplayerRichPresenceData::InMultiplayerRichPresenceData() {}
