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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::EncodingStreamWrapper::*)(::System::IO::Stream*, ::System::Text::Encoding*)>(
    &::System::Xml::EncodingStreamWrapper::_ctor)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x5ee31a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.SetReadDocumentEncoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::EncodingStreamWrapper::*)(::System::Xml::EncodingStreamWrapper_SupportedEncoding)>(
    &::System::Xml::EncodingStreamWrapper::SetReadDocumentEncoding)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5ee4190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), "SetReadDocumentEncoding", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::EncodingStreamWrapper_SupportedEncoding>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.GetEncoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (*)(::System::Xml::EncodingStreamWrapper_SupportedEncoding)>(
    &::System::Xml::EncodingStreamWrapper::GetEncoding)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5ee43b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), "GetEncoding", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::EncodingStreamWrapper_SupportedEncoding>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.GetEncodingName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Xml::EncodingStreamWrapper_SupportedEncoding)>(
    &::System::Xml::EncodingStreamWrapper::GetEncodingName)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5ee44c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), "GetEncodingName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::EncodingStreamWrapper_SupportedEncoding>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.GetSupportedEncoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::EncodingStreamWrapper_SupportedEncoding (*)(::System::Text::Encoding*)>(
    &::System::Xml::EncodingStreamWrapper::GetSupportedEncoding)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5ee3608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), "GetSupportedEncoding", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::EncodingStreamWrapper::*)(::System::IO::Stream*, ::System::Text::Encoding*, bool)>(
    &::System::Xml::EncodingStreamWrapper::_ctor)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5ee4588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.ReadBOMEncoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::EncodingStreamWrapper_SupportedEncoding (::System::Xml::EncodingStreamWrapper::*)(bool)>(
    &::System::Xml::EncodingStreamWrapper::ReadBOMEncoding)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5ee37b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), "ReadBOMEncoding",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.ReadBOMEncoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Xml::EncodingStreamWrapper_SupportedEncoding (*)(uint8_t, uint8_t, uint8_t, uint8_t, bool, ::ByRef<int32_t>)>(&::System::Xml::EncodingStreamWrapper::ReadBOMEncoding)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5ee4768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), "ReadBOMEncoding", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.FillBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::EncodingStreamWrapper::*)(int32_t)>(&::System::Xml::EncodingStreamWrapper::FillBuffer)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ee3acc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), "FillBuffer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.EnsureBuffers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::EncodingStreamWrapper::*)()>(&::System::Xml::EncodingStreamWrapper::EnsureBuffers)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5ee412c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), "EnsureBuffers",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.EnsureByteBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::EncodingStreamWrapper::*)()>(&::System::Xml::EncodingStreamWrapper::EnsureByteBuffer)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ee48d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), "EnsureByteBuffer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.CheckUTF8DeclarationEncoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Xml::EncodingStreamWrapper_SupportedEncoding, ::System::Xml::EncodingStreamWrapper_SupportedEncoding)>(
        &::System::Xml::EncodingStreamWrapper::CheckUTF8DeclarationEncoding)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x5ee3b3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), "CheckUTF8DeclarationEncoding", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::EncodingStreamWrapper_SupportedEncoding>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::EncodingStreamWrapper_SupportedEncoding>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.CompareCaseInsensitive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::System::Xml::EncodingStreamWrapper::CompareCaseInsensitive)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5ee49dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), "CompareCaseInsensitive", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::System::Xml::EncodingStreamWrapper::Compare)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5ee4954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.IsWhitespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint8_t)>(&::System::Xml::EncodingStreamWrapper::IsWhitespace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ee4934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), "IsWhitespace", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.ThrowExpectedEncodingMismatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Xml::EncodingStreamWrapper_SupportedEncoding, ::System::Xml::EncodingStreamWrapper_SupportedEncoding)>(&::System::Xml::EncodingStreamWrapper::ThrowExpectedEncodingMismatch)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5ee39e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), "ThrowExpectedEncodingMismatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::EncodingStreamWrapper_SupportedEncoding>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::EncodingStreamWrapper_SupportedEncoding>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.ThrowEncodingMismatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::Xml::EncodingStreamWrapper_SupportedEncoding)>(
    &::System::Xml::EncodingStreamWrapper::ThrowEncodingMismatch)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5ee4bcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), "ThrowEncodingMismatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::EncodingStreamWrapper_SupportedEncoding>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.ThrowEncodingMismatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&::System::Xml::EncodingStreamWrapper::ThrowEncodingMismatch)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5ee4b14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), "ThrowEncodingMismatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.get_CanRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::EncodingStreamWrapper::*)()>(&::System::Xml::EncodingStreamWrapper::get_CanRead)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5ee4c30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.get_CanSeek
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::EncodingStreamWrapper::*)()>(&::System::Xml::EncodingStreamWrapper::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ee4c5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.get_CanWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::EncodingStreamWrapper::*)()>(&::System::Xml::EncodingStreamWrapper::get_CanWrite)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5ee4c64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.get_Position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Xml::EncodingStreamWrapper::*)()>(&::System::Xml::EncodingStreamWrapper::get_Position)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ee4c90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.set_Position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::EncodingStreamWrapper::*)(int64_t)>(&::System::Xml::EncodingStreamWrapper::set_Position)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ee4cc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::EncodingStreamWrapper::*)()>(&::System::Xml::EncodingStreamWrapper::Close)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ee4d00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.Flush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::EncodingStreamWrapper::*)()>(&::System::Xml::EncodingStreamWrapper::Flush)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ee4d44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.ReadByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::EncodingStreamWrapper::*)()>(&::System::Xml::EncodingStreamWrapper::ReadByte)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5ee4d64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::EncodingStreamWrapper::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Xml::EncodingStreamWrapper::Read)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5ee4de8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.CleanupCharBreak
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::EncodingStreamWrapper::*)()>(&::System::Xml::EncodingStreamWrapper::CleanupCharBreak)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5ee4208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), "CleanupCharBreak",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.Seek
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Xml::EncodingStreamWrapper::*)(int64_t, ::System::IO::SeekOrigin)>(
    &::System::Xml::EncodingStreamWrapper::Seek)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ee5034;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.WriteByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::EncodingStreamWrapper::*)(uint8_t)>(&::System::Xml::EncodingStreamWrapper::WriteByte)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5ee506c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::EncodingStreamWrapper::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Xml::EncodingStreamWrapper::Write)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5ee50d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.get_CanTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::EncodingStreamWrapper::*)()>(&::System::Xml::EncodingStreamWrapper::get_CanTimeout)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ee51e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.get_Length
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Xml::EncodingStreamWrapper::*)()>(&::System::Xml::EncodingStreamWrapper::get_Length)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ee5200;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.get_ReadTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::EncodingStreamWrapper::*)()>(&::System::Xml::EncodingStreamWrapper::get_ReadTimeout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ee521c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.set_ReadTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::EncodingStreamWrapper::*)(int32_t)>(&::System::Xml::EncodingStreamWrapper::set_ReadTimeout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ee523c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.get_WriteTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::EncodingStreamWrapper::*)()>(&::System::Xml::EncodingStreamWrapper::get_WriteTimeout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ee525c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.set_WriteTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::EncodingStreamWrapper::*)(int32_t)>(&::System::Xml::EncodingStreamWrapper::set_WriteTimeout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ee527c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::EncodingStreamWrapper.SetLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::EncodingStreamWrapper::*)(int64_t)>(&::System::Xml::EncodingStreamWrapper::SetLength)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ee529c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 34));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___encoding)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___enc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dec)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& System::Xml::EncodingStreamWrapper::__cordl_internal_get_chars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chars;
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& System::Xml::EncodingStreamWrapper::__cordl_internal_get_chars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chars;
}
constexpr void System::Xml::EncodingStreamWrapper::__cordl_internal_set_chars(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___chars)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Xml::EncodingStreamWrapper::__cordl_internal_get_bytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bytes;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Xml::EncodingStreamWrapper::__cordl_internal_get_bytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bytes;
}
constexpr void System::Xml::EncodingStreamWrapper::__cordl_internal_set_bytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bytes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Xml::EncodingStreamWrapper::__cordl_internal_get_byteBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteBuffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Xml::EncodingStreamWrapper::__cordl_internal_get_byteBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteBuffer;
}
constexpr void System::Xml::EncodingStreamWrapper::__cordl_internal_set_byteBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___byteBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::EncodingStreamWrapper::setStaticF_SafeUTF8(::System::Text::UTF8Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::UTF8Encoding*, "SafeUTF8", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get>(
      std::forward<::System::Text::UTF8Encoding*>(value));
}
inline ::System::Text::UTF8Encoding* System::Xml::EncodingStreamWrapper::getStaticF_SafeUTF8() {
  return ::cordl_internals::getStaticField<::System::Text::UTF8Encoding*, "SafeUTF8", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get>();
}
inline void System::Xml::EncodingStreamWrapper::setStaticF_SafeUTF16(::System::Text::UnicodeEncoding* value) {
  ::cordl_internals::setStaticField<::System::Text::UnicodeEncoding*, "SafeUTF16", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get>(
      std::forward<::System::Text::UnicodeEncoding*>(value));
}
inline ::System::Text::UnicodeEncoding* System::Xml::EncodingStreamWrapper::getStaticF_SafeUTF16() {
  return ::cordl_internals::getStaticField<::System::Text::UnicodeEncoding*, "SafeUTF16", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get>();
}
inline void System::Xml::EncodingStreamWrapper::setStaticF_SafeBEUTF16(::System::Text::UnicodeEncoding* value) {
  ::cordl_internals::setStaticField<::System::Text::UnicodeEncoding*, "SafeBEUTF16", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get>(
      std::forward<::System::Text::UnicodeEncoding*>(value));
}
inline ::System::Text::UnicodeEncoding* System::Xml::EncodingStreamWrapper::getStaticF_SafeBEUTF16() {
  return ::cordl_internals::getStaticField<::System::Text::UnicodeEncoding*, "SafeBEUTF16", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get>();
}
inline void System::Xml::EncodingStreamWrapper::setStaticF_ValidatingUTF8(::System::Text::UTF8Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::UTF8Encoding*, "ValidatingUTF8", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get>(
      std::forward<::System::Text::UTF8Encoding*>(value));
}
inline ::System::Text::UTF8Encoding* System::Xml::EncodingStreamWrapper::getStaticF_ValidatingUTF8() {
  return ::cordl_internals::getStaticField<::System::Text::UTF8Encoding*, "ValidatingUTF8", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get>();
}
inline void System::Xml::EncodingStreamWrapper::setStaticF_ValidatingUTF16(::System::Text::UnicodeEncoding* value) {
  ::cordl_internals::setStaticField<::System::Text::UnicodeEncoding*, "ValidatingUTF16", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get>(
      std::forward<::System::Text::UnicodeEncoding*>(value));
}
inline ::System::Text::UnicodeEncoding* System::Xml::EncodingStreamWrapper::getStaticF_ValidatingUTF16() {
  return ::cordl_internals::getStaticField<::System::Text::UnicodeEncoding*, "ValidatingUTF16", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get>();
}
inline void System::Xml::EncodingStreamWrapper::setStaticF_ValidatingBEUTF16(::System::Text::UnicodeEncoding* value) {
  ::cordl_internals::setStaticField<::System::Text::UnicodeEncoding*, "ValidatingBEUTF16", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get>(
      std::forward<::System::Text::UnicodeEncoding*>(value));
}
inline ::System::Text::UnicodeEncoding* System::Xml::EncodingStreamWrapper::getStaticF_ValidatingBEUTF16() {
  return ::cordl_internals::getStaticField<::System::Text::UnicodeEncoding*, "ValidatingBEUTF16", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get>();
}
inline void System::Xml::EncodingStreamWrapper::setStaticF_encodingAttr(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "encodingAttr", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Xml::EncodingStreamWrapper::getStaticF_encodingAttr() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "encodingAttr", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get>();
}
inline void System::Xml::EncodingStreamWrapper::setStaticF_encodingUTF8(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "encodingUTF8", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Xml::EncodingStreamWrapper::getStaticF_encodingUTF8() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "encodingUTF8", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get>();
}
inline void System::Xml::EncodingStreamWrapper::setStaticF_encodingUnicode(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "encodingUnicode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Xml::EncodingStreamWrapper::getStaticF_encodingUnicode() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "encodingUnicode",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get>();
}
inline void System::Xml::EncodingStreamWrapper::setStaticF_encodingUnicodeLE(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "encodingUnicodeLE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Xml::EncodingStreamWrapper::getStaticF_encodingUnicodeLE() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "encodingUnicodeLE",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get>();
}
inline void System::Xml::EncodingStreamWrapper::setStaticF_encodingUnicodeBE(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "encodingUnicodeBE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Xml::EncodingStreamWrapper::getStaticF_encodingUnicodeBE() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "encodingUnicodeBE",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get>();
}
inline void System::Xml::EncodingStreamWrapper::_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, encoding);
}
inline void System::Xml::EncodingStreamWrapper::SetReadDocumentEncoding(::System::Xml::EncodingStreamWrapper_SupportedEncoding e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), "SetReadDocumentEncoding", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::EncodingStreamWrapper_SupportedEncoding>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline ::System::Text::Encoding* System::Xml::EncodingStreamWrapper::GetEncoding(::System::Xml::EncodingStreamWrapper_SupportedEncoding e) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), "GetEncoding", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::EncodingStreamWrapper_SupportedEncoding>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(nullptr, ___internal_method, e);
}
inline ::StringW System::Xml::EncodingStreamWrapper::GetEncodingName(::System::Xml::EncodingStreamWrapper_SupportedEncoding enc) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), "GetEncodingName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::EncodingStreamWrapper_SupportedEncoding>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, enc);
}
inline ::System::Xml::EncodingStreamWrapper_SupportedEncoding System::Xml::EncodingStreamWrapper::GetSupportedEncoding(::System::Text::Encoding* encoding) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), "GetSupportedEncoding", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::EncodingStreamWrapper_SupportedEncoding, false>(nullptr, ___internal_method, encoding);
}
inline void System::Xml::EncodingStreamWrapper::_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool emitBOM) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, encoding, emitBOM);
}
inline ::System::Xml::EncodingStreamWrapper_SupportedEncoding System::Xml::EncodingStreamWrapper::ReadBOMEncoding(bool notOutOfBand) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), "ReadBOMEncoding",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::EncodingStreamWrapper_SupportedEncoding, false>(this, ___internal_method, notOutOfBand);
}
inline ::System::Xml::EncodingStreamWrapper_SupportedEncoding System::Xml::EncodingStreamWrapper::ReadBOMEncoding(uint8_t b1, uint8_t b2, uint8_t b3, uint8_t b4, bool notOutOfBand,
                                                                                                                  ::ByRef<int32_t> preserve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), "ReadBOMEncoding", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::EncodingStreamWrapper_SupportedEncoding, false>(nullptr, ___internal_method, b1, b2, b3, b4, notOutOfBand, preserve);
}
inline void System::Xml::EncodingStreamWrapper::FillBuffer(int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), "FillBuffer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, count);
}
inline void System::Xml::EncodingStreamWrapper::EnsureBuffers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), "EnsureBuffers",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::EncodingStreamWrapper::EnsureByteBuffer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), "EnsureByteBuffer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::EncodingStreamWrapper::CheckUTF8DeclarationEncoding(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count,
                                                                             ::System::Xml::EncodingStreamWrapper_SupportedEncoding e,
                                                                             ::System::Xml::EncodingStreamWrapper_SupportedEncoding expectedEnc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), "CheckUTF8DeclarationEncoding", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::EncodingStreamWrapper_SupportedEncoding>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::EncodingStreamWrapper_SupportedEncoding>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, buffer, offset, count, e, expectedEnc);
}
inline bool System::Xml::EncodingStreamWrapper::CompareCaseInsensitive(::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), "CompareCaseInsensitive", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, key, buffer, offset);
}
inline bool System::Xml::EncodingStreamWrapper::Compare(::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, key, buffer, offset);
}
inline bool System::Xml::EncodingStreamWrapper::IsWhitespace(uint8_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), "IsWhitespace",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch);
}
inline void System::Xml::EncodingStreamWrapper::ThrowExpectedEncodingMismatch(::System::Xml::EncodingStreamWrapper_SupportedEncoding expEnc,
                                                                              ::System::Xml::EncodingStreamWrapper_SupportedEncoding actualEnc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), "ThrowExpectedEncodingMismatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::EncodingStreamWrapper_SupportedEncoding>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::EncodingStreamWrapper_SupportedEncoding>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, expEnc, actualEnc);
}
inline void System::Xml::EncodingStreamWrapper::ThrowEncodingMismatch(::StringW declEnc, ::System::Xml::EncodingStreamWrapper_SupportedEncoding enc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), "ThrowEncodingMismatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::EncodingStreamWrapper_SupportedEncoding>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, declEnc, enc);
}
inline void System::Xml::EncodingStreamWrapper::ThrowEncodingMismatch(::StringW declEnc, ::StringW docEnc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), "ThrowEncodingMismatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, declEnc, docEnc);
}
inline bool System::Xml::EncodingStreamWrapper::get_CanRead() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::EncodingStreamWrapper::get_CanSeek() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::EncodingStreamWrapper::get_CanWrite() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int64_t System::Xml::EncodingStreamWrapper::get_Position() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void System::Xml::EncodingStreamWrapper::set_Position(int64_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::EncodingStreamWrapper::Close() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::EncodingStreamWrapper::Flush() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Xml::EncodingStreamWrapper::ReadByte() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::EncodingStreamWrapper::Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, count);
}
inline void System::Xml::EncodingStreamWrapper::CleanupCharBreak() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), "CleanupCharBreak",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int64_t System::Xml::EncodingStreamWrapper::Seek(int64_t offset, ::System::IO::SeekOrigin origin) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, offset, origin);
}
inline void System::Xml::EncodingStreamWrapper::WriteByte(uint8_t b) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 40)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, b);
}
inline void System::Xml::EncodingStreamWrapper::Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, offset, count);
}
inline bool System::Xml::EncodingStreamWrapper::get_CanTimeout() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int64_t System::Xml::EncodingStreamWrapper::get_Length() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::EncodingStreamWrapper::get_ReadTimeout() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Xml::EncodingStreamWrapper::set_ReadTimeout(int32_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t System::Xml::EncodingStreamWrapper::get_WriteTimeout() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Xml::EncodingStreamWrapper::set_WriteTimeout(int32_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::EncodingStreamWrapper::SetLength(int64_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::EncodingStreamWrapper*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::EncodingStreamWrapper* System::Xml::EncodingStreamWrapper::New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::EncodingStreamWrapper*>(stream, encoding));
}
inline ::System::Xml::EncodingStreamWrapper* System::Xml::EncodingStreamWrapper::New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool emitBOM) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::EncodingStreamWrapper*>(stream, encoding, emitBOM));
}
// Ctor Parameters []
constexpr ::System::Xml::EncodingStreamWrapper::EncodingStreamWrapper() {}
