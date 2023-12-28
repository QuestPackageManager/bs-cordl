#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__DebugLogHandler_def.hpp"
#include "UnityEngine/zzzz__LogOption_def.hpp"
#include "UnityEngine/zzzz__ILogHandler_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::DebugLogHandler.Internal_Log
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::LogType, ::UnityEngine::LogOption, ::StringW, ::UnityEngine::Object*)>(
    &::UnityEngine::DebugLogHandler::Internal_Log)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2c9f2d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::DebugLogHandler*>::get(), "Internal_Log", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogOption>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::DebugLogHandler.Internal_LogException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Exception*, ::UnityEngine::Object*)>(&::UnityEngine::DebugLogHandler::Internal_LogException)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2c9f334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::DebugLogHandler*>::get(), "Internal_LogException", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::DebugLogHandler.LogFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::DebugLogHandler::*)(
    ::UnityEngine::LogType, ::UnityEngine::Object*, ::StringW, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::UnityEngine::DebugLogHandler::LogFormat)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2c9f378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::DebugLogHandler*>::get(), "LogFormat", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::DebugLogHandler.LogException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::DebugLogHandler::*)(::System::Exception*, ::UnityEngine::Object*)>(
    &::UnityEngine::DebugLogHandler::LogException)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2c9f3e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::DebugLogHandler*>::get(), "LogException", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::DebugLogHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::DebugLogHandler::*)()>(&::UnityEngine::DebugLogHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c9f474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::DebugLogHandler*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ILogHandler"
constexpr UnityEngine::DebugLogHandler::operator ::UnityEngine::ILogHandler*() noexcept {
  return static_cast<::UnityEngine::ILogHandler*>(static_cast<void*>(this));
}
inline void UnityEngine::DebugLogHandler::Internal_Log(::UnityEngine::LogType level, ::UnityEngine::LogOption options, ::StringW msg, ::UnityEngine::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::DebugLogHandler*>::get(), "Internal_Log", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogOption>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, level, options, msg, obj);
}
inline void UnityEngine::DebugLogHandler::Internal_LogException(::System::Exception* ex, ::UnityEngine::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::DebugLogHandler*>::get(), "Internal_LogException", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ex, obj);
}
inline void UnityEngine::DebugLogHandler::LogFormat(::UnityEngine::LogType logType, ::UnityEngine::Object* context, ::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::DebugLogHandler*>::get(), "LogFormat", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, logType, context, format, args);
}
inline void UnityEngine::DebugLogHandler::LogException(::System::Exception* exception, ::UnityEngine::Object* context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::DebugLogHandler*>::get(), "LogException", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception, context);
}
inline ::UnityEngine::DebugLogHandler* UnityEngine::DebugLogHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::DebugLogHandler*>());
}
inline void UnityEngine::DebugLogHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::DebugLogHandler*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::DebugLogHandler::DebugLogHandler() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
