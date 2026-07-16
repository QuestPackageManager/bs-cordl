#pragma once
// IWYU pragma private; include "LiteNetLib/Utils/NetDataWriter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/zzzz__Array_def.hpp"
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.get_Capacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::LiteNetLib::Utils::NetDataWriter::*)()>(&::LiteNetLib::Utils::NetDataWriter::get_Capacity)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58ad4f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "get_Capacity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)()>(&::LiteNetLib::Utils::NetDataWriter::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x589e530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(bool)>(&::LiteNetLib::Utils::NetDataWriter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ad57c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(bool, int32_t)>(&::LiteNetLib::Utils::NetDataWriter::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x58ad510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.FromBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LiteNetLib::Utils::NetDataWriter* (*)(::ArrayW<uint8_t>, bool)>(&::LiteNetLib::Utils::NetDataWriter::FromBytes)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x58ad584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "FromBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.FromBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LiteNetLib::Utils::NetDataWriter* (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::LiteNetLib::Utils::NetDataWriter::FromBytes)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x58ad6a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(),
                                                             { "FromBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.FromString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LiteNetLib::Utils::NetDataWriter* (*)(::StringW)>(&::LiteNetLib::Utils::NetDataWriter::FromString)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x58a56ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "FromString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.ResizeIfNeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(int32_t)>(&::LiteNetLib::Utils::NetDataWriter::ResizeIfNeed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x58ad868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "ResizeIfNeed", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(int32_t)>(&::LiteNetLib::Utils::NetDataWriter::Reset)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58ad8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Reset", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)()>(&::LiteNetLib::Utils::NetDataWriter::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ad910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.CopyData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::LiteNetLib::Utils::NetDataWriter::*)()>(&::LiteNetLib::Utils::NetDataWriter::CopyData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x58ad918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "CopyData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.get_Data
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::LiteNetLib::Utils::NetDataWriter::*)()>(&::LiteNetLib::Utils::NetDataWriter::get_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ad990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "get_Data", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::LiteNetLib::Utils::NetDataWriter::*)()>(&::LiteNetLib::Utils::NetDataWriter::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ad998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "get_Length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.Put
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(float_t)>(&::LiteNetLib::Utils::NetDataWriter::Put)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x58ad9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Put", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.Put
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(double_t)>(&::LiteNetLib::Utils::NetDataWriter::Put)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x58ad9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Put", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.Put
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(int64_t)>(&::LiteNetLib::Utils::NetDataWriter::Put)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x58ada40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Put", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.Put
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(uint64_t)>(&::LiteNetLib::Utils::NetDataWriter::Put)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x58ada90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Put", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.Put
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(int32_t)>(&::LiteNetLib::Utils::NetDataWriter::Put)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x58adae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Put", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.Put
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(uint32_t)>(&::LiteNetLib::Utils::NetDataWriter::Put)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x58adb30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Put", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.Put
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(char16_t)>(&::LiteNetLib::Utils::NetDataWriter::Put)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x58adb80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Put", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.Put
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(uint16_t)>(&::LiteNetLib::Utils::NetDataWriter::Put)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x58adbd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Put", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.Put
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(int16_t)>(&::LiteNetLib::Utils::NetDataWriter::Put)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x58adc20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Put", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.Put
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(int8_t)>(&::LiteNetLib::Utils::NetDataWriter::Put)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x58adc70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Put", {}, { ::i2c::type_of<int8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.Put
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(uint8_t)>(&::LiteNetLib::Utils::NetDataWriter::Put)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x58adcd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Put", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.Put
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::LiteNetLib::Utils::NetDataWriter::Put)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x58ad738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Put", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.Put
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(::ArrayW<uint8_t>)>(&::LiteNetLib::Utils::NetDataWriter::Put)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x58ad634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Put", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.PutSBytesWithLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(::ArrayW<int8_t>, int32_t, int32_t)>(&::LiteNetLib::Utils::NetDataWriter::PutSBytesWithLength)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x58add40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(),
                                                             { "PutSBytesWithLength", {}, { ::i2c::type_of<::ArrayW<int8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.PutSBytesWithLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(::ArrayW<int8_t>)>(&::LiteNetLib::Utils::NetDataWriter::PutSBytesWithLength)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x58addcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "PutSBytesWithLength", {}, { ::i2c::type_of<::ArrayW<int8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.PutBytesWithLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::LiteNetLib::Utils::NetDataWriter::PutBytesWithLength)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x58ade5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(),
                                                             { "PutBytesWithLength", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.PutBytesWithLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(::ArrayW<uint8_t>)>(&::LiteNetLib::Utils::NetDataWriter::PutBytesWithLength)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x58adee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "PutBytesWithLength", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.Put
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(bool)>(&::LiteNetLib::Utils::NetDataWriter::Put)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x58adf78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Put", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.PutArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(::System::Array*, int32_t)>(&::LiteNetLib::Utils::NetDataWriter::PutArray)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x58adfe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "PutArray", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.PutArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(::ArrayW<uint8_t>)>(&::LiteNetLib::Utils::NetDataWriter::PutArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ae090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "PutArray", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.PutArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(::ArrayW<float_t>)>(&::LiteNetLib::Utils::NetDataWriter::PutArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ae098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "PutArray", {}, { ::i2c::type_of<::ArrayW<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.PutArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(::ArrayW<double_t>)>(&::LiteNetLib::Utils::NetDataWriter::PutArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ae0a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "PutArray", {}, { ::i2c::type_of<::ArrayW<double_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.PutArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(::ArrayW<int64_t>)>(&::LiteNetLib::Utils::NetDataWriter::PutArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ae0a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "PutArray", {}, { ::i2c::type_of<::ArrayW<int64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.PutArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(::ArrayW<uint64_t>)>(&::LiteNetLib::Utils::NetDataWriter::PutArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ae0b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "PutArray", {}, { ::i2c::type_of<::ArrayW<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.PutArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(::ArrayW<int32_t>)>(&::LiteNetLib::Utils::NetDataWriter::PutArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ae0b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "PutArray", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.PutArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(::ArrayW<uint32_t>)>(&::LiteNetLib::Utils::NetDataWriter::PutArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ae0c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "PutArray", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.PutArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(::ArrayW<uint16_t>)>(&::LiteNetLib::Utils::NetDataWriter::PutArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ae0c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "PutArray", {}, { ::i2c::type_of<::ArrayW<uint16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.PutArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(::ArrayW<int16_t>)>(&::LiteNetLib::Utils::NetDataWriter::PutArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ae0d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "PutArray", {}, { ::i2c::type_of<::ArrayW<int16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.PutArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(::ArrayW<bool>)>(&::LiteNetLib::Utils::NetDataWriter::PutArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ae0d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "PutArray", {}, { ::i2c::type_of<::ArrayW<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.PutArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(::ArrayW<::StringW>)>(&::LiteNetLib::Utils::NetDataWriter::PutArray)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x58ae0e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "PutArray", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.PutArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(::ArrayW<::StringW>, int32_t)>(&::LiteNetLib::Utils::NetDataWriter::PutArray)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x58ae168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "PutArray", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.Put
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(::System::Net::IPEndPoint*)>(&::LiteNetLib::Utils::NetDataWriter::Put)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x58ae2dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Put", {}, { ::i2c::type_of<::System::Net::IPEndPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.Put
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(::StringW)>(&::LiteNetLib::Utils::NetDataWriter::Put)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x58ad7a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Put", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetDataWriter.Put
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NetDataWriter::*)(::StringW, int32_t)>(&::LiteNetLib::Utils::NetDataWriter::Put)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x58ae204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Put", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& LiteNetLib::Utils::NetDataWriter::__cordl_internal_get__data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr ::ArrayW<uint8_t> const& LiteNetLib::Utils::NetDataWriter::__cordl_internal_get__data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr void LiteNetLib::Utils::NetDataWriter::__cordl_internal_set__data(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____data = value;
}
constexpr int32_t& LiteNetLib::Utils::NetDataWriter::__cordl_internal_get__position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position;
}
constexpr int32_t const& LiteNetLib::Utils::NetDataWriter::__cordl_internal_get__position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position;
}
constexpr void LiteNetLib::Utils::NetDataWriter::__cordl_internal_set__position(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____position = value;
}
constexpr bool& LiteNetLib::Utils::NetDataWriter::__cordl_internal_get__autoResize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoResize;
}
constexpr bool const& LiteNetLib::Utils::NetDataWriter::__cordl_internal_get__autoResize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoResize;
}
constexpr void LiteNetLib::Utils::NetDataWriter::__cordl_internal_set__autoResize(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____autoResize = value;
}
inline int32_t LiteNetLib::Utils::NetDataWriter::get_Capacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "get_Capacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void LiteNetLib::Utils::NetDataWriter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LiteNetLib::Utils::NetDataWriter::_ctor(bool autoResize) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, autoResize);
}
inline void LiteNetLib::Utils::NetDataWriter::_ctor(bool autoResize, int32_t initialSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, autoResize, initialSize);
}
inline ::LiteNetLib::Utils::NetDataWriter* LiteNetLib::Utils::NetDataWriter::FromBytes(::ArrayW<uint8_t> bytes, bool copy) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "FromBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::NetDataWriter*>(nullptr, ___internal_method, bytes, copy);
}
inline ::LiteNetLib::Utils::NetDataWriter* LiteNetLib::Utils::NetDataWriter::FromBytes(::ArrayW<uint8_t> bytes, int32_t offset, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "FromBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::NetDataWriter*>(nullptr, ___internal_method, bytes, offset, length);
}
inline ::LiteNetLib::Utils::NetDataWriter* LiteNetLib::Utils::NetDataWriter::FromString(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "FromString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::NetDataWriter*>(nullptr, ___internal_method, value);
}
inline void LiteNetLib::Utils::NetDataWriter::ResizeIfNeed(int32_t newSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "ResizeIfNeed", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newSize);
}
inline void LiteNetLib::Utils::NetDataWriter::Reset(int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Reset", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size);
}
inline void LiteNetLib::Utils::NetDataWriter::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> LiteNetLib::Utils::NetDataWriter::CopyData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "CopyData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> LiteNetLib::Utils::NetDataWriter::get_Data() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "get_Data", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline int32_t LiteNetLib::Utils::NetDataWriter::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void LiteNetLib::Utils::NetDataWriter::Put(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Put", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void LiteNetLib::Utils::NetDataWriter::Put(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Put", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void LiteNetLib::Utils::NetDataWriter::Put(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Put", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void LiteNetLib::Utils::NetDataWriter::Put(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Put", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void LiteNetLib::Utils::NetDataWriter::Put(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Put", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void LiteNetLib::Utils::NetDataWriter::Put(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Put", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void LiteNetLib::Utils::NetDataWriter::Put(char16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Put", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void LiteNetLib::Utils::NetDataWriter::Put(uint16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Put", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void LiteNetLib::Utils::NetDataWriter::Put(int16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Put", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void LiteNetLib::Utils::NetDataWriter::Put(int8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Put", {}, { ::i2c::type_of<int8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void LiteNetLib::Utils::NetDataWriter::Put(uint8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Put", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void LiteNetLib::Utils::NetDataWriter::Put(::ArrayW<uint8_t> data, int32_t offset, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Put", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, offset, length);
}
inline void LiteNetLib::Utils::NetDataWriter::Put(::ArrayW<uint8_t> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Put", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void LiteNetLib::Utils::NetDataWriter::PutSBytesWithLength(::ArrayW<int8_t> data, int32_t offset, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(),
                                                           { "PutSBytesWithLength", {}, { ::i2c::type_of<::ArrayW<int8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, offset, length);
}
inline void LiteNetLib::Utils::NetDataWriter::PutSBytesWithLength(::ArrayW<int8_t> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "PutSBytesWithLength", {}, { ::i2c::type_of<::ArrayW<int8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void LiteNetLib::Utils::NetDataWriter::PutBytesWithLength(::ArrayW<uint8_t> data, int32_t offset, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(),
                                                           { "PutBytesWithLength", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, offset, length);
}
inline void LiteNetLib::Utils::NetDataWriter::PutBytesWithLength(::ArrayW<uint8_t> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "PutBytesWithLength", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void LiteNetLib::Utils::NetDataWriter::Put(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Put", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void LiteNetLib::Utils::NetDataWriter::PutArray(::System::Array* arr, int32_t sz) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "PutArray", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arr, sz);
}
inline void LiteNetLib::Utils::NetDataWriter::PutArray(::ArrayW<uint8_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "PutArray", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void LiteNetLib::Utils::NetDataWriter::PutArray(::ArrayW<float_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "PutArray", {}, { ::i2c::type_of<::ArrayW<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void LiteNetLib::Utils::NetDataWriter::PutArray(::ArrayW<double_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "PutArray", {}, { ::i2c::type_of<::ArrayW<double_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void LiteNetLib::Utils::NetDataWriter::PutArray(::ArrayW<int64_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "PutArray", {}, { ::i2c::type_of<::ArrayW<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void LiteNetLib::Utils::NetDataWriter::PutArray(::ArrayW<uint64_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "PutArray", {}, { ::i2c::type_of<::ArrayW<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void LiteNetLib::Utils::NetDataWriter::PutArray(::ArrayW<int32_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "PutArray", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void LiteNetLib::Utils::NetDataWriter::PutArray(::ArrayW<uint32_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "PutArray", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void LiteNetLib::Utils::NetDataWriter::PutArray(::ArrayW<uint16_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "PutArray", {}, { ::i2c::type_of<::ArrayW<uint16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void LiteNetLib::Utils::NetDataWriter::PutArray(::ArrayW<int16_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "PutArray", {}, { ::i2c::type_of<::ArrayW<int16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void LiteNetLib::Utils::NetDataWriter::PutArray(::ArrayW<bool> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "PutArray", {}, { ::i2c::type_of<::ArrayW<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void LiteNetLib::Utils::NetDataWriter::PutArray(::ArrayW<::StringW> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "PutArray", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void LiteNetLib::Utils::NetDataWriter::PutArray(::ArrayW<::StringW> value, int32_t maxLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "PutArray", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, maxLength);
}
inline void LiteNetLib::Utils::NetDataWriter::Put(::System::Net::IPEndPoint* endPoint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Put", {}, { ::i2c::type_of<::System::Net::IPEndPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, endPoint);
}
inline void LiteNetLib::Utils::NetDataWriter::Put(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Put", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void LiteNetLib::Utils::NetDataWriter::Put(::StringW value, int32_t maxLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Put", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, maxLength);
}
template <typename T> inline void LiteNetLib::Utils::NetDataWriter::Put(T obj) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NetDataWriter*>(), { "Put", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline ::LiteNetLib::Utils::NetDataWriter* LiteNetLib::Utils::NetDataWriter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NetDataWriter*>());
}
inline ::LiteNetLib::Utils::NetDataWriter* LiteNetLib::Utils::NetDataWriter::New_ctor(bool autoResize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NetDataWriter*>(autoResize));
}
inline ::LiteNetLib::Utils::NetDataWriter* LiteNetLib::Utils::NetDataWriter::New_ctor(bool autoResize, int32_t initialSize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NetDataWriter*>(autoResize, initialSize));
}
// Ctor Parameters []
constexpr ::LiteNetLib::Utils::NetDataWriter::NetDataWriter() {}
