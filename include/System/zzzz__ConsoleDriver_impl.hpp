#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ConsoleDriver_def.hpp"
#include "System/zzzz__ConsoleKeyInfo_def.hpp"
#include "System/zzzz__IConsoleDriver_def.hpp"
//  Writing Method size for method: ::System::ConsoleDriver.CreateNullConsoleDriver
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IConsoleDriver* (*)()>(&::System::ConsoleDriver::CreateNullConsoleDriver)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x261b688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleDriver*>::get(), "CreateNullConsoleDriver",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ConsoleDriver.CreateWindowsConsoleDriver
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IConsoleDriver* (*)()>(&::System::ConsoleDriver::CreateWindowsConsoleDriver)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x261b6d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleDriver*>::get(), "CreateWindowsConsoleDriver",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ConsoleDriver.CreateTermInfoDriver
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IConsoleDriver* (*)(::StringW)>(&::System::ConsoleDriver::CreateTermInfoDriver)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x261b730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleDriver*>::get(), "CreateTermInfoDriver", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ConsoleDriver.ReadKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ConsoleKeyInfo (*)(bool)>(&::System::ConsoleDriver::ReadKey)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x261b04c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleDriver*>::get(), "ReadKey", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ConsoleDriver.get_IsConsole
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::ConsoleDriver::get_IsConsole)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x261a84c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleDriver*>::get(), "get_IsConsole",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ConsoleDriver.Isatty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(void*)>(&::System::ConsoleDriver::Isatty)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x261badc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleDriver*>::get(), "Isatty", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ConsoleDriver.InternalKeyAvailable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::System::ConsoleDriver::InternalKeyAvailable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x261bae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleDriver*>::get(), "InternalKeyAvailable", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ConsoleDriver.TtySetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW, ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>, ByRef<::cordl_internals::Ptr<int32_t>>)>(
    &::System::ConsoleDriver::TtySetup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x261bae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleDriver*>::get(), "TtySetup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<int32_t>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ConsoleDriver.SetEcho
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool)>(&::System::ConsoleDriver::SetEcho)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x261bae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleDriver*>::get(), "SetEcho", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void System::ConsoleDriver::setStaticF_driver(::System::IConsoleDriver* value) {
  ::cordl_internals::setStaticField<::System::IConsoleDriver*, "driver", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleDriver*>::get>(
      std::forward<::System::IConsoleDriver*>(value));
}
inline ::System::IConsoleDriver* System::ConsoleDriver::getStaticF_driver() {
  return ::cordl_internals::getStaticField<::System::IConsoleDriver*, "driver", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleDriver*>::get>();
}
inline void System::ConsoleDriver::setStaticF_is_console(bool value) {
  ::cordl_internals::setStaticField<bool, "is_console", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleDriver*>::get>(std::forward<bool>(value));
}
inline bool System::ConsoleDriver::getStaticF_is_console() {
  return ::cordl_internals::getStaticField<bool, "is_console", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleDriver*>::get>();
}
inline void System::ConsoleDriver::setStaticF_called_isatty(bool value) {
  ::cordl_internals::setStaticField<bool, "called_isatty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleDriver*>::get>(std::forward<bool>(value));
}
inline bool System::ConsoleDriver::getStaticF_called_isatty() {
  return ::cordl_internals::getStaticField<bool, "called_isatty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleDriver*>::get>();
}
inline ::System::IConsoleDriver* System::ConsoleDriver::CreateNullConsoleDriver() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleDriver*>::get(), "CreateNullConsoleDriver",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IConsoleDriver*, false>(nullptr, ___internal_method);
}
inline ::System::IConsoleDriver* System::ConsoleDriver::CreateWindowsConsoleDriver() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleDriver*>::get(), "CreateWindowsConsoleDriver",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IConsoleDriver*, false>(nullptr, ___internal_method);
}
inline ::System::IConsoleDriver* System::ConsoleDriver::CreateTermInfoDriver(::StringW term) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleDriver*>::get(), "CreateTermInfoDriver", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IConsoleDriver*, false>(nullptr, ___internal_method, term);
}
inline ::System::ConsoleKeyInfo System::ConsoleDriver::ReadKey(bool intercept) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleDriver*>::get(), "ReadKey", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ConsoleKeyInfo, false>(nullptr, ___internal_method, intercept);
}
inline bool System::ConsoleDriver::get_IsConsole() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleDriver*>::get(), "get_IsConsole",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool System::ConsoleDriver::Isatty(void* handle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleDriver*>::get(), "Isatty", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handle);
}
inline int32_t System::ConsoleDriver::InternalKeyAvailable(int32_t ms_timeout) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleDriver*>::get(), "InternalKeyAvailable",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, ms_timeout);
}
inline bool System::ConsoleDriver::TtySetup(::StringW keypadXmit, ::StringW teardown, ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> control_characters, ByRef<::cordl_internals::Ptr<int32_t>> address) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleDriver*>::get(), "TtySetup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<int32_t>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, keypadXmit, teardown, control_characters, address);
}
inline bool System::ConsoleDriver::SetEcho(bool wantEcho) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ConsoleDriver*>::get(), "SetEcho", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, wantEcho);
}
// Ctor Parameters []
constexpr ::System::ConsoleDriver::ConsoleDriver() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
