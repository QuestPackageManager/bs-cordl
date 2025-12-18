#pragma once
// IWYU pragma private; include "System/Xml/HtmlUtf8RawTextWriter.hpp"
#include "System/Xml/zzzz__AttributeProperties_impl.hpp"
#include "System/Xml/zzzz__ElementProperties_impl.hpp"
#include "System/Xml/zzzz__XmlUtf8RawTextWriter_impl.hpp"
#include "System/Xml/zzzz__HtmlUtf8RawTextWriter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Xml/zzzz__ByteStack_def.hpp"
#include "System/Xml/zzzz__TernaryTreeReadOnly_def.hpp"
#include "System/Xml/zzzz__XmlStandalone_def.hpp"
#include "System/Xml/zzzz__XmlWriterSettings_def.hpp"
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(::System::IO::Stream*, ::System::Xml::XmlWriterSettings*)>(
    &::System::Xml::HtmlUtf8RawTextWriter::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5ffb608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriterSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteXmlDeclaration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(::System::Xml::XmlStandalone)>(
    &::System::Xml::HtmlUtf8RawTextWriter::WriteXmlDeclaration)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ffb79c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), 46));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteXmlDeclaration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(::StringW)>(
    &::System::Xml::HtmlUtf8RawTextWriter::WriteXmlDeclaration)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ffb7a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), 47));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteDocType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(::StringW, ::StringW, ::StringW, ::StringW)>(
    &::System::Xml::HtmlUtf8RawTextWriter::WriteDocType)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x5ffb7a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteStartElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::HtmlUtf8RawTextWriter::WriteStartElement)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5ffba18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.StartElementContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)()>(&::System::Xml::HtmlUtf8RawTextWriter::StartElementContent)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ffbb30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), 48));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteEndElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::HtmlUtf8RawTextWriter::WriteEndElement)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5ffbcb0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), 50));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteFullEndElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::HtmlUtf8RawTextWriter::WriteFullEndElement)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5ffbd94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), 51));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteStartAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::HtmlUtf8RawTextWriter::WriteStartAttribute)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5ffbe78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteEndAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)()>(&::System::Xml::HtmlUtf8RawTextWriter::WriteEndAttribute)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ffbff4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteProcessingInstruction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(::StringW, ::StringW)>(
    &::System::Xml::HtmlUtf8RawTextWriter::WriteProcessingInstruction)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5ffc124;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(::StringW)>(&::System::Xml::HtmlUtf8RawTextWriter::WriteString)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ffc244;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteEntityRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(::StringW)>(&::System::Xml::HtmlUtf8RawTextWriter::WriteEntityRef)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5ffc2c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteCharEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(char16_t)>(&::System::Xml::HtmlUtf8RawTextWriter::WriteCharEntity)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5ffc318;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteSurrogateCharEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(char16_t, char16_t)>(
    &::System::Xml::HtmlUtf8RawTextWriter::WriteSurrogateCharEntity)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5ffc368;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::System::Xml::HtmlUtf8RawTextWriter::WriteChars)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ffc3b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(::System::Xml::XmlWriterSettings*)>(
    &::System::Xml::HtmlUtf8RawTextWriter::Init)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5ffb634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriterSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteMetaElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)()>(&::System::Xml::HtmlUtf8RawTextWriter::WriteMetaElement)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5ffbb88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), "WriteMetaElement",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteHtmlElementTextBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(char16_t*, char16_t*)>(
    &::System::Xml::HtmlUtf8RawTextWriter::WriteHtmlElementTextBlock)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ffc2b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), "WriteHtmlElementTextBlock", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteHtmlAttributeTextBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(char16_t*, char16_t*)>(
    &::System::Xml::HtmlUtf8RawTextWriter::WriteHtmlAttributeTextBlock)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ffc26c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), "WriteHtmlAttributeTextBlock", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteHtmlAttributeText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(char16_t*, char16_t*)>(
    &::System::Xml::HtmlUtf8RawTextWriter::WriteHtmlAttributeText)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5ffc768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), "WriteHtmlAttributeText", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.WriteUriAttributeText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)(char16_t*, char16_t*)>(
    &::System::Xml::HtmlUtf8RawTextWriter::WriteUriAttributeText)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x5ffc3fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), "WriteUriAttributeText", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::HtmlUtf8RawTextWriter.OutputRestAmps
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::HtmlUtf8RawTextWriter::*)()>(&::System::Xml::HtmlUtf8RawTextWriter::OutputRestAmps)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5ffc060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), "OutputRestAmps",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Xml::ByteStack*& System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_get_elementScope() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementScope;
}
constexpr ::System::Xml::ByteStack* const& System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_get_elementScope() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementScope;
}
constexpr void System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_set_elementScope(::System::Xml::ByteStack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___elementScope)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::ElementProperties& System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_get_currentElementProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentElementProperties;
}
constexpr ::System::Xml::ElementProperties const& System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_get_currentElementProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentElementProperties;
}
constexpr void System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_set_currentElementProperties(::System::Xml::ElementProperties value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentElementProperties = value;
}
constexpr ::System::Xml::AttributeProperties& System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_get_currentAttributeProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentAttributeProperties;
}
constexpr ::System::Xml::AttributeProperties const& System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_get_currentAttributeProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentAttributeProperties;
}
constexpr void System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_set_currentAttributeProperties(::System::Xml::AttributeProperties value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentAttributeProperties = value;
}
constexpr bool& System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_get_endsWithAmpersand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endsWithAmpersand;
}
constexpr bool const& System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_get_endsWithAmpersand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endsWithAmpersand;
}
constexpr void System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_set_endsWithAmpersand(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endsWithAmpersand = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_get_uriEscapingBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uriEscapingBuffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_get_uriEscapingBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uriEscapingBuffer;
}
constexpr void System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_set_uriEscapingBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___uriEscapingBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_get_mediaType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mediaType;
}
constexpr ::StringW const& System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_get_mediaType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mediaType;
}
constexpr void System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_set_mediaType(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mediaType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_get_doNotEscapeUriAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___doNotEscapeUriAttributes;
}
constexpr bool const& System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_get_doNotEscapeUriAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___doNotEscapeUriAttributes;
}
constexpr void System::Xml::HtmlUtf8RawTextWriter::__cordl_internal_set_doNotEscapeUriAttributes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___doNotEscapeUriAttributes = value;
}
inline void System::Xml::HtmlUtf8RawTextWriter::setStaticF_elementPropertySearch(::System::Xml::TernaryTreeReadOnly* value) {
  ::cordl_internals::setStaticField<::System::Xml::TernaryTreeReadOnly*, "elementPropertySearch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get>(
      std::forward<::System::Xml::TernaryTreeReadOnly*>(value));
}
inline ::System::Xml::TernaryTreeReadOnly* System::Xml::HtmlUtf8RawTextWriter::getStaticF_elementPropertySearch() {
  return ::cordl_internals::getStaticField<::System::Xml::TernaryTreeReadOnly*, "elementPropertySearch",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get>();
}
inline void System::Xml::HtmlUtf8RawTextWriter::setStaticF_attributePropertySearch(::System::Xml::TernaryTreeReadOnly* value) {
  ::cordl_internals::setStaticField<::System::Xml::TernaryTreeReadOnly*, "attributePropertySearch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get>(
      std::forward<::System::Xml::TernaryTreeReadOnly*>(value));
}
inline ::System::Xml::TernaryTreeReadOnly* System::Xml::HtmlUtf8RawTextWriter::getStaticF_attributePropertySearch() {
  return ::cordl_internals::getStaticField<::System::Xml::TernaryTreeReadOnly*, "attributePropertySearch",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get>();
}
inline void System::Xml::HtmlUtf8RawTextWriter::_ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriterSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, settings);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteXmlDeclaration(::System::Xml::XmlStandalone standalone) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), 46)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, standalone);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteXmlDeclaration(::StringW xmldecl) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), 47)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmldecl);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, pubid, sysid, subset);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::HtmlUtf8RawTextWriter::StartElementContent() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), 48)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), 50)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), 51)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, localName, ns);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteEndAttribute() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteProcessingInstruction(::StringW target, ::StringW text) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target, text);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteString(::StringW text) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteEntityRef(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteCharEntity(char16_t ch) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ch);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lowChar, highChar);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::HtmlUtf8RawTextWriter::Init(::System::Xml::XmlWriterSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriterSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteMetaElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), "WriteMetaElement",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteHtmlElementTextBlock(char16_t* pSrc, char16_t* pSrcEnd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), "WriteHtmlElementTextBlock", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pSrc, pSrcEnd);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteHtmlAttributeTextBlock(char16_t* pSrc, char16_t* pSrcEnd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), "WriteHtmlAttributeTextBlock", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pSrc, pSrcEnd);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteHtmlAttributeText(char16_t* pSrc, char16_t* pSrcEnd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), "WriteHtmlAttributeText", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pSrc, pSrcEnd);
}
inline void System::Xml::HtmlUtf8RawTextWriter::WriteUriAttributeText(char16_t* pSrc, char16_t* pSrcEnd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), "WriteUriAttributeText", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pSrc, pSrcEnd);
}
inline void System::Xml::HtmlUtf8RawTextWriter::OutputRestAmps() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::HtmlUtf8RawTextWriter*>::get(), "OutputRestAmps",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::HtmlUtf8RawTextWriter* System::Xml::HtmlUtf8RawTextWriter::New_ctor(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::HtmlUtf8RawTextWriter*>(stream, settings));
}
// Ctor Parameters []
constexpr ::System::Xml::HtmlUtf8RawTextWriter::HtmlUtf8RawTextWriter() {}
