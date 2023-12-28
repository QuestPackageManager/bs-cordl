#pragma once
#include "UnityEngine/zzzz__ILogger_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ILogHandler_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::ILogger.get_logHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ILogHandler* (::UnityEngine::ILogger::*)()>(&::UnityEngine::ILogger::get_logHandler)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ILogger*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ILogger*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ILogger.get_logEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ILogger::*)()>(&::UnityEngine::ILogger::get_logEnabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ILogger*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ILogger*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ILogger.Log
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ILogger::*)(::UnityEngine::LogType, ::System::Object*)>(&::UnityEngine::ILogger::Log)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ILogger*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ILogger*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ILogger.Log
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ILogger::*)(::UnityEngine::LogType, ::System::Object*, ::UnityEngine::Object*)>(
    &::UnityEngine::ILogger::Log)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ILogger*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ILogger*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ILogger.LogError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ILogger::*)(::StringW, ::System::Object*)>(&::UnityEngine::ILogger::LogError)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ILogger*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ILogger*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ILogger.LogFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::ILogger::*)(::UnityEngine::LogType, ::StringW, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::UnityEngine::ILogger::LogFormat)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ILogger*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ILogger*>::get(), 5));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ILogHandler"
constexpr UnityEngine::ILogger::operator ::UnityEngine::ILogHandler*() noexcept {
  return static_cast<::UnityEngine::ILogHandler*>(static_cast<void*>(this));
}
inline ::UnityEngine::ILogHandler* UnityEngine::ILogger::get_logHandler() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ILogger*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ILogHandler*, false>(this, ___internal_method);
}
inline bool UnityEngine::ILogger::get_logEnabled() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ILogger*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::ILogger::Log(::UnityEngine::LogType logType, ::System::Object* message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ILogger*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, logType, message);
}
inline void UnityEngine::ILogger::Log(::UnityEngine::LogType logType, ::System::Object* message, ::UnityEngine::Object* context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ILogger*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, logType, message, context);
}
inline void UnityEngine::ILogger::LogError(::StringW tag, ::System::Object* message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ILogger*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tag, message);
}
inline void UnityEngine::ILogger::LogFormat(::UnityEngine::LogType logType, ::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ILogger*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, logType, format, args);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
