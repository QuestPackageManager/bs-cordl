#pragma once
// IWYU pragma private; include "System/Globalization/TextInfo.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Globalization/zzzz__TextInfo_def.hpp"
#include "System/Globalization/zzzz__CultureData_def.hpp"
#include "System/Globalization/zzzz__UnicodeCategory_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::Globalization::TextInfo.get_Invariant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::TextInfo* (*)()>(&::System::Globalization::TextInfo::get_Invariant)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5bcbe1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { "get_Invariant", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TextInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::TextInfo::*)(::System::Globalization::CultureData*)>(&::System::Globalization::TextInfo::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5bcbec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::Globalization::CultureData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TextInfo.OnDeserializing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::TextInfo::*)(::System::Runtime::Serialization::StreamingContext)>(
    &::System::Globalization::TextInfo::OnDeserializing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bcbee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { "OnDeserializing", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TextInfo.OnDeserialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::TextInfo::*)()>(&::System::Globalization::TextInfo::OnDeserialized)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5bcbee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { "OnDeserialized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TextInfo.OnDeserialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::TextInfo::*)(::System::Runtime::Serialization::StreamingContext)>(
    &::System::Globalization::TextInfo::OnDeserialized)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bcbfd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { "OnDeserialized", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TextInfo.OnSerializing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::TextInfo::*)(::System::Runtime::Serialization::StreamingContext)>(
    &::System::Globalization::TextInfo::OnSerializing)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5bcbfdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { "OnSerializing", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TextInfo.get_CultureName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::TextInfo::*)()>(&::System::Globalization::TextInfo::get_CultureName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bcc060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { "get_CultureName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TextInfo.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Globalization::TextInfo::*)()>(&::System::Globalization::TextInfo::Clone)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5bcc068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { ::i2c::class_of<::System::Globalization::TextInfo*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TextInfo.SetReadOnlyState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::TextInfo::*)(bool)>(&::System::Globalization::TextInfo::SetReadOnlyState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bcc0f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { "SetReadOnlyState", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TextInfo.ToLower
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Globalization::TextInfo::*)(char16_t)>(&::System::Globalization::TextInfo::ToLower)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bcc0f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { ::i2c::class_of<::System::Globalization::TextInfo*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TextInfo.ToLower
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::TextInfo::*)(::StringW)>(&::System::Globalization::TextInfo::ToLower)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5bcc6d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { ::i2c::class_of<::System::Globalization::TextInfo*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TextInfo.ToLowerAsciiInvariant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(char16_t)>(&::System::Globalization::TextInfo::ToLowerAsciiInvariant)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5bcc260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { "ToLowerAsciiInvariant", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TextInfo.ToUpper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Globalization::TextInfo::*)(char16_t)>(&::System::Globalization::TextInfo::ToUpper)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bcc7cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { ::i2c::class_of<::System::Globalization::TextInfo*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TextInfo.ToUpper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::TextInfo::*)(::StringW)>(&::System::Globalization::TextInfo::ToUpper)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5bccce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { ::i2c::class_of<::System::Globalization::TextInfo*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TextInfo.ToUpperAsciiInvariant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(char16_t)>(&::System::Globalization::TextInfo::ToUpperAsciiInvariant)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5bcc82c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { "ToUpperAsciiInvariant", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TextInfo.IsAscii
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::Globalization::TextInfo::IsAscii)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5bcc154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { "IsAscii", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TextInfo.get_IsAsciiCasingSameAsInvariant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::TextInfo::*)()>(&::System::Globalization::TextInfo::get_IsAsciiCasingSameAsInvariant)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5bcc164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { "get_IsAsciiCasingSameAsInvariant", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TextInfo.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::TextInfo::*)(::System::Object*)>(&::System::Globalization::TextInfo::Equals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5bccdd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { ::i2c::class_of<::System::Globalization::TextInfo*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TextInfo.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::TextInfo::*)()>(&::System::Globalization::TextInfo::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5bcce80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { ::i2c::class_of<::System::Globalization::TextInfo*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TextInfo.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::TextInfo::*)()>(&::System::Globalization::TextInfo::ToString)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bcce9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { ::i2c::class_of<::System::Globalization::TextInfo*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TextInfo.ToTitleCase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::TextInfo::*)(::StringW)>(&::System::Globalization::TextInfo::ToTitleCase)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x5bccef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { "ToTitleCase", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TextInfo.AddNonLetter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::System::Text::StringBuilder*>, ::by_ref<::StringW>, int32_t, int32_t)>(
    &::System::Globalization::TextInfo::AddNonLetter)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5bcd3b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Globalization::TextInfo*>(),
            { "AddNonLetter", {}, { ::i2c::type_of<::by_ref<::System::Text::StringBuilder*>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TextInfo.AddTitlecaseLetter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::TextInfo::*)(::by_ref<::System::Text::StringBuilder*>, ::by_ref<::StringW>, int32_t, int32_t)>(
    &::System::Globalization::TextInfo::AddTitlecaseLetter)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5bcd24c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(),
                            { "AddTitlecaseLetter",
                              {},
                              { ::i2c::type_of<::by_ref<::System::Text::StringBuilder*>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TextInfo.IsWordSeparator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Globalization::UnicodeCategory)>(&::System::Globalization::TextInfo::IsWordSeparator)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5bcd394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { "IsWordSeparator", {}, { ::i2c::type_of<::System::Globalization::UnicodeCategory>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TextInfo.IsLetterCategory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Globalization::UnicodeCategory)>(&::System::Globalization::TextInfo::IsLetterCategory)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bcd388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { "IsLetterCategory", {}, { ::i2c::type_of<::System::Globalization::UnicodeCategory>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TextInfo.System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::TextInfo::*)(::System::Object*)>(
    &::System::Globalization::TextInfo::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bcd464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(),
                                                             { "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TextInfo.ToUpperInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::TextInfo::*)(::StringW)>(&::System::Globalization::TextInfo::ToUpperInternal)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5bccd34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { "ToUpperInternal", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TextInfo.ToLowerInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::TextInfo::*)(::StringW)>(&::System::Globalization::TextInfo::ToLowerInternal)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5bcc728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { "ToLowerInternal", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TextInfo.ToUpperInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Globalization::TextInfo::*)(char16_t)>(&::System::Globalization::TextInfo::ToUpperInternal)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x5bcc848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { "ToUpperInternal", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TextInfo.ToLowerInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Globalization::TextInfo::*)(char16_t)>(&::System::Globalization::TextInfo::ToLowerInternal)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x5bcc278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { "ToLowerInternal", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TextInfo.ToUpperAsciiInvariant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::TextInfo::*)(::System::ReadOnlySpan_1<char16_t>, ::System::Span_1<char16_t>)>(
    &::System::Globalization::TextInfo::ToUpperAsciiInvariant)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5bcd468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(),
                                                             { "ToUpperAsciiInvariant", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Span_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TextInfo.ChangeCase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::TextInfo::*)(::System::ReadOnlySpan_1<char16_t>, ::System::Span_1<char16_t>, bool)>(
    &::System::Globalization::TextInfo::ChangeCase)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5bcd500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(),
                                                { "ChangeCase", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TextInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::TextInfo::*)()>(&::System::Globalization::TextInfo::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5bcd5f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& System::Globalization::TextInfo::__cordl_internal_get_m_isReadOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isReadOnly;
}
constexpr bool const& System::Globalization::TextInfo::__cordl_internal_get_m_isReadOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isReadOnly;
}
constexpr void System::Globalization::TextInfo::__cordl_internal_set_m_isReadOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_isReadOnly = value;
}
constexpr ::StringW& System::Globalization::TextInfo::__cordl_internal_get_m_cultureName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_cultureName;
}
constexpr ::StringW const& System::Globalization::TextInfo::__cordl_internal_get_m_cultureName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_cultureName;
}
constexpr void System::Globalization::TextInfo::__cordl_internal_set_m_cultureName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_cultureName = value;
}
constexpr ::System::Globalization::CultureData*& System::Globalization::TextInfo::__cordl_internal_get_m_cultureData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_cultureData;
}
constexpr ::System::Globalization::CultureData* const& System::Globalization::TextInfo::__cordl_internal_get_m_cultureData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_cultureData;
}
constexpr void System::Globalization::TextInfo::__cordl_internal_set_m_cultureData(::System::Globalization::CultureData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_cultureData = value;
}
constexpr ::StringW& System::Globalization::TextInfo::__cordl_internal_get_m_textInfoName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_textInfoName;
}
constexpr ::StringW const& System::Globalization::TextInfo::__cordl_internal_get_m_textInfoName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_textInfoName;
}
constexpr void System::Globalization::TextInfo::__cordl_internal_set_m_textInfoName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_textInfoName = value;
}
constexpr ::System::Nullable_1<bool>& System::Globalization::TextInfo::__cordl_internal_get_m_IsAsciiCasingSameAsInvariant() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsAsciiCasingSameAsInvariant;
}
constexpr ::System::Nullable_1<bool> const& System::Globalization::TextInfo::__cordl_internal_get_m_IsAsciiCasingSameAsInvariant() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsAsciiCasingSameAsInvariant;
}
constexpr void System::Globalization::TextInfo::__cordl_internal_set_m_IsAsciiCasingSameAsInvariant(::System::Nullable_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsAsciiCasingSameAsInvariant = value;
}
constexpr ::StringW& System::Globalization::TextInfo::__cordl_internal_get_customCultureName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customCultureName;
}
constexpr ::StringW const& System::Globalization::TextInfo::__cordl_internal_get_customCultureName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customCultureName;
}
constexpr void System::Globalization::TextInfo::__cordl_internal_set_customCultureName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___customCultureName = value;
}
constexpr bool& System::Globalization::TextInfo::__cordl_internal_get_m_useUserOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_useUserOverride;
}
constexpr bool const& System::Globalization::TextInfo::__cordl_internal_get_m_useUserOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_useUserOverride;
}
constexpr void System::Globalization::TextInfo::__cordl_internal_set_m_useUserOverride(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_useUserOverride = value;
}
constexpr int32_t& System::Globalization::TextInfo::__cordl_internal_get_m_win32LangID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_win32LangID;
}
constexpr int32_t const& System::Globalization::TextInfo::__cordl_internal_get_m_win32LangID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_win32LangID;
}
constexpr void System::Globalization::TextInfo::__cordl_internal_set_m_win32LangID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_win32LangID = value;
}
inline void System::Globalization::TextInfo::setStaticF_s_Invariant(::System::Globalization::TextInfo* value) {
  ::cordl_internals::setStaticField<::System::Globalization::TextInfo*, "s_Invariant", ::System::Globalization::TextInfo*>(std::forward<::System::Globalization::TextInfo*>(value));
}
inline ::System::Globalization::TextInfo* System::Globalization::TextInfo::getStaticF_s_Invariant() {
  return ::cordl_internals::getStaticField<::System::Globalization::TextInfo*, "s_Invariant", ::System::Globalization::TextInfo*>();
}
inline ::System::Globalization::TextInfo* System::Globalization::TextInfo::get_Invariant() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { "get_Invariant", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::TextInfo*>(nullptr, ___internal_method);
}
inline void System::Globalization::TextInfo::_ctor(::System::Globalization::CultureData* cultureData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::Globalization::CultureData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cultureData);
}
inline void System::Globalization::TextInfo::OnDeserializing(::System::Runtime::Serialization::StreamingContext ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { "OnDeserializing", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void System::Globalization::TextInfo::OnDeserialized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { "OnDeserialized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Globalization::TextInfo::OnDeserialized(::System::Runtime::Serialization::StreamingContext ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { "OnDeserialized", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void System::Globalization::TextInfo::OnSerializing(::System::Runtime::Serialization::StreamingContext ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { "OnSerializing", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline ::StringW System::Globalization::TextInfo::get_CultureName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { "get_CultureName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Object* System::Globalization::TextInfo::Clone() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::TextInfo*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Globalization::TextInfo::SetReadOnlyState(bool readOnly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { "SetReadOnlyState", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, readOnly);
}
inline char16_t System::Globalization::TextInfo::ToLower(char16_t c) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::TextInfo*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method, c);
}
inline ::StringW System::Globalization::TextInfo::ToLower(::StringW str) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::TextInfo*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, str);
}
inline char16_t System::Globalization::TextInfo::ToLowerAsciiInvariant(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { "ToLowerAsciiInvariant", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, c);
}
inline char16_t System::Globalization::TextInfo::ToUpper(char16_t c) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::TextInfo*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method, c);
}
inline ::StringW System::Globalization::TextInfo::ToUpper(::StringW str) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::TextInfo*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, str);
}
inline char16_t System::Globalization::TextInfo::ToUpperAsciiInvariant(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { "ToUpperAsciiInvariant", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, c);
}
inline bool System::Globalization::TextInfo::IsAscii(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { "IsAscii", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline bool System::Globalization::TextInfo::get_IsAsciiCasingSameAsInvariant() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { "get_IsAsciiCasingSameAsInvariant", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Globalization::TextInfo::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::TextInfo*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::Globalization::TextInfo::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::TextInfo*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Globalization::TextInfo::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::TextInfo*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Globalization::TextInfo::ToTitleCase(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { "ToTitleCase", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, str);
}
inline int32_t System::Globalization::TextInfo::AddNonLetter(::by_ref<::System::Text::StringBuilder*> result, ::by_ref<::StringW> input, int32_t inputIndex, int32_t charLen) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Globalization::TextInfo*>(),
          { "AddNonLetter", {}, { ::i2c::type_of<::by_ref<::System::Text::StringBuilder*>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, result, input, inputIndex, charLen);
}
inline int32_t System::Globalization::TextInfo::AddTitlecaseLetter(::by_ref<::System::Text::StringBuilder*> result, ::by_ref<::StringW> input, int32_t inputIndex, int32_t charLen) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Globalization::TextInfo*>(),
          { "AddTitlecaseLetter", {}, { ::i2c::type_of<::by_ref<::System::Text::StringBuilder*>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, result, input, inputIndex, charLen);
}
inline bool System::Globalization::TextInfo::IsWordSeparator(::System::Globalization::UnicodeCategory category) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { "IsWordSeparator", {}, { ::i2c::type_of<::System::Globalization::UnicodeCategory>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, category);
}
inline bool System::Globalization::TextInfo::IsLetterCategory(::System::Globalization::UnicodeCategory uc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { "IsLetterCategory", {}, { ::i2c::type_of<::System::Globalization::UnicodeCategory>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, uc);
}
inline void System::Globalization::TextInfo::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(),
                                                           { "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender);
}
inline ::StringW System::Globalization::TextInfo::ToUpperInternal(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { "ToUpperInternal", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, str);
}
inline ::StringW System::Globalization::TextInfo::ToLowerInternal(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { "ToLowerInternal", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, str);
}
inline char16_t System::Globalization::TextInfo::ToUpperInternal(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { "ToUpperInternal", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method, c);
}
inline char16_t System::Globalization::TextInfo::ToLowerInternal(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { "ToLowerInternal", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method, c);
}
inline void System::Globalization::TextInfo::ToUpperAsciiInvariant(::System::ReadOnlySpan_1<char16_t> source, ::System::Span_1<char16_t> destination) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(),
                                                           { "ToUpperAsciiInvariant", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Span_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, destination);
}
inline void System::Globalization::TextInfo::ChangeCase(::System::ReadOnlySpan_1<char16_t> source, ::System::Span_1<char16_t> destination, bool toUpper) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(),
                                              { "ChangeCase", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, destination, toUpper);
}
inline void System::Globalization::TextInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TextInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Globalization::TextInfo* System::Globalization::TextInfo::New_ctor(::System::Globalization::CultureData* cultureData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::TextInfo*>(cultureData));
}
inline ::System::Globalization::TextInfo* System::Globalization::TextInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::TextInfo*>());
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Globalization::TextInfo::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Globalization::TextInfo::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr System::Globalization::TextInfo::operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr ::System::Runtime::Serialization::IDeserializationCallback* System::Globalization::TextInfo::i___System__Runtime__Serialization__IDeserializationCallback() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Globalization::TextInfo::TextInfo() {}
