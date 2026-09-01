#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\Log.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__LogLevel_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__LogOutput_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__Log_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__LogLevel_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__LogOutput_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Log.PushLogLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::LogLevel)>(&::UnityEngine::ProBuilder::Log::PushLogLevel)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x66c381c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "PushLogLevel", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::LogLevel>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Log.PopLogLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::ProBuilder::Log::PopLogLevel)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x66c38b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "PopLogLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Log.SetLogLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::LogLevel)>(&::UnityEngine::ProBuilder::Log::SetLogLevel)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c3944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "SetLogLevel", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::LogLevel>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Log.SetOutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::LogOutput)>(&::UnityEngine::ProBuilder::Log::SetOutput)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c39a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "SetOutput", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::LogOutput>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Log.SetLogFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::ProBuilder::Log::SetLogFile)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c3a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "SetLogFile", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Log.Debug
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::ProBuilder::Log::Debug)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x66c3a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "Debug", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Log.Debug
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::ProBuilder::Log::Debug)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66c3b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "Debug", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Log.Info
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::ProBuilder::Log::Info)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x66c3b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "Info", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Log.Info
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::ProBuilder::Log::Info)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x66c3c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "Info", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Log.Warning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::ProBuilder::Log::Warning)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x66c3c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "Warning", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Log.Warning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::ProBuilder::Log::Warning)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x66c3d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "Warning", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Log.Error
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::ProBuilder::Log::Error)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x66c3d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "Error", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Log.Error
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::ProBuilder::Log::Error)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x66b7274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "Error", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Log.DoPrint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::LogType)>(&::UnityEngine::ProBuilder::Log::DoPrint)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x66c3ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "DoPrint", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Log.PrintToFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::UnityEngine::ProBuilder::Log::PrintToFile)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x66c3f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "PrintToFile", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Log.ClearLogFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::ProBuilder::Log::ClearLogFile)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x66c4240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "ClearLogFile", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Log.PrintToConsole
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::LogType)>(&::UnityEngine::ProBuilder::Log::PrintToConsole)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x66c3e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "PrintToConsole", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::Log::setStaticF_s_logStack(::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::LogLevel>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::LogLevel>*, "s_logStack", ::UnityEngine::ProBuilder::Log*>(
      std::forward<::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::LogLevel>*>(value));
}
inline ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::LogLevel>* UnityEngine::ProBuilder::Log::getStaticF_s_logStack() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::LogLevel>*, "s_logStack", ::UnityEngine::ProBuilder::Log*>();
}
inline void UnityEngine::ProBuilder::Log::setStaticF_s_LogLevel(::UnityEngine::ProBuilder::LogLevel value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::LogLevel, "s_LogLevel", ::UnityEngine::ProBuilder::Log*>(std::forward<::UnityEngine::ProBuilder::LogLevel>(value));
}
inline ::UnityEngine::ProBuilder::LogLevel UnityEngine::ProBuilder::Log::getStaticF_s_LogLevel() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::LogLevel, "s_LogLevel", ::UnityEngine::ProBuilder::Log*>();
}
inline void UnityEngine::ProBuilder::Log::setStaticF_s_Output(::UnityEngine::ProBuilder::LogOutput value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::LogOutput, "s_Output", ::UnityEngine::ProBuilder::Log*>(std::forward<::UnityEngine::ProBuilder::LogOutput>(value));
}
inline ::UnityEngine::ProBuilder::LogOutput UnityEngine::ProBuilder::Log::getStaticF_s_Output() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::LogOutput, "s_Output", ::UnityEngine::ProBuilder::Log*>();
}
inline void UnityEngine::ProBuilder::Log::setStaticF_s_LogFilePath(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_LogFilePath", ::UnityEngine::ProBuilder::Log*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::ProBuilder::Log::getStaticF_s_LogFilePath() {
  return ::cordl_internals::getStaticField<::StringW, "s_LogFilePath", ::UnityEngine::ProBuilder::Log*>();
}
inline void UnityEngine::ProBuilder::Log::PushLogLevel(::UnityEngine::ProBuilder::LogLevel level) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "PushLogLevel", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::LogLevel>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, level);
}
inline void UnityEngine::ProBuilder::Log::PopLogLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "PopLogLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::ProBuilder::Log::SetLogLevel(::UnityEngine::ProBuilder::LogLevel level) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "SetLogLevel", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::LogLevel>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, level);
}
inline void UnityEngine::ProBuilder::Log::SetOutput(::UnityEngine::ProBuilder::LogOutput output) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "SetOutput", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::LogOutput>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, output);
}
inline void UnityEngine::ProBuilder::Log::SetLogFile(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "SetLogFile", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path);
}
template <typename T> inline void UnityEngine::ProBuilder::Log::Debug(T value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "Debug", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::Log::Debug(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "Debug", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void UnityEngine::ProBuilder::Log::Debug(::StringW format, ::ArrayW<::System::Object*> values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "Debug", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, format, values);
}
inline void UnityEngine::ProBuilder::Log::Info(::StringW format, ::ArrayW<::System::Object*> values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "Info", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, format, values);
}
inline void UnityEngine::ProBuilder::Log::Info(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "Info", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void UnityEngine::ProBuilder::Log::Warning(::StringW format, ::ArrayW<::System::Object*> values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "Warning", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, format, values);
}
inline void UnityEngine::ProBuilder::Log::Warning(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "Warning", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void UnityEngine::ProBuilder::Log::Error(::StringW format, ::ArrayW<::System::Object*> values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "Error", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, format, values);
}
inline void UnityEngine::ProBuilder::Log::Error(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "Error", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
template <typename T, typename K> inline void UnityEngine::ProBuilder::Log::Watch(T key, K value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "Watch", { ::i2c::class_of<T>(), ::i2c::class_of<K>() }, { ::i2c::type_of<T>(), ::i2c::type_of<K>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<K>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, key, value);
}
inline void UnityEngine::ProBuilder::Log::DoPrint(::StringW message, ::UnityEngine::LogType type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "DoPrint", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, type);
}
inline void UnityEngine::ProBuilder::Log::PrintToFile(::StringW message, ::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "PrintToFile", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, path);
}
inline void UnityEngine::ProBuilder::Log::ClearLogFile() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "ClearLogFile", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::ProBuilder::Log::PrintToConsole(::StringW message, ::UnityEngine::LogType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "PrintToConsole", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, type);
}
template <typename T> inline void UnityEngine::ProBuilder::Log::NotNull(T obj, ::StringW message) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Log*>(), { "NotNull", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>(), ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, message);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Log::Log() {}
