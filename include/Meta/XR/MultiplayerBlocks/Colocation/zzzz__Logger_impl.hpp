#pragma once
// IWYU pragma private; include "Meta\XR\MultiplayerBlocks\Colocation\Logger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__Logger_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__LogLevel_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Logger.Log
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::Meta::XR::MultiplayerBlocks::Colocation::LogLevel)>(&::Meta::XR::MultiplayerBlocks::Colocation::Logger::Log)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5a71fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Logger*>(),
                                                             { "Log", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::LogLevel>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Logger.LogVerbose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Meta::XR::MultiplayerBlocks::Colocation::Logger::LogVerbose)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a82068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Logger*>(), { "LogVerbose", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Logger.LogInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Meta::XR::MultiplayerBlocks::Colocation::Logger::LogInfo)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a82114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Logger*>(), { "LogInfo", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Logger.LogWarning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Meta::XR::MultiplayerBlocks::Colocation::Logger::LogWarning)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a821c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Logger*>(), { "LogWarning", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Logger.LogError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Meta::XR::MultiplayerBlocks::Colocation::Logger::LogError)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a8226c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Logger*>(), { "LogError", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Logger.LogSharedSpatialAnchorsError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Meta::XR::MultiplayerBlocks::Colocation::Logger::LogSharedSpatialAnchorsError)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a82318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Logger*>(), { "LogSharedSpatialAnchorsError", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Logger.GetPrefixMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Meta::XR::MultiplayerBlocks::Colocation::LogLevel)>(&::Meta::XR::MultiplayerBlocks::Colocation::Logger::GetPrefixMessage)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5a823c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Logger*>(),
                                                                                           { "GetPrefixMessage", {}, { ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::LogLevel>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Logger.SetLogLevelVisibility
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::XR::MultiplayerBlocks::Colocation::LogLevel, bool)>(
    &::Meta::XR::MultiplayerBlocks::Colocation::Logger::SetLogLevelVisibility)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5a7128c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Logger*>(),
                                                             { "SetLogLevelVisibility", {}, { ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::LogLevel>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::Logger.SetAllLogsVisibility
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Meta::XR::MultiplayerBlocks::Colocation::Logger::SetAllLogsVisibility)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5a7122c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Logger*>(), { "SetAllLogsVisibility", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Colocation::Logger::setStaticF__isVerboseLogVisible(bool value) {
  ::cordl_internals::setStaticField<bool, "_isVerboseLogVisible", ::Meta::XR::MultiplayerBlocks::Colocation::Logger*>(std::forward<bool>(value));
}
inline bool Meta::XR::MultiplayerBlocks::Colocation::Logger::getStaticF__isVerboseLogVisible() {
  return ::cordl_internals::getStaticField<bool, "_isVerboseLogVisible", ::Meta::XR::MultiplayerBlocks::Colocation::Logger*>();
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Logger::setStaticF__isInfoLogVisible(bool value) {
  ::cordl_internals::setStaticField<bool, "_isInfoLogVisible", ::Meta::XR::MultiplayerBlocks::Colocation::Logger*>(std::forward<bool>(value));
}
inline bool Meta::XR::MultiplayerBlocks::Colocation::Logger::getStaticF__isInfoLogVisible() {
  return ::cordl_internals::getStaticField<bool, "_isInfoLogVisible", ::Meta::XR::MultiplayerBlocks::Colocation::Logger*>();
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Logger::setStaticF__isWarningLogVisible(bool value) {
  ::cordl_internals::setStaticField<bool, "_isWarningLogVisible", ::Meta::XR::MultiplayerBlocks::Colocation::Logger*>(std::forward<bool>(value));
}
inline bool Meta::XR::MultiplayerBlocks::Colocation::Logger::getStaticF__isWarningLogVisible() {
  return ::cordl_internals::getStaticField<bool, "_isWarningLogVisible", ::Meta::XR::MultiplayerBlocks::Colocation::Logger*>();
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Logger::setStaticF__isErrorLogVisible(bool value) {
  ::cordl_internals::setStaticField<bool, "_isErrorLogVisible", ::Meta::XR::MultiplayerBlocks::Colocation::Logger*>(std::forward<bool>(value));
}
inline bool Meta::XR::MultiplayerBlocks::Colocation::Logger::getStaticF__isErrorLogVisible() {
  return ::cordl_internals::getStaticField<bool, "_isErrorLogVisible", ::Meta::XR::MultiplayerBlocks::Colocation::Logger*>();
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Logger::setStaticF__isSharedSpatialAnchorsErrorVisible(bool value) {
  ::cordl_internals::setStaticField<bool, "_isSharedSpatialAnchorsErrorVisible", ::Meta::XR::MultiplayerBlocks::Colocation::Logger*>(std::forward<bool>(value));
}
inline bool Meta::XR::MultiplayerBlocks::Colocation::Logger::getStaticF__isSharedSpatialAnchorsErrorVisible() {
  return ::cordl_internals::getStaticField<bool, "_isSharedSpatialAnchorsErrorVisible", ::Meta::XR::MultiplayerBlocks::Colocation::Logger*>();
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Logger::Log(::StringW message, ::Meta::XR::MultiplayerBlocks::Colocation::LogLevel logLevel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Logger*>(),
                                                           { "Log", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::LogLevel>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, logLevel);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Logger::LogVerbose(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Logger*>(), { "LogVerbose", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Logger::LogInfo(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Logger*>(), { "LogInfo", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Logger::LogWarning(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Logger*>(), { "LogWarning", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Logger::LogError(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Logger*>(), { "LogError", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Logger::LogSharedSpatialAnchorsError(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Logger*>(), { "LogSharedSpatialAnchorsError", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline ::StringW Meta::XR::MultiplayerBlocks::Colocation::Logger::GetPrefixMessage(::Meta::XR::MultiplayerBlocks::Colocation::LogLevel logLevel) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Logger*>(),
                                                                                         { "GetPrefixMessage", {}, { ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::LogLevel>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, logLevel);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Logger::SetLogLevelVisibility(::Meta::XR::MultiplayerBlocks::Colocation::LogLevel logLevel, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Logger*>(),
                                                           { "SetLogLevelVisibility", {}, { ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::LogLevel>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, logLevel, value);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::Logger::SetAllLogsVisibility(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Colocation::Logger*>(), { "SetAllLogsVisibility", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::Logger::Logger() {}
