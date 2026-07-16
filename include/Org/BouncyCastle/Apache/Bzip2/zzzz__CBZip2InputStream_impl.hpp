#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Apache/Bzip2/CBZip2InputStream.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "Org/BouncyCastle/Apache/Bzip2/zzzz__CBZip2InputStream_def.hpp"
#include "Org/BouncyCastle/Apache/Bzip2/zzzz__CRC_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.Cadvise
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::Cadvise)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36555c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "Cadvise", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.CompressedStreamEOF
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::CompressedStreamEOF)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36555c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "CompressedStreamEOF", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.MakeMaps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::*)()>(&::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::MakeMaps)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x36555c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "MakeMaps", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x3655654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.InitIntArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::ArrayW<int32_t>> (*)(int32_t, int32_t)>(&::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::InitIntArray)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3655830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "InitIntArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.InitCharArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::ArrayW<char16_t>> (*)(int32_t, int32_t)>(&::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::InitCharArray)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3655d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(),
                                                                                           { "InitCharArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.ReadByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::*)()>(&::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::ReadByte)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3655de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::*)()>(&::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::Initialize)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x365590c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.InitBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::*)()>(&::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::InitBlock)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x36559fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "InitBlock", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.EndBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::*)()>(&::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::EndBlock)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3656cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "EndBlock", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.Complete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::*)()>(&::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::Complete)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x36562b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "Complete", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.BlockOverrun
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::BlockOverrun)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3656d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "BlockOverrun", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.BadBlockHeader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::BadBlockHeader)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36562d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "BadBlockHeader", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.CrcError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::CrcError)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3656d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "CrcError", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.BsFinishedWithStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::*)()>(
    &::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::BsFinishedWithStream)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x365612c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "BsFinishedWithStream", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.BsSetStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::BsSetStream)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3655900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "BsSetStream", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.BsR
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::*)(int32_t)>(&::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::BsR)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x36562e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "BsR", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.BsGetUChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::*)()>(&::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::BsGetUChar)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3656118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "BsGetUChar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.BsGetint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::*)()>(&::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::BsGetint)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3656d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "BsGetint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.BsGetIntVS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::*)(int32_t)>(
    &::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::BsGetIntVS)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3656d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "BsGetIntVS", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.BsGetInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::*)()>(&::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::BsGetInt32)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36562dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "BsGetInt32", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.HbCreateDecodeTables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::*)(
    ::ArrayW<int32_t>, ::ArrayW<int32_t>, ::ArrayW<int32_t>, ::ArrayW<char16_t>, int32_t, int32_t, int32_t)>(&::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::HbCreateDecodeTables)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x3656d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(),
                                                             { "HbCreateDecodeTables",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(),
                                                                 ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.RecvDecodingTables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::*)()>(&::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::RecvDecodingTables)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x3656fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "RecvDecodingTables", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.GetAndMoveToFrontDecode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::*)()>(
    &::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::GetAndMoveToFrontDecode)> {
  constexpr static std::size_t size = 0x904;
  constexpr static std::size_t addrs = 0x36563ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "GetAndMoveToFrontDecode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.SetupBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::*)()>(&::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::SetupBlock)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x3655b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "SetupBlock", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.SetupRandPartA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::*)()>(&::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::SetupRandPartA)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x3657478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "SetupRandPartA", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.SetupNoRandPartA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::*)()>(&::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::SetupNoRandPartA)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x36575dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "SetupNoRandPartA", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.SetupRandPartB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::*)()>(&::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::SetupRandPartB)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x3655e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "SetupRandPartB", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.SetupRandPartC
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::*)()>(&::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::SetupRandPartC)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3655fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "SetupRandPartC", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.SetupNoRandPartB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::*)()>(&::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::SetupNoRandPartB)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x365600c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "SetupNoRandPartB", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.SetupNoRandPartC
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::*)()>(&::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::SetupNoRandPartC)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x36560b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "SetupNoRandPartC", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.SetDecompressStructureSizes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::*)(int32_t)>(
    &::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::SetDecompressStructureSizes)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3656210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "SetDecompressStructureSizes", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::*)()>(&::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::Flush)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x365773c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::Read)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3657740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.Seek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::*)(int64_t, ::System::IO::SeekOrigin)>(
    &::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::Seek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36577e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.SetLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::*)(int64_t)>(&::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::SetLength)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36577f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::Write)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36577f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.get_CanRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::*)()>(&::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36577f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.get_CanSeek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::*)()>(&::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3657800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.get_CanWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::*)()>(&::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3657808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::*)()>(&::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3657810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.get_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::*)()>(&::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::get_Position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3657818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream.set_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::*)(int64_t)>(
    &::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::set_Position)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3657820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), 14 }));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_last() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___last;
}
constexpr int32_t const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_last() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___last;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_last(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___last = value;
}
constexpr int32_t& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_origPtr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___origPtr;
}
constexpr int32_t const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_origPtr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___origPtr;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_origPtr(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___origPtr = value;
}
constexpr int32_t& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_blockSize100k() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockSize100k;
}
constexpr int32_t const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_blockSize100k() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockSize100k;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_blockSize100k(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blockSize100k = value;
}
constexpr bool& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_blockRandomised() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockRandomised;
}
constexpr bool const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_blockRandomised() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockRandomised;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_blockRandomised(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blockRandomised = value;
}
constexpr int32_t& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_bsBuff() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bsBuff;
}
constexpr int32_t const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_bsBuff() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bsBuff;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_bsBuff(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bsBuff = value;
}
constexpr int32_t& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_bsLive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bsLive;
}
constexpr int32_t const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_bsLive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bsLive;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_bsLive(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bsLive = value;
}
constexpr ::Org::BouncyCastle::Apache::Bzip2::CRC*& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_mCrc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCrc;
}
constexpr ::Org::BouncyCastle::Apache::Bzip2::CRC* const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_mCrc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCrc;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_mCrc(::Org::BouncyCastle::Apache::Bzip2::CRC* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mCrc = value;
}
constexpr ::ArrayW<bool>& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_inUse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inUse;
}
constexpr ::ArrayW<bool> const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_inUse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inUse;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_inUse(::ArrayW<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inUse = value;
}
constexpr int32_t& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_nInUse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nInUse;
}
constexpr int32_t const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_nInUse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nInUse;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_nInUse(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nInUse = value;
}
constexpr ::ArrayW<char16_t>& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_seqToUnseq() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seqToUnseq;
}
constexpr ::ArrayW<char16_t> const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_seqToUnseq() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seqToUnseq;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_seqToUnseq(::ArrayW<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___seqToUnseq = value;
}
constexpr ::ArrayW<char16_t>& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_unseqToSeq() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unseqToSeq;
}
constexpr ::ArrayW<char16_t> const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_unseqToSeq() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unseqToSeq;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_unseqToSeq(::ArrayW<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unseqToSeq = value;
}
constexpr ::ArrayW<char16_t>& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_selector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selector;
}
constexpr ::ArrayW<char16_t> const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_selector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selector;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_selector(::ArrayW<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selector = value;
}
constexpr ::ArrayW<char16_t>& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_selectorMtf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectorMtf;
}
constexpr ::ArrayW<char16_t> const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_selectorMtf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectorMtf;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_selectorMtf(::ArrayW<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selectorMtf = value;
}
constexpr ::ArrayW<int32_t>& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_tt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tt;
}
constexpr ::ArrayW<int32_t> const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_tt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tt;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_tt(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tt = value;
}
constexpr ::ArrayW<char16_t>& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_ll8() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ll8;
}
constexpr ::ArrayW<char16_t> const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_ll8() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ll8;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_ll8(::ArrayW<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ll8 = value;
}
constexpr ::ArrayW<int32_t>& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_unzftab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unzftab;
}
constexpr ::ArrayW<int32_t> const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_unzftab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unzftab;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_unzftab(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unzftab = value;
}
constexpr ::ArrayW<::ArrayW<int32_t>>& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_limit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___limit;
}
constexpr ::ArrayW<::ArrayW<int32_t>> const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_limit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___limit;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_limit(::ArrayW<::ArrayW<int32_t>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___limit = value;
}
constexpr ::ArrayW<::ArrayW<int32_t>>& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_basev() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basev;
}
constexpr ::ArrayW<::ArrayW<int32_t>> const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_basev() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___basev;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_basev(::ArrayW<::ArrayW<int32_t>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___basev = value;
}
constexpr ::ArrayW<::ArrayW<int32_t>>& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_perm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___perm;
}
constexpr ::ArrayW<::ArrayW<int32_t>> const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_perm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___perm;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_perm(::ArrayW<::ArrayW<int32_t>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___perm = value;
}
constexpr ::ArrayW<int32_t>& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_minLens() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minLens;
}
constexpr ::ArrayW<int32_t> const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_minLens() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minLens;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_minLens(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minLens = value;
}
constexpr ::System::IO::Stream*& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_bsStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bsStream;
}
constexpr ::System::IO::Stream* const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_bsStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bsStream;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_bsStream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bsStream = value;
}
constexpr bool& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_streamEnd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___streamEnd;
}
constexpr bool const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_streamEnd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___streamEnd;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_streamEnd(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___streamEnd = value;
}
constexpr int32_t& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_currentChar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentChar;
}
constexpr int32_t const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_currentChar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentChar;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_currentChar(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentChar = value;
}
constexpr int32_t& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_currentState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentState;
}
constexpr int32_t const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_currentState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentState;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_currentState(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentState = value;
}
constexpr int32_t& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_storedBlockCRC() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___storedBlockCRC;
}
constexpr int32_t const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_storedBlockCRC() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___storedBlockCRC;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_storedBlockCRC(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___storedBlockCRC = value;
}
constexpr int32_t& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_storedCombinedCRC() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___storedCombinedCRC;
}
constexpr int32_t const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_storedCombinedCRC() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___storedCombinedCRC;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_storedCombinedCRC(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___storedCombinedCRC = value;
}
constexpr int32_t& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_computedBlockCRC() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___computedBlockCRC;
}
constexpr int32_t const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_computedBlockCRC() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___computedBlockCRC;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_computedBlockCRC(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___computedBlockCRC = value;
}
constexpr int32_t& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_computedCombinedCRC() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___computedCombinedCRC;
}
constexpr int32_t const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_computedCombinedCRC() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___computedCombinedCRC;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_computedCombinedCRC(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___computedCombinedCRC = value;
}
constexpr int32_t& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_i2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i2;
}
constexpr int32_t const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_i2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i2;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_i2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___i2 = value;
}
constexpr int32_t& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr int32_t const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
constexpr int32_t& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_chPrev() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chPrev;
}
constexpr int32_t const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_chPrev() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chPrev;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_chPrev(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chPrev = value;
}
constexpr int32_t& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_ch2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ch2;
}
constexpr int32_t const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_ch2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ch2;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_ch2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ch2 = value;
}
constexpr int32_t& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_i() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr int32_t const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_i() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___i;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_i(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___i = value;
}
constexpr int32_t& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_tPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tPos;
}
constexpr int32_t const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_tPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tPos;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_tPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tPos = value;
}
constexpr int32_t& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_rNToGo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rNToGo;
}
constexpr int32_t const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_rNToGo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rNToGo;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_rNToGo(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rNToGo = value;
}
constexpr int32_t& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_rTPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rTPos;
}
constexpr int32_t const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_rTPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rTPos;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_rTPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rTPos = value;
}
constexpr int32_t& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_j2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___j2;
}
constexpr int32_t const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_j2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___j2;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_j2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___j2 = value;
}
constexpr char16_t& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_z() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr char16_t const& Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_get_z() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::__cordl_internal_set_z(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___z = value;
}
inline void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::Cadvise() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "Cadvise", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::CompressedStreamEOF() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "CompressedStreamEOF", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::MakeMaps() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "MakeMaps", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::_ctor(::System::IO::Stream* zStream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zStream);
}
inline ::ArrayW<::ArrayW<int32_t>> Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::InitIntArray(int32_t n1, int32_t n2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "InitIntArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<int32_t>>>(nullptr, ___internal_method, n1, n2);
}
inline ::ArrayW<::ArrayW<char16_t>> Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::InitCharArray(int32_t n1, int32_t n2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "InitCharArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<char16_t>>>(nullptr, ___internal_method, n1, n2);
}
inline int32_t Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::ReadByte() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::InitBlock() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "InitBlock", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::EndBlock() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "EndBlock", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::Complete() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "Complete", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::BlockOverrun() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "BlockOverrun", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::BadBlockHeader() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "BadBlockHeader", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::CrcError() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "CrcError", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::BsFinishedWithStream() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "BsFinishedWithStream", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::BsSetStream(::System::IO::Stream* f) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "BsSetStream", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, f);
}
inline int32_t Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::BsR(int32_t n) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "BsR", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, n);
}
inline char16_t Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::BsGetUChar() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "BsGetUChar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::BsGetint() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "BsGetint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::BsGetIntVS(int32_t numBits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "BsGetIntVS", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, numBits);
}
inline int32_t Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::BsGetInt32() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "BsGetInt32", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::HbCreateDecodeTables(::ArrayW<int32_t> limit, ::ArrayW<int32_t> basev, ::ArrayW<int32_t> perm, ::ArrayW<char16_t> length,
                                                                                      int32_t minLen, int32_t maxLen, int32_t alphaSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(),
                                                           { "HbCreateDecodeTables",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(),
                                                               ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, limit, basev, perm, length, minLen, maxLen, alphaSize);
}
inline void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::RecvDecodingTables() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "RecvDecodingTables", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::GetAndMoveToFrontDecode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "GetAndMoveToFrontDecode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::SetupBlock() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "SetupBlock", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::SetupRandPartA() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "SetupRandPartA", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::SetupNoRandPartA() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "SetupNoRandPartA", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::SetupRandPartB() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "SetupRandPartB", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::SetupRandPartC() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "SetupRandPartC", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::SetupNoRandPartB() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "SetupNoRandPartB", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::SetupNoRandPartC() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "SetupNoRandPartC", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::SetDecompressStructureSizes(int32_t newSize100k) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), { "SetDecompressStructureSizes", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newSize100k);
}
inline void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::Flush() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline int64_t Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::Seek(int64_t offset, ::System::IO::SeekOrigin origin) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::SetLength(int64_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline bool Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::get_CanRead() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::get_CanSeek() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::get_CanWrite() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::get_Length() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::get_Position() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::set_Position(int64_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream* Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::New_ctor(::System::IO::Stream* zStream) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream*>(zStream));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Apache::Bzip2::CBZip2InputStream::CBZip2InputStream() {}
