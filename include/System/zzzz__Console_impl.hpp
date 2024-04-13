#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Console_def.hpp"
#include "System/IO/zzzz__FileAccess_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__ConsoleCancelEventHandler_def.hpp"
#include "System/zzzz__ConsoleKeyInfo_def.hpp"
#include "System/zzzz__Console_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x287dc04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler::*)(int32_t)>(
    &::GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x287dcc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler*>::get(), 13));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler* GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler*>(object, method));
}
inline void GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler::Invoke(int32_t keyCode) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, keyCode);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler::__Console__WindowsConsole__WindowsCancelHandler() {}
//  Writing Method size for method: ::System::__Console__WindowsConsole.GetConsoleCP
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::System::__Console__WindowsConsole::GetConsoleCP)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x287da34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Console__WindowsConsole*>::get(), "GetConsoleCP",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__Console__WindowsConsole.GetConsoleOutputCP
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::System::__Console__WindowsConsole::GetConsoleOutputCP)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x287da9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Console__WindowsConsole*>::get(),
                                                                               "GetConsoleOutputCP", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__Console__WindowsConsole.DoWindowsConsoleCancelEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&::System::__Console__WindowsConsole::DoWindowsConsoleCancelEvent)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x287db08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Console__WindowsConsole*>::get(), "DoWindowsConsoleCancelEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__Console__WindowsConsole.GetInputCodePage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::System::__Console__WindowsConsole::GetInputCodePage)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x287cb6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Console__WindowsConsole*>::get(), "GetInputCodePage",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__Console__WindowsConsole.GetOutputCodePage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::System::__Console__WindowsConsole::GetOutputCodePage)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x287cbb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Console__WindowsConsole*>::get(), "GetOutputCodePage",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::__Console__WindowsConsole::setStaticF_ctrlHandlerAdded(bool value) {
  ::cordl_internals::setStaticField<bool, "ctrlHandlerAdded", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Console__WindowsConsole*>::get>(std::forward<bool>(value));
}
inline bool System::__Console__WindowsConsole::getStaticF_ctrlHandlerAdded() {
  return ::cordl_internals::getStaticField<bool, "ctrlHandlerAdded", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Console__WindowsConsole*>::get>();
}
inline void System::__Console__WindowsConsole::setStaticF_cancelHandler(::GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler*, "cancelHandler",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Console__WindowsConsole*>::get>(
      std::forward<::GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler*>(value));
}
inline ::GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler* System::__Console__WindowsConsole::getStaticF_cancelHandler() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler*, "cancelHandler",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Console__WindowsConsole*>::get>();
}
inline int32_t System::__Console__WindowsConsole::GetConsoleCP() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Console__WindowsConsole*>::get(), "GetConsoleCP",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline int32_t System::__Console__WindowsConsole::GetConsoleOutputCP() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Console__WindowsConsole*>::get(), "GetConsoleOutputCP",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline bool System::__Console__WindowsConsole::DoWindowsConsoleCancelEvent(int32_t keyCode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Console__WindowsConsole*>::get(), "DoWindowsConsoleCancelEvent",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, keyCode);
}
inline int32_t System::__Console__WindowsConsole::GetInputCodePage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Console__WindowsConsole*>::get(), "GetInputCodePage",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline int32_t System::__Console__WindowsConsole::GetOutputCodePage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Console__WindowsConsole*>::get(), "GetOutputCodePage",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::__Console__WindowsConsole::__Console__WindowsConsole() {}
//  Writing Method size for method: ::System::Console.SetupStreams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Text::Encoding*, ::System::Text::Encoding*)>(&::System::Console::SetupStreams)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x287cc04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get(), "SetupStreams", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Console.get_Error
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::TextWriter* (*)()>(&::System::Console::get_Error)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x287d29c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get(), "get_Error",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Console.get_Out
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::TextWriter* (*)()>(&::System::Console::get_Out)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x287d2f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get(), "get_Out",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Console.Open
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (*)(void*, ::System::IO::FileAccess, int32_t)>(&::System::Console::Open)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x287d34c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileAccess>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Console.OpenStandardError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (*)(int32_t)>(&::System::Console::OpenStandardError)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x287d20c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get(), "OpenStandardError", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Console.OpenStandardInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (*)(int32_t)>(&::System::Console::OpenStandardInput)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x287d0ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get(), "OpenStandardInput", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Console.OpenStandardOutput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (*)(int32_t)>(&::System::Console::OpenStandardOutput)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x287d17c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get(), "OpenStandardOutput", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Console.SetOut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::TextWriter*)>(&::System::Console::SetOut)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x287d4a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get(), "SetOut", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Console.WriteLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::System::Console::WriteLine)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x287d58c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get(), "WriteLine", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Console.get_InputEncoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (*)()>(&::System::Console::get_InputEncoding)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x287d600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get(), "get_InputEncoding",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Console.get_OutputEncoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (*)()>(&::System::Console::get_OutputEncoding)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x287d658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get(), "get_OutputEncoding",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Console.ReadKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ConsoleKeyInfo (*)()>(&::System::Console::ReadKey)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x287d6b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get(), "ReadKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Console.ReadKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ConsoleKeyInfo (*)(bool)>(&::System::Console::ReadKey)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x287d708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get(), "ReadKey", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Console.DoConsoleCancelEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Console::DoConsoleCancelEvent)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x287d83c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get(), "DoConsoleCancelEvent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Console::setStaticF_stdout(::System::IO::TextWriter* value) {
  ::cordl_internals::setStaticField<::System::IO::TextWriter*, "stdout", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get>(
      std::forward<::System::IO::TextWriter*>(value));
}
inline ::System::IO::TextWriter* System::Console::getStaticF_stdout() {
  return ::cordl_internals::getStaticField<::System::IO::TextWriter*, "stdout", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get>();
}
inline void System::Console::setStaticF_stderr(::System::IO::TextWriter* value) {
  ::cordl_internals::setStaticField<::System::IO::TextWriter*, "stderr", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get>(
      std::forward<::System::IO::TextWriter*>(value));
}
inline ::System::IO::TextWriter* System::Console::getStaticF_stderr() {
  return ::cordl_internals::getStaticField<::System::IO::TextWriter*, "stderr", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get>();
}
inline void System::Console::setStaticF_stdin(::System::IO::TextReader* value) {
  ::cordl_internals::setStaticField<::System::IO::TextReader*, "stdin", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get>(
      std::forward<::System::IO::TextReader*>(value));
}
inline ::System::IO::TextReader* System::Console::getStaticF_stdin() {
  return ::cordl_internals::getStaticField<::System::IO::TextReader*, "stdin", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get>();
}
inline void System::Console::setStaticF_inputEncoding(::System::Text::Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::Encoding*, "inputEncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get>(
      std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* System::Console::getStaticF_inputEncoding() {
  return ::cordl_internals::getStaticField<::System::Text::Encoding*, "inputEncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get>();
}
inline void System::Console::setStaticF_outputEncoding(::System::Text::Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::Encoding*, "outputEncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get>(
      std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* System::Console::getStaticF_outputEncoding() {
  return ::cordl_internals::getStaticField<::System::Text::Encoding*, "outputEncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get>();
}
inline void System::Console::setStaticF_cancel_event(::System::ConsoleCancelEventHandler* value) {
  ::cordl_internals::setStaticField<::System::ConsoleCancelEventHandler*, "cancel_event", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get>(
      std::forward<::System::ConsoleCancelEventHandler*>(value));
}
inline ::System::ConsoleCancelEventHandler* System::Console::getStaticF_cancel_event() {
  return ::cordl_internals::getStaticField<::System::ConsoleCancelEventHandler*, "cancel_event", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get>();
}
inline void System::Console::SetupStreams(::System::Text::Encoding* inputEncoding, ::System::Text::Encoding* outputEncoding) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get(), "SetupStreams", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, inputEncoding, outputEncoding);
}
inline ::System::IO::TextWriter* System::Console::get_Error() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get(), "get_Error",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IO::TextWriter*, false>(nullptr, ___internal_method);
}
inline ::System::IO::TextWriter* System::Console::get_Out() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get(), "get_Out",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IO::TextWriter*, false>(nullptr, ___internal_method);
}
inline ::System::IO::Stream* System::Console::Open(void* handle, ::System::IO::FileAccess access, int32_t bufferSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get(), "Open", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileAccess>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(nullptr, ___internal_method, handle, access, bufferSize);
}
inline ::System::IO::Stream* System::Console::OpenStandardError(int32_t bufferSize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get(), "OpenStandardError", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(nullptr, ___internal_method, bufferSize);
}
inline ::System::IO::Stream* System::Console::OpenStandardInput(int32_t bufferSize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get(), "OpenStandardInput", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(nullptr, ___internal_method, bufferSize);
}
inline ::System::IO::Stream* System::Console::OpenStandardOutput(int32_t bufferSize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get(), "OpenStandardOutput", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(nullptr, ___internal_method, bufferSize);
}
inline void System::Console::SetOut(::System::IO::TextWriter* newOut) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get(), "SetOut", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, newOut);
}
inline void System::Console::WriteLine(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get(), "WriteLine", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::System::Text::Encoding* System::Console::get_InputEncoding() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get(), "get_InputEncoding",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(nullptr, ___internal_method);
}
inline ::System::Text::Encoding* System::Console::get_OutputEncoding() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get(), "get_OutputEncoding",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(nullptr, ___internal_method);
}
inline ::System::ConsoleKeyInfo System::Console::ReadKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get(), "ReadKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ConsoleKeyInfo, false>(nullptr, ___internal_method);
}
inline ::System::ConsoleKeyInfo System::Console::ReadKey(bool intercept) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get(), "ReadKey", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ConsoleKeyInfo, false>(nullptr, ___internal_method, intercept);
}
inline void System::Console::DoConsoleCancelEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Console*>::get(), "DoConsoleCancelEvent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Console::Console() {}
