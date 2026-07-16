#pragma once
// IWYU pragma private; include "UnityEngine/DebugLogHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__DebugLogHandler_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__ILogHandler_def.hpp"
#include "UnityEngine/zzzz__LogOption_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::DebugLogHandler.Internal_Log
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::LogType, ::UnityEngine::LogOption, ::StringW, ::UnityEngine::Object*)>(&::UnityEngine::DebugLogHandler::Internal_Log)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6a750d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::DebugLogHandler*>(),
            { "Internal_Log", {}, { ::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::UnityEngine::LogOption>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::DebugLogHandler.Internal_LogException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Exception*, ::UnityEngine::Object*)>(&::UnityEngine::DebugLogHandler::Internal_LogException)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a752ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::DebugLogHandler*>(),
                                                             { "Internal_LogException", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::DebugLogHandler.LogFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::DebugLogHandler::*)(::UnityEngine::LogType, ::UnityEngine::Object*, ::StringW, ::ArrayW<::System::Object*>)>(
    &::UnityEngine::DebugLogHandler::LogFormat)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a75380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::DebugLogHandler*>(),
            { "LogFormat", {}, { ::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::DebugLogHandler.LogFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::DebugLogHandler::*)(::UnityEngine::LogType, ::UnityEngine::LogOption, ::UnityEngine::Object*, ::StringW,
                                                                                                ::ArrayW<::System::Object*>)>(&::UnityEngine::DebugLogHandler::LogFormat)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6a753bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::DebugLogHandler*>(),
                                                             { "LogFormat",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::UnityEngine::LogOption>(), ::i2c::type_of<::UnityEngine::Object*>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::DebugLogHandler.LogException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::DebugLogHandler::*)(::System::Exception*, ::UnityEngine::Object*)>(&::UnityEngine::DebugLogHandler::LogException)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a753fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::DebugLogHandler*>(), { "LogException", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::DebugLogHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::DebugLogHandler::*)()>(&::UnityEngine::DebugLogHandler::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a75458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::DebugLogHandler*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::DebugLogHandler.Internal_Log_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::LogType, ::UnityEngine::LogOption, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::System::IntPtr)>(
    &::UnityEngine::DebugLogHandler::Internal_Log_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a75250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::DebugLogHandler*>(), { "Internal_Log_Injected",
                                                                                  {},
                                                                                  { ::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::UnityEngine::LogOption>(),
                                                                                    ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::DebugLogHandler.Internal_LogException_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Exception*, ::System::IntPtr)>(&::UnityEngine::DebugLogHandler::Internal_LogException_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a7533c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::DebugLogHandler*>(),
                                                             { "Internal_LogException_Injected", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::DebugLogHandler::Internal_Log(::UnityEngine::LogType level, ::UnityEngine::LogOption options, ::StringW msg, ::UnityEngine::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::DebugLogHandler*>(),
          { "Internal_Log", {}, { ::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::UnityEngine::LogOption>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, level, options, msg, obj);
}
inline void UnityEngine::DebugLogHandler::Internal_LogException(::System::Exception* ex, ::UnityEngine::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::DebugLogHandler*>(), { "Internal_LogException", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ex, obj);
}
inline void UnityEngine::DebugLogHandler::LogFormat(::UnityEngine::LogType logType, ::UnityEngine::Object* context, ::StringW format, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::DebugLogHandler*>(),
          { "LogFormat", {}, { ::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logType, context, format, args);
}
inline void UnityEngine::DebugLogHandler::LogFormat(::UnityEngine::LogType logType, ::UnityEngine::LogOption logOptions, ::UnityEngine::Object* context, ::StringW format,
                                                    ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::DebugLogHandler*>(),
                                                           { "LogFormat",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::UnityEngine::LogOption>(), ::i2c::type_of<::UnityEngine::Object*>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logType, logOptions, context, format, args);
}
inline void UnityEngine::DebugLogHandler::LogException(::System::Exception* exception, ::UnityEngine::Object* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::DebugLogHandler*>(), { "LogException", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception, context);
}
inline void UnityEngine::DebugLogHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::DebugLogHandler*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::DebugLogHandler::Internal_Log_Injected(::UnityEngine::LogType level, ::UnityEngine::LogOption options, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> msg,
                                                                ::System::IntPtr obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::DebugLogHandler*>(), { "Internal_Log_Injected",
                                                                                {},
                                                                                { ::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::UnityEngine::LogOption>(),
                                                                                  ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, level, options, msg, obj);
}
inline void UnityEngine::DebugLogHandler::Internal_LogException_Injected(::System::Exception* ex, ::System::IntPtr obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::DebugLogHandler*>(),
                                                           { "Internal_LogException_Injected", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ex, obj);
}
inline ::UnityEngine::DebugLogHandler* UnityEngine::DebugLogHandler::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::DebugLogHandler*>());
}
/// @brief Convert operator to "::UnityEngine::ILogHandler"
constexpr UnityEngine::DebugLogHandler::operator ::UnityEngine::ILogHandler*() noexcept {
  return static_cast<::UnityEngine::ILogHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ILogHandler"
constexpr ::UnityEngine::ILogHandler* UnityEngine::DebugLogHandler::i___UnityEngine__ILogHandler() noexcept {
  return static_cast<::UnityEngine::ILogHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::DebugLogHandler::DebugLogHandler() {}
