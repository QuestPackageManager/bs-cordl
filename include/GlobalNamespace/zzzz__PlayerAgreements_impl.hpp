#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerAgreements.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerAgreements_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerAgreements.add_agreedToEulaEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerAgreements::*)(::System::Action*)>(&::GlobalNamespace::PlayerAgreements::add_agreedToEulaEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3741bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(), { "add_agreedToEulaEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAgreements.remove_agreedToEulaEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerAgreements::*)(::System::Action*)>(&::GlobalNamespace::PlayerAgreements::remove_agreedToEulaEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3741c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(), { "remove_agreedToEulaEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAgreements._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerAgreements::*)()>(&::GlobalNamespace::PlayerAgreements::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3741d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAgreements._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerAgreements::*)(int32_t, int32_t, int32_t, int32_t, int32_t)>(&::GlobalNamespace::PlayerAgreements::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3741d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(),
                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAgreements.AgreeToEula
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerAgreements::*)()>(&::GlobalNamespace::PlayerAgreements::AgreeToEula)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3741d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(), { "AgreeToEula", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAgreements.AgreeToPrivacyPolicy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerAgreements::*)()>(&::GlobalNamespace::PlayerAgreements::AgreeToPrivacyPolicy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3741d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(), { "AgreeToPrivacyPolicy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAgreements.AgreeToHealthAndSafety
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerAgreements::*)()>(&::GlobalNamespace::PlayerAgreements::AgreeToHealthAndSafety)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3741d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(), { "AgreeToHealthAndSafety", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAgreements.AgreeToPlayerSensitivityFlag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerAgreements::*)()>(&::GlobalNamespace::PlayerAgreements::AgreeToPlayerSensitivityFlag)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3741d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(), { "AgreeToPlayerSensitivityFlag", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAgreements.AgreeToEndOfLifeNotice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerAgreements::*)()>(&::GlobalNamespace::PlayerAgreements::AgreeToEndOfLifeNotice)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3741d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(), { "AgreeToEndOfLifeNotice", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAgreements.AgreedToPreviousPrivacyPolicy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerAgreements::*)()>(&::GlobalNamespace::PlayerAgreements::AgreedToPreviousPrivacyPolicy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3741d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(), { "AgreedToPreviousPrivacyPolicy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAgreements.AgreedToAnyPreviousEula
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerAgreements::*)()>(&::GlobalNamespace::PlayerAgreements::AgreedToAnyPreviousEula)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3741d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(), { "AgreedToAnyPreviousEula", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAgreements.AgreedToAnyPreviousPrivacyPolicy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerAgreements::*)()>(&::GlobalNamespace::PlayerAgreements::AgreedToAnyPreviousPrivacyPolicy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3741db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(), { "AgreedToAnyPreviousPrivacyPolicy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAgreements.AgreedToAnyPreviousHealthAndSafety
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerAgreements::*)()>(&::GlobalNamespace::PlayerAgreements::AgreedToAnyPreviousHealthAndSafety)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3741dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(), { "AgreedToAnyPreviousHealthAndSafety", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAgreements.AgreedToAnyPreviousPlayerSensitivityFlag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerAgreements::*)()>(&::GlobalNamespace::PlayerAgreements::AgreedToAnyPreviousPlayerSensitivityFlag)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3741dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(), { "AgreedToAnyPreviousPlayerSensitivityFlag", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAgreements.AgreedToEula
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerAgreements::*)()>(&::GlobalNamespace::PlayerAgreements::AgreedToEula)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3741de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(), { "AgreedToEula", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAgreements.AgreedToPrivacyPolicy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerAgreements::*)()>(&::GlobalNamespace::PlayerAgreements::AgreedToPrivacyPolicy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3741df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(), { "AgreedToPrivacyPolicy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAgreements.AgreedToHealthAndSafety
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerAgreements::*)()>(&::GlobalNamespace::PlayerAgreements::AgreedToHealthAndSafety)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3741e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(), { "AgreedToHealthAndSafety", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAgreements.AgreedToPlayerSenstivityFlag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerAgreements::*)()>(&::GlobalNamespace::PlayerAgreements::AgreedToPlayerSenstivityFlag)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3741e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(), { "AgreedToPlayerSenstivityFlag", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAgreements.AgreedToEndOfLifeNotice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerAgreements::*)()>(&::GlobalNamespace::PlayerAgreements::AgreedToEndOfLifeNotice)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3741e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(), { "AgreedToEndOfLifeNotice", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::PlayerAgreements::__cordl_internal_get_agreedToEulaEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___agreedToEulaEvent;
}
constexpr ::System::Action* const& GlobalNamespace::PlayerAgreements::__cordl_internal_get_agreedToEulaEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___agreedToEulaEvent;
}
constexpr void GlobalNamespace::PlayerAgreements::__cordl_internal_set_agreedToEulaEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___agreedToEulaEvent = value;
}
constexpr int32_t& GlobalNamespace::PlayerAgreements::__cordl_internal_get_eulaVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eulaVersion;
}
constexpr int32_t const& GlobalNamespace::PlayerAgreements::__cordl_internal_get_eulaVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eulaVersion;
}
constexpr void GlobalNamespace::PlayerAgreements::__cordl_internal_set_eulaVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___eulaVersion = value;
}
constexpr int32_t& GlobalNamespace::PlayerAgreements::__cordl_internal_get_privacyPolicyVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privacyPolicyVersion;
}
constexpr int32_t const& GlobalNamespace::PlayerAgreements::__cordl_internal_get_privacyPolicyVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privacyPolicyVersion;
}
constexpr void GlobalNamespace::PlayerAgreements::__cordl_internal_set_privacyPolicyVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___privacyPolicyVersion = value;
}
constexpr int32_t& GlobalNamespace::PlayerAgreements::__cordl_internal_get_healthAndSafetyVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___healthAndSafetyVersion;
}
constexpr int32_t const& GlobalNamespace::PlayerAgreements::__cordl_internal_get_healthAndSafetyVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___healthAndSafetyVersion;
}
constexpr void GlobalNamespace::PlayerAgreements::__cordl_internal_set_healthAndSafetyVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___healthAndSafetyVersion = value;
}
constexpr int32_t& GlobalNamespace::PlayerAgreements::__cordl_internal_get_playerSensitivityFlagVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSensitivityFlagVersion;
}
constexpr int32_t const& GlobalNamespace::PlayerAgreements::__cordl_internal_get_playerSensitivityFlagVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSensitivityFlagVersion;
}
constexpr void GlobalNamespace::PlayerAgreements::__cordl_internal_set_playerSensitivityFlagVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerSensitivityFlagVersion = value;
}
constexpr int32_t& GlobalNamespace::PlayerAgreements::__cordl_internal_get_endOfLifeNoticeVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endOfLifeNoticeVersion;
}
constexpr int32_t const& GlobalNamespace::PlayerAgreements::__cordl_internal_get_endOfLifeNoticeVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endOfLifeNoticeVersion;
}
constexpr void GlobalNamespace::PlayerAgreements::__cordl_internal_set_endOfLifeNoticeVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endOfLifeNoticeVersion = value;
}
inline void GlobalNamespace::PlayerAgreements::add_agreedToEulaEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(), { "add_agreedToEulaEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerAgreements::remove_agreedToEulaEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(), { "remove_agreedToEulaEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerAgreements::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerAgreements::_ctor(int32_t eulaVersion, int32_t privacyPolicyVersion, int32_t healthAndSafetyVersion, int32_t playerSensitivityFlagVersion,
                                                     int32_t endOfLifeNoticeVersion) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(),
                                       { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eulaVersion, privacyPolicyVersion, healthAndSafetyVersion, playerSensitivityFlagVersion, endOfLifeNoticeVersion);
}
inline void GlobalNamespace::PlayerAgreements::AgreeToEula() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(), { "AgreeToEula", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerAgreements::AgreeToPrivacyPolicy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(), { "AgreeToPrivacyPolicy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerAgreements::AgreeToHealthAndSafety() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(), { "AgreeToHealthAndSafety", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerAgreements::AgreeToPlayerSensitivityFlag() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(), { "AgreeToPlayerSensitivityFlag", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerAgreements::AgreeToEndOfLifeNotice() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(), { "AgreeToEndOfLifeNotice", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerAgreements::AgreedToPreviousPrivacyPolicy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(), { "AgreedToPreviousPrivacyPolicy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerAgreements::AgreedToAnyPreviousEula() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(), { "AgreedToAnyPreviousEula", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerAgreements::AgreedToAnyPreviousPrivacyPolicy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(), { "AgreedToAnyPreviousPrivacyPolicy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerAgreements::AgreedToAnyPreviousHealthAndSafety() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(), { "AgreedToAnyPreviousHealthAndSafety", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerAgreements::AgreedToAnyPreviousPlayerSensitivityFlag() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(), { "AgreedToAnyPreviousPlayerSensitivityFlag", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerAgreements::AgreedToEula() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(), { "AgreedToEula", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerAgreements::AgreedToPrivacyPolicy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(), { "AgreedToPrivacyPolicy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerAgreements::AgreedToHealthAndSafety() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(), { "AgreedToHealthAndSafety", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerAgreements::AgreedToPlayerSenstivityFlag() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(), { "AgreedToPlayerSenstivityFlag", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerAgreements::AgreedToEndOfLifeNotice() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAgreements*>(), { "AgreedToEndOfLifeNotice", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerAgreements* GlobalNamespace::PlayerAgreements::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerAgreements*>());
}
inline ::GlobalNamespace::PlayerAgreements* GlobalNamespace::PlayerAgreements::New_ctor(int32_t eulaVersion, int32_t privacyPolicyVersion, int32_t healthAndSafetyVersion,
                                                                                        int32_t playerSensitivityFlagVersion, int32_t endOfLifeNoticeVersion) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::GlobalNamespace::PlayerAgreements*>(eulaVersion, privacyPolicyVersion, healthAndSafetyVersion, playerSensitivityFlagVersion, endOfLifeNoticeVersion));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerAgreements::PlayerAgreements() {}
