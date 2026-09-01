#pragma once
// IWYU pragma private; include "UnityEngine\Debug.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Debug_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ILogger_def.hpp"
#include "UnityEngine/zzzz__LogOption_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Debug.get_unityLogger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ILogger* (*)()>(&::UnityEngine::Debug::get_unityLogger)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a7ac74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "get_unityLogger", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.DrawLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color)>(&::UnityEngine::Debug::DrawLine)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6a7acd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(),
                                                { "DrawLine", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.DrawLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, float_t, bool)>(&::UnityEngine::Debug::DrawLine)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6a7adb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "DrawLine",
                                                                                            {},
                                                                                            { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                              ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.Break
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Debug::Break)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a7aed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "Break", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.ExtractStackTraceNoAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t*, int32_t, ::StringW)>(&::UnityEngine::Debug::ExtractStackTraceNoAlloc)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6a7af00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "ExtractStackTraceNoAlloc", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.Log
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::UnityEngine::Debug::Log)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6a7b0c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "Log", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.Log
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::UnityEngine::Object*)>(&::UnityEngine::Debug::Log)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6a7b1e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "Log", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.LogFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::Debug::LogFormat)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6a7b30c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "LogFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.LogFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::LogType, ::UnityEngine::LogOption, ::UnityEngine::Object*, ::StringW, ::ArrayW<::System::Object*>)>(
    &::UnityEngine::Debug::LogFormat)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x6a7b434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "LogFormat",
                                                                        {},
                                                                        { ::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::UnityEngine::LogOption>(),
                                                                          ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.LogError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::UnityEngine::Debug::LogError)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6a7b770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "LogError", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.LogError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::UnityEngine::Object*)>(&::UnityEngine::Debug::LogError)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6a7b890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "LogError", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.LogErrorFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::Debug::LogErrorFormat)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6a7b9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "LogErrorFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.LogErrorFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*, ::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::Debug::LogErrorFormat)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6a7bae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(),
                                                { "LogErrorFormat", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.LogException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Exception*)>(&::UnityEngine::Debug::LogException)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6a68ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "LogException", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.LogException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Exception*, ::UnityEngine::Object*)>(&::UnityEngine::Debug::LogException)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6a60f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "LogException", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.LogWarning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::UnityEngine::Debug::LogWarning)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6a6c960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "LogWarning", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.LogWarning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::UnityEngine::Object*)>(&::UnityEngine::Debug::LogWarning)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6a7bc14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "LogWarning", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.LogWarningFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::Debug::LogWarningFormat)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6a7bd3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "LogWarningFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.LogWarningFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*, ::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::Debug::LogWarningFormat)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6a7be64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(),
                                                { "LogWarningFormat", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug._cordl_Assert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Debug::_cordl_Assert)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6a7bf98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "Assert", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug._cordl_Assert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::StringW)>(&::UnityEngine::Debug::_cordl_Assert)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6a7c0dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "Assert", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.LogAssertion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::UnityEngine::Debug::LogAssertion)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6a7c214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "LogAssertion", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.LogAssertionFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::System::Object*>)>(&::UnityEngine::Debug::LogAssertionFormat)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6a7c334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "LogAssertionFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.get_isDebugBuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Debug::get_isDebugBuild)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a7c45c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "get_isDebugBuild", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.CallOverridenDebugHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Exception*, ::UnityEngine::Object*)>(&::UnityEngine::Debug::CallOverridenDebugHandler)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x6a7c484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "CallOverridenDebugHandler", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.IsLoggingEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Debug::IsLoggingEnabled)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x6a7c7e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "IsLoggingEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.DrawLine_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Color>, float_t, bool)>(
    &::UnityEngine::Debug::DrawLine_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6a7ae6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "DrawLine_Injected",
                                                                                     {},
                                                                                     { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                                       ::i2c::type_of<::by_ref<::UnityEngine::Color>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Debug.ExtractStackTraceNoAlloc_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t*, int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Debug::ExtractStackTraceNoAlloc_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a7b070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Debug*>(),
            { "ExtractStackTraceNoAlloc_Injected", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Debug::setStaticF_s_DefaultLogger(::UnityEngine::ILogger* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ILogger*, "s_DefaultLogger", ::UnityEngine::Debug*>(std::forward<::UnityEngine::ILogger*>(value));
}
inline ::UnityEngine::ILogger* UnityEngine::Debug::getStaticF_s_DefaultLogger() {
  return ::cordl_internals::getStaticField<::UnityEngine::ILogger*, "s_DefaultLogger", ::UnityEngine::Debug*>();
}
inline void UnityEngine::Debug::setStaticF_s_Logger(::UnityEngine::ILogger* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ILogger*, "s_Logger", ::UnityEngine::Debug*>(std::forward<::UnityEngine::ILogger*>(value));
}
inline ::UnityEngine::ILogger* UnityEngine::Debug::getStaticF_s_Logger() {
  return ::cordl_internals::getStaticField<::UnityEngine::ILogger*, "s_Logger", ::UnityEngine::Debug*>();
}
inline ::UnityEngine::ILogger* UnityEngine::Debug::get_unityLogger() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "get_unityLogger", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ILogger*>(nullptr, ___internal_method);
}
inline void UnityEngine::Debug::DrawLine(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(),
                                              { "DrawLine", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, start, end, color);
}
inline void UnityEngine::Debug::DrawLine(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::UnityEngine::Color color, float_t duration, bool depthTest) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "DrawLine",
                                                                                          {},
                                                                                          { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                            ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, start, end, color, duration, depthTest);
}
inline void UnityEngine::Debug::Break() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "Break", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Debug::ExtractStackTraceNoAlloc(uint8_t* buffer, int32_t bufferMax, ::StringW projectFolder) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "ExtractStackTraceNoAlloc", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, buffer, bufferMax, projectFolder);
}
inline void UnityEngine::Debug::Log(::System::Object* message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "Log", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void UnityEngine::Debug::Log(::System::Object* message, ::UnityEngine::Object* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "Log", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, context);
}
inline void UnityEngine::Debug::LogFormat(::StringW format, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "LogFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, format, args);
}
inline void UnityEngine::Debug::LogFormat(::UnityEngine::LogType logType, ::UnityEngine::LogOption logOptions, ::UnityEngine::Object* context, ::StringW format, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "LogFormat",
                                                                      {},
                                                                      { ::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::UnityEngine::LogOption>(), ::i2c::type_of<::UnityEngine::Object*>(),
                                                                        ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, logType, logOptions, context, format, args);
}
inline void UnityEngine::Debug::LogError(::System::Object* message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "LogError", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void UnityEngine::Debug::LogError(::System::Object* message, ::UnityEngine::Object* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "LogError", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, context);
}
inline void UnityEngine::Debug::LogErrorFormat(::StringW format, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "LogErrorFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, format, args);
}
inline void UnityEngine::Debug::LogErrorFormat(::UnityEngine::Object* context, ::StringW format, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(),
                                              { "LogErrorFormat", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context, format, args);
}
inline void UnityEngine::Debug::LogException(::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "LogException", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, exception);
}
inline void UnityEngine::Debug::LogException(::System::Exception* exception, ::UnityEngine::Object* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "LogException", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, exception, context);
}
inline void UnityEngine::Debug::LogWarning(::System::Object* message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "LogWarning", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void UnityEngine::Debug::LogWarning(::System::Object* message, ::UnityEngine::Object* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "LogWarning", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, context);
}
inline void UnityEngine::Debug::LogWarningFormat(::StringW format, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "LogWarningFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, format, args);
}
inline void UnityEngine::Debug::LogWarningFormat(::UnityEngine::Object* context, ::StringW format, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(),
                                              { "LogWarningFormat", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context, format, args);
}
inline void UnityEngine::Debug::_cordl_Assert(bool condition) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "Assert", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition);
}
inline void UnityEngine::Debug::_cordl_Assert(bool condition, ::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "Assert", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition, message);
}
inline void UnityEngine::Debug::LogAssertion(::System::Object* message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "LogAssertion", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void UnityEngine::Debug::LogAssertionFormat(::StringW format, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "LogAssertionFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, format, args);
}
inline bool UnityEngine::Debug::get_isDebugBuild() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "get_isDebugBuild", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Debug::CallOverridenDebugHandler(::System::Exception* exception, ::UnityEngine::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "CallOverridenDebugHandler", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, exception, obj);
}
inline bool UnityEngine::Debug::IsLoggingEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "IsLoggingEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Debug::DrawLine_Injected(::by_ref<::UnityEngine::Vector3> start, ::by_ref<::UnityEngine::Vector3> end, ::by_ref<::UnityEngine::Color> color, float_t duration,
                                                  bool depthTest) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Debug*>(), { "DrawLine_Injected",
                                                                                          {},
                                                                                          { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                                            ::i2c::type_of<::by_ref<::UnityEngine::Color>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, start, end, color, duration, depthTest);
}
inline int32_t UnityEngine::Debug::ExtractStackTraceNoAlloc_Injected(uint8_t* buffer, int32_t bufferMax, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> projectFolder) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Debug*>(),
          { "ExtractStackTraceNoAlloc_Injected", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, buffer, bufferMax, projectFolder);
}
// Ctor Parameters []
constexpr ::UnityEngine::Debug::Debug() {}
