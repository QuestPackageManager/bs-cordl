#pragma once
#include "Newtonsoft/Json/zzzz__JsonWriter_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextWriter_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__Base64Encoder_def.hpp"
#include "Newtonsoft/Json/zzzz__IArrayPool_1_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonToken_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.get_Base64Encoder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Utilities::Base64Encoder* (::Newtonsoft::Json::JsonTextWriter::*)()>(
    &::Newtonsoft::Json::JsonTextWriter::get_Base64Encoder)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x266c498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), "get_Base64Encoder",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.get_ArrayPool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::IArrayPool_1<char16_t>* (::Newtonsoft::Json::JsonTextWriter::*)()>(
    &::Newtonsoft::Json::JsonTextWriter::get_ArrayPool)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x266c50c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), "get_ArrayPool",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.set_ArrayPool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::Newtonsoft::Json::IArrayPool_1<char16_t>*)>(
    &::Newtonsoft::Json::JsonTextWriter::set_ArrayPool)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x266c514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), "set_ArrayPool", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::IArrayPool_1<char16_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.get_Indentation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::get_Indentation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x266c574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), "get_Indentation",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.set_Indentation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(int32_t)>(&::Newtonsoft::Json::JsonTextWriter::set_Indentation)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x266c57c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), "set_Indentation", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.get_QuoteChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::get_QuoteChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x266c5dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), "get_QuoteChar",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.set_QuoteChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(char16_t)>(&::Newtonsoft::Json::JsonTextWriter::set_QuoteChar)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x266c5e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), "set_QuoteChar", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.get_IndentChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::get_IndentChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x266c6c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), "get_IndentChar",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.set_IndentChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(char16_t)>(&::Newtonsoft::Json::JsonTextWriter::set_IndentChar)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x266c6c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), "set_IndentChar", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.get_QuoteName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::get_QuoteName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x266c6e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), "get_QuoteName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.set_QuoteName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(bool)>(&::Newtonsoft::Json::JsonTextWriter::set_QuoteName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x266c6e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), "set_QuoteName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::System::IO::TextWriter*)>(
    &::Newtonsoft::Json::JsonTextWriter::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x266c6f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.Flush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::Flush)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x266c7d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::Close)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x266c7f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteStartObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::WriteStartObject)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x266c844;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteStartArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::WriteStartArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x266c880;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteStartConstructor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::StringW)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteStartConstructor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x266c8bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::Newtonsoft::Json::JsonToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteEnd)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x266c968;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WritePropertyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonTextWriter::WritePropertyName)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x266ca74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WritePropertyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::StringW, bool)>(
    &::Newtonsoft::Json::JsonTextWriter::WritePropertyName)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x266cb98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.OnStringEscapeHandlingChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::OnStringEscapeHandlingChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x266cc5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.UpdateCharEscapeFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::UpdateCharEscapeFlags)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x266c654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                               "UpdateCharEscapeFlags", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteIndent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::WriteIndent)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x266cc60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueDelimiter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::WriteValueDelimiter)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x266cd64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteIndentSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::WriteIndentSpace)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x266cd8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValueInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::StringW, ::Newtonsoft::Json::JsonToken)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteValueInternal)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x266cdb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), "WriteValueInternal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::System::Object*)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x266cdd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 63));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::WriteNull)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x266cde0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteUndefined
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::WriteUndefined)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x266ce64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonTextWriter::WriteRaw)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x266cee8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x266cf28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteEscapedString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::StringW, bool)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteEscapedString)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x266cac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), "WriteEscapedString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(int32_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x266cff8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(uint32_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x266d0a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(int64_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x266d0d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(uint64_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x266d100;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(float_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x266d218;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<float_t>)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x266d3b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 48));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(double_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x266d4a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::System::Nullable_1<double_t>)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x266d634;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 49));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(bool)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x266d730;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(int16_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x266d830;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(uint16_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x266d860;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(char16_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x266d890;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(uint8_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x266d9b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(int8_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x266d9e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::System::Decimal)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x266da10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 39));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::System::DateTime)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x266db74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x266dd64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 61));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::System::DateTimeOffset)>(
    &::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x266de1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 41));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::System::Guid)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x266e018;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 42));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::System::TimeSpan)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x266e114;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 43));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::System::Uri*)>(&::Newtonsoft::Json::JsonTextWriter::WriteValue)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x266e1a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 62));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteComment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonTextWriter::WriteComment)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x266e268;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 64));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteWhitespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonTextWriter::WriteWhitespace)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x266e320;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 65));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.EnsureWriteBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)()>(&::Newtonsoft::Json::JsonTextWriter::EnsureWriteBuffer)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x266cfcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), "EnsureWriteBuffer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteIntegerValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(int64_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteIntegerValue)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x266d028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), "WriteIntegerValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextWriter.WriteIntegerValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonTextWriter::*)(uint64_t)>(&::Newtonsoft::Json::JsonTextWriter::WriteIntegerValue)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x266d130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), "WriteIntegerValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::IO::TextWriter*& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__writer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writer;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::TextWriter*> const& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__writer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writer;
}
constexpr void Newtonsoft::Json::JsonTextWriter::__cordl_internal_set__writer(::System::IO::TextWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____writer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::Utilities::Base64Encoder*& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__base64Encoder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____base64Encoder;
}
constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Utilities::Base64Encoder*> const& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__base64Encoder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____base64Encoder;
}
constexpr void Newtonsoft::Json::JsonTextWriter::__cordl_internal_set__base64Encoder(::Newtonsoft::Json::Utilities::Base64Encoder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____base64Encoder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr char16_t& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__indentChar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indentChar;
}
constexpr char16_t const& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__indentChar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indentChar;
}
constexpr void Newtonsoft::Json::JsonTextWriter::__cordl_internal_set__indentChar(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____indentChar = value;
}
constexpr int32_t& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__indentation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indentation;
}
constexpr int32_t const& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__indentation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indentation;
}
constexpr void Newtonsoft::Json::JsonTextWriter::__cordl_internal_set__indentation(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____indentation = value;
}
constexpr char16_t& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__quoteChar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____quoteChar;
}
constexpr char16_t const& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__quoteChar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____quoteChar;
}
constexpr void Newtonsoft::Json::JsonTextWriter::__cordl_internal_set__quoteChar(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____quoteChar = value;
}
constexpr bool& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__quoteName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____quoteName;
}
constexpr bool const& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__quoteName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____quoteName;
}
constexpr void Newtonsoft::Json::JsonTextWriter::__cordl_internal_set__quoteName(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____quoteName = value;
}
constexpr ::ArrayW<bool, ::Array<bool>*>& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__charEscapeFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____charEscapeFlags;
}
constexpr ::ArrayW<bool, ::Array<bool>*> const& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__charEscapeFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____charEscapeFlags;
}
constexpr void Newtonsoft::Json::JsonTextWriter::__cordl_internal_set__charEscapeFlags(::ArrayW<bool, ::Array<bool>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____charEscapeFlags)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__writeBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writeBuffer;
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__writeBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writeBuffer;
}
constexpr void Newtonsoft::Json::JsonTextWriter::__cordl_internal_set__writeBuffer(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____writeBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::IArrayPool_1<char16_t>*& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__arrayPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arrayPool;
}
constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::IArrayPool_1<char16_t>*> const& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__arrayPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arrayPool;
}
constexpr void Newtonsoft::Json::JsonTextWriter::__cordl_internal_set__arrayPool(::Newtonsoft::Json::IArrayPool_1<char16_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arrayPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__indentChars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indentChars;
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& Newtonsoft::Json::JsonTextWriter::__cordl_internal_get__indentChars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indentChars;
}
constexpr void Newtonsoft::Json::JsonTextWriter::__cordl_internal_set__indentChars(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____indentChars)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Newtonsoft::Json::Utilities::Base64Encoder* Newtonsoft::Json::JsonTextWriter::get_Base64Encoder() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), "get_Base64Encoder",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Utilities::Base64Encoder*, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::IArrayPool_1<char16_t>* Newtonsoft::Json::JsonTextWriter::get_ArrayPool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), "get_ArrayPool",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::IArrayPool_1<char16_t>*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::set_ArrayPool(::Newtonsoft::Json::IArrayPool_1<char16_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), "set_ArrayPool", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::IArrayPool_1<char16_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Newtonsoft::Json::JsonTextWriter::get_Indentation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), "get_Indentation",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::set_Indentation(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), "set_Indentation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline char16_t Newtonsoft::Json::JsonTextWriter::get_QuoteChar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), "get_QuoteChar",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::set_QuoteChar(char16_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), "set_QuoteChar", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline char16_t Newtonsoft::Json::JsonTextWriter::get_IndentChar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), "get_IndentChar",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::set_IndentChar(char16_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), "set_IndentChar", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Newtonsoft::Json::JsonTextWriter::get_QuoteName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), "get_QuoteName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::set_QuoteName(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), "set_QuoteName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::JsonTextWriter* Newtonsoft::Json::JsonTextWriter::New_ctor(::System::IO::TextWriter* textWriter) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::JsonTextWriter*>(textWriter));
}
inline void Newtonsoft::Json::JsonTextWriter::_ctor(::System::IO::TextWriter* textWriter) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, textWriter);
}
inline void Newtonsoft::Json::JsonTextWriter::Flush() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::Close() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteStartObject() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteStartArray() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteStartConstructor(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteEnd(::Newtonsoft::Json::JsonToken token) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, token);
}
inline void Newtonsoft::Json::JsonTextWriter::WritePropertyName(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void Newtonsoft::Json::JsonTextWriter::WritePropertyName(::StringW name, bool escape) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, escape);
}
inline void Newtonsoft::Json::JsonTextWriter::OnStringEscapeHandlingChanged() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::UpdateCharEscapeFlags() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(),
                                                                             "UpdateCharEscapeFlags", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteIndent() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValueDelimiter() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteIndentSpace() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValueInternal(::StringW value, ::Newtonsoft::Json::JsonToken token) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), "WriteValueInternal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, token);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 63)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteNull() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteUndefined() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteRaw(::StringW json) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, json);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(::StringW value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteEscapedString(::StringW value, bool quote) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), "WriteEscapedString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, quote);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(int32_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(uint32_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(int64_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(uint64_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(float_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(::System::Nullable_1<float_t> value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 48)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(double_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(::System::Nullable_1<double_t> value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 49)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(bool value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(int16_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(uint16_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(char16_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(uint8_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(int8_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(::System::Decimal value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 39)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(::System::DateTime value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 40)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 61)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(::System::DateTimeOffset value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 41)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(::System::Guid value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 42)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(::System::TimeSpan value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 43)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteValue(::System::Uri* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 62)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteComment(::StringW text) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 64)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteWhitespace(::StringW ws) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), 65)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ws);
}
inline void Newtonsoft::Json::JsonTextWriter::EnsureWriteBuffer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), "EnsureWriteBuffer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteIntegerValue(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), "WriteIntegerValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextWriter::WriteIntegerValue(uint64_t uvalue) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonTextWriter*>::get(), "WriteIntegerValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uvalue);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextWriter::JsonTextWriter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
