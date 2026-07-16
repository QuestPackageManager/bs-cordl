#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/RegexInterpreter.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexRunner_impl.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexInterpreter_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexCode_def.hpp"
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexInterpreter::*)(
    ::System::Text::RegularExpressions::RegexCode*, ::System::Globalization::CultureInfo*)>(&::System::Text::RegularExpressions::RegexInterpreter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63859d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Text::RegularExpressions::RegexCode*>(), ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.InitTrackCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexInterpreter::*)()>(&::System::Text::RegularExpressions::RegexInterpreter::InitTrackCount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x63859e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(),
                                                                                          { ::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.Advance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexInterpreter::*)(int32_t)>(&::System::Text::RegularExpressions::RegexInterpreter::Advance)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x63859fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "Advance", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.Goto
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexInterpreter::*)(int32_t)>(&::System::Text::RegularExpressions::RegexInterpreter::Goto)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6385a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "Goto", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.Textto
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexInterpreter::*)(int32_t)>(&::System::Text::RegularExpressions::RegexInterpreter::Textto)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6385b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "Textto", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.Trackto
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexInterpreter::*)(int32_t)>(&::System::Text::RegularExpressions::RegexInterpreter::Trackto)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6385b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "Trackto", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.Textstart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::RegularExpressions::RegexInterpreter::*)()>(&::System::Text::RegularExpressions::RegexInterpreter::Textstart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6385b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "Textstart", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.Textpos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::RegularExpressions::RegexInterpreter::*)()>(&::System::Text::RegularExpressions::RegexInterpreter::Textpos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6385b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "Textpos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.Trackpos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::RegularExpressions::RegexInterpreter::*)()>(&::System::Text::RegularExpressions::RegexInterpreter::Trackpos)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6385b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "Trackpos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.TrackPush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexInterpreter::*)()>(&::System::Text::RegularExpressions::RegexInterpreter::TrackPush)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6385b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "TrackPush", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.TrackPush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexInterpreter::*)(int32_t)>(&::System::Text::RegularExpressions::RegexInterpreter::TrackPush)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6385bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "TrackPush", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.TrackPush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexInterpreter::*)(int32_t, int32_t)>(
    &::System::Text::RegularExpressions::RegexInterpreter::TrackPush)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6385c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "TrackPush", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.TrackPush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexInterpreter::*)(int32_t, int32_t, int32_t)>(
    &::System::Text::RegularExpressions::RegexInterpreter::TrackPush)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6385cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(),
                                                                                           { "TrackPush", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.TrackPush2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexInterpreter::*)(int32_t)>(&::System::Text::RegularExpressions::RegexInterpreter::TrackPush2)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6385d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "TrackPush2", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.TrackPush2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexInterpreter::*)(int32_t, int32_t)>(
    &::System::Text::RegularExpressions::RegexInterpreter::TrackPush2)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6385da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "TrackPush2", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.Backtrack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexInterpreter::*)()>(&::System::Text::RegularExpressions::RegexInterpreter::Backtrack)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6385e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "Backtrack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.SetOperator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexInterpreter::*)(int32_t)>(&::System::Text::RegularExpressions::RegexInterpreter::SetOperator)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6385a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "SetOperator", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.TrackPop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexInterpreter::*)()>(&::System::Text::RegularExpressions::RegexInterpreter::TrackPop)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6385f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "TrackPop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.TrackPop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexInterpreter::*)(int32_t)>(&::System::Text::RegularExpressions::RegexInterpreter::TrackPop)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6385f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "TrackPop", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.TrackPeek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::RegularExpressions::RegexInterpreter::*)()>(&::System::Text::RegularExpressions::RegexInterpreter::TrackPeek)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6385f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "TrackPeek", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.TrackPeek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::RegularExpressions::RegexInterpreter::*)(int32_t)>(&::System::Text::RegularExpressions::RegexInterpreter::TrackPeek)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6385f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "TrackPeek", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.StackPush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexInterpreter::*)(int32_t)>(&::System::Text::RegularExpressions::RegexInterpreter::StackPush)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6385f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "StackPush", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.StackPush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexInterpreter::*)(int32_t, int32_t)>(
    &::System::Text::RegularExpressions::RegexInterpreter::StackPush)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6385fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "StackPush", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.StackPop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexInterpreter::*)()>(&::System::Text::RegularExpressions::RegexInterpreter::StackPop)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x638602c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "StackPop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.StackPop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexInterpreter::*)(int32_t)>(&::System::Text::RegularExpressions::RegexInterpreter::StackPop)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x638603c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "StackPop", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.StackPeek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::RegularExpressions::RegexInterpreter::*)()>(&::System::Text::RegularExpressions::RegexInterpreter::StackPeek)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x638604c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "StackPeek", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.StackPeek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::RegularExpressions::RegexInterpreter::*)(int32_t)>(&::System::Text::RegularExpressions::RegexInterpreter::StackPeek)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6386084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "StackPeek", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.Operator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::RegularExpressions::RegexInterpreter::*)()>(&::System::Text::RegularExpressions::RegexInterpreter::Operator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63860c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "Operator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.Operand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::RegularExpressions::RegexInterpreter::*)(int32_t)>(&::System::Text::RegularExpressions::RegexInterpreter::Operand)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x63860c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "Operand", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.Leftchars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::RegularExpressions::RegexInterpreter::*)()>(&::System::Text::RegularExpressions::RegexInterpreter::Leftchars)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x638610c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "Leftchars", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.Rightchars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::RegularExpressions::RegexInterpreter::*)()>(&::System::Text::RegularExpressions::RegexInterpreter::Rightchars)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x638611c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "Rightchars", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.Bump
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::RegularExpressions::RegexInterpreter::*)()>(&::System::Text::RegularExpressions::RegexInterpreter::Bump)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x638612c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "Bump", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.Forwardchars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::RegularExpressions::RegexInterpreter::*)()>(&::System::Text::RegularExpressions::RegexInterpreter::Forwardchars)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6386140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "Forwardchars", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.Forwardcharnext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Text::RegularExpressions::RegexInterpreter::*)()>(&::System::Text::RegularExpressions::RegexInterpreter::Forwardcharnext)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x638616c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "Forwardcharnext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.Stringmatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::RegularExpressions::RegexInterpreter::*)(::StringW)>(&::System::Text::RegularExpressions::RegexInterpreter::Stringmatch)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x6386200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "Stringmatch", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.Refmatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::RegularExpressions::RegexInterpreter::*)(int32_t, int32_t)>(
    &::System::Text::RegularExpressions::RegexInterpreter::Refmatch)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6386388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "Refmatch", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.Backwardnext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexInterpreter::*)()>(&::System::Text::RegularExpressions::RegexInterpreter::Backwardnext)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x638652c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "Backwardnext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.CharAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Text::RegularExpressions::RegexInterpreter::*)(int32_t)>(&::System::Text::RegularExpressions::RegexInterpreter::CharAt)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6386554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "CharAt", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.FindFirstChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::RegularExpressions::RegexInterpreter::*)()>(&::System::Text::RegularExpressions::RegexInterpreter::FindFirstChar)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x638658c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(),
                                                                                          { ::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexInterpreter.Go
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexInterpreter::*)()>(&::System::Text::RegularExpressions::RegexInterpreter::Go)> {
  constexpr static std::size_t size = 0x11a4;
  constexpr static std::size_t addrs = 0x6386944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(),
                                                                                          { ::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::System::Text::RegularExpressions::RegexCode*& System::Text::RegularExpressions::RegexInterpreter::__cordl_internal_get__code() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____code;
}
constexpr ::System::Text::RegularExpressions::RegexCode* const& System::Text::RegularExpressions::RegexInterpreter::__cordl_internal_get__code() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____code;
}
constexpr void System::Text::RegularExpressions::RegexInterpreter::__cordl_internal_set__code(::System::Text::RegularExpressions::RegexCode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____code = value;
}
constexpr ::System::Globalization::CultureInfo*& System::Text::RegularExpressions::RegexInterpreter::__cordl_internal_get__culture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____culture;
}
constexpr ::System::Globalization::CultureInfo* const& System::Text::RegularExpressions::RegexInterpreter::__cordl_internal_get__culture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____culture;
}
constexpr void System::Text::RegularExpressions::RegexInterpreter::__cordl_internal_set__culture(::System::Globalization::CultureInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____culture = value;
}
constexpr int32_t& System::Text::RegularExpressions::RegexInterpreter::__cordl_internal_get__operator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____operator;
}
constexpr int32_t const& System::Text::RegularExpressions::RegexInterpreter::__cordl_internal_get__operator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____operator;
}
constexpr void System::Text::RegularExpressions::RegexInterpreter::__cordl_internal_set__operator(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____operator = value;
}
constexpr int32_t& System::Text::RegularExpressions::RegexInterpreter::__cordl_internal_get__codepos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____codepos;
}
constexpr int32_t const& System::Text::RegularExpressions::RegexInterpreter::__cordl_internal_get__codepos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____codepos;
}
constexpr void System::Text::RegularExpressions::RegexInterpreter::__cordl_internal_set__codepos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____codepos = value;
}
constexpr bool& System::Text::RegularExpressions::RegexInterpreter::__cordl_internal_get__rightToLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightToLeft;
}
constexpr bool const& System::Text::RegularExpressions::RegexInterpreter::__cordl_internal_get__rightToLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightToLeft;
}
constexpr void System::Text::RegularExpressions::RegexInterpreter::__cordl_internal_set__rightToLeft(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightToLeft = value;
}
constexpr bool& System::Text::RegularExpressions::RegexInterpreter::__cordl_internal_get__caseInsensitive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____caseInsensitive;
}
constexpr bool const& System::Text::RegularExpressions::RegexInterpreter::__cordl_internal_get__caseInsensitive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____caseInsensitive;
}
constexpr void System::Text::RegularExpressions::RegexInterpreter::__cordl_internal_set__caseInsensitive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____caseInsensitive = value;
}
inline void System::Text::RegularExpressions::RegexInterpreter::_ctor(::System::Text::RegularExpressions::RegexCode* code, ::System::Globalization::CultureInfo* culture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Text::RegularExpressions::RegexCode*>(), ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, culture);
}
inline void System::Text::RegularExpressions::RegexInterpreter::InitTrackCount() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexInterpreter::Advance(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "Advance", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline void System::Text::RegularExpressions::RegexInterpreter::Goto(int32_t newpos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "Goto", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newpos);
}
inline void System::Text::RegularExpressions::RegexInterpreter::Textto(int32_t newpos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "Textto", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newpos);
}
inline void System::Text::RegularExpressions::RegexInterpreter::Trackto(int32_t newpos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "Trackto", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newpos);
}
inline int32_t System::Text::RegularExpressions::RegexInterpreter::Textstart() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "Textstart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Text::RegularExpressions::RegexInterpreter::Textpos() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "Textpos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Text::RegularExpressions::RegexInterpreter::Trackpos() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "Trackpos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexInterpreter::TrackPush() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "TrackPush", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexInterpreter::TrackPush(int32_t I1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "TrackPush", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, I1);
}
inline void System::Text::RegularExpressions::RegexInterpreter::TrackPush(int32_t I1, int32_t I2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "TrackPush", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, I1, I2);
}
inline void System::Text::RegularExpressions::RegexInterpreter::TrackPush(int32_t I1, int32_t I2, int32_t I3) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(),
                                                                                         { "TrackPush", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, I1, I2, I3);
}
inline void System::Text::RegularExpressions::RegexInterpreter::TrackPush2(int32_t I1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "TrackPush2", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, I1);
}
inline void System::Text::RegularExpressions::RegexInterpreter::TrackPush2(int32_t I1, int32_t I2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "TrackPush2", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, I1, I2);
}
inline void System::Text::RegularExpressions::RegexInterpreter::Backtrack() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "Backtrack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexInterpreter::SetOperator(int32_t op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "SetOperator", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op);
}
inline void System::Text::RegularExpressions::RegexInterpreter::TrackPop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "TrackPop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexInterpreter::TrackPop(int32_t framesize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "TrackPop", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, framesize);
}
inline int32_t System::Text::RegularExpressions::RegexInterpreter::TrackPeek() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "TrackPeek", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Text::RegularExpressions::RegexInterpreter::TrackPeek(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "TrackPeek", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, i);
}
inline void System::Text::RegularExpressions::RegexInterpreter::StackPush(int32_t I1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "StackPush", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, I1);
}
inline void System::Text::RegularExpressions::RegexInterpreter::StackPush(int32_t I1, int32_t I2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "StackPush", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, I1, I2);
}
inline void System::Text::RegularExpressions::RegexInterpreter::StackPop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "StackPop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexInterpreter::StackPop(int32_t framesize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "StackPop", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, framesize);
}
inline int32_t System::Text::RegularExpressions::RegexInterpreter::StackPeek() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "StackPeek", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Text::RegularExpressions::RegexInterpreter::StackPeek(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "StackPeek", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, i);
}
inline int32_t System::Text::RegularExpressions::RegexInterpreter::Operator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "Operator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Text::RegularExpressions::RegexInterpreter::Operand(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "Operand", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, i);
}
inline int32_t System::Text::RegularExpressions::RegexInterpreter::Leftchars() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "Leftchars", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Text::RegularExpressions::RegexInterpreter::Rightchars() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "Rightchars", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Text::RegularExpressions::RegexInterpreter::Bump() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "Bump", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Text::RegularExpressions::RegexInterpreter::Forwardchars() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "Forwardchars", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline char16_t System::Text::RegularExpressions::RegexInterpreter::Forwardcharnext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "Forwardcharnext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline bool System::Text::RegularExpressions::RegexInterpreter::Stringmatch(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "Stringmatch", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, str);
}
inline bool System::Text::RegularExpressions::RegexInterpreter::Refmatch(int32_t index, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "Refmatch", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, len);
}
inline void System::Text::RegularExpressions::RegexInterpreter::Backwardnext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "Backwardnext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline char16_t System::Text::RegularExpressions::RegexInterpreter::CharAt(int32_t j) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), { "CharAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method, j);
}
inline bool System::Text::RegularExpressions::RegexInterpreter::FindFirstChar() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexInterpreter::Go() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::RegularExpressions::RegexInterpreter*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Text::RegularExpressions::RegexInterpreter* System::Text::RegularExpressions::RegexInterpreter::New_ctor(::System::Text::RegularExpressions::RegexCode* code,
                                                                                                                          ::System::Globalization::CultureInfo* culture) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::RegularExpressions::RegexInterpreter*>(code, culture));
}
// Ctor Parameters []
constexpr ::System::Text::RegularExpressions::RegexInterpreter::RegexInterpreter() {}
