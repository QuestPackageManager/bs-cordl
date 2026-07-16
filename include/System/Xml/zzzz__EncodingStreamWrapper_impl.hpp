#pragma once
// IWYU pragma private; include "System/Xml/EncodingStreamWrapper.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/Xml/zzzz__EncodingStreamWrapper_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__Decoder_def.hpp"
#include "System/Text/zzzz__Encoder_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Text/zzzz__UTF8Encoding_def.hpp"
#include "System/Text/zzzz__UnicodeEncoding_def.hpp"
#include "System/Xml/zzzz__EncodingStreamWrapper_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::EncodingStreamWrapper_SupportedEncoding::EncodingStreamWrapper_SupportedEncoding(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::EncodingStreamWrapper_SupportedEncoding::EncodingStreamWrapper_SupportedEncoding() {}
constexpr ::System::Xml::EncodingStreamWrapper_SupportedEncoding System::Xml::EncodingStreamWrapper_SupportedEncoding::UTF8{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::EncodingStreamWrapper_SupportedEncoding System::Xml::EncodingStreamWrapper_SupportedEncoding::UTF16LE{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::EncodingStreamWrapper_SupportedEncoding System::Xml::EncodingStreamWrapper_SupportedEncoding::UTF16BE{ static_cast<int32_t>(0x2) };
constexpr ::System::Xml::EncodingStreamWrapper_SupportedEncoding System::Xml::EncodingStreamWrapper_SupportedEncoding::None{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::EncodingStreamWrapper::*)(::System::IO::Stream*, ::System::Text::Encoding*)>(
    &::System::Xml::EncodingStreamWrapper::_ctor)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x60fa074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.SetReadDocumentEncoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::EncodingStreamWrapper::*)(::System::Xml::EncodingStreamWrapper_SupportedEncoding)>(
    &::System::Xml::EncodingStreamWrapper::SetReadDocumentEncoding)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x60fb05c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(),
                                                             { "SetReadDocumentEncoding", {}, { ::i2c::type_of<::System::Xml::EncodingStreamWrapper_SupportedEncoding>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.GetEncoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (*)(::System::Xml::EncodingStreamWrapper_SupportedEncoding)>(&::System::Xml::EncodingStreamWrapper::GetEncoding)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x60fb284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(),
                                                                                           { "GetEncoding", {}, { ::i2c::type_of<::System::Xml::EncodingStreamWrapper_SupportedEncoding>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.GetEncodingName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Xml::EncodingStreamWrapper_SupportedEncoding)>(&::System::Xml::EncodingStreamWrapper::GetEncodingName)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x60fb38c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(),
                                                                                           { "GetEncodingName", {}, { ::i2c::type_of<::System::Xml::EncodingStreamWrapper_SupportedEncoding>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.GetSupportedEncoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::EncodingStreamWrapper_SupportedEncoding (*)(::System::Text::Encoding*)>(
    &::System::Xml::EncodingStreamWrapper::GetSupportedEncoding)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x60fa4d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { "GetSupportedEncoding", {}, { ::i2c::type_of<::System::Text::Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::EncodingStreamWrapper::*)(::System::IO::Stream*, ::System::Text::Encoding*, bool)>(
    &::System::Xml::EncodingStreamWrapper::_ctor)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x60fb454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.ReadBOMEncoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::EncodingStreamWrapper_SupportedEncoding (::System::Xml::EncodingStreamWrapper::*)(bool)>(
    &::System::Xml::EncodingStreamWrapper::ReadBOMEncoding)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x60fa680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { "ReadBOMEncoding", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.ReadBOMEncoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::EncodingStreamWrapper_SupportedEncoding (*)(uint8_t, uint8_t, uint8_t, uint8_t, bool, ::by_ref<int32_t>)>(
    &::System::Xml::EncodingStreamWrapper::ReadBOMEncoding)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x60fb634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { "ReadBOMEncoding",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(),
                                                                                                       ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.FillBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::EncodingStreamWrapper::*)(int32_t)>(&::System::Xml::EncodingStreamWrapper::FillBuffer)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x60fa998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { "FillBuffer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.EnsureBuffers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::EncodingStreamWrapper::*)()>(&::System::Xml::EncodingStreamWrapper::EnsureBuffers)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x60faff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { "EnsureBuffers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.EnsureByteBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::EncodingStreamWrapper::*)()>(&::System::Xml::EncodingStreamWrapper::EnsureByteBuffer)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x60fb7a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { "EnsureByteBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.CheckUTF8DeclarationEncoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Xml::EncodingStreamWrapper_SupportedEncoding,
                                                                ::System::Xml::EncodingStreamWrapper_SupportedEncoding)>(&::System::Xml::EncodingStreamWrapper::CheckUTF8DeclarationEncoding)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x60faa08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(),
                                         { "CheckUTF8DeclarationEncoding",
                                           {},
                                           { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                             ::i2c::type_of<::System::Xml::EncodingStreamWrapper_SupportedEncoding>(), ::i2c::type_of<::System::Xml::EncodingStreamWrapper_SupportedEncoding>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.CompareCaseInsensitive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(&::System::Xml::EncodingStreamWrapper::CompareCaseInsensitive)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x60fb8a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(),
                                                { "CompareCaseInsensitive", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(&::System::Xml::EncodingStreamWrapper::Compare)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x60fb820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(),
                                                             { "Compare", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.IsWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t)>(&::System::Xml::EncodingStreamWrapper::IsWhitespace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60fb800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { "IsWhitespace", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.ThrowExpectedEncodingMismatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::EncodingStreamWrapper_SupportedEncoding, ::System::Xml::EncodingStreamWrapper_SupportedEncoding)>(
    &::System::Xml::EncodingStreamWrapper::ThrowExpectedEncodingMismatch)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x60fa8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(),
                                         { "ThrowExpectedEncodingMismatch",
                                           {},
                                           { ::i2c::type_of<::System::Xml::EncodingStreamWrapper_SupportedEncoding>(), ::i2c::type_of<::System::Xml::EncodingStreamWrapper_SupportedEncoding>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.ThrowEncodingMismatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Xml::EncodingStreamWrapper_SupportedEncoding)>(&::System::Xml::EncodingStreamWrapper::ThrowEncodingMismatch)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x60fba98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(),
                                                { "ThrowEncodingMismatch", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::EncodingStreamWrapper_SupportedEncoding>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.ThrowEncodingMismatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::System::Xml::EncodingStreamWrapper::ThrowEncodingMismatch)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x60fb9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { "ThrowEncodingMismatch", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.get_CanRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::EncodingStreamWrapper::*)()>(&::System::Xml::EncodingStreamWrapper::get_CanRead)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x60fbafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.get_CanSeek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::EncodingStreamWrapper::*)()>(&::System::Xml::EncodingStreamWrapper::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60fbb28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.get_CanWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::EncodingStreamWrapper::*)()>(&::System::Xml::EncodingStreamWrapper::get_CanWrite)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x60fbb30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.get_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Xml::EncodingStreamWrapper::*)()>(&::System::Xml::EncodingStreamWrapper::get_Position)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60fbb5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.set_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::EncodingStreamWrapper::*)(int64_t)>(&::System::Xml::EncodingStreamWrapper::set_Position)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60fbb94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::EncodingStreamWrapper::*)()>(&::System::Xml::EncodingStreamWrapper::Close)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x60fbbcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::EncodingStreamWrapper::*)()>(&::System::Xml::EncodingStreamWrapper::Flush)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60fbc10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.ReadByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::EncodingStreamWrapper::*)()>(&::System::Xml::EncodingStreamWrapper::ReadByte)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x60fbc30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::EncodingStreamWrapper::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::EncodingStreamWrapper::Read)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x60fbcb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.CleanupCharBreak
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::EncodingStreamWrapper::*)()>(&::System::Xml::EncodingStreamWrapper::CleanupCharBreak)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x60fb0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { "CleanupCharBreak", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.Seek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Xml::EncodingStreamWrapper::*)(int64_t, ::System::IO::SeekOrigin)>(&::System::Xml::EncodingStreamWrapper::Seek)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60fbf00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.WriteByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::EncodingStreamWrapper::*)(uint8_t)>(&::System::Xml::EncodingStreamWrapper::WriteByte)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x60fbf38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::EncodingStreamWrapper::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::EncodingStreamWrapper::Write)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x60fbf9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.get_CanTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::EncodingStreamWrapper::*)()>(&::System::Xml::EncodingStreamWrapper::get_CanTimeout)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x60fc0b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Xml::EncodingStreamWrapper::*)()>(&::System::Xml::EncodingStreamWrapper::get_Length)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x60fc0cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.get_ReadTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::EncodingStreamWrapper::*)()>(&::System::Xml::EncodingStreamWrapper::get_ReadTimeout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60fc0e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.set_ReadTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::EncodingStreamWrapper::*)(int32_t)>(&::System::Xml::EncodingStreamWrapper::set_ReadTimeout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60fc108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.get_WriteTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::EncodingStreamWrapper::*)()>(&::System::Xml::EncodingStreamWrapper::get_WriteTimeout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60fc128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.set_WriteTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::EncodingStreamWrapper::*)(int32_t)>(&::System::Xml::EncodingStreamWrapper::set_WriteTimeout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60fc148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.SetLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::EncodingStreamWrapper::*)(int64_t)>(&::System::Xml::EncodingStreamWrapper::SetLength)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60fc168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 34 }));
    return ___internal_method;
  }
};
constexpr ::System::Xml::EncodingStreamWrapper_SupportedEncoding& System::Xml::EncodingStreamWrapper::__cordl_internal_get_encodingCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encodingCode;
}
constexpr ::System::Xml::EncodingStreamWrapper_SupportedEncoding const& System::Xml::EncodingStreamWrapper::__cordl_internal_get_encodingCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encodingCode;
}
constexpr void System::Xml::EncodingStreamWrapper::__cordl_internal_set_encodingCode(::System::Xml::EncodingStreamWrapper_SupportedEncoding value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encodingCode = value;
}
constexpr ::System::Text::Encoding*& System::Xml::EncodingStreamWrapper::__cordl_internal_get_encoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoding;
}
constexpr ::System::Text::Encoding* const& System::Xml::EncodingStreamWrapper::__cordl_internal_get_encoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoding;
}
constexpr void System::Xml::EncodingStreamWrapper::__cordl_internal_set_encoding(::System::Text::Encoding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encoding = value;
}
constexpr ::System::Text::Encoder*& System::Xml::EncodingStreamWrapper::__cordl_internal_get_enc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enc;
}
constexpr ::System::Text::Encoder* const& System::Xml::EncodingStreamWrapper::__cordl_internal_get_enc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enc;
}
constexpr void System::Xml::EncodingStreamWrapper::__cordl_internal_set_enc(::System::Text::Encoder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enc = value;
}
constexpr ::System::Text::Decoder*& System::Xml::EncodingStreamWrapper::__cordl_internal_get_dec() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dec;
}
constexpr ::System::Text::Decoder* const& System::Xml::EncodingStreamWrapper::__cordl_internal_get_dec() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dec;
}
constexpr void System::Xml::EncodingStreamWrapper::__cordl_internal_set_dec(::System::Text::Decoder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dec = value;
}
constexpr bool& System::Xml::EncodingStreamWrapper::__cordl_internal_get_isReading() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isReading;
}
constexpr bool const& System::Xml::EncodingStreamWrapper::__cordl_internal_get_isReading() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isReading;
}
constexpr void System::Xml::EncodingStreamWrapper::__cordl_internal_set_isReading(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isReading = value;
}
constexpr ::System::IO::Stream*& System::Xml::EncodingStreamWrapper::__cordl_internal_get_stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stream;
}
constexpr ::System::IO::Stream* const& System::Xml::EncodingStreamWrapper::__cordl_internal_get_stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stream;
}
constexpr void System::Xml::EncodingStreamWrapper::__cordl_internal_set_stream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stream = value;
}
constexpr ::ArrayW<char16_t>& System::Xml::EncodingStreamWrapper::__cordl_internal_get_chars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chars;
}
constexpr ::ArrayW<char16_t> const& System::Xml::EncodingStreamWrapper::__cordl_internal_get_chars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chars;
}
constexpr void System::Xml::EncodingStreamWrapper::__cordl_internal_set_chars(::ArrayW<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chars = value;
}
constexpr ::ArrayW<uint8_t>& System::Xml::EncodingStreamWrapper::__cordl_internal_get_bytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bytes;
}
constexpr ::ArrayW<uint8_t> const& System::Xml::EncodingStreamWrapper::__cordl_internal_get_bytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bytes;
}
constexpr void System::Xml::EncodingStreamWrapper::__cordl_internal_set_bytes(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bytes = value;
}
constexpr int32_t& System::Xml::EncodingStreamWrapper::__cordl_internal_get_byteOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteOffset;
}
constexpr int32_t const& System::Xml::EncodingStreamWrapper::__cordl_internal_get_byteOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteOffset;
}
constexpr void System::Xml::EncodingStreamWrapper::__cordl_internal_set_byteOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___byteOffset = value;
}
constexpr int32_t& System::Xml::EncodingStreamWrapper::__cordl_internal_get_byteCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteCount;
}
constexpr int32_t const& System::Xml::EncodingStreamWrapper::__cordl_internal_get_byteCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteCount;
}
constexpr void System::Xml::EncodingStreamWrapper::__cordl_internal_set_byteCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___byteCount = value;
}
constexpr ::ArrayW<uint8_t>& System::Xml::EncodingStreamWrapper::__cordl_internal_get_byteBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteBuffer;
}
constexpr ::ArrayW<uint8_t> const& System::Xml::EncodingStreamWrapper::__cordl_internal_get_byteBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteBuffer;
}
constexpr void System::Xml::EncodingStreamWrapper::__cordl_internal_set_byteBuffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___byteBuffer = value;
}
inline void System::Xml::EncodingStreamWrapper::setStaticF_SafeUTF8(::System::Text::UTF8Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::UTF8Encoding*, "SafeUTF8", ::System::Xml::EncodingStreamWrapper*>(std::forward<::System::Text::UTF8Encoding*>(value));
}
inline ::System::Text::UTF8Encoding* System::Xml::EncodingStreamWrapper::getStaticF_SafeUTF8() {
  return ::cordl_internals::getStaticField<::System::Text::UTF8Encoding*, "SafeUTF8", ::System::Xml::EncodingStreamWrapper*>();
}
inline void System::Xml::EncodingStreamWrapper::setStaticF_SafeUTF16(::System::Text::UnicodeEncoding* value) {
  ::cordl_internals::setStaticField<::System::Text::UnicodeEncoding*, "SafeUTF16", ::System::Xml::EncodingStreamWrapper*>(std::forward<::System::Text::UnicodeEncoding*>(value));
}
inline ::System::Text::UnicodeEncoding* System::Xml::EncodingStreamWrapper::getStaticF_SafeUTF16() {
  return ::cordl_internals::getStaticField<::System::Text::UnicodeEncoding*, "SafeUTF16", ::System::Xml::EncodingStreamWrapper*>();
}
inline void System::Xml::EncodingStreamWrapper::setStaticF_SafeBEUTF16(::System::Text::UnicodeEncoding* value) {
  ::cordl_internals::setStaticField<::System::Text::UnicodeEncoding*, "SafeBEUTF16", ::System::Xml::EncodingStreamWrapper*>(std::forward<::System::Text::UnicodeEncoding*>(value));
}
inline ::System::Text::UnicodeEncoding* System::Xml::EncodingStreamWrapper::getStaticF_SafeBEUTF16() {
  return ::cordl_internals::getStaticField<::System::Text::UnicodeEncoding*, "SafeBEUTF16", ::System::Xml::EncodingStreamWrapper*>();
}
inline void System::Xml::EncodingStreamWrapper::setStaticF_ValidatingUTF8(::System::Text::UTF8Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::UTF8Encoding*, "ValidatingUTF8", ::System::Xml::EncodingStreamWrapper*>(std::forward<::System::Text::UTF8Encoding*>(value));
}
inline ::System::Text::UTF8Encoding* System::Xml::EncodingStreamWrapper::getStaticF_ValidatingUTF8() {
  return ::cordl_internals::getStaticField<::System::Text::UTF8Encoding*, "ValidatingUTF8", ::System::Xml::EncodingStreamWrapper*>();
}
inline void System::Xml::EncodingStreamWrapper::setStaticF_ValidatingUTF16(::System::Text::UnicodeEncoding* value) {
  ::cordl_internals::setStaticField<::System::Text::UnicodeEncoding*, "ValidatingUTF16", ::System::Xml::EncodingStreamWrapper*>(std::forward<::System::Text::UnicodeEncoding*>(value));
}
inline ::System::Text::UnicodeEncoding* System::Xml::EncodingStreamWrapper::getStaticF_ValidatingUTF16() {
  return ::cordl_internals::getStaticField<::System::Text::UnicodeEncoding*, "ValidatingUTF16", ::System::Xml::EncodingStreamWrapper*>();
}
inline void System::Xml::EncodingStreamWrapper::setStaticF_ValidatingBEUTF16(::System::Text::UnicodeEncoding* value) {
  ::cordl_internals::setStaticField<::System::Text::UnicodeEncoding*, "ValidatingBEUTF16", ::System::Xml::EncodingStreamWrapper*>(std::forward<::System::Text::UnicodeEncoding*>(value));
}
inline ::System::Text::UnicodeEncoding* System::Xml::EncodingStreamWrapper::getStaticF_ValidatingBEUTF16() {
  return ::cordl_internals::getStaticField<::System::Text::UnicodeEncoding*, "ValidatingBEUTF16", ::System::Xml::EncodingStreamWrapper*>();
}
inline void System::Xml::EncodingStreamWrapper::setStaticF_encodingAttr(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "encodingAttr", ::System::Xml::EncodingStreamWrapper*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Xml::EncodingStreamWrapper::getStaticF_encodingAttr() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "encodingAttr", ::System::Xml::EncodingStreamWrapper*>();
}
inline void System::Xml::EncodingStreamWrapper::setStaticF_encodingUTF8(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "encodingUTF8", ::System::Xml::EncodingStreamWrapper*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Xml::EncodingStreamWrapper::getStaticF_encodingUTF8() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "encodingUTF8", ::System::Xml::EncodingStreamWrapper*>();
}
inline void System::Xml::EncodingStreamWrapper::setStaticF_encodingUnicode(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "encodingUnicode", ::System::Xml::EncodingStreamWrapper*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Xml::EncodingStreamWrapper::getStaticF_encodingUnicode() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "encodingUnicode", ::System::Xml::EncodingStreamWrapper*>();
}
inline void System::Xml::EncodingStreamWrapper::setStaticF_encodingUnicodeLE(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "encodingUnicodeLE", ::System::Xml::EncodingStreamWrapper*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Xml::EncodingStreamWrapper::getStaticF_encodingUnicodeLE() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "encodingUnicodeLE", ::System::Xml::EncodingStreamWrapper*>();
}
inline void System::Xml::EncodingStreamWrapper::setStaticF_encodingUnicodeBE(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "encodingUnicodeBE", ::System::Xml::EncodingStreamWrapper*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Xml::EncodingStreamWrapper::getStaticF_encodingUnicodeBE() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "encodingUnicodeBE", ::System::Xml::EncodingStreamWrapper*>();
}
inline void System::Xml::EncodingStreamWrapper::_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, encoding);
}
inline void System::Xml::EncodingStreamWrapper::SetReadDocumentEncoding(::System::Xml::EncodingStreamWrapper_SupportedEncoding e) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { "SetReadDocumentEncoding", {}, { ::i2c::type_of<::System::Xml::EncodingStreamWrapper_SupportedEncoding>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline ::System::Text::Encoding* System::Xml::EncodingStreamWrapper::GetEncoding(::System::Xml::EncodingStreamWrapper_SupportedEncoding e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { "GetEncoding", {}, { ::i2c::type_of<::System::Xml::EncodingStreamWrapper_SupportedEncoding>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(nullptr, ___internal_method, e);
}
inline ::StringW System::Xml::EncodingStreamWrapper::GetEncodingName(::System::Xml::EncodingStreamWrapper_SupportedEncoding enc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(),
                                                                                         { "GetEncodingName", {}, { ::i2c::type_of<::System::Xml::EncodingStreamWrapper_SupportedEncoding>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, enc);
}
inline ::System::Xml::EncodingStreamWrapper_SupportedEncoding System::Xml::EncodingStreamWrapper::GetSupportedEncoding(::System::Text::Encoding* encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { "GetSupportedEncoding", {}, { ::i2c::type_of<::System::Text::Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::EncodingStreamWrapper_SupportedEncoding>(nullptr, ___internal_method, encoding);
}
inline void System::Xml::EncodingStreamWrapper::_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool emitBOM) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, encoding, emitBOM);
}
inline ::System::Xml::EncodingStreamWrapper_SupportedEncoding System::Xml::EncodingStreamWrapper::ReadBOMEncoding(bool notOutOfBand) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { "ReadBOMEncoding", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::EncodingStreamWrapper_SupportedEncoding>(this, ___internal_method, notOutOfBand);
}
inline ::System::Xml::EncodingStreamWrapper_SupportedEncoding System::Xml::EncodingStreamWrapper::ReadBOMEncoding(uint8_t b1, uint8_t b2, uint8_t b3, uint8_t b4, bool notOutOfBand,
                                                                                                                  ::by_ref<int32_t> preserve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { "ReadBOMEncoding",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(),
                                                                                                     ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::EncodingStreamWrapper_SupportedEncoding>(nullptr, ___internal_method, b1, b2, b3, b4, notOutOfBand, preserve);
}
inline void System::Xml::EncodingStreamWrapper::FillBuffer(int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { "FillBuffer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline void System::Xml::EncodingStreamWrapper::EnsureBuffers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { "EnsureBuffers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::EncodingStreamWrapper::EnsureByteBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { "EnsureByteBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::EncodingStreamWrapper::CheckUTF8DeclarationEncoding(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::Xml::EncodingStreamWrapper_SupportedEncoding e,
                                                                             ::System::Xml::EncodingStreamWrapper_SupportedEncoding expectedEnc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(),
                                       { "CheckUTF8DeclarationEncoding",
                                         {},
                                         { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                           ::i2c::type_of<::System::Xml::EncodingStreamWrapper_SupportedEncoding>(), ::i2c::type_of<::System::Xml::EncodingStreamWrapper_SupportedEncoding>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, offset, count, e, expectedEnc);
}
inline bool System::Xml::EncodingStreamWrapper::CompareCaseInsensitive(::ArrayW<uint8_t> key, ::ArrayW<uint8_t> buffer, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(),
                                                           { "CompareCaseInsensitive", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, key, buffer, offset);
}
inline bool System::Xml::EncodingStreamWrapper::Compare(::ArrayW<uint8_t> key, ::ArrayW<uint8_t> buffer, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(),
                                                           { "Compare", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, key, buffer, offset);
}
inline bool System::Xml::EncodingStreamWrapper::IsWhitespace(uint8_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { "IsWhitespace", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ch);
}
inline void System::Xml::EncodingStreamWrapper::ThrowExpectedEncodingMismatch(::System::Xml::EncodingStreamWrapper_SupportedEncoding expEnc,
                                                                              ::System::Xml::EncodingStreamWrapper_SupportedEncoding actualEnc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(),
                                       { "ThrowExpectedEncodingMismatch",
                                         {},
                                         { ::i2c::type_of<::System::Xml::EncodingStreamWrapper_SupportedEncoding>(), ::i2c::type_of<::System::Xml::EncodingStreamWrapper_SupportedEncoding>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, expEnc, actualEnc);
}
inline void System::Xml::EncodingStreamWrapper::ThrowEncodingMismatch(::StringW declEnc, ::System::Xml::EncodingStreamWrapper_SupportedEncoding enc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(),
                                              { "ThrowEncodingMismatch", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::EncodingStreamWrapper_SupportedEncoding>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, declEnc, enc);
}
inline void System::Xml::EncodingStreamWrapper::ThrowEncodingMismatch(::StringW declEnc, ::StringW docEnc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { "ThrowEncodingMismatch", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, declEnc, docEnc);
}
inline bool System::Xml::EncodingStreamWrapper::get_CanRead() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::EncodingStreamWrapper::get_CanSeek() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::EncodingStreamWrapper::get_CanWrite() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t System::Xml::EncodingStreamWrapper::get_Position() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Xml::EncodingStreamWrapper::set_Position(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::EncodingStreamWrapper::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::EncodingStreamWrapper::Flush() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Xml::EncodingStreamWrapper::ReadByte() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Xml::EncodingStreamWrapper::Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline void System::Xml::EncodingStreamWrapper::CleanupCharBreak() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), { "CleanupCharBreak", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t System::Xml::EncodingStreamWrapper::Seek(int64_t offset, ::System::IO::SeekOrigin origin) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void System::Xml::EncodingStreamWrapper::WriteByte(uint8_t b) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline void System::Xml::EncodingStreamWrapper::Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline bool System::Xml::EncodingStreamWrapper::get_CanTimeout() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t System::Xml::EncodingStreamWrapper::get_Length() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int32_t System::Xml::EncodingStreamWrapper::get_ReadTimeout() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::EncodingStreamWrapper::set_ReadTimeout(int32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Xml::EncodingStreamWrapper::get_WriteTimeout() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::EncodingStreamWrapper::set_WriteTimeout(int32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::EncodingStreamWrapper::SetLength(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::EncodingStreamWrapper*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::EncodingStreamWrapper* System::Xml::EncodingStreamWrapper::New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::EncodingStreamWrapper*>(stream, encoding));
}
inline ::System::Xml::EncodingStreamWrapper* System::Xml::EncodingStreamWrapper::New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool emitBOM) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::EncodingStreamWrapper*>(stream, encoding, emitBOM));
}
// Ctor Parameters []
constexpr ::System::Xml::EncodingStreamWrapper::EncodingStreamWrapper() {}
