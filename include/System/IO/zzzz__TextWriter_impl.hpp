#pragma once
// IWYU pragma private; include "System\IO\TextWriter.hpp"
#include "System/zzzz__MarshalByRefObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/IO/zzzz__TextWriter_NullTextWriter_def.hpp"
#include "System/IO/zzzz__TextWriter_SyncTextWriter_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IAsyncDisposable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::IO::TextWriter___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::TextWriter___c::*)()>(&::System::IO::TextWriter___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c04a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::TextWriter___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextWriter___c._WriteAsync_b__56_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::TextWriter___c::*)(::System::Object*)>(&::System::IO::TextWriter___c::_WriteAsync_b__56_0)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5c04a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::TextWriter___c*>(), { "<WriteAsync>b__56_0", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextWriter___c._WriteAsync_b__57_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::TextWriter___c::*)(::System::Object*)>(&::System::IO::TextWriter___c::_WriteAsync_b__57_0)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5c04b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::TextWriter___c*>(), { "<WriteAsync>b__57_0", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextWriter___c._WriteAsync_b__59_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::TextWriter___c::*)(::System::Object*)>(&::System::IO::TextWriter___c::_WriteAsync_b__59_0)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5c04bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::TextWriter___c*>(), { "<WriteAsync>b__59_0", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextWriter___c._FlushAsync_b__67_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::TextWriter___c::*)(::System::Object*)>(&::System::IO::TextWriter___c::_FlushAsync_b__67_0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c04cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::TextWriter___c*>(), { "<FlushAsync>b__67_0", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline void System::IO::TextWriter___c::setStaticF___9(::System::IO::TextWriter___c* value) {
  ::cordl_internals::setStaticField<::System::IO::TextWriter___c*, "<>9", ::System::IO::TextWriter___c*>(std::forward<::System::IO::TextWriter___c*>(value));
}
inline ::System::IO::TextWriter___c* System::IO::TextWriter___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::IO::TextWriter___c*, "<>9", ::System::IO::TextWriter___c*>();
}
inline void System::IO::TextWriter___c::setStaticF___9__56_0(::System::Action_1<::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__56_0", ::System::IO::TextWriter___c*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* System::IO::TextWriter___c::getStaticF___9__56_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__56_0", ::System::IO::TextWriter___c*>();
}
inline void System::IO::TextWriter___c::setStaticF___9__57_0(::System::Action_1<::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__57_0", ::System::IO::TextWriter___c*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* System::IO::TextWriter___c::getStaticF___9__57_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__57_0", ::System::IO::TextWriter___c*>();
}
inline void System::IO::TextWriter___c::setStaticF___9__59_0(::System::Action_1<::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__59_0", ::System::IO::TextWriter___c*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* System::IO::TextWriter___c::getStaticF___9__59_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__59_0", ::System::IO::TextWriter___c*>();
}
inline void System::IO::TextWriter___c::setStaticF___9__67_0(::System::Action_1<::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__67_0", ::System::IO::TextWriter___c*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* System::IO::TextWriter___c::getStaticF___9__67_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__67_0", ::System::IO::TextWriter___c*>();
}
inline void System::IO::TextWriter___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::TextWriter___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::TextWriter___c::_WriteAsync_b__56_0(::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::TextWriter___c*>(), { "<WriteAsync>b__56_0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void System::IO::TextWriter___c::_WriteAsync_b__57_0(::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::TextWriter___c*>(), { "<WriteAsync>b__57_0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void System::IO::TextWriter___c::_WriteAsync_b__59_0(::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::TextWriter___c*>(), { "<WriteAsync>b__59_0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void System::IO::TextWriter___c::_FlushAsync_b__67_0(::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::TextWriter___c*>(), { "<FlushAsync>b__67_0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline ::System::IO::TextWriter___c* System::IO::TextWriter___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::TextWriter___c*>());
}
// Ctor Parameters []
constexpr ::System::IO::TextWriter___c::TextWriter___c() {}
//  Writing Method size for method: ::System::IO::TextWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::TextWriter::*)()>(&::System::IO::TextWriter::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5bff244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::TextWriter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::TextWriter::*)(::System::IFormatProvider*)>(&::System::IO::TextWriter::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5bfea80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::TextWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextWriter.get_FormatProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IFormatProvider* (::System::IO::TextWriter::*)()>(&::System::IO::TextWriter::get_FormatProvider)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c03be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::TextWriter*>(), { ::i2c::class_of<::System::IO::TextWriter*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextWriter.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::TextWriter::*)()>(&::System::IO::TextWriter::Close)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c03c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::TextWriter*>(), { ::i2c::class_of<::System::IO::TextWriter*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextWriter.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::TextWriter::*)(bool)>(&::System::IO::TextWriter::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c03cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::TextWriter*>(), { ::i2c::class_of<::System::IO::TextWriter*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextWriter.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::TextWriter::*)()>(&::System::IO::TextWriter::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c03cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::TextWriter*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextWriter.DisposeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask (::System::IO::TextWriter::*)()>(&::System::IO::TextWriter::DisposeAsync)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5bff6a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::TextWriter*>(), { ::i2c::class_of<::System::IO::TextWriter*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextWriter.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::TextWriter::*)()>(&::System::IO::TextWriter::Flush)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c03d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::TextWriter*>(), { ::i2c::class_of<::System::IO::TextWriter*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextWriter.get_Encoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (::System::IO::TextWriter::*)()>(&::System::IO::TextWriter::get_Encoding)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::TextWriter*>(), { ::i2c::class_of<::System::IO::TextWriter*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextWriter.get_NewLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::TextWriter::*)()>(&::System::IO::TextWriter::get_NewLine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c03d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::TextWriter*>(), { ::i2c::class_of<::System::IO::TextWriter*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextWriter.set_NewLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::TextWriter::*)(::StringW)>(&::System::IO::TextWriter::set_NewLine)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5c03d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::TextWriter*>(), { ::i2c::class_of<::System::IO::TextWriter*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::TextWriter::*)(char16_t)>(&::System::IO::TextWriter::Write)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c03d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::TextWriter*>(), { ::i2c::class_of<::System::IO::TextWriter*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::TextWriter::*)(::ArrayW<char16_t>)>(&::System::IO::TextWriter::Write)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c03d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::TextWriter*>(), { ::i2c::class_of<::System::IO::TextWriter*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::TextWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::IO::TextWriter::Write)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5c03da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::TextWriter*>(), { ::i2c::class_of<::System::IO::TextWriter*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::TextWriter::*)(::StringW)>(&::System::IO::TextWriter::Write)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c03f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::TextWriter*>(), { ::i2c::class_of<::System::IO::TextWriter*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::TextWriter::*)(::StringW, ::System::Object*, ::System::Object*, ::System::Object*)>(&::System::IO::TextWriter::Write)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c03f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::TextWriter*>(), { ::i2c::class_of<::System::IO::TextWriter*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextWriter.WriteLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::TextWriter::*)()>(&::System::IO::TextWriter::WriteLine)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c04010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::TextWriter*>(), { ::i2c::class_of<::System::IO::TextWriter*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextWriter.WriteLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::TextWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::IO::TextWriter::WriteLine)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5c04024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::TextWriter*>(), { ::i2c::class_of<::System::IO::TextWriter*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextWriter.WriteLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::TextWriter::*)(::StringW)>(&::System::IO::TextWriter::WriteLine)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5c04054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::TextWriter*>(), { ::i2c::class_of<::System::IO::TextWriter*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextWriter.WriteLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::TextWriter::*)(::StringW, ::System::Object*)>(&::System::IO::TextWriter::WriteLine)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c04090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::TextWriter*>(), { ::i2c::class_of<::System::IO::TextWriter*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextWriter.WriteLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::TextWriter::*)(::StringW, ::System::Object*, ::System::Object*, ::System::Object*)>(&::System::IO::TextWriter::WriteLine)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c04118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::TextWriter*>(), { ::i2c::class_of<::System::IO::TextWriter*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextWriter.WriteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::TextWriter::*)(char16_t)>(&::System::IO::TextWriter::WriteAsync)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5c000d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::TextWriter*>(), { ::i2c::class_of<::System::IO::TextWriter*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextWriter.WriteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::TextWriter::*)(::StringW)>(&::System::IO::TextWriter::WriteAsync)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5c0062c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::TextWriter*>(), { ::i2c::class_of<::System::IO::TextWriter*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextWriter.WriteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::TextWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::IO::TextWriter::WriteAsync)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x5c00c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::TextWriter*>(), { ::i2c::class_of<::System::IO::TextWriter*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextWriter.FlushAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::TextWriter::*)()>(&::System::IO::TextWriter::FlushAsync)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5c010ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::TextWriter*>(), { ::i2c::class_of<::System::IO::TextWriter*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextWriter.Synchronized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::TextWriter* (*)(::System::IO::TextWriter*)>(&::System::IO::TextWriter::Synchronized)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5c041b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::TextWriter*>(), { "Synchronized", {}, { ::i2c::type_of<::System::IO::TextWriter*>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<char16_t>& System::IO::TextWriter::__cordl_internal_get_CoreNewLine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CoreNewLine;
}
constexpr ::ArrayW<char16_t> const& System::IO::TextWriter::__cordl_internal_get_CoreNewLine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CoreNewLine;
}
constexpr void System::IO::TextWriter::__cordl_internal_set_CoreNewLine(::ArrayW<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CoreNewLine = value;
}
constexpr ::StringW& System::IO::TextWriter::__cordl_internal_get_CoreNewLineStr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CoreNewLineStr;
}
constexpr ::StringW const& System::IO::TextWriter::__cordl_internal_get_CoreNewLineStr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CoreNewLineStr;
}
constexpr void System::IO::TextWriter::__cordl_internal_set_CoreNewLineStr(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CoreNewLineStr = value;
}
constexpr ::System::IFormatProvider*& System::IO::TextWriter::__cordl_internal_get__internalFormatProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____internalFormatProvider;
}
constexpr ::System::IFormatProvider* const& System::IO::TextWriter::__cordl_internal_get__internalFormatProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____internalFormatProvider;
}
constexpr void System::IO::TextWriter::__cordl_internal_set__internalFormatProvider(::System::IFormatProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____internalFormatProvider = value;
}
inline void System::IO::TextWriter::setStaticF_Null(::System::IO::TextWriter* value) {
  ::cordl_internals::setStaticField<::System::IO::TextWriter*, "Null", ::System::IO::TextWriter*>(std::forward<::System::IO::TextWriter*>(value));
}
inline ::System::IO::TextWriter* System::IO::TextWriter::getStaticF_Null() {
  return ::cordl_internals::getStaticField<::System::IO::TextWriter*, "Null", ::System::IO::TextWriter*>();
}
inline void System::IO::TextWriter::setStaticF_s_coreNewLine(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "s_coreNewLine", ::System::IO::TextWriter*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::IO::TextWriter::getStaticF_s_coreNewLine() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "s_coreNewLine", ::System::IO::TextWriter*>();
}
inline void System::IO::TextWriter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::TextWriter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::TextWriter::_ctor(::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::TextWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, formatProvider);
}
inline ::System::IFormatProvider* System::IO::TextWriter::get_FormatProvider() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::TextWriter*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::IFormatProvider*>(this, ___internal_method);
}
inline void System::IO::TextWriter::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::TextWriter*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::TextWriter::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::TextWriter*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::IO::TextWriter::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::TextWriter*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::ValueTask System::IO::TextWriter::DisposeAsync() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::TextWriter*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask>(this, ___internal_method);
}
inline void System::IO::TextWriter::Flush() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::TextWriter*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Text::Encoding* System::IO::TextWriter::get_Encoding() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::TextWriter*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(this, ___internal_method);
}
inline ::StringW System::IO::TextWriter::get_NewLine() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::TextWriter*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::IO::TextWriter::set_NewLine(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::TextWriter*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::IO::TextWriter::Write(char16_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::TextWriter*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::IO::TextWriter::Write(::ArrayW<char16_t> buffer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::TextWriter*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline void System::IO::TextWriter::Write(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::TextWriter*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void System::IO::TextWriter::Write(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::TextWriter*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::IO::TextWriter::Write(::StringW format, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::TextWriter*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, arg0, arg1, arg2);
}
inline void System::IO::TextWriter::WriteLine() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::TextWriter*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::TextWriter::WriteLine(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::TextWriter*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void System::IO::TextWriter::WriteLine(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::TextWriter*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::IO::TextWriter::WriteLine(::StringW format, ::System::Object* arg0) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::TextWriter*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, arg0);
}
inline void System::IO::TextWriter::WriteLine(::StringW format, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::TextWriter*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, arg0, arg1, arg2);
}
inline ::System::Threading::Tasks::Task* System::IO::TextWriter::WriteAsync(char16_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::TextWriter*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* System::IO::TextWriter::WriteAsync(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::TextWriter*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* System::IO::TextWriter::WriteAsync(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::TextWriter*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, buffer, index, count);
}
inline ::System::Threading::Tasks::Task* System::IO::TextWriter::FlushAsync() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::TextWriter*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::IO::TextWriter* System::IO::TextWriter::Synchronized(::System::IO::TextWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::TextWriter*>(), { "Synchronized", {}, { ::i2c::type_of<::System::IO::TextWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::TextWriter*>(nullptr, ___internal_method, writer);
}
inline ::System::IO::TextWriter* System::IO::TextWriter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::TextWriter*>());
}
inline ::System::IO::TextWriter* System::IO::TextWriter::New_ctor(::System::IFormatProvider* formatProvider) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::TextWriter*>(formatProvider));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::IO::TextWriter::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::IO::TextWriter::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IAsyncDisposable"
constexpr System::IO::TextWriter::operator ::System::IAsyncDisposable*() noexcept {
  return static_cast<::System::IAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IAsyncDisposable"
constexpr ::System::IAsyncDisposable* System::IO::TextWriter::i___System__IAsyncDisposable() noexcept {
  return static_cast<::System::IAsyncDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::IO::TextWriter::TextWriter() {}
