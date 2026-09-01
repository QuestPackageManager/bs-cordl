#pragma once
// IWYU pragma private; include "Unity\Burst\LowLevel\BurstCompilerService.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/LowLevel/zzzz__BurstCompilerService_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Burst/LowLevel/zzzz__BurstCompilerService_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Burst::LowLevel::BurstCompilerService_BurstLogType::BurstCompilerService_BurstLogType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Burst::LowLevel::BurstCompilerService_BurstLogType::BurstCompilerService_BurstLogType() {}
constexpr ::Unity::Burst::LowLevel::BurstCompilerService_BurstLogType Unity::Burst::LowLevel::BurstCompilerService_BurstLogType::Info{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Burst::LowLevel::BurstCompilerService_BurstLogType Unity::Burst::LowLevel::BurstCompilerService_BurstLogType::Warning{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Burst::LowLevel::BurstCompilerService_BurstLogType Unity::Burst::LowLevel::BurstCompilerService_BurstLogType::Error{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::Unity::Burst::LowLevel::BurstCompilerService.GetDisassembly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Reflection::MethodInfo*, ::StringW)>(&::Unity::Burst::LowLevel::BurstCompilerService::GetDisassembly)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6a605f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::LowLevel::BurstCompilerService*>(),
                                                             { "GetDisassembly", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::LowLevel::BurstCompilerService.CompileAsyncDelegateMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Object*, ::StringW)>(&::Unity::Burst::LowLevel::BurstCompilerService::CompileAsyncDelegateMethod)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6a607fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::LowLevel::BurstCompilerService*>(),
                                                             { "CompileAsyncDelegateMethod", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::LowLevel::BurstCompilerService.GetAsyncCompiledAsyncDelegateMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(int32_t)>(&::Unity::Burst::LowLevel::BurstCompilerService::GetAsyncCompiledAsyncDelegateMethod)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a6097c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::LowLevel::BurstCompilerService*>(), { "GetAsyncCompiledAsyncDelegateMethod", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::LowLevel::BurstCompilerService.GetOrCreateSharedMemory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(::by_ref<::UnityEngine::Hash128>, uint32_t, uint32_t)>(&::Unity::Burst::LowLevel::BurstCompilerService::GetOrCreateSharedMemory)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a5fd9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::LowLevel::BurstCompilerService*>(),
                                                { "GetOrCreateSharedMemory", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Hash128>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::LowLevel::BurstCompilerService.SetCurrentExecutionMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t)>(&::Unity::Burst::LowLevel::BurstCompilerService::SetCurrentExecutionMode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a609b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::LowLevel::BurstCompilerService*>(), { "SetCurrentExecutionMode", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::LowLevel::BurstCompilerService.GetCurrentExecutionMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::Unity::Burst::LowLevel::BurstCompilerService::GetCurrentExecutionMode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a609f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::LowLevel::BurstCompilerService*>(), { "GetCurrentExecutionMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::LowLevel::BurstCompilerService.Log
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, ::Unity::Burst::LowLevel::BurstCompilerService_BurstLogType, uint8_t*, uint8_t*, int32_t)>(
    &::Unity::Burst::LowLevel::BurstCompilerService::Log)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6a60a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::LowLevel::BurstCompilerService*>(),
                                                                                           { "Log",
                                                                                             {},
                                                                                             { ::i2c::type_of<void*>(), ::i2c::type_of<::Unity::Burst::LowLevel::BurstCompilerService_BurstLogType>(),
                                                                                               ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::LowLevel::BurstCompilerService.RuntimeLog
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, ::Unity::Burst::LowLevel::BurstCompilerService_BurstLogType, uint8_t*, uint8_t*, int32_t)>(
    &::Unity::Burst::LowLevel::BurstCompilerService::RuntimeLog)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6a60a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::LowLevel::BurstCompilerService*>(),
                                                                                           { "RuntimeLog",
                                                                                             {},
                                                                                             { ::i2c::type_of<void*>(), ::i2c::type_of<::Unity::Burst::LowLevel::BurstCompilerService_BurstLogType>(),
                                                                                               ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::LowLevel::BurstCompilerService.LoadBurstLibrary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Unity::Burst::LowLevel::BurstCompilerService::LoadBurstLibrary)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6a60af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::LowLevel::BurstCompilerService*>(), { "LoadBurstLibrary", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::LowLevel::BurstCompilerService.GetDisassembly_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Reflection::MethodInfo*, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>,
                                                                ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::Unity::Burst::LowLevel::BurstCompilerService::GetDisassembly_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a607a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::LowLevel::BurstCompilerService*>(),
                                                             { "GetDisassembly_Injected",
                                                               {},
                                                               { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::LowLevel::BurstCompilerService.CompileAsyncDelegateMethod_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Object*, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::Unity::Burst::LowLevel::BurstCompilerService::CompileAsyncDelegateMethod_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a60938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Burst::LowLevel::BurstCompilerService*>(),
                            { "CompileAsyncDelegateMethod_Injected", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::LowLevel::BurstCompilerService.LoadBurstLibrary_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::Unity::Burst::LowLevel::BurstCompilerService::LoadBurstLibrary_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a60c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::LowLevel::BurstCompilerService*>(),
                                                             { "LoadBurstLibrary_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
inline ::StringW Unity::Burst::LowLevel::BurstCompilerService::GetDisassembly(::System::Reflection::MethodInfo* m, ::StringW compilerOptions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::LowLevel::BurstCompilerService*>(),
                                                           { "GetDisassembly", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, m, compilerOptions);
}
inline int32_t Unity::Burst::LowLevel::BurstCompilerService::CompileAsyncDelegateMethod(::System::Object* delegateMethod, ::StringW compilerOptions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::LowLevel::BurstCompilerService*>(),
                                                                                         { "CompileAsyncDelegateMethod", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, delegateMethod, compilerOptions);
}
inline void* Unity::Burst::LowLevel::BurstCompilerService::GetAsyncCompiledAsyncDelegateMethod(int32_t userID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::LowLevel::BurstCompilerService*>(), { "GetAsyncCompiledAsyncDelegateMethod", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, userID);
}
inline void* Unity::Burst::LowLevel::BurstCompilerService::GetOrCreateSharedMemory(::by_ref<::UnityEngine::Hash128> key, uint32_t size_of, uint32_t alignment) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::LowLevel::BurstCompilerService*>(),
                                              { "GetOrCreateSharedMemory", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Hash128>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, key, size_of, alignment);
}
inline void Unity::Burst::LowLevel::BurstCompilerService::SetCurrentExecutionMode(uint32_t environment) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::LowLevel::BurstCompilerService*>(), { "SetCurrentExecutionMode", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, environment);
}
inline uint32_t Unity::Burst::LowLevel::BurstCompilerService::GetCurrentExecutionMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::LowLevel::BurstCompilerService*>(), { "GetCurrentExecutionMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline void Unity::Burst::LowLevel::BurstCompilerService::Log(void* userData, ::Unity::Burst::LowLevel::BurstCompilerService_BurstLogType logType, uint8_t* message, uint8_t* filename,
                                                              int32_t lineNumber) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::LowLevel::BurstCompilerService*>(),
                                                                                         { "Log",
                                                                                           {},
                                                                                           { ::i2c::type_of<void*>(), ::i2c::type_of<::Unity::Burst::LowLevel::BurstCompilerService_BurstLogType>(),
                                                                                             ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, userData, logType, message, filename, lineNumber);
}
inline void Unity::Burst::LowLevel::BurstCompilerService::RuntimeLog(void* userData, ::Unity::Burst::LowLevel::BurstCompilerService_BurstLogType logType, uint8_t* message, uint8_t* filename,
                                                                     int32_t lineNumber) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::LowLevel::BurstCompilerService*>(),
                                                                                         { "RuntimeLog",
                                                                                           {},
                                                                                           { ::i2c::type_of<void*>(), ::i2c::type_of<::Unity::Burst::LowLevel::BurstCompilerService_BurstLogType>(),
                                                                                             ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, userData, logType, message, filename, lineNumber);
}
inline bool Unity::Burst::LowLevel::BurstCompilerService::LoadBurstLibrary(::StringW fullPathToLibBurstGenerated) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::LowLevel::BurstCompilerService*>(), { "LoadBurstLibrary", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, fullPathToLibBurstGenerated);
}
inline void Unity::Burst::LowLevel::BurstCompilerService::GetDisassembly_Injected(::System::Reflection::MethodInfo* m, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> compilerOptions,
                                                                                  ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::LowLevel::BurstCompilerService*>(),
                                                           { "GetDisassembly_Injected",
                                                             {},
                                                             { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, m, compilerOptions, ret);
}
inline int32_t Unity::Burst::LowLevel::BurstCompilerService::CompileAsyncDelegateMethod_Injected(::System::Object* delegateMethod,
                                                                                                 ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> compilerOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::LowLevel::BurstCompilerService*>(),
                          { "CompileAsyncDelegateMethod_Injected", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, delegateMethod, compilerOptions);
}
inline bool Unity::Burst::LowLevel::BurstCompilerService::LoadBurstLibrary_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> fullPathToLibBurstGenerated) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::LowLevel::BurstCompilerService*>(),
                                                           { "LoadBurstLibrary_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, fullPathToLibBurstGenerated);
}
// Ctor Parameters []
constexpr ::Unity::Burst::LowLevel::BurstCompilerService::BurstCompilerService() {}
