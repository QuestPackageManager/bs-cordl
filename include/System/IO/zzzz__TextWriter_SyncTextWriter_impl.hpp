#pragma once
// IWYU pragma private; include "System\IO\TextWriter_SyncTextWriter.hpp"
#include "System/IO/zzzz__TextWriter_impl.hpp"
#include "System/IO/zzzz__TextWriter_SyncTextWriter_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextWriter_SyncTextWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextWriter_SyncTextWriter::*)(::System::IO::TextWriter*)>(&::GlobalNamespace::TextWriter_SyncTextWriter::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c04270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::TextWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextWriter_SyncTextWriter.get_Encoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (::GlobalNamespace::TextWriter_SyncTextWriter::*)()>(&::GlobalNamespace::TextWriter_SyncTextWriter::get_Encoding)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c04440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextWriter_SyncTextWriter.get_FormatProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IFormatProvider* (::GlobalNamespace::TextWriter_SyncTextWriter::*)()>(
    &::GlobalNamespace::TextWriter_SyncTextWriter::get_FormatProvider)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c04460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextWriter_SyncTextWriter.get_NewLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::TextWriter_SyncTextWriter::*)()>(&::GlobalNamespace::TextWriter_SyncTextWriter::get_NewLine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c0447c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextWriter_SyncTextWriter.set_NewLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextWriter_SyncTextWriter::*)(::StringW)>(&::GlobalNamespace::TextWriter_SyncTextWriter::set_NewLine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c0449c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextWriter_SyncTextWriter.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextWriter_SyncTextWriter::*)()>(&::GlobalNamespace::TextWriter_SyncTextWriter::Close)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c044bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextWriter_SyncTextWriter.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextWriter_SyncTextWriter::*)(bool)>(&::GlobalNamespace::TextWriter_SyncTextWriter::Dispose)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5c044d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextWriter_SyncTextWriter.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextWriter_SyncTextWriter::*)()>(&::GlobalNamespace::TextWriter_SyncTextWriter::Flush)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c0459c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextWriter_SyncTextWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextWriter_SyncTextWriter::*)(char16_t)>(&::GlobalNamespace::TextWriter_SyncTextWriter::Write)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c045b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextWriter_SyncTextWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextWriter_SyncTextWriter::*)(::ArrayW<char16_t>)>(&::GlobalNamespace::TextWriter_SyncTextWriter::Write)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c045d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextWriter_SyncTextWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextWriter_SyncTextWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(
    &::GlobalNamespace::TextWriter_SyncTextWriter::Write)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c045f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextWriter_SyncTextWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextWriter_SyncTextWriter::*)(::StringW)>(&::GlobalNamespace::TextWriter_SyncTextWriter::Write)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c04618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextWriter_SyncTextWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextWriter_SyncTextWriter::*)(::StringW, ::System::Object*, ::System::Object*, ::System::Object*)>(
    &::GlobalNamespace::TextWriter_SyncTextWriter::Write)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c04638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextWriter_SyncTextWriter.WriteLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextWriter_SyncTextWriter::*)()>(&::GlobalNamespace::TextWriter_SyncTextWriter::WriteLine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c04658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextWriter_SyncTextWriter.WriteLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextWriter_SyncTextWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(
    &::GlobalNamespace::TextWriter_SyncTextWriter::WriteLine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c04678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextWriter_SyncTextWriter.WriteLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextWriter_SyncTextWriter::*)(::StringW)>(&::GlobalNamespace::TextWriter_SyncTextWriter::WriteLine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c04698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextWriter_SyncTextWriter.WriteLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextWriter_SyncTextWriter::*)(::StringW, ::System::Object*)>(
    &::GlobalNamespace::TextWriter_SyncTextWriter::WriteLine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c046b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextWriter_SyncTextWriter.WriteLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextWriter_SyncTextWriter::*)(::StringW, ::System::Object*, ::System::Object*, ::System::Object*)>(
    &::GlobalNamespace::TextWriter_SyncTextWriter::WriteLine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c046d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextWriter_SyncTextWriter.WriteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::TextWriter_SyncTextWriter::*)(char16_t)>(
    &::GlobalNamespace::TextWriter_SyncTextWriter::WriteAsync)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5c046f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextWriter_SyncTextWriter.WriteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::TextWriter_SyncTextWriter::*)(::StringW)>(
    &::GlobalNamespace::TextWriter_SyncTextWriter::WriteAsync)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5c047b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextWriter_SyncTextWriter.WriteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::TextWriter_SyncTextWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(
    &::GlobalNamespace::TextWriter_SyncTextWriter::WriteAsync)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5c04870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextWriter_SyncTextWriter.FlushAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::TextWriter_SyncTextWriter::*)()>(
    &::GlobalNamespace::TextWriter_SyncTextWriter::FlushAsync)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5c04944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 29 }));
    return ___internal_method;
  }
};
constexpr ::System::IO::TextWriter*& GlobalNamespace::TextWriter_SyncTextWriter::__cordl_internal_get__out() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____out;
}
constexpr ::System::IO::TextWriter* const& GlobalNamespace::TextWriter_SyncTextWriter::__cordl_internal_get__out() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____out;
}
constexpr void GlobalNamespace::TextWriter_SyncTextWriter::__cordl_internal_set__out(::System::IO::TextWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____out = value;
}
inline void GlobalNamespace::TextWriter_SyncTextWriter::_ctor(::System::IO::TextWriter* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::TextWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline ::System::Text::Encoding* GlobalNamespace::TextWriter_SyncTextWriter::get_Encoding() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(this, ___internal_method);
}
inline ::System::IFormatProvider* GlobalNamespace::TextWriter_SyncTextWriter::get_FormatProvider() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::IFormatProvider*>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::TextWriter_SyncTextWriter::get_NewLine() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::TextWriter_SyncTextWriter::set_NewLine(::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TextWriter_SyncTextWriter::Close() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextWriter_SyncTextWriter::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::TextWriter_SyncTextWriter::Flush() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextWriter_SyncTextWriter::Write(char16_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TextWriter_SyncTextWriter::Write(::ArrayW<char16_t> buffer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline void GlobalNamespace::TextWriter_SyncTextWriter::Write(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void GlobalNamespace::TextWriter_SyncTextWriter::Write(::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TextWriter_SyncTextWriter::Write(::StringW format, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, arg0, arg1, arg2);
}
inline void GlobalNamespace::TextWriter_SyncTextWriter::WriteLine() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextWriter_SyncTextWriter::WriteLine(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void GlobalNamespace::TextWriter_SyncTextWriter::WriteLine(::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TextWriter_SyncTextWriter::WriteLine(::StringW format, ::System::Object* arg0) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, arg0);
}
inline void GlobalNamespace::TextWriter_SyncTextWriter::WriteLine(::StringW format, ::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, arg0, arg1, arg2);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::TextWriter_SyncTextWriter::WriteAsync(char16_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::TextWriter_SyncTextWriter::WriteAsync(::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::TextWriter_SyncTextWriter::WriteAsync(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, buffer, index, count);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::TextWriter_SyncTextWriter::FlushAsync() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextWriter_SyncTextWriter*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::GlobalNamespace::TextWriter_SyncTextWriter* GlobalNamespace::TextWriter_SyncTextWriter::New_ctor(::System::IO::TextWriter* t) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TextWriter_SyncTextWriter*>(t));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::TextWriter_SyncTextWriter::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::TextWriter_SyncTextWriter::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextWriter_SyncTextWriter::TextWriter_SyncTextWriter() {}
