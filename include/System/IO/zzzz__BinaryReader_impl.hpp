#pragma once
// IWYU pragma private; include "System/IO/BinaryReader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__Decoder_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::System::IO::BinaryReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BinaryReader::*)(::System::IO::Stream*)>(&::System::IO::BinaryReader::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c13de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BinaryReader*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BinaryReader::*)(::System::IO::Stream*, ::System::Text::Encoding*)>(&::System::IO::BinaryReader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c140c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::IO::BinaryReader*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BinaryReader::*)(::System::IO::Stream*, ::System::Text::Encoding*, bool)>(&::System::IO::BinaryReader::_ctor)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5c13e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BinaryReader*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryReader.get_BaseStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::IO::BinaryReader::*)()>(&::System::IO::BinaryReader::get_BaseStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c140d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryReader*>(), { ::i2c::class_of<::System::IO::BinaryReader*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryReader.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BinaryReader::*)()>(&::System::IO::BinaryReader::Close)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c140d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryReader*>(), { ::i2c::class_of<::System::IO::BinaryReader*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryReader.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BinaryReader::*)(bool)>(&::System::IO::BinaryReader::Dispose)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5c140e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryReader*>(), { ::i2c::class_of<::System::IO::BinaryReader*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryReader.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BinaryReader::*)()>(&::System::IO::BinaryReader::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c1412c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BinaryReader*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryReader.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::BinaryReader::*)()>(&::System::IO::BinaryReader::Read)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c1413c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryReader*>(), { ::i2c::class_of<::System::IO::BinaryReader*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryReader.ReadBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::BinaryReader::*)()>(&::System::IO::BinaryReader::ReadBoolean)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c143c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryReader*>(), { ::i2c::class_of<::System::IO::BinaryReader*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryReader.ReadByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::System::IO::BinaryReader::*)()>(&::System::IO::BinaryReader::ReadByte)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5c1440c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryReader*>(), { ::i2c::class_of<::System::IO::BinaryReader*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryReader.ReadSByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (::System::IO::BinaryReader::*)()>(&::System::IO::BinaryReader::ReadSByte)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5c14440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryReader*>(), { ::i2c::class_of<::System::IO::BinaryReader*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryReader.ReadChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::IO::BinaryReader::*)()>(&::System::IO::BinaryReader::ReadChar)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c14480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryReader*>(), { ::i2c::class_of<::System::IO::BinaryReader*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryReader.ReadInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::System::IO::BinaryReader::*)()>(&::System::IO::BinaryReader::ReadInt16)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c144a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryReader*>(), { ::i2c::class_of<::System::IO::BinaryReader*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryReader.ReadUInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::System::IO::BinaryReader::*)()>(&::System::IO::BinaryReader::ReadUInt16)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c144ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryReader*>(), { ::i2c::class_of<::System::IO::BinaryReader*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryReader.ReadInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::BinaryReader::*)()>(&::System::IO::BinaryReader::ReadInt32)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5c14534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryReader*>(), { ::i2c::class_of<::System::IO::BinaryReader*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryReader.ReadUInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::System::IO::BinaryReader::*)()>(&::System::IO::BinaryReader::ReadUInt32)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c1462c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryReader*>(), { ::i2c::class_of<::System::IO::BinaryReader*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryReader.ReadInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::IO::BinaryReader::*)()>(&::System::IO::BinaryReader::ReadInt64)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c1469c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryReader*>(), { ::i2c::class_of<::System::IO::BinaryReader*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryReader.ReadUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::System::IO::BinaryReader::*)()>(&::System::IO::BinaryReader::ReadUInt64)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c1474c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryReader*>(), { ::i2c::class_of<::System::IO::BinaryReader*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryReader.ReadSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::IO::BinaryReader::*)()>(&::System::IO::BinaryReader::ReadSingle)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5c147fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryReader*>(), { ::i2c::class_of<::System::IO::BinaryReader*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryReader.ReadDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::IO::BinaryReader::*)()>(&::System::IO::BinaryReader::ReadDouble)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5c14840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryReader*>(), { ::i2c::class_of<::System::IO::BinaryReader*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryReader.ReadDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::System::IO::BinaryReader::*)()>(&::System::IO::BinaryReader::ReadDecimal)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5c14884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryReader*>(), { ::i2c::class_of<::System::IO::BinaryReader*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryReader.ReadString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::BinaryReader::*)()>(&::System::IO::BinaryReader::ReadString)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x5c14a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryReader*>(), { ::i2c::class_of<::System::IO::BinaryReader*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryReader.InternalReadChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::BinaryReader::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::IO::BinaryReader::InternalReadChars)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x5c14d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BinaryReader*>(),
                                                             { "InternalReadChars", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryReader.InternalReadOneChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::BinaryReader::*)()>(&::System::IO::BinaryReader::InternalReadOneChar)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x5c14150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BinaryReader*>(), { "InternalReadOneChar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryReader.ReadChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<char16_t> (::System::IO::BinaryReader::*)(int32_t)>(&::System::IO::BinaryReader::ReadChars)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5c1508c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryReader*>(), { ::i2c::class_of<::System::IO::BinaryReader*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryReader.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::BinaryReader::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::IO::BinaryReader::Read)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5c151e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryReader*>(), { ::i2c::class_of<::System::IO::BinaryReader*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryReader.ReadBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::IO::BinaryReader::*)(int32_t)>(&::System::IO::BinaryReader::ReadBytes)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5c15334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryReader*>(), { ::i2c::class_of<::System::IO::BinaryReader*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryReader.FillBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::BinaryReader::*)(int32_t)>(&::System::IO::BinaryReader::FillBuffer)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5c154bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::BinaryReader*>(), { ::i2c::class_of<::System::IO::BinaryReader*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BinaryReader.Read7BitEncodedInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::BinaryReader::*)()>(&::System::IO::BinaryReader::Read7BitEncodedInt)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5c14cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BinaryReader*>(), { "Read7BitEncodedInt", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& System::IO::BinaryReader::__cordl_internal_get_m_stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_stream;
}
constexpr ::System::IO::Stream* const& System::IO::BinaryReader::__cordl_internal_get_m_stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_stream;
}
constexpr void System::IO::BinaryReader::__cordl_internal_set_m_stream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_stream = value;
}
constexpr ::ArrayW<uint8_t>& System::IO::BinaryReader::__cordl_internal_get_m_buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_buffer;
}
constexpr ::ArrayW<uint8_t> const& System::IO::BinaryReader::__cordl_internal_get_m_buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_buffer;
}
constexpr void System::IO::BinaryReader::__cordl_internal_set_m_buffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_buffer = value;
}
constexpr ::System::Text::Decoder*& System::IO::BinaryReader::__cordl_internal_get_m_decoder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_decoder;
}
constexpr ::System::Text::Decoder* const& System::IO::BinaryReader::__cordl_internal_get_m_decoder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_decoder;
}
constexpr void System::IO::BinaryReader::__cordl_internal_set_m_decoder(::System::Text::Decoder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_decoder = value;
}
constexpr ::ArrayW<uint8_t>& System::IO::BinaryReader::__cordl_internal_get_m_charBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_charBytes;
}
constexpr ::ArrayW<uint8_t> const& System::IO::BinaryReader::__cordl_internal_get_m_charBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_charBytes;
}
constexpr void System::IO::BinaryReader::__cordl_internal_set_m_charBytes(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_charBytes = value;
}
constexpr ::ArrayW<char16_t>& System::IO::BinaryReader::__cordl_internal_get_m_singleChar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_singleChar;
}
constexpr ::ArrayW<char16_t> const& System::IO::BinaryReader::__cordl_internal_get_m_singleChar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_singleChar;
}
constexpr void System::IO::BinaryReader::__cordl_internal_set_m_singleChar(::ArrayW<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_singleChar = value;
}
constexpr ::ArrayW<char16_t>& System::IO::BinaryReader::__cordl_internal_get_m_charBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_charBuffer;
}
constexpr ::ArrayW<char16_t> const& System::IO::BinaryReader::__cordl_internal_get_m_charBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_charBuffer;
}
constexpr void System::IO::BinaryReader::__cordl_internal_set_m_charBuffer(::ArrayW<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_charBuffer = value;
}
constexpr int32_t& System::IO::BinaryReader::__cordl_internal_get_m_maxCharsSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_maxCharsSize;
}
constexpr int32_t const& System::IO::BinaryReader::__cordl_internal_get_m_maxCharsSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_maxCharsSize;
}
constexpr void System::IO::BinaryReader::__cordl_internal_set_m_maxCharsSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_maxCharsSize = value;
}
constexpr bool& System::IO::BinaryReader::__cordl_internal_get_m_2BytesPerChar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_2BytesPerChar;
}
constexpr bool const& System::IO::BinaryReader::__cordl_internal_get_m_2BytesPerChar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_2BytesPerChar;
}
constexpr void System::IO::BinaryReader::__cordl_internal_set_m_2BytesPerChar(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_2BytesPerChar = value;
}
constexpr bool& System::IO::BinaryReader::__cordl_internal_get_m_isMemoryStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isMemoryStream;
}
constexpr bool const& System::IO::BinaryReader::__cordl_internal_get_m_isMemoryStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isMemoryStream;
}
constexpr void System::IO::BinaryReader::__cordl_internal_set_m_isMemoryStream(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_isMemoryStream = value;
}
constexpr bool& System::IO::BinaryReader::__cordl_internal_get_m_leaveOpen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_leaveOpen;
}
constexpr bool const& System::IO::BinaryReader::__cordl_internal_get_m_leaveOpen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_leaveOpen;
}
constexpr void System::IO::BinaryReader::__cordl_internal_set_m_leaveOpen(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_leaveOpen = value;
}
inline void System::IO::BinaryReader::_ctor(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BinaryReader*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void System::IO::BinaryReader::_ctor(::System::IO::Stream* input, ::System::Text::Encoding* encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::IO::BinaryReader*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, encoding);
}
inline void System::IO::BinaryReader::_ctor(::System::IO::Stream* input, ::System::Text::Encoding* encoding, bool leaveOpen) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BinaryReader*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, encoding, leaveOpen);
}
inline ::System::IO::Stream* System::IO::BinaryReader::get_BaseStream() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryReader*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline void System::IO::BinaryReader::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryReader*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::BinaryReader::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryReader*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::IO::BinaryReader::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BinaryReader*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::IO::BinaryReader::Read() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryReader*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::IO::BinaryReader::ReadBoolean() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryReader*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline uint8_t System::IO::BinaryReader::ReadByte() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryReader*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline int8_t System::IO::BinaryReader::ReadSByte() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryReader*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(this, ___internal_method);
}
inline char16_t System::IO::BinaryReader::ReadChar() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryReader*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline int16_t System::IO::BinaryReader::ReadInt16() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryReader*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(this, ___internal_method);
}
inline uint16_t System::IO::BinaryReader::ReadUInt16() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryReader*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline int32_t System::IO::BinaryReader::ReadInt32() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryReader*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline uint32_t System::IO::BinaryReader::ReadUInt32() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryReader*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline int64_t System::IO::BinaryReader::ReadInt64() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryReader*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline uint64_t System::IO::BinaryReader::ReadUInt64() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryReader*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline float_t System::IO::BinaryReader::ReadSingle() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryReader*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline double_t System::IO::BinaryReader::ReadDouble() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryReader*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline ::System::Decimal System::IO::BinaryReader::ReadDecimal() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryReader*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(this, ___internal_method);
}
inline ::StringW System::IO::BinaryReader::ReadString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryReader*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::IO::BinaryReader::InternalReadChars(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BinaryReader*>(),
                                                           { "InternalReadChars", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, index, count);
}
inline int32_t System::IO::BinaryReader::InternalReadOneChar() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BinaryReader*>(), { "InternalReadOneChar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<char16_t> System::IO::BinaryReader::ReadChars(int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryReader*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>>(this, ___internal_method, count);
}
inline int32_t System::IO::BinaryReader::Read(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryReader*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, index, count);
}
inline ::ArrayW<uint8_t> System::IO::BinaryReader::ReadBytes(int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryReader*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, count);
}
inline void System::IO::BinaryReader::FillBuffer(int32_t numBytes) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::BinaryReader*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numBytes);
}
inline int32_t System::IO::BinaryReader::Read7BitEncodedInt() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::BinaryReader*>(), { "Read7BitEncodedInt", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::IO::BinaryReader* System::IO::BinaryReader::New_ctor(::System::IO::Stream* input) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::BinaryReader*>(input));
}
inline ::System::IO::BinaryReader* System::IO::BinaryReader::New_ctor(::System::IO::Stream* input, ::System::Text::Encoding* encoding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::BinaryReader*>(input, encoding));
}
inline ::System::IO::BinaryReader* System::IO::BinaryReader::New_ctor(::System::IO::Stream* input, ::System::Text::Encoding* encoding, bool leaveOpen) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::BinaryReader*>(input, encoding, leaveOpen));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::IO::BinaryReader::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::IO::BinaryReader::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::IO::BinaryReader::BinaryReader() {}
