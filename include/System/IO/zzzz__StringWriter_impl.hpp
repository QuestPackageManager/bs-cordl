#pragma once
// IWYU pragma private; include "System/IO/StringWriter.hpp"
#include "System/IO/zzzz__TextWriter_impl.hpp"
#include "System/IO/zzzz__StringWriter_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Text/zzzz__UnicodeEncoding_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
//  Writing Method size for method: ::System::IO::StringWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StringWriter::*)()>(&::System::IO::StringWriter::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5c16bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StringWriter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StringWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StringWriter::*)(::System::IFormatProvider*)>(&::System::IO::StringWriter::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c16d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StringWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StringWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StringWriter::*)(::System::Text::StringBuilder*)>(&::System::IO::StringWriter::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5c16dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StringWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StringWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StringWriter::*)(::System::Text::StringBuilder*, ::System::IFormatProvider*)>(&::System::IO::StringWriter::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5c16c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::IO::StringWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StringWriter.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StringWriter::*)()>(&::System::IO::StringWriter::Close)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c16e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::StringWriter*>(), { ::i2c::class_of<::System::IO::StringWriter*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StringWriter.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StringWriter::*)(bool)>(&::System::IO::StringWriter::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c16e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::StringWriter*>(), { ::i2c::class_of<::System::IO::StringWriter*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StringWriter.get_Encoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (::System::IO::StringWriter::*)()>(&::System::IO::StringWriter::get_Encoding)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5c16e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::StringWriter*>(), { ::i2c::class_of<::System::IO::StringWriter*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StringWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StringWriter::*)(char16_t)>(&::System::IO::StringWriter::Write)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c16f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::StringWriter*>(), { ::i2c::class_of<::System::IO::StringWriter*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StringWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StringWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::IO::StringWriter::Write)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5c16f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::StringWriter*>(), { ::i2c::class_of<::System::IO::StringWriter*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StringWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StringWriter::*)(::StringW)>(&::System::IO::StringWriter::Write)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5c170a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::StringWriter*>(), { ::i2c::class_of<::System::IO::StringWriter*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StringWriter.WriteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::StringWriter::*)(char16_t)>(&::System::IO::StringWriter::WriteAsync)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5c170d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::StringWriter*>(), { ::i2c::class_of<::System::IO::StringWriter*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StringWriter.WriteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::StringWriter::*)(::StringW)>(&::System::IO::StringWriter::WriteAsync)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5c17190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::StringWriter*>(), { ::i2c::class_of<::System::IO::StringWriter*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StringWriter.WriteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::StringWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(
    &::System::IO::StringWriter::WriteAsync)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5c1724c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::StringWriter*>(), { ::i2c::class_of<::System::IO::StringWriter*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StringWriter.FlushAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::StringWriter::*)()>(&::System::IO::StringWriter::FlushAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5c17320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::StringWriter*>(), { ::i2c::class_of<::System::IO::StringWriter*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StringWriter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::StringWriter::*)()>(&::System::IO::StringWriter::ToString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c173b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::StringWriter*>(), { ::i2c::class_of<::System::IO::StringWriter*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::System::Text::StringBuilder*& System::IO::StringWriter::__cordl_internal_get__sb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sb;
}
constexpr ::System::Text::StringBuilder* const& System::IO::StringWriter::__cordl_internal_get__sb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sb;
}
constexpr void System::IO::StringWriter::__cordl_internal_set__sb(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sb = value;
}
constexpr bool& System::IO::StringWriter::__cordl_internal_get__isOpen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isOpen;
}
constexpr bool const& System::IO::StringWriter::__cordl_internal_get__isOpen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isOpen;
}
constexpr void System::IO::StringWriter::__cordl_internal_set__isOpen(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isOpen = value;
}
inline void System::IO::StringWriter::setStaticF_m_encoding(::System::Text::UnicodeEncoding* value) {
  ::cordl_internals::setStaticField<::System::Text::UnicodeEncoding*, "m_encoding", ::System::IO::StringWriter*>(std::forward<::System::Text::UnicodeEncoding*>(value));
}
inline ::System::Text::UnicodeEncoding* System::IO::StringWriter::getStaticF_m_encoding() {
  return ::cordl_internals::getStaticField<::System::Text::UnicodeEncoding*, "m_encoding", ::System::IO::StringWriter*>();
}
inline void System::IO::StringWriter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StringWriter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::StringWriter::_ctor(::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StringWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, formatProvider);
}
inline void System::IO::StringWriter::_ctor(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StringWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sb);
}
inline void System::IO::StringWriter::_ctor(::System::Text::StringBuilder* sb, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::IO::StringWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sb, formatProvider);
}
inline void System::IO::StringWriter::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::StringWriter*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::StringWriter::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::StringWriter*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::System::Text::Encoding* System::IO::StringWriter::get_Encoding() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::StringWriter*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(this, ___internal_method);
}
inline void System::IO::StringWriter::Write(char16_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::StringWriter*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::IO::StringWriter::Write(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::StringWriter*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void System::IO::StringWriter::Write(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::StringWriter*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* System::IO::StringWriter::WriteAsync(char16_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::StringWriter*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* System::IO::StringWriter::WriteAsync(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::StringWriter*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* System::IO::StringWriter::WriteAsync(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::StringWriter*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, buffer, index, count);
}
inline ::System::Threading::Tasks::Task* System::IO::StringWriter::FlushAsync() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::StringWriter*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::StringW System::IO::StringWriter::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::StringWriter*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::IO::StringWriter* System::IO::StringWriter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::StringWriter*>());
}
inline ::System::IO::StringWriter* System::IO::StringWriter::New_ctor(::System::IFormatProvider* formatProvider) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::StringWriter*>(formatProvider));
}
inline ::System::IO::StringWriter* System::IO::StringWriter::New_ctor(::System::Text::StringBuilder* sb) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::StringWriter*>(sb));
}
inline ::System::IO::StringWriter* System::IO::StringWriter::New_ctor(::System::Text::StringBuilder* sb, ::System::IFormatProvider* formatProvider) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::StringWriter*>(sb, formatProvider));
}
// Ctor Parameters []
constexpr ::System::IO::StringWriter::StringWriter() {}
