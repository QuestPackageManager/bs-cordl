#pragma once
// IWYU pragma private; include "Zenject\ZenjectSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__RootResolveMethods_impl.hpp"
#include "Zenject/zzzz__SignalDefaultSyncModes_impl.hpp"
#include "Zenject/zzzz__SignalMissingHandlerResponses_impl.hpp"
#include "Zenject/zzzz__ValidationErrorResponses_impl.hpp"
#include "Zenject/zzzz__ZenjectSettings_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__RootResolveMethods_def.hpp"
#include "Zenject/zzzz__SignalDefaultSyncModes_def.hpp"
#include "Zenject/zzzz__SignalMissingHandlerResponses_def.hpp"
#include "Zenject/zzzz__ValidationErrorResponses_def.hpp"
#include "Zenject/zzzz__ZenjectSettings_def.hpp"
//  Writing Method size for method: ::Zenject::ZenjectSettings_SignalSettings.SignalSettingsNoDomainReloadInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Zenject::ZenjectSettings_SignalSettings::SignalSettingsNoDomainReloadInit)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e8414c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSettings_SignalSettings*>(), { "SignalSettingsNoDomainReloadInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSettings_SignalSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ZenjectSettings_SignalSettings::*)(::Zenject::SignalDefaultSyncModes, ::Zenject::SignalMissingHandlerResponses, bool, int32_t)>(
    &::Zenject::ZenjectSettings_SignalSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e841e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Zenject::ZenjectSettings_SignalSettings*>(),
            { ".ctor", {}, { ::i2c::type_of<::Zenject::SignalDefaultSyncModes>(), ::i2c::type_of<::Zenject::SignalMissingHandlerResponses>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSettings_SignalSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ZenjectSettings_SignalSettings::*)()>(&::Zenject::ZenjectSettings_SignalSettings::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e841cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSettings_SignalSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSettings_SignalSettings.get_DefaultAsyncTickPriority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Zenject::ZenjectSettings_SignalSettings::*)()>(&::Zenject::ZenjectSettings_SignalSettings::get_DefaultAsyncTickPriority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e841f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSettings_SignalSettings*>(), { "get_DefaultAsyncTickPriority", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSettings_SignalSettings.get_DefaultSyncMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::SignalDefaultSyncModes (::Zenject::ZenjectSettings_SignalSettings::*)()>(
    &::Zenject::ZenjectSettings_SignalSettings::get_DefaultSyncMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e84200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSettings_SignalSettings*>(), { "get_DefaultSyncMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSettings_SignalSettings.get_MissingHandlerDefaultResponse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::SignalMissingHandlerResponses (::Zenject::ZenjectSettings_SignalSettings::*)()>(
    &::Zenject::ZenjectSettings_SignalSettings::get_MissingHandlerDefaultResponse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e84208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSettings_SignalSettings*>(), { "get_MissingHandlerDefaultResponse", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSettings_SignalSettings.get_RequireStrictUnsubscribe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::ZenjectSettings_SignalSettings::*)()>(&::Zenject::ZenjectSettings_SignalSettings::get_RequireStrictUnsubscribe)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e84210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSettings_SignalSettings*>(), { "get_RequireStrictUnsubscribe", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSettings_SignalSettings.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::ZenjectSettings_SignalSettings::__zenCreate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6e84284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSettings_SignalSettings*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSettings_SignalSettings.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::ZenjectSettings_SignalSettings::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e842e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSettings_SignalSettings*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::SignalDefaultSyncModes& Zenject::ZenjectSettings_SignalSettings::__cordl_internal_get__defaultSyncMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultSyncMode;
}
constexpr ::Zenject::SignalDefaultSyncModes const& Zenject::ZenjectSettings_SignalSettings::__cordl_internal_get__defaultSyncMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultSyncMode;
}
constexpr void Zenject::ZenjectSettings_SignalSettings::__cordl_internal_set__defaultSyncMode(::Zenject::SignalDefaultSyncModes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultSyncMode = value;
}
constexpr ::Zenject::SignalMissingHandlerResponses& Zenject::ZenjectSettings_SignalSettings::__cordl_internal_get__missingHandlerDefaultResponse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missingHandlerDefaultResponse;
}
constexpr ::Zenject::SignalMissingHandlerResponses const& Zenject::ZenjectSettings_SignalSettings::__cordl_internal_get__missingHandlerDefaultResponse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missingHandlerDefaultResponse;
}
constexpr void Zenject::ZenjectSettings_SignalSettings::__cordl_internal_set__missingHandlerDefaultResponse(::Zenject::SignalMissingHandlerResponses value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missingHandlerDefaultResponse = value;
}
constexpr bool& Zenject::ZenjectSettings_SignalSettings::__cordl_internal_get__requireStrictUnsubscribe() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requireStrictUnsubscribe;
}
constexpr bool const& Zenject::ZenjectSettings_SignalSettings::__cordl_internal_get__requireStrictUnsubscribe() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requireStrictUnsubscribe;
}
constexpr void Zenject::ZenjectSettings_SignalSettings::__cordl_internal_set__requireStrictUnsubscribe(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____requireStrictUnsubscribe = value;
}
constexpr int32_t& Zenject::ZenjectSettings_SignalSettings::__cordl_internal_get__defaultAsyncTickPriority() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultAsyncTickPriority;
}
constexpr int32_t const& Zenject::ZenjectSettings_SignalSettings::__cordl_internal_get__defaultAsyncTickPriority() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultAsyncTickPriority;
}
constexpr void Zenject::ZenjectSettings_SignalSettings::__cordl_internal_set__defaultAsyncTickPriority(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultAsyncTickPriority = value;
}
inline void Zenject::ZenjectSettings_SignalSettings::setStaticF_Default(::Zenject::ZenjectSettings_SignalSettings* value) {
  ::cordl_internals::setStaticField<::Zenject::ZenjectSettings_SignalSettings*, "Default", ::Zenject::ZenjectSettings_SignalSettings*>(std::forward<::Zenject::ZenjectSettings_SignalSettings*>(value));
}
inline ::Zenject::ZenjectSettings_SignalSettings* Zenject::ZenjectSettings_SignalSettings::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::Zenject::ZenjectSettings_SignalSettings*, "Default", ::Zenject::ZenjectSettings_SignalSettings*>();
}
inline void Zenject::ZenjectSettings_SignalSettings::SignalSettingsNoDomainReloadInit() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSettings_SignalSettings*>(), { "SignalSettingsNoDomainReloadInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Zenject::ZenjectSettings_SignalSettings::_ctor(::Zenject::SignalDefaultSyncModes defaultSyncMode, ::Zenject::SignalMissingHandlerResponses missingHandlerDefaultResponse,
                                                           bool requireStrictUnsubscribe, int32_t defaultAsyncTickPriority) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Zenject::ZenjectSettings_SignalSettings*>(),
          { ".ctor", {}, { ::i2c::type_of<::Zenject::SignalDefaultSyncModes>(), ::i2c::type_of<::Zenject::SignalMissingHandlerResponses>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, defaultSyncMode, missingHandlerDefaultResponse, requireStrictUnsubscribe, defaultAsyncTickPriority);
}
inline void Zenject::ZenjectSettings_SignalSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSettings_SignalSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Zenject::ZenjectSettings_SignalSettings::get_DefaultAsyncTickPriority() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSettings_SignalSettings*>(), { "get_DefaultAsyncTickPriority", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Zenject::SignalDefaultSyncModes Zenject::ZenjectSettings_SignalSettings::get_DefaultSyncMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSettings_SignalSettings*>(), { "get_DefaultSyncMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::SignalDefaultSyncModes>(this, ___internal_method);
}
inline ::Zenject::SignalMissingHandlerResponses Zenject::ZenjectSettings_SignalSettings::get_MissingHandlerDefaultResponse() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSettings_SignalSettings*>(), { "get_MissingHandlerDefaultResponse", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::SignalMissingHandlerResponses>(this, ___internal_method);
}
inline bool Zenject::ZenjectSettings_SignalSettings::get_RequireStrictUnsubscribe() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSettings_SignalSettings*>(), { "get_RequireStrictUnsubscribe", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Zenject::ZenjectSettings_SignalSettings::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSettings_SignalSettings*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::ZenjectSettings_SignalSettings::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSettings_SignalSettings*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::ZenjectSettings_SignalSettings* Zenject::ZenjectSettings_SignalSettings::New_ctor(::Zenject::SignalDefaultSyncModes defaultSyncMode,
                                                                                                    ::Zenject::SignalMissingHandlerResponses missingHandlerDefaultResponse,
                                                                                                    bool requireStrictUnsubscribe, int32_t defaultAsyncTickPriority) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::Zenject::ZenjectSettings_SignalSettings*>(defaultSyncMode, missingHandlerDefaultResponse, requireStrictUnsubscribe, defaultAsyncTickPriority));
}
inline ::Zenject::ZenjectSettings_SignalSettings* Zenject::ZenjectSettings_SignalSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ZenjectSettings_SignalSettings*>());
}
// Ctor Parameters []
constexpr ::Zenject::ZenjectSettings_SignalSettings::ZenjectSettings_SignalSettings() {}
//  Writing Method size for method: ::Zenject::ZenjectSettings.NoDomainReloadInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Zenject::ZenjectSettings::NoDomainReloadInit)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e83f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSettings*>(), { "NoDomainReloadInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ZenjectSettings::*)(::Zenject::ValidationErrorResponses, ::Zenject::RootResolveMethods, bool, bool,
                                                                                            ::Zenject::ZenjectSettings_SignalSettings*)>(&::Zenject::ZenjectSettings::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6e84014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSettings*>(), { ".ctor",
                                                                              {},
                                                                              { ::i2c::type_of<::Zenject::ValidationErrorResponses>(), ::i2c::type_of<::Zenject::RootResolveMethods>(),
                                                                                ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Zenject::ZenjectSettings_SignalSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ZenjectSettings::*)()>(&::Zenject::ZenjectSettings::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e83ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSettings.get_Signals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ZenjectSettings_SignalSettings* (::Zenject::ZenjectSettings::*)()>(&::Zenject::ZenjectSettings::get_Signals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e840b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSettings*>(), { "get_Signals", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSettings.get_ValidationErrorResponse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ValidationErrorResponses (::Zenject::ZenjectSettings::*)()>(&::Zenject::ZenjectSettings::get_ValidationErrorResponse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e840bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSettings*>(), { "get_ValidationErrorResponse", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSettings.get_ValidationRootResolveMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::RootResolveMethods (::Zenject::ZenjectSettings::*)()>(&::Zenject::ZenjectSettings::get_ValidationRootResolveMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e840c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSettings*>(), { "get_ValidationRootResolveMethod", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSettings.get_DisplayWarningWhenResolvingDuringInstall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::ZenjectSettings::*)()>(&::Zenject::ZenjectSettings::get_DisplayWarningWhenResolvingDuringInstall)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e840cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSettings*>(), { "get_DisplayWarningWhenResolvingDuringInstall", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSettings.get_EnsureDeterministicDestructionOrderOnApplicationQuit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::ZenjectSettings::*)()>(&::Zenject::ZenjectSettings::get_EnsureDeterministicDestructionOrderOnApplicationQuit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e840d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSettings*>(), { "get_EnsureDeterministicDestructionOrderOnApplicationQuit", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& Zenject::ZenjectSettings::__cordl_internal_get__ensureDeterministicDestructionOrderOnApplicationQuit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ensureDeterministicDestructionOrderOnApplicationQuit;
}
constexpr bool const& Zenject::ZenjectSettings::__cordl_internal_get__ensureDeterministicDestructionOrderOnApplicationQuit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ensureDeterministicDestructionOrderOnApplicationQuit;
}
constexpr void Zenject::ZenjectSettings::__cordl_internal_set__ensureDeterministicDestructionOrderOnApplicationQuit(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ensureDeterministicDestructionOrderOnApplicationQuit = value;
}
constexpr bool& Zenject::ZenjectSettings::__cordl_internal_get__displayWarningWhenResolvingDuringInstall() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayWarningWhenResolvingDuringInstall;
}
constexpr bool const& Zenject::ZenjectSettings::__cordl_internal_get__displayWarningWhenResolvingDuringInstall() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayWarningWhenResolvingDuringInstall;
}
constexpr void Zenject::ZenjectSettings::__cordl_internal_set__displayWarningWhenResolvingDuringInstall(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____displayWarningWhenResolvingDuringInstall = value;
}
constexpr ::Zenject::RootResolveMethods& Zenject::ZenjectSettings::__cordl_internal_get__validationRootResolveMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validationRootResolveMethod;
}
constexpr ::Zenject::RootResolveMethods const& Zenject::ZenjectSettings::__cordl_internal_get__validationRootResolveMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validationRootResolveMethod;
}
constexpr void Zenject::ZenjectSettings::__cordl_internal_set__validationRootResolveMethod(::Zenject::RootResolveMethods value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____validationRootResolveMethod = value;
}
constexpr ::Zenject::ValidationErrorResponses& Zenject::ZenjectSettings::__cordl_internal_get__validationErrorResponse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validationErrorResponse;
}
constexpr ::Zenject::ValidationErrorResponses const& Zenject::ZenjectSettings::__cordl_internal_get__validationErrorResponse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validationErrorResponse;
}
constexpr void Zenject::ZenjectSettings::__cordl_internal_set__validationErrorResponse(::Zenject::ValidationErrorResponses value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____validationErrorResponse = value;
}
constexpr ::Zenject::ZenjectSettings_SignalSettings*& Zenject::ZenjectSettings::__cordl_internal_get__signalSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signalSettings;
}
constexpr ::Zenject::ZenjectSettings_SignalSettings* const& Zenject::ZenjectSettings::__cordl_internal_get__signalSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signalSettings;
}
constexpr void Zenject::ZenjectSettings::__cordl_internal_set__signalSettings(::Zenject::ZenjectSettings_SignalSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____signalSettings = value;
}
inline void Zenject::ZenjectSettings::setStaticF_Default(::Zenject::ZenjectSettings* value) {
  ::cordl_internals::setStaticField<::Zenject::ZenjectSettings*, "Default", ::Zenject::ZenjectSettings*>(std::forward<::Zenject::ZenjectSettings*>(value));
}
inline ::Zenject::ZenjectSettings* Zenject::ZenjectSettings::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::Zenject::ZenjectSettings*, "Default", ::Zenject::ZenjectSettings*>();
}
inline void Zenject::ZenjectSettings::NoDomainReloadInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSettings*>(), { "NoDomainReloadInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Zenject::ZenjectSettings::_ctor(::Zenject::ValidationErrorResponses validationErrorResponse, ::Zenject::RootResolveMethods validationRootResolveMethod,
                                            bool displayWarningWhenResolvingDuringInstall, bool ensureDeterministicDestructionOrderOnApplicationQuit,
                                            ::Zenject::ZenjectSettings_SignalSettings* signalSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSettings*>(), { ".ctor",
                                                                            {},
                                                                            { ::i2c::type_of<::Zenject::ValidationErrorResponses>(), ::i2c::type_of<::Zenject::RootResolveMethods>(),
                                                                              ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Zenject::ZenjectSettings_SignalSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, validationErrorResponse, validationRootResolveMethod, displayWarningWhenResolvingDuringInstall,
                                                   ensureDeterministicDestructionOrderOnApplicationQuit, signalSettings);
}
inline void Zenject::ZenjectSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::ZenjectSettings_SignalSettings* Zenject::ZenjectSettings::get_Signals() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSettings*>(), { "get_Signals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ZenjectSettings_SignalSettings*>(this, ___internal_method);
}
inline ::Zenject::ValidationErrorResponses Zenject::ZenjectSettings::get_ValidationErrorResponse() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSettings*>(), { "get_ValidationErrorResponse", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ValidationErrorResponses>(this, ___internal_method);
}
inline ::Zenject::RootResolveMethods Zenject::ZenjectSettings::get_ValidationRootResolveMethod() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSettings*>(), { "get_ValidationRootResolveMethod", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::RootResolveMethods>(this, ___internal_method);
}
inline bool Zenject::ZenjectSettings::get_DisplayWarningWhenResolvingDuringInstall() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSettings*>(), { "get_DisplayWarningWhenResolvingDuringInstall", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Zenject::ZenjectSettings::get_EnsureDeterministicDestructionOrderOnApplicationQuit() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectSettings*>(), { "get_EnsureDeterministicDestructionOrderOnApplicationQuit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Zenject::ZenjectSettings* Zenject::ZenjectSettings::New_ctor(::Zenject::ValidationErrorResponses validationErrorResponse, ::Zenject::RootResolveMethods validationRootResolveMethod,
                                                                      bool displayWarningWhenResolvingDuringInstall, bool ensureDeterministicDestructionOrderOnApplicationQuit,
                                                                      ::Zenject::ZenjectSettings_SignalSettings* signalSettings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ZenjectSettings*>(validationErrorResponse, validationRootResolveMethod, displayWarningWhenResolvingDuringInstall,
                                                                                       ensureDeterministicDestructionOrderOnApplicationQuit, signalSettings));
}
inline ::Zenject::ZenjectSettings* Zenject::ZenjectSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ZenjectSettings*>());
}
// Ctor Parameters []
constexpr ::Zenject::ZenjectSettings::ZenjectSettings() {}
