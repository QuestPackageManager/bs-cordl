#pragma once
// IWYU pragma private; include "System\TermInfoDriver.hpp"
#include "System/zzzz__ConsoleColor_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TermInfoDriver_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/IO/zzzz__CStreamWriter_def.hpp"
#include "System/IO/zzzz__StreamReader_def.hpp"
#include "System/zzzz__ByteMatcher_def.hpp"
#include "System/zzzz__ConsoleKeyInfo_def.hpp"
#include "System/zzzz__IConsoleDriver_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TermInfoReader_def.hpp"
#include "System/zzzz__TermInfoStrings_def.hpp"
//  Writing Method size for method: ::System::TermInfoDriver.TryTermInfoDir
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::System::TermInfoDriver::TryTermInfoDir)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5c98d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "TryTermInfoDir", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoDriver.SearchTerminfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::TermInfoDriver::SearchTerminfo)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5c98e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "SearchTerminfo", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoDriver.WriteConsole
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TermInfoDriver::*)(::StringW)>(&::System::TermInfoDriver::WriteConsole)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c98fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "WriteConsole", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoDriver._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TermInfoDriver::*)(::StringW)>(&::System::TermInfoDriver::_ctor)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x5c90384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoDriver.get_Initialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TermInfoDriver::*)()>(&::System::TermInfoDriver::get_Initialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c992f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "get_Initialized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoDriver.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TermInfoDriver::*)()>(&::System::TermInfoDriver::Init)> {
  constexpr static std::size_t size = 0x7fc;
  constexpr static std::size_t addrs = 0x5c992fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoDriver.IncrementX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TermInfoDriver::*)()>(&::System::TermInfoDriver::IncrementX)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c99e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "IncrementX", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoDriver.WriteSpecialKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TermInfoDriver::*)(::System::ConsoleKeyInfo)>(&::System::TermInfoDriver::WriteSpecialKey)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5c99f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "WriteSpecialKey", {}, { ::i2c::type_of<::System::ConsoleKeyInfo>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoDriver.WriteSpecialKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TermInfoDriver::*)(char16_t)>(&::System::TermInfoDriver::WriteSpecialKey)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5c9a1f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "WriteSpecialKey", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoDriver.IsSpecialKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TermInfoDriver::*)(::System::ConsoleKeyInfo)>(&::System::TermInfoDriver::IsSpecialKey)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c9a3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "IsSpecialKey", {}, { ::i2c::type_of<::System::ConsoleKeyInfo>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoDriver.IsSpecialKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TermInfoDriver::*)(char16_t)>(&::System::TermInfoDriver::IsSpecialKey)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5c9a438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "IsSpecialKey", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoDriver.GetCursorPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TermInfoDriver::*)()>(&::System::TermInfoDriver::GetCursorPosition)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5c99bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "GetCursorPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoDriver.CheckWindowDimensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TermInfoDriver::*)()>(&::System::TermInfoDriver::CheckWindowDimensions)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5c9a554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "CheckWindowDimensions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoDriver.get_WindowHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::TermInfoDriver::*)()>(&::System::TermInfoDriver::get_WindowHeight)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5c99efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "get_WindowHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoDriver.get_WindowWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::TermInfoDriver::*)()>(&::System::TermInfoDriver::get_WindowWidth)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5c99ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "get_WindowWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoDriver.AddToBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TermInfoDriver::*)(int32_t)>(&::System::TermInfoDriver::AddToBuffer)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5c9a464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "AddToBuffer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoDriver.AdjustBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TermInfoDriver::*)()>(&::System::TermInfoDriver::AdjustBuffer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c9a678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "AdjustBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoDriver.CreateKeyInfoFromInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ConsoleKeyInfo (::System::TermInfoDriver::*)(int32_t, bool)>(&::System::TermInfoDriver::CreateKeyInfoFromInt)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5c9a224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "CreateKeyInfoFromInt", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoDriver.GetKeyFromBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::TermInfoDriver::*)(bool)>(&::System::TermInfoDriver::GetKeyFromBuffer)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x5c9a68c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "GetKeyFromBuffer", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoDriver.ReadKeyInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ConsoleKeyInfo (::System::TermInfoDriver::*)(::by_ref<bool>)>(&::System::TermInfoDriver::ReadKeyInternal)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5c9ade8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "ReadKeyInternal", {}, { ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoDriver.InputPending
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TermInfoDriver::*)()>(&::System::TermInfoDriver::InputPending)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5c9b11c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "InputPending", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoDriver.QueueEcho
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TermInfoDriver::*)(char16_t)>(&::System::TermInfoDriver::QueueEcho)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5c9b150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "QueueEcho", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoDriver.Echo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TermInfoDriver::*)(::System::ConsoleKeyInfo)>(&::System::TermInfoDriver::Echo)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5c9b240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "Echo", {}, { ::i2c::type_of<::System::ConsoleKeyInfo>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoDriver.EchoFlush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TermInfoDriver::*)()>(&::System::TermInfoDriver::EchoFlush)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5c9b294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "EchoFlush", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoDriver.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::TermInfoDriver::*)(::by_ref<::ArrayW<char16_t>>, int32_t, int32_t)>(&::System::TermInfoDriver::Read)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x5c9b2c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "Read", {}, { ::i2c::type_of<::by_ref<::ArrayW<char16_t>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoDriver.ReadKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ConsoleKeyInfo (::System::TermInfoDriver::*)(bool)>(&::System::TermInfoDriver::ReadKey)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c9b5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "ReadKey", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoDriver.ReadLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::TermInfoDriver::*)()>(&::System::TermInfoDriver::ReadLine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9b618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "ReadLine", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoDriver.ReadToEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::TermInfoDriver::*)()>(&::System::TermInfoDriver::ReadToEnd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9b7f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "ReadToEnd", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoDriver.ReadUntilConditionInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::TermInfoDriver::*)(bool)>(&::System::TermInfoDriver::ReadUntilConditionInternal)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5c9b620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "ReadUntilConditionInternal", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoDriver.SetCursorPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TermInfoDriver::*)(int32_t, int32_t)>(&::System::TermInfoDriver::SetCursorPosition)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5c9a050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "SetCursorPosition", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoDriver.CreateKeyMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TermInfoDriver::*)()>(&::System::TermInfoDriver::CreateKeyMap)> {
  constexpr static std::size_t size = 0x1554;
  constexpr static std::size_t addrs = 0x5c9b9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "CreateKeyMap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoDriver.InitKeys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TermInfoDriver::*)()>(&::System::TermInfoDriver::InitKeys)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5c9afa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "InitKeys", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoDriver.AddStringMapping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TermInfoDriver::*)(::System::TermInfoStrings)>(&::System::TermInfoDriver::AddStringMapping)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c9cf80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "AddStringMapping", {}, { ::i2c::type_of<::System::TermInfoStrings>() } })));
    return ___internal_method;
  }
};
constexpr ::System::TermInfoReader*& System::TermInfoDriver::__cordl_internal_get_reader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr ::System::TermInfoReader* const& System::TermInfoDriver::__cordl_internal_get_reader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_reader(::System::TermInfoReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reader = value;
}
constexpr int32_t& System::TermInfoDriver::__cordl_internal_get_cursorLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cursorLeft;
}
constexpr int32_t const& System::TermInfoDriver::__cordl_internal_get_cursorLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cursorLeft;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_cursorLeft(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cursorLeft = value;
}
constexpr int32_t& System::TermInfoDriver::__cordl_internal_get_cursorTop() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cursorTop;
}
constexpr int32_t const& System::TermInfoDriver::__cordl_internal_get_cursorTop() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cursorTop;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_cursorTop(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cursorTop = value;
}
constexpr ::StringW& System::TermInfoDriver::__cordl_internal_get_title() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___title;
}
constexpr ::StringW const& System::TermInfoDriver::__cordl_internal_get_title() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___title;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_title(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___title = value;
}
constexpr ::StringW& System::TermInfoDriver::__cordl_internal_get_titleFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___titleFormat;
}
constexpr ::StringW const& System::TermInfoDriver::__cordl_internal_get_titleFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___titleFormat;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_titleFormat(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___titleFormat = value;
}
constexpr bool& System::TermInfoDriver::__cordl_internal_get_cursorVisible() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cursorVisible;
}
constexpr bool const& System::TermInfoDriver::__cordl_internal_get_cursorVisible() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cursorVisible;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_cursorVisible(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cursorVisible = value;
}
constexpr ::StringW& System::TermInfoDriver::__cordl_internal_get_csrVisible() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___csrVisible;
}
constexpr ::StringW const& System::TermInfoDriver::__cordl_internal_get_csrVisible() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___csrVisible;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_csrVisible(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___csrVisible = value;
}
constexpr ::StringW& System::TermInfoDriver::__cordl_internal_get_csrInvisible() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___csrInvisible;
}
constexpr ::StringW const& System::TermInfoDriver::__cordl_internal_get_csrInvisible() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___csrInvisible;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_csrInvisible(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___csrInvisible = value;
}
constexpr ::StringW& System::TermInfoDriver::__cordl_internal_get_clear() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clear;
}
constexpr ::StringW const& System::TermInfoDriver::__cordl_internal_get_clear() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clear;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_clear(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clear = value;
}
constexpr ::StringW& System::TermInfoDriver::__cordl_internal_get_bell() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bell;
}
constexpr ::StringW const& System::TermInfoDriver::__cordl_internal_get_bell() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bell;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_bell(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bell = value;
}
constexpr ::StringW& System::TermInfoDriver::__cordl_internal_get_term() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___term;
}
constexpr ::StringW const& System::TermInfoDriver::__cordl_internal_get_term() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___term;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_term(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___term = value;
}
constexpr ::System::IO::StreamReader*& System::TermInfoDriver::__cordl_internal_get_stdin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stdin;
}
constexpr ::System::IO::StreamReader* const& System::TermInfoDriver::__cordl_internal_get_stdin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stdin;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_stdin(::System::IO::StreamReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stdin = value;
}
constexpr ::System::IO::CStreamWriter*& System::TermInfoDriver::__cordl_internal_get_stdout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stdout;
}
constexpr ::System::IO::CStreamWriter* const& System::TermInfoDriver::__cordl_internal_get_stdout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stdout;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_stdout(::System::IO::CStreamWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stdout = value;
}
constexpr int32_t& System::TermInfoDriver::__cordl_internal_get_windowWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windowWidth;
}
constexpr int32_t const& System::TermInfoDriver::__cordl_internal_get_windowWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windowWidth;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_windowWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___windowWidth = value;
}
constexpr int32_t& System::TermInfoDriver::__cordl_internal_get_windowHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windowHeight;
}
constexpr int32_t const& System::TermInfoDriver::__cordl_internal_get_windowHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windowHeight;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_windowHeight(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___windowHeight = value;
}
constexpr int32_t& System::TermInfoDriver::__cordl_internal_get_bufferHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufferHeight;
}
constexpr int32_t const& System::TermInfoDriver::__cordl_internal_get_bufferHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufferHeight;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_bufferHeight(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bufferHeight = value;
}
constexpr int32_t& System::TermInfoDriver::__cordl_internal_get_bufferWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufferWidth;
}
constexpr int32_t const& System::TermInfoDriver::__cordl_internal_get_bufferWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufferWidth;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_bufferWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bufferWidth = value;
}
constexpr ::ArrayW<char16_t>& System::TermInfoDriver::__cordl_internal_get_buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr ::ArrayW<char16_t> const& System::TermInfoDriver::__cordl_internal_get_buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_buffer(::ArrayW<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buffer = value;
}
constexpr int32_t& System::TermInfoDriver::__cordl_internal_get_readpos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readpos;
}
constexpr int32_t const& System::TermInfoDriver::__cordl_internal_get_readpos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readpos;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_readpos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readpos = value;
}
constexpr int32_t& System::TermInfoDriver::__cordl_internal_get_writepos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writepos;
}
constexpr int32_t const& System::TermInfoDriver::__cordl_internal_get_writepos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writepos;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_writepos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___writepos = value;
}
constexpr ::StringW& System::TermInfoDriver::__cordl_internal_get_keypadXmit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keypadXmit;
}
constexpr ::StringW const& System::TermInfoDriver::__cordl_internal_get_keypadXmit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keypadXmit;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_keypadXmit(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keypadXmit = value;
}
constexpr ::StringW& System::TermInfoDriver::__cordl_internal_get_keypadLocal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keypadLocal;
}
constexpr ::StringW const& System::TermInfoDriver::__cordl_internal_get_keypadLocal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keypadLocal;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_keypadLocal(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keypadLocal = value;
}
constexpr bool& System::TermInfoDriver::__cordl_internal_get_inited() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inited;
}
constexpr bool const& System::TermInfoDriver::__cordl_internal_get_inited() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inited;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_inited(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inited = value;
}
constexpr ::System::Object*& System::TermInfoDriver::__cordl_internal_get_initLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initLock;
}
constexpr ::System::Object* const& System::TermInfoDriver::__cordl_internal_get_initLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initLock;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_initLock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___initLock = value;
}
constexpr bool& System::TermInfoDriver::__cordl_internal_get_initKeys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initKeys;
}
constexpr bool const& System::TermInfoDriver::__cordl_internal_get_initKeys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initKeys;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_initKeys(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___initKeys = value;
}
constexpr ::StringW& System::TermInfoDriver::__cordl_internal_get_origPair() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___origPair;
}
constexpr ::StringW const& System::TermInfoDriver::__cordl_internal_get_origPair() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___origPair;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_origPair(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___origPair = value;
}
constexpr ::StringW& System::TermInfoDriver::__cordl_internal_get_origColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___origColors;
}
constexpr ::StringW const& System::TermInfoDriver::__cordl_internal_get_origColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___origColors;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_origColors(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___origColors = value;
}
constexpr ::StringW& System::TermInfoDriver::__cordl_internal_get_cursorAddress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cursorAddress;
}
constexpr ::StringW const& System::TermInfoDriver::__cordl_internal_get_cursorAddress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cursorAddress;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_cursorAddress(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cursorAddress = value;
}
constexpr ::System::ConsoleColor& System::TermInfoDriver::__cordl_internal_get_fgcolor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fgcolor;
}
constexpr ::System::ConsoleColor const& System::TermInfoDriver::__cordl_internal_get_fgcolor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fgcolor;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_fgcolor(::System::ConsoleColor value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fgcolor = value;
}
constexpr ::StringW& System::TermInfoDriver::__cordl_internal_get_setfgcolor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setfgcolor;
}
constexpr ::StringW const& System::TermInfoDriver::__cordl_internal_get_setfgcolor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setfgcolor;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_setfgcolor(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___setfgcolor = value;
}
constexpr ::StringW& System::TermInfoDriver::__cordl_internal_get_setbgcolor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setbgcolor;
}
constexpr ::StringW const& System::TermInfoDriver::__cordl_internal_get_setbgcolor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setbgcolor;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_setbgcolor(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___setbgcolor = value;
}
constexpr int32_t& System::TermInfoDriver::__cordl_internal_get_maxColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxColors;
}
constexpr int32_t const& System::TermInfoDriver::__cordl_internal_get_maxColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxColors;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_maxColors(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxColors = value;
}
constexpr bool& System::TermInfoDriver::__cordl_internal_get_noGetPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noGetPosition;
}
constexpr bool const& System::TermInfoDriver::__cordl_internal_get_noGetPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noGetPosition;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_noGetPosition(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noGetPosition = value;
}
constexpr ::System::Collections::Hashtable*& System::TermInfoDriver::__cordl_internal_get_keymap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keymap;
}
constexpr ::System::Collections::Hashtable* const& System::TermInfoDriver::__cordl_internal_get_keymap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keymap;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_keymap(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keymap = value;
}
constexpr ::System::ByteMatcher*& System::TermInfoDriver::__cordl_internal_get_rootmap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootmap;
}
constexpr ::System::ByteMatcher* const& System::TermInfoDriver::__cordl_internal_get_rootmap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootmap;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_rootmap(::System::ByteMatcher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rootmap = value;
}
constexpr int32_t& System::TermInfoDriver::__cordl_internal_get_rl_startx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rl_startx;
}
constexpr int32_t const& System::TermInfoDriver::__cordl_internal_get_rl_startx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rl_startx;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_rl_startx(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rl_startx = value;
}
constexpr int32_t& System::TermInfoDriver::__cordl_internal_get_rl_starty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rl_starty;
}
constexpr int32_t const& System::TermInfoDriver::__cordl_internal_get_rl_starty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rl_starty;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_rl_starty(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rl_starty = value;
}
constexpr ::ArrayW<uint8_t>& System::TermInfoDriver::__cordl_internal_get_control_characters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___control_characters;
}
constexpr ::ArrayW<uint8_t> const& System::TermInfoDriver::__cordl_internal_get_control_characters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___control_characters;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_control_characters(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___control_characters = value;
}
constexpr ::ArrayW<char16_t>& System::TermInfoDriver::__cordl_internal_get_echobuf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___echobuf;
}
constexpr ::ArrayW<char16_t> const& System::TermInfoDriver::__cordl_internal_get_echobuf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___echobuf;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_echobuf(::ArrayW<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___echobuf = value;
}
constexpr int32_t& System::TermInfoDriver::__cordl_internal_get_echon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___echon;
}
constexpr int32_t const& System::TermInfoDriver::__cordl_internal_get_echon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___echon;
}
constexpr void System::TermInfoDriver::__cordl_internal_set_echon(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___echon = value;
}
inline void System::TermInfoDriver::setStaticF_native_terminal_size(int32_t* value) {
  ::cordl_internals::setStaticField<int32_t*, "native_terminal_size", ::System::TermInfoDriver*>(std::forward<int32_t*>(value));
}
inline int32_t* System::TermInfoDriver::getStaticF_native_terminal_size() {
  return ::cordl_internals::getStaticField<int32_t*, "native_terminal_size", ::System::TermInfoDriver*>();
}
inline void System::TermInfoDriver::setStaticF_terminal_size(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "terminal_size", ::System::TermInfoDriver*>(std::forward<int32_t>(value));
}
inline int32_t System::TermInfoDriver::getStaticF_terminal_size() {
  return ::cordl_internals::getStaticField<int32_t, "terminal_size", ::System::TermInfoDriver*>();
}
inline void System::TermInfoDriver::setStaticF_locations(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "locations", ::System::TermInfoDriver*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::TermInfoDriver::getStaticF_locations() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "locations", ::System::TermInfoDriver*>();
}
inline void System::TermInfoDriver::setStaticF__consoleColorToAnsiCode(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "_consoleColorToAnsiCode", ::System::TermInfoDriver*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> System::TermInfoDriver::getStaticF__consoleColorToAnsiCode() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "_consoleColorToAnsiCode", ::System::TermInfoDriver*>();
}
inline ::StringW System::TermInfoDriver::TryTermInfoDir(::StringW dir, ::StringW term) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "TryTermInfoDir", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, dir, term);
}
inline ::StringW System::TermInfoDriver::SearchTerminfo(::StringW term) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "SearchTerminfo", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, term);
}
inline void System::TermInfoDriver::WriteConsole(::StringW str) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "WriteConsole", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, str);
}
inline void System::TermInfoDriver::_ctor(::StringW term) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, term);
}
inline bool System::TermInfoDriver::get_Initialized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "get_Initialized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::TermInfoDriver::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::TermInfoDriver::IncrementX() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "IncrementX", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::TermInfoDriver::WriteSpecialKey(::System::ConsoleKeyInfo key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "WriteSpecialKey", {}, { ::i2c::type_of<::System::ConsoleKeyInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void System::TermInfoDriver::WriteSpecialKey(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "WriteSpecialKey", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline bool System::TermInfoDriver::IsSpecialKey(::System::ConsoleKeyInfo key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "IsSpecialKey", {}, { ::i2c::type_of<::System::ConsoleKeyInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline bool System::TermInfoDriver::IsSpecialKey(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "IsSpecialKey", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline void System::TermInfoDriver::GetCursorPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "GetCursorPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::TermInfoDriver::CheckWindowDimensions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "CheckWindowDimensions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::TermInfoDriver::get_WindowHeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "get_WindowHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::TermInfoDriver::get_WindowWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "get_WindowWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::TermInfoDriver::AddToBuffer(int32_t b) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "AddToBuffer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline void System::TermInfoDriver::AdjustBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "AdjustBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ConsoleKeyInfo System::TermInfoDriver::CreateKeyInfoFromInt(int32_t n, bool alt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "CreateKeyInfoFromInt", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ConsoleKeyInfo>(this, ___internal_method, n, alt);
}
inline ::System::Object* System::TermInfoDriver::GetKeyFromBuffer(bool cooked) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "GetKeyFromBuffer", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, cooked);
}
inline ::System::ConsoleKeyInfo System::TermInfoDriver::ReadKeyInternal(::by_ref<bool> fresh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "ReadKeyInternal", {}, { ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ConsoleKeyInfo>(this, ___internal_method, fresh);
}
inline bool System::TermInfoDriver::InputPending() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "InputPending", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::TermInfoDriver::QueueEcho(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "QueueEcho", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void System::TermInfoDriver::Echo(::System::ConsoleKeyInfo key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "Echo", {}, { ::i2c::type_of<::System::ConsoleKeyInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void System::TermInfoDriver::EchoFlush() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "EchoFlush", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::TermInfoDriver::Read(::by_ref<::ArrayW<char16_t>> dest, int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "Read", {}, { ::i2c::type_of<::by_ref<::ArrayW<char16_t>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, dest, index, count);
}
inline ::System::ConsoleKeyInfo System::TermInfoDriver::ReadKey(bool intercept) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "ReadKey", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ConsoleKeyInfo>(this, ___internal_method, intercept);
}
inline ::StringW System::TermInfoDriver::ReadLine() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "ReadLine", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::TermInfoDriver::ReadToEnd() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "ReadToEnd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::TermInfoDriver::ReadUntilConditionInternal(bool haltOnNewLine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "ReadUntilConditionInternal", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, haltOnNewLine);
}
inline void System::TermInfoDriver::SetCursorPosition(int32_t left, int32_t top) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "SetCursorPosition", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, left, top);
}
inline void System::TermInfoDriver::CreateKeyMap() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "CreateKeyMap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::TermInfoDriver::InitKeys() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "InitKeys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::TermInfoDriver::AddStringMapping(::System::TermInfoStrings s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoDriver*>(), { "AddStringMapping", {}, { ::i2c::type_of<::System::TermInfoStrings>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline ::System::TermInfoDriver* System::TermInfoDriver::New_ctor(::StringW term) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TermInfoDriver*>(term));
}
/// @brief Convert operator to "::System::IConsoleDriver"
constexpr System::TermInfoDriver::operator ::System::IConsoleDriver*() noexcept {
  return static_cast<::System::IConsoleDriver*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IConsoleDriver"
constexpr ::System::IConsoleDriver* System::TermInfoDriver::i___System__IConsoleDriver() noexcept {
  return static_cast<::System::IConsoleDriver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::TermInfoDriver::TermInfoDriver() {}
