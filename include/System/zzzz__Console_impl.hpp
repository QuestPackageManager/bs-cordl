#pragma once
// IWYU pragma private; include "System\Console.hpp"
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
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::WindowsConsole_Console_WindowsCancelHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::WindowsConsole_Console_WindowsCancelHandler::*)(::System::Object*, ::System::IntPtr)>(
    &::System::WindowsConsole_Console_WindowsCancelHandler::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c90150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::WindowsConsole_Console_WindowsCancelHandler*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::WindowsConsole_Console_WindowsCancelHandler.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::WindowsConsole_Console_WindowsCancelHandler::*)(int32_t)>(&::System::WindowsConsole_Console_WindowsCancelHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c901bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::WindowsConsole_Console_WindowsCancelHandler*>(),
                                                                                          { ::i2c::class_of<::System::WindowsConsole_Console_WindowsCancelHandler*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::WindowsConsole_Console_WindowsCancelHandler::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::WindowsConsole_Console_WindowsCancelHandler*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool System::WindowsConsole_Console_WindowsCancelHandler::Invoke(int32_t keyCode) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::WindowsConsole_Console_WindowsCancelHandler*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, keyCode);
}
inline ::System::WindowsConsole_Console_WindowsCancelHandler* System::WindowsConsole_Console_WindowsCancelHandler::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::WindowsConsole_Console_WindowsCancelHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::System::WindowsConsole_Console_WindowsCancelHandler::WindowsConsole_Console_WindowsCancelHandler() {}
//  Writing Method size for method: ::System::Console_WindowsConsole.GetConsoleCP
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::Console_WindowsConsole::GetConsoleCP)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c8ff80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console_WindowsConsole*>(), { "GetConsoleCP", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Console_WindowsConsole.GetConsoleOutputCP
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::Console_WindowsConsole::GetConsoleOutputCP)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c8ffe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console_WindowsConsole*>(), { "GetConsoleOutputCP", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Console_WindowsConsole.DoWindowsConsoleCancelEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::System::Console_WindowsConsole::DoWindowsConsoleCancelEvent)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c9004c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console_WindowsConsole*>(), { "DoWindowsConsoleCancelEvent", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Console_WindowsConsole.GetInputCodePage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::Console_WindowsConsole::GetInputCodePage)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c8ee54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console_WindowsConsole*>(), { "GetInputCodePage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Console_WindowsConsole.GetOutputCodePage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::Console_WindowsConsole::GetOutputCodePage)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c8eea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console_WindowsConsole*>(), { "GetOutputCodePage", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Console_WindowsConsole::setStaticF_ctrlHandlerAdded(bool value) {
  ::cordl_internals::setStaticField<bool, "ctrlHandlerAdded", ::System::Console_WindowsConsole*>(std::forward<bool>(value));
}
inline bool System::Console_WindowsConsole::getStaticF_ctrlHandlerAdded() {
  return ::cordl_internals::getStaticField<bool, "ctrlHandlerAdded", ::System::Console_WindowsConsole*>();
}
inline void System::Console_WindowsConsole::setStaticF_cancelHandler(::System::WindowsConsole_Console_WindowsCancelHandler* value) {
  ::cordl_internals::setStaticField<::System::WindowsConsole_Console_WindowsCancelHandler*, "cancelHandler", ::System::Console_WindowsConsole*>(
      std::forward<::System::WindowsConsole_Console_WindowsCancelHandler*>(value));
}
inline ::System::WindowsConsole_Console_WindowsCancelHandler* System::Console_WindowsConsole::getStaticF_cancelHandler() {
  return ::cordl_internals::getStaticField<::System::WindowsConsole_Console_WindowsCancelHandler*, "cancelHandler", ::System::Console_WindowsConsole*>();
}
inline int32_t System::Console_WindowsConsole::GetConsoleCP() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console_WindowsConsole*>(), { "GetConsoleCP", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t System::Console_WindowsConsole::GetConsoleOutputCP() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console_WindowsConsole*>(), { "GetConsoleOutputCP", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool System::Console_WindowsConsole::DoWindowsConsoleCancelEvent(int32_t keyCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console_WindowsConsole*>(), { "DoWindowsConsoleCancelEvent", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, keyCode);
}
inline int32_t System::Console_WindowsConsole::GetInputCodePage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console_WindowsConsole*>(), { "GetInputCodePage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t System::Console_WindowsConsole::GetOutputCodePage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console_WindowsConsole*>(), { "GetOutputCodePage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Console_WindowsConsole::Console_WindowsConsole() {}
//  Writing Method size for method: ::System::Console.SetupStreams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::Encoding*, ::System::Text::Encoding*)>(&::System::Console::SetupStreams)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x5c8eef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Console*>(), { "SetupStreams", {}, { ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Console.get_Error
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::TextWriter* (*)()>(&::System::Console::get_Error)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c8f5a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console*>(), { "get_Error", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Console.get_Out
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::TextWriter* (*)()>(&::System::Console::get_Out)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c8f600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console*>(), { "get_Out", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Console.Open
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (*)(::System::IntPtr, ::System::IO::FileAccess, int32_t)>(&::System::Console::Open)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5c8f65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Console*>(), { "Open", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IO::FileAccess>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Console.OpenStandardError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (*)(int32_t)>(&::System::Console::OpenStandardError)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5c8f510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console*>(), { "OpenStandardError", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Console.OpenStandardInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (*)(int32_t)>(&::System::Console::OpenStandardInput)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5c8f3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console*>(), { "OpenStandardInput", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Console.OpenStandardOutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (*)(int32_t)>(&::System::Console::OpenStandardOutput)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5c8f47c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console*>(), { "OpenStandardOutput", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Console.SetError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::TextWriter*)>(&::System::Console::SetError)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5c8f7c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console*>(), { "SetError", {}, { ::i2c::type_of<::System::IO::TextWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Console.SetOut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::TextWriter*)>(&::System::Console::SetOut)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5c8f8a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console*>(), { "SetOut", {}, { ::i2c::type_of<::System::IO::TextWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Console.WriteLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::System::Console::WriteLine)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5c8f990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console*>(), { "WriteLine", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Console.WriteLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Object*)>(&::System::Console::WriteLine)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c8fa08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console*>(), { "WriteLine", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Console.WriteLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Object*, ::System::Object*, ::System::Object*)>(&::System::Console::WriteLine)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c8fa90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Console*>(),
                            { "WriteLine", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Console.get_InputEncoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (*)()>(&::System::Console::get_InputEncoding)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c8fb30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console*>(), { "get_InputEncoding", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Console.get_OutputEncoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (*)()>(&::System::Console::get_OutputEncoding)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c8fb8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console*>(), { "get_OutputEncoding", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Console.ReadKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ConsoleKeyInfo (*)()>(&::System::Console::ReadKey)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c8fbe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console*>(), { "ReadKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Console.ReadKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ConsoleKeyInfo (*)(bool)>(&::System::Console::ReadKey)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5c8fc44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console*>(), { "ReadKey", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Console.DoConsoleCancelEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Console::DoConsoleCancelEvent)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5c8fd84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console*>(), { "DoConsoleCancelEvent", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Console::setStaticF_stdout(::System::IO::TextWriter* value) {
  ::cordl_internals::setStaticField<::System::IO::TextWriter*, "stdout", ::System::Console*>(std::forward<::System::IO::TextWriter*>(value));
}
inline ::System::IO::TextWriter* System::Console::getStaticF_stdout() {
  return ::cordl_internals::getStaticField<::System::IO::TextWriter*, "stdout", ::System::Console*>();
}
inline void System::Console::setStaticF_stderr(::System::IO::TextWriter* value) {
  ::cordl_internals::setStaticField<::System::IO::TextWriter*, "stderr", ::System::Console*>(std::forward<::System::IO::TextWriter*>(value));
}
inline ::System::IO::TextWriter* System::Console::getStaticF_stderr() {
  return ::cordl_internals::getStaticField<::System::IO::TextWriter*, "stderr", ::System::Console*>();
}
inline void System::Console::setStaticF_stdin(::System::IO::TextReader* value) {
  ::cordl_internals::setStaticField<::System::IO::TextReader*, "stdin", ::System::Console*>(std::forward<::System::IO::TextReader*>(value));
}
inline ::System::IO::TextReader* System::Console::getStaticF_stdin() {
  return ::cordl_internals::getStaticField<::System::IO::TextReader*, "stdin", ::System::Console*>();
}
inline void System::Console::setStaticF_IsRunningOnAndroid(bool value) {
  ::cordl_internals::setStaticField<bool, "IsRunningOnAndroid", ::System::Console*>(std::forward<bool>(value));
}
inline bool System::Console::getStaticF_IsRunningOnAndroid() {
  return ::cordl_internals::getStaticField<bool, "IsRunningOnAndroid", ::System::Console*>();
}
inline void System::Console::setStaticF_inputEncoding(::System::Text::Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::Encoding*, "inputEncoding", ::System::Console*>(std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* System::Console::getStaticF_inputEncoding() {
  return ::cordl_internals::getStaticField<::System::Text::Encoding*, "inputEncoding", ::System::Console*>();
}
inline void System::Console::setStaticF_outputEncoding(::System::Text::Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::Encoding*, "outputEncoding", ::System::Console*>(std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* System::Console::getStaticF_outputEncoding() {
  return ::cordl_internals::getStaticField<::System::Text::Encoding*, "outputEncoding", ::System::Console*>();
}
inline void System::Console::setStaticF_cancel_event(::System::ConsoleCancelEventHandler* value) {
  ::cordl_internals::setStaticField<::System::ConsoleCancelEventHandler*, "cancel_event", ::System::Console*>(std::forward<::System::ConsoleCancelEventHandler*>(value));
}
inline ::System::ConsoleCancelEventHandler* System::Console::getStaticF_cancel_event() {
  return ::cordl_internals::getStaticField<::System::ConsoleCancelEventHandler*, "cancel_event", ::System::Console*>();
}
inline void System::Console::SetupStreams(::System::Text::Encoding* inputEncoding, ::System::Text::Encoding* outputEncoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Console*>(), { "SetupStreams", {}, { ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inputEncoding, outputEncoding);
}
inline ::System::IO::TextWriter* System::Console::get_Error() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console*>(), { "get_Error", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::TextWriter*>(nullptr, ___internal_method);
}
inline ::System::IO::TextWriter* System::Console::get_Out() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console*>(), { "get_Out", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::TextWriter*>(nullptr, ___internal_method);
}
inline ::System::IO::Stream* System::Console::Open(::System::IntPtr handle, ::System::IO::FileAccess access, int32_t bufferSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Console*>(), { "Open", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IO::FileAccess>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(nullptr, ___internal_method, handle, access, bufferSize);
}
inline ::System::IO::Stream* System::Console::OpenStandardError(int32_t bufferSize) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console*>(), { "OpenStandardError", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(nullptr, ___internal_method, bufferSize);
}
inline ::System::IO::Stream* System::Console::OpenStandardInput(int32_t bufferSize) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console*>(), { "OpenStandardInput", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(nullptr, ___internal_method, bufferSize);
}
inline ::System::IO::Stream* System::Console::OpenStandardOutput(int32_t bufferSize) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console*>(), { "OpenStandardOutput", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(nullptr, ___internal_method, bufferSize);
}
inline void System::Console::SetError(::System::IO::TextWriter* newError) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console*>(), { "SetError", {}, { ::i2c::type_of<::System::IO::TextWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, newError);
}
inline void System::Console::SetOut(::System::IO::TextWriter* newOut) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console*>(), { "SetOut", {}, { ::i2c::type_of<::System::IO::TextWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, newOut);
}
inline void System::Console::WriteLine(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console*>(), { "WriteLine", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void System::Console::WriteLine(::StringW format, ::System::Object* arg0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console*>(), { "WriteLine", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, format, arg0);
}
inline void System::Console::WriteLine(::StringW format, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Console*>(),
                          { "WriteLine", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, format, arg0, arg1, arg2);
}
inline ::System::Text::Encoding* System::Console::get_InputEncoding() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console*>(), { "get_InputEncoding", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(nullptr, ___internal_method);
}
inline ::System::Text::Encoding* System::Console::get_OutputEncoding() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console*>(), { "get_OutputEncoding", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(nullptr, ___internal_method);
}
inline ::System::ConsoleKeyInfo System::Console::ReadKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console*>(), { "ReadKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ConsoleKeyInfo>(nullptr, ___internal_method);
}
inline ::System::ConsoleKeyInfo System::Console::ReadKey(bool intercept) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console*>(), { "ReadKey", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ConsoleKeyInfo>(nullptr, ___internal_method, intercept);
}
inline void System::Console::DoConsoleCancelEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Console*>(), { "DoConsoleCancelEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Console::Console() {}
