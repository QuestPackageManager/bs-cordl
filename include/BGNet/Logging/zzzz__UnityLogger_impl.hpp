#pragma once
// IWYU pragma private; include "BGNet/Logging/UnityLogger.hpp"
#include "BGNet/Logging/zzzz__Debug_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGNet/Logging/zzzz__UnityLogger_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::BGNet::Logging::UnityLogger.LogInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Logging::UnityLogger::*)(::StringW)>(&::BGNet::Logging::UnityLogger::LogInfo)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22f12e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::UnityLogger*>::get(), "LogInfo", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::UnityLogger.LogError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Logging::UnityLogger::*)(::StringW)>(&::BGNet::Logging::UnityLogger::LogError)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22f12ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::UnityLogger*>::get(), "LogError", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::UnityLogger.LogException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Logging::UnityLogger::*)(::System::Exception*, ::StringW)>(
    &::BGNet::Logging::UnityLogger::LogException)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x22f1344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::UnityLogger*>::get(), "LogException", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::UnityLogger.LogWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Logging::UnityLogger::*)(::StringW)>(&::BGNet::Logging::UnityLogger::LogWarning)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22f13cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::UnityLogger*>::get(), "LogWarning", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::UnityLogger._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Logging::UnityLogger::*)()>(&::BGNet::Logging::UnityLogger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22f0ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::UnityLogger*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void BGNet::Logging::UnityLogger::LogInfo(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::UnityLogger*>::get(), "LogInfo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void BGNet::Logging::UnityLogger::LogError(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::UnityLogger*>::get(), "LogError", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void BGNet::Logging::UnityLogger::LogException(::System::Exception* exception, ::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::UnityLogger*>::get(), "LogException", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception, message);
}
inline void BGNet::Logging::UnityLogger::LogWarning(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::UnityLogger*>::get(), "LogWarning", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void BGNet::Logging::UnityLogger::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::UnityLogger*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BGNet::Logging::UnityLogger* BGNet::Logging::UnityLogger::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGNet::Logging::UnityLogger*>());
}
/// @brief Convert operator to "::BGNet::Logging::Debug_ILogger"
constexpr BGNet::Logging::UnityLogger::operator ::BGNet::Logging::Debug_ILogger*() noexcept {
  return static_cast<::BGNet::Logging::Debug_ILogger*>(static_cast<void*>(this));
}
/// @brief Convert to "::BGNet::Logging::Debug_ILogger"
constexpr ::BGNet::Logging::Debug_ILogger* BGNet::Logging::UnityLogger::i___BGNet__Logging__Debug_ILogger() noexcept {
  return static_cast<::BGNet::Logging::Debug_ILogger*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BGNet::Logging::UnityLogger::UnityLogger() {}
