#pragma once
// IWYU pragma private; include "System\IO\BinaryWriter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__BinaryWriter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__Encoder_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/zzzz__IAsyncDisposable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::System::IO::BinaryWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BinaryWriter::*)()>(&::System::IO::BinaryWriter::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5c178d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BinaryWriter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BinaryWriter::*)(::System::IO::Stream*)>(&::System::IO::BinaryWriter::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c179d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BinaryWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BinaryWriter::*)(::System::IO::Stream*, ::System::Text::Encoding*)>(&::System::IO::BinaryWriter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c17bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::IO::BinaryWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BinaryWriter::*)(::System::IO::Stream*, ::System::Text::Encoding*, bool)>(&::System::IO::BinaryWriter::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5c17a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BinaryWriter*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryWriter.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BinaryWriter::*)()>(&::System::IO::BinaryWriter::Close)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c17bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryWriter*>(), { ::i2c::class_of<::System::IO::BinaryWriter*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryWriter.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BinaryWriter::*)(bool)>(&::System::IO::BinaryWriter::Dispose)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5c17bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryWriter*>(), { ::i2c::class_of<::System::IO::BinaryWriter*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryWriter.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BinaryWriter::*)()>(&::System::IO::BinaryWriter::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c17c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BinaryWriter*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryWriter.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BinaryWriter::*)()>(&::System::IO::BinaryWriter::Flush)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c17c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryWriter*>(), { ::i2c::class_of<::System::IO::BinaryWriter*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryWriter.DisposeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask (::System::IO::BinaryWriter::*)()>(&::System::IO::BinaryWriter::DisposeAsync)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5c17c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryWriter*>(), { ::i2c::class_of<::System::IO::BinaryWriter*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BinaryWriter::*)(bool)>(&::System::IO::BinaryWriter::Write)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c17e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryWriter*>(), { ::i2c::class_of<::System::IO::BinaryWriter*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BinaryWriter::*)(uint8_t)>(&::System::IO::BinaryWriter::Write)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c17e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryWriter*>(), { ::i2c::class_of<::System::IO::BinaryWriter*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BinaryWriter::*)(int8_t)>(&::System::IO::BinaryWriter::Write)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c17e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryWriter*>(), { ::i2c::class_of<::System::IO::BinaryWriter*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BinaryWriter::*)(::ArrayW<uint8_t>)>(&::System::IO::BinaryWriter::Write)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5c17eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryWriter*>(), { ::i2c::class_of<::System::IO::BinaryWriter*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BinaryWriter::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::IO::BinaryWriter::Write)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c17f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryWriter*>(), { ::i2c::class_of<::System::IO::BinaryWriter*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BinaryWriter::*)(char16_t)>(&::System::IO::BinaryWriter::Write)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5c17f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryWriter*>(), { ::i2c::class_of<::System::IO::BinaryWriter*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BinaryWriter::*)(::ArrayW<char16_t>)>(&::System::IO::BinaryWriter::Write)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5c18038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryWriter*>(), { ::i2c::class_of<::System::IO::BinaryWriter*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BinaryWriter::*)(double_t)>(&::System::IO::BinaryWriter::Write)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c180dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryWriter*>(), { ::i2c::class_of<::System::IO::BinaryWriter*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BinaryWriter::*)(int16_t)>(&::System::IO::BinaryWriter::Write)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c18124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryWriter*>(), { ::i2c::class_of<::System::IO::BinaryWriter*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BinaryWriter::*)(uint16_t)>(&::System::IO::BinaryWriter::Write)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c1818c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryWriter*>(), { ::i2c::class_of<::System::IO::BinaryWriter*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BinaryWriter::*)(int32_t)>(&::System::IO::BinaryWriter::Write)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c181f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryWriter*>(), { ::i2c::class_of<::System::IO::BinaryWriter*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BinaryWriter::*)(uint32_t)>(&::System::IO::BinaryWriter::Write)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c18294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryWriter*>(), { ::i2c::class_of<::System::IO::BinaryWriter*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BinaryWriter::*)(int64_t)>(&::System::IO::BinaryWriter::Write)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5c18334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryWriter*>(), { ::i2c::class_of<::System::IO::BinaryWriter*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BinaryWriter::*)(uint64_t)>(&::System::IO::BinaryWriter::Write)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5c18444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryWriter*>(), { ::i2c::class_of<::System::IO::BinaryWriter*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BinaryWriter::*)(float_t)>(&::System::IO::BinaryWriter::Write)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c18554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryWriter*>(), { ::i2c::class_of<::System::IO::BinaryWriter*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BinaryWriter::*)(::StringW)>(&::System::IO::BinaryWriter::Write)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5c1859c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryWriter*>(), { ::i2c::class_of<::System::IO::BinaryWriter*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryWriter.Write7BitEncodedInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BinaryWriter::*)(int32_t)>(&::System::IO::BinaryWriter::Write7BitEncodedInt)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c18834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BinaryWriter*>(), { "Write7BitEncodedInt", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& System::IO::BinaryWriter::__cordl_internal_get_OutStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OutStream;
}
constexpr ::System::IO::Stream* const& System::IO::BinaryWriter::__cordl_internal_get_OutStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OutStream;
}
constexpr void System::IO::BinaryWriter::__cordl_internal_set_OutStream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OutStream = value;
}
constexpr ::ArrayW<uint8_t>& System::IO::BinaryWriter::__cordl_internal_get__buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer;
}
constexpr ::ArrayW<uint8_t> const& System::IO::BinaryWriter::__cordl_internal_get__buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer;
}
constexpr void System::IO::BinaryWriter::__cordl_internal_set__buffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buffer = value;
}
constexpr ::System::Text::Encoding*& System::IO::BinaryWriter::__cordl_internal_get__encoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encoding;
}
constexpr ::System::Text::Encoding* const& System::IO::BinaryWriter::__cordl_internal_get__encoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encoding;
}
constexpr void System::IO::BinaryWriter::__cordl_internal_set__encoding(::System::Text::Encoding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____encoding = value;
}
constexpr ::System::Text::Encoder*& System::IO::BinaryWriter::__cordl_internal_get__encoder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encoder;
}
constexpr ::System::Text::Encoder* const& System::IO::BinaryWriter::__cordl_internal_get__encoder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encoder;
}
constexpr void System::IO::BinaryWriter::__cordl_internal_set__encoder(::System::Text::Encoder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____encoder = value;
}
constexpr bool& System::IO::BinaryWriter::__cordl_internal_get__leaveOpen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaveOpen;
}
constexpr bool const& System::IO::BinaryWriter::__cordl_internal_get__leaveOpen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaveOpen;
}
constexpr void System::IO::BinaryWriter::__cordl_internal_set__leaveOpen(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leaveOpen = value;
}
constexpr ::ArrayW<uint8_t>& System::IO::BinaryWriter::__cordl_internal_get__largeByteBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____largeByteBuffer;
}
constexpr ::ArrayW<uint8_t> const& System::IO::BinaryWriter::__cordl_internal_get__largeByteBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____largeByteBuffer;
}
constexpr void System::IO::BinaryWriter::__cordl_internal_set__largeByteBuffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____largeByteBuffer = value;
}
constexpr int32_t& System::IO::BinaryWriter::__cordl_internal_get__maxChars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxChars;
}
constexpr int32_t const& System::IO::BinaryWriter::__cordl_internal_get__maxChars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxChars;
}
constexpr void System::IO::BinaryWriter::__cordl_internal_set__maxChars(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxChars = value;
}
inline void System::IO::BinaryWriter::setStaticF_Null(::System::IO::BinaryWriter* value) {
  ::cordl_internals::setStaticField<::System::IO::BinaryWriter*, "Null", ::System::IO::BinaryWriter*>(std::forward<::System::IO::BinaryWriter*>(value));
}
inline ::System::IO::BinaryWriter* System::IO::BinaryWriter::getStaticF_Null() {
  return ::cordl_internals::getStaticField<::System::IO::BinaryWriter*, "Null", ::System::IO::BinaryWriter*>();
}
inline void System::IO::BinaryWriter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BinaryWriter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::BinaryWriter::_ctor(::System::IO::Stream* output) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BinaryWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
inline void System::IO::BinaryWriter::_ctor(::System::IO::Stream* output, ::System::Text::Encoding* encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::IO::BinaryWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output, encoding);
}
inline void System::IO::BinaryWriter::_ctor(::System::IO::Stream* output, ::System::Text::Encoding* encoding, bool leaveOpen) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BinaryWriter*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output, encoding, leaveOpen);
}
inline void System::IO::BinaryWriter::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryWriter*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::BinaryWriter::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryWriter*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::IO::BinaryWriter::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BinaryWriter*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::BinaryWriter::Flush() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryWriter*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::ValueTask System::IO::BinaryWriter::DisposeAsync() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryWriter*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask>(this, ___internal_method);
}
inline void System::IO::BinaryWriter::Write(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryWriter*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::IO::BinaryWriter::Write(uint8_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryWriter*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::IO::BinaryWriter::Write(int8_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryWriter*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::IO::BinaryWriter::Write(::ArrayW<uint8_t> buffer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryWriter*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline void System::IO::BinaryWriter::Write(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryWriter*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void System::IO::BinaryWriter::Write(char16_t ch) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryWriter*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ch);
}
inline void System::IO::BinaryWriter::Write(::ArrayW<char16_t> chars) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryWriter*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chars);
}
inline void System::IO::BinaryWriter::Write(double_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryWriter*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::IO::BinaryWriter::Write(int16_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryWriter*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::IO::BinaryWriter::Write(uint16_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryWriter*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::IO::BinaryWriter::Write(int32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryWriter*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::IO::BinaryWriter::Write(uint32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryWriter*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::IO::BinaryWriter::Write(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryWriter*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::IO::BinaryWriter::Write(uint64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryWriter*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::IO::BinaryWriter::Write(float_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryWriter*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::IO::BinaryWriter::Write(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryWriter*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::IO::BinaryWriter::Write7BitEncodedInt(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BinaryWriter*>(), { "Write7BitEncodedInt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::IO::BinaryWriter* System::IO::BinaryWriter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::BinaryWriter*>());
}
inline ::System::IO::BinaryWriter* System::IO::BinaryWriter::New_ctor(::System::IO::Stream* output) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::BinaryWriter*>(output));
}
inline ::System::IO::BinaryWriter* System::IO::BinaryWriter::New_ctor(::System::IO::Stream* output, ::System::Text::Encoding* encoding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::BinaryWriter*>(output, encoding));
}
inline ::System::IO::BinaryWriter* System::IO::BinaryWriter::New_ctor(::System::IO::Stream* output, ::System::Text::Encoding* encoding, bool leaveOpen) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::BinaryWriter*>(output, encoding, leaveOpen));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::IO::BinaryWriter::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::IO::BinaryWriter::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IAsyncDisposable"
constexpr System::IO::BinaryWriter::operator ::System::IAsyncDisposable*() noexcept {
  return static_cast<::System::IAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IAsyncDisposable"
constexpr ::System::IAsyncDisposable* System::IO::BinaryWriter::i___System__IAsyncDisposable() noexcept {
  return static_cast<::System::IAsyncDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::IO::BinaryWriter::BinaryWriter() {}
