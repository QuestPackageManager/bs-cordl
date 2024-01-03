#pragma once
#include "Newtonsoft/Json/zzzz__DateParseHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__DateTimeZoneHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__FloatParseHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonPosition_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonToken_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__DateTimeZoneHandling_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReaderException_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "Newtonsoft/Json/zzzz__DateParseHandling_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonContainerType_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonPosition_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Newtonsoft/Json/zzzz__FloatParseHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonToken_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::__JsonReader__State::__JsonReader__State(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::__JsonReader__State::__JsonReader__State() {}
constexpr ::Newtonsoft::Json::__JsonReader__State Newtonsoft::Json::__JsonReader__State::Start{ static_cast<int32_t>(0x0) };
constexpr ::Newtonsoft::Json::__JsonReader__State Newtonsoft::Json::__JsonReader__State::Complete{ static_cast<int32_t>(0x1) };
constexpr ::Newtonsoft::Json::__JsonReader__State Newtonsoft::Json::__JsonReader__State::Property{ static_cast<int32_t>(0x2) };
constexpr ::Newtonsoft::Json::__JsonReader__State Newtonsoft::Json::__JsonReader__State::ObjectStart{ static_cast<int32_t>(0x3) };
constexpr ::Newtonsoft::Json::__JsonReader__State Newtonsoft::Json::__JsonReader__State::Object{ static_cast<int32_t>(0x4) };
constexpr ::Newtonsoft::Json::__JsonReader__State Newtonsoft::Json::__JsonReader__State::ArrayStart{ static_cast<int32_t>(0x5) };
constexpr ::Newtonsoft::Json::__JsonReader__State Newtonsoft::Json::__JsonReader__State::Array{ static_cast<int32_t>(0x6) };
constexpr ::Newtonsoft::Json::__JsonReader__State Newtonsoft::Json::__JsonReader__State::Closed{ static_cast<int32_t>(0x7) };
constexpr ::Newtonsoft::Json::__JsonReader__State Newtonsoft::Json::__JsonReader__State::PostValue{ static_cast<int32_t>(0x8) };
constexpr ::Newtonsoft::Json::__JsonReader__State Newtonsoft::Json::__JsonReader__State::ConstructorStart{ static_cast<int32_t>(0x9) };
constexpr ::Newtonsoft::Json::__JsonReader__State Newtonsoft::Json::__JsonReader__State::Constructor{ static_cast<int32_t>(0xa) };
constexpr ::Newtonsoft::Json::__JsonReader__State Newtonsoft::Json::__JsonReader__State::Error{ static_cast<int32_t>(0xb) };
constexpr ::Newtonsoft::Json::__JsonReader__State Newtonsoft::Json::__JsonReader__State::Finished{ static_cast<int32_t>(0xc) };
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.get_CurrentState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::__JsonReader__State (::Newtonsoft::Json::JsonReader::*)()>(
    &::Newtonsoft::Json::JsonReader::get_CurrentState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x264a574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "get_CurrentState",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.get_CloseInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::get_CloseInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x264a57c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "get_CloseInput",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.set_CloseInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonReader::*)(bool)>(&::Newtonsoft::Json::JsonReader::set_CloseInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x264a584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "set_CloseInput", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.get_SupportMultipleContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::get_SupportMultipleContent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x264a590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(),
                                                                               "get_SupportMultipleContent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.set_SupportMultipleContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonReader::*)(bool)>(&::Newtonsoft::Json::JsonReader::set_SupportMultipleContent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x264a598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "set_SupportMultipleContent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.get_QuoteChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::get_QuoteChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x264a5a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.set_QuoteChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonReader::*)(char16_t)>(&::Newtonsoft::Json::JsonReader::set_QuoteChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x264a5ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.get_DateTimeZoneHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::DateTimeZoneHandling (::Newtonsoft::Json::JsonReader::*)()>(
    &::Newtonsoft::Json::JsonReader::get_DateTimeZoneHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x264a5b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(),
                                                                               "get_DateTimeZoneHandling", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.set_DateTimeZoneHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonReader::*)(::Newtonsoft::Json::DateTimeZoneHandling)>(
    &::Newtonsoft::Json::JsonReader::set_DateTimeZoneHandling)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x264a5bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "set_DateTimeZoneHandling", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::DateTimeZoneHandling>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.get_DateParseHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::DateParseHandling (::Newtonsoft::Json::JsonReader::*)()>(
    &::Newtonsoft::Json::JsonReader::get_DateParseHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x264a620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "get_DateParseHandling",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.set_DateParseHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonReader::*)(::Newtonsoft::Json::DateParseHandling)>(
    &::Newtonsoft::Json::JsonReader::set_DateParseHandling)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x264a628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "set_DateParseHandling", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::DateParseHandling>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.get_FloatParseHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::FloatParseHandling (::Newtonsoft::Json::JsonReader::*)()>(
    &::Newtonsoft::Json::JsonReader::get_FloatParseHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x264a68c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "get_FloatParseHandling",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.set_FloatParseHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonReader::*)(::Newtonsoft::Json::FloatParseHandling)>(
    &::Newtonsoft::Json::JsonReader::set_FloatParseHandling)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x264a694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "set_FloatParseHandling", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::FloatParseHandling>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.get_DateFormatString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::get_DateFormatString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x264a6f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "get_DateFormatString",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.set_DateFormatString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonReader::*)(::StringW)>(&::Newtonsoft::Json::JsonReader::set_DateFormatString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x264a700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "set_DateFormatString", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.get_MaxDepth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int32_t> (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::get_MaxDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x264a708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "get_MaxDepth",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.set_MaxDepth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonReader::*)(::System::Nullable_1<int32_t>)>(
    &::Newtonsoft::Json::JsonReader::set_MaxDepth)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x264a710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "set_MaxDepth", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.get_TokenType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonToken (::Newtonsoft::Json::JsonReader::*)()>(
    &::Newtonsoft::Json::JsonReader::get_TokenType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x264a7d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x264a7d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.get_ValueType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::get_ValueType)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x264a7e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.get_Depth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::get_Depth)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x264a7f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.get_Path
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::get_Path)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x264a870;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.get_Culture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (::Newtonsoft::Json::JsonReader::*)()>(
    &::Newtonsoft::Json::JsonReader::get_Culture)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26414b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "get_Culture",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.set_Culture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonReader::*)(::System::Globalization::CultureInfo*)>(
    &::Newtonsoft::Json::JsonReader::set_Culture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x264a990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "set_Culture", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.GetPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonPosition (::Newtonsoft::Json::JsonReader::*)(int32_t)>(
    &::Newtonsoft::Json::JsonReader::GetPosition)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x264a998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "GetPosition", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2640920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.Push
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonReader::*)(::Newtonsoft::Json::JsonContainerType)>(
    &::Newtonsoft::Json::JsonReader::Push)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x264aa3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "Push", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonContainerType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.Pop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonContainerType (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::Pop)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x264acdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "Pop",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.Peek
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonContainerType (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::Peek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x264adf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "Peek",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::Read)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadAsInt32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int32_t> (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::ReadAsInt32)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x264ae00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadInt32String
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int32_t> (::Newtonsoft::Json::JsonReader::*)(::StringW)>(
    &::Newtonsoft::Json::JsonReader::ReadInt32String)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x264600c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "ReadInt32String", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadAsString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::ReadAsString)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x264b150;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadAsBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Newtonsoft::Json::JsonReader::*)()>(
    &::Newtonsoft::Json::JsonReader::ReadAsBytes)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x264b4b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadArrayIntoByteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Newtonsoft::Json::JsonReader::*)()>(
    &::Newtonsoft::Json::JsonReader::ReadArrayIntoByteArray)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x2643a38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "ReadArrayIntoByteArray",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadAsDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<double_t> (::Newtonsoft::Json::JsonReader::*)()>(
    &::Newtonsoft::Json::JsonReader::ReadAsDouble)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x264b8b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadDoubleString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<double_t> (::Newtonsoft::Json::JsonReader::*)(::StringW)>(
    &::Newtonsoft::Json::JsonReader::ReadDoubleString)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x2646420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "ReadDoubleString", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadAsBoolean
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<bool> (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::ReadAsBoolean)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x264bb7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadBooleanString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<bool> (::Newtonsoft::Json::JsonReader::*)(::StringW)>(
    &::Newtonsoft::Json::JsonReader::ReadBooleanString)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2645d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "ReadBooleanString", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadAsDecimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::Decimal> (::Newtonsoft::Json::JsonReader::*)()>(
    &::Newtonsoft::Json::JsonReader::ReadAsDecimal)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x264be3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadDecimalString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::Decimal> (::Newtonsoft::Json::JsonReader::*)(::StringW)>(
    &::Newtonsoft::Json::JsonReader::ReadDecimalString)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x26461f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "ReadDecimalString", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadAsDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::DateTime> (::Newtonsoft::Json::JsonReader::*)()>(
    &::Newtonsoft::Json::JsonReader::ReadAsDateTime)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x264c14c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadDateTimeString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::DateTime> (::Newtonsoft::Json::JsonReader::*)(::StringW)>(
    &::Newtonsoft::Json::JsonReader::ReadDateTimeString)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x26440b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "ReadDateTimeString", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadAsDateTimeOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::DateTimeOffset> (::Newtonsoft::Json::JsonReader::*)()>(
    &::Newtonsoft::Json::JsonReader::ReadAsDateTimeOffset)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x264c40c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadDateTimeOffsetString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::DateTimeOffset> (::Newtonsoft::Json::JsonReader::*)(::StringW)>(
    &::Newtonsoft::Json::JsonReader::ReadDateTimeOffsetString)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x2644340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "ReadDateTimeOffsetString",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReaderReadAndAssert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::ReaderReadAndAssert)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x264383c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "ReaderReadAndAssert",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.CreateUnexpectedEndException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonReaderException* (::Newtonsoft::Json::JsonReader::*)()>(
    &::Newtonsoft::Json::JsonReader::CreateUnexpectedEndException)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x26468f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(),
                                                                               "CreateUnexpectedEndException", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadIntoWrappedTypeObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::ReadIntoWrappedTypeObject)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2643880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(),
                                                                               "ReadIntoWrappedTypeObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.Skip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::Skip)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x264c6d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "Skip",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.SetToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonReader::*)(::Newtonsoft::Json::JsonToken)>(&::Newtonsoft::Json::JsonReader::SetToken)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2642380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "SetToken", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.SetToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonReader::*)(::Newtonsoft::Json::JsonToken, ::System::Object*)>(
    &::Newtonsoft::Json::JsonReader::SetToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x264558c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "SetToken", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.SetToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonReader::*)(::Newtonsoft::Json::JsonToken, ::System::Object*, bool)>(
    &::Newtonsoft::Json::JsonReader::SetToken)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x264135c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "SetToken", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.SetPostValueState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonReader::*)(bool)>(&::Newtonsoft::Json::JsonReader::SetPostValueState)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x264131c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "SetPostValueState", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.UpdateScopeWithFinishedValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::UpdateScopeWithFinishedValue)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x264acc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(),
                                                                               "UpdateScopeWithFinishedValue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ValidateEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonReader::*)(::Newtonsoft::Json::JsonToken)>(
    &::Newtonsoft::Json::JsonReader::ValidateEnd)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x264c770;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "ValidateEnd", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.SetStateBasedOnCurrent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::SetStateBasedOnCurrent)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2645f1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "SetStateBasedOnCurrent",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.SetFinished
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::SetFinished)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x264c870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "SetFinished",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.GetTypeForCloseToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonContainerType (::Newtonsoft::Json::JsonReader::*)(::Newtonsoft::Json::JsonToken)>(
    &::Newtonsoft::Json::JsonReader::GetTypeForCloseToken)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x264c888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "GetTypeForCloseToken", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x264c930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(),
                                                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonReader::*)(bool)>(&::Newtonsoft::Json::JsonReader::Dispose)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x264c9a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::Close)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2647a04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadAndAssert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::ReadAndAssert)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x264c9c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "ReadAndAssert",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.ReadAndMoveToContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::ReadAndMoveToContent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x264ca20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "ReadAndMoveToContent",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.MoveToContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::JsonReader::*)()>(&::Newtonsoft::Json::JsonReader::MoveToContent)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x264ca50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "MoveToContent",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonReader.GetContentToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonToken (::Newtonsoft::Json::JsonReader::*)()>(
    &::Newtonsoft::Json::JsonReader::GetContentToken)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x264b0dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "GetContentToken",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr Newtonsoft::Json::JsonReader::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::Newtonsoft::Json::JsonToken& Newtonsoft::Json::JsonReader::__get__tokenType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tokenType;
}
constexpr ::Newtonsoft::Json::JsonToken const& Newtonsoft::Json::JsonReader::__get__tokenType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tokenType;
}
constexpr void Newtonsoft::Json::JsonReader::__set__tokenType(::Newtonsoft::Json::JsonToken value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tokenType = value;
}
constexpr ::System::Object*& Newtonsoft::Json::JsonReader::__get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Newtonsoft::Json::JsonReader::__get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr void Newtonsoft::Json::JsonReader::__set__value(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr char16_t& Newtonsoft::Json::JsonReader::__get__quoteChar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____quoteChar;
}
constexpr char16_t const& Newtonsoft::Json::JsonReader::__get__quoteChar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____quoteChar;
}
constexpr void Newtonsoft::Json::JsonReader::__set__quoteChar(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____quoteChar = value;
}
constexpr ::Newtonsoft::Json::__JsonReader__State& Newtonsoft::Json::JsonReader::__get__currentState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentState;
}
constexpr ::Newtonsoft::Json::__JsonReader__State const& Newtonsoft::Json::JsonReader::__get__currentState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentState;
}
constexpr void Newtonsoft::Json::JsonReader::__set__currentState(::Newtonsoft::Json::__JsonReader__State value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentState = value;
}
constexpr ::Newtonsoft::Json::JsonPosition& Newtonsoft::Json::JsonReader::__get__currentPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPosition;
}
constexpr ::Newtonsoft::Json::JsonPosition const& Newtonsoft::Json::JsonReader::__get__currentPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPosition;
}
constexpr void Newtonsoft::Json::JsonReader::__set__currentPosition(::Newtonsoft::Json::JsonPosition value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentPosition = value;
}
constexpr ::System::Globalization::CultureInfo*& Newtonsoft::Json::JsonReader::__get__culture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____culture;
}
constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureInfo*> const& Newtonsoft::Json::JsonReader::__get__culture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____culture;
}
constexpr void Newtonsoft::Json::JsonReader::__set__culture(::System::Globalization::CultureInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____culture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::DateTimeZoneHandling& Newtonsoft::Json::JsonReader::__get__dateTimeZoneHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateTimeZoneHandling;
}
constexpr ::Newtonsoft::Json::DateTimeZoneHandling const& Newtonsoft::Json::JsonReader::__get__dateTimeZoneHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateTimeZoneHandling;
}
constexpr void Newtonsoft::Json::JsonReader::__set__dateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dateTimeZoneHandling = value;
}
constexpr ::System::Nullable_1<int32_t>& Newtonsoft::Json::JsonReader::__get__maxDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxDepth;
}
constexpr ::System::Nullable_1<int32_t> const& Newtonsoft::Json::JsonReader::__get__maxDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxDepth;
}
constexpr void Newtonsoft::Json::JsonReader::__set__maxDepth(::System::Nullable_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxDepth = value;
}
constexpr bool& Newtonsoft::Json::JsonReader::__get__hasExceededMaxDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasExceededMaxDepth;
}
constexpr bool const& Newtonsoft::Json::JsonReader::__get__hasExceededMaxDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasExceededMaxDepth;
}
constexpr void Newtonsoft::Json::JsonReader::__set__hasExceededMaxDepth(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasExceededMaxDepth = value;
}
constexpr ::Newtonsoft::Json::DateParseHandling& Newtonsoft::Json::JsonReader::__get__dateParseHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateParseHandling;
}
constexpr ::Newtonsoft::Json::DateParseHandling const& Newtonsoft::Json::JsonReader::__get__dateParseHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateParseHandling;
}
constexpr void Newtonsoft::Json::JsonReader::__set__dateParseHandling(::Newtonsoft::Json::DateParseHandling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dateParseHandling = value;
}
constexpr ::Newtonsoft::Json::FloatParseHandling& Newtonsoft::Json::JsonReader::__get__floatParseHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatParseHandling;
}
constexpr ::Newtonsoft::Json::FloatParseHandling const& Newtonsoft::Json::JsonReader::__get__floatParseHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatParseHandling;
}
constexpr void Newtonsoft::Json::JsonReader::__set__floatParseHandling(::Newtonsoft::Json::FloatParseHandling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floatParseHandling = value;
}
constexpr ::StringW& Newtonsoft::Json::JsonReader::__get__dateFormatString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateFormatString;
}
constexpr ::StringW const& Newtonsoft::Json::JsonReader::__get__dateFormatString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateFormatString;
}
constexpr void Newtonsoft::Json::JsonReader::__set__dateFormatString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dateFormatString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*& Newtonsoft::Json::JsonReader::__get__stack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stack;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*> const& Newtonsoft::Json::JsonReader::__get__stack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stack;
}
constexpr void Newtonsoft::Json::JsonReader::__set__stack(::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Newtonsoft::Json::JsonReader::__get__CloseInput_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CloseInput_k__BackingField;
}
constexpr bool const& Newtonsoft::Json::JsonReader::__get__CloseInput_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CloseInput_k__BackingField;
}
constexpr void Newtonsoft::Json::JsonReader::__set__CloseInput_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CloseInput_k__BackingField = value;
}
constexpr bool& Newtonsoft::Json::JsonReader::__get__SupportMultipleContent_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SupportMultipleContent_k__BackingField;
}
constexpr bool const& Newtonsoft::Json::JsonReader::__get__SupportMultipleContent_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SupportMultipleContent_k__BackingField;
}
constexpr void Newtonsoft::Json::JsonReader::__set__SupportMultipleContent_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____SupportMultipleContent_k__BackingField = value;
}
inline ::Newtonsoft::Json::__JsonReader__State Newtonsoft::Json::JsonReader::get_CurrentState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "get_CurrentState",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::__JsonReader__State, false>(this, ___internal_method);
}
inline bool Newtonsoft::Json::JsonReader::get_CloseInput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "get_CloseInput",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader::set_CloseInput(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "set_CloseInput", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Newtonsoft::Json::JsonReader::get_SupportMultipleContent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(),
                                                                             "get_SupportMultipleContent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader::set_SupportMultipleContent(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "set_SupportMultipleContent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline char16_t Newtonsoft::Json::JsonReader::get_QuoteChar() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader::set_QuoteChar(char16_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::DateTimeZoneHandling Newtonsoft::Json::JsonReader::get_DateTimeZoneHandling() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "get_DateTimeZoneHandling",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::DateTimeZoneHandling, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader::set_DateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "set_DateTimeZoneHandling", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::DateTimeZoneHandling>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::DateParseHandling Newtonsoft::Json::JsonReader::get_DateParseHandling() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "get_DateParseHandling",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::DateParseHandling, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader::set_DateParseHandling(::Newtonsoft::Json::DateParseHandling value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "set_DateParseHandling", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::DateParseHandling>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::FloatParseHandling Newtonsoft::Json::JsonReader::get_FloatParseHandling() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "get_FloatParseHandling",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::FloatParseHandling, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader::set_FloatParseHandling(::Newtonsoft::Json::FloatParseHandling value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "set_FloatParseHandling", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::FloatParseHandling>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonReader::get_DateFormatString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "get_DateFormatString",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader::set_DateFormatString(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "set_DateFormatString", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Nullable_1<int32_t> Newtonsoft::Json::JsonReader::get_MaxDepth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "get_MaxDepth",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader::set_MaxDepth(::System::Nullable_1<int32_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "set_MaxDepth", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::JsonToken Newtonsoft::Json::JsonReader::get_TokenType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonToken, false>(this, ___internal_method);
}
inline ::System::Object* Newtonsoft::Json::JsonReader::get_Value() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Type* Newtonsoft::Json::JsonReader::get_ValueType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::JsonReader::get_Depth() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::JsonReader::get_Path() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Globalization::CultureInfo* Newtonsoft::Json::JsonReader::get_Culture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "get_Culture",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader::set_Culture(::System::Globalization::CultureInfo* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "set_Culture", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::JsonPosition Newtonsoft::Json::JsonReader::GetPosition(int32_t depth) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "GetPosition", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonPosition, false>(this, ___internal_method, depth);
}
inline ::Newtonsoft::Json::JsonReader* Newtonsoft::Json::JsonReader::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::JsonReader*>());
}
inline void Newtonsoft::Json::JsonReader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader::Push(::Newtonsoft::Json::JsonContainerType value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "Push", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonContainerType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::JsonContainerType Newtonsoft::Json::JsonReader::Pop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "Pop",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonContainerType, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::JsonContainerType Newtonsoft::Json::JsonReader::Peek() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "Peek",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonContainerType, false>(this, ___internal_method);
}
inline bool Newtonsoft::Json::JsonReader::Read() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Nullable_1<int32_t> Newtonsoft::Json::JsonReader::ReadAsInt32() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>, false>(this, ___internal_method);
}
inline ::System::Nullable_1<int32_t> Newtonsoft::Json::JsonReader::ReadInt32String(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "ReadInt32String", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>, false>(this, ___internal_method, s);
}
inline ::StringW Newtonsoft::Json::JsonReader::ReadAsString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Newtonsoft::Json::JsonReader::ReadAsBytes() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Newtonsoft::Json::JsonReader::ReadArrayIntoByteArray() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "ReadArrayIntoByteArray",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::System::Nullable_1<double_t> Newtonsoft::Json::JsonReader::ReadAsDouble() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<double_t>, false>(this, ___internal_method);
}
inline ::System::Nullable_1<double_t> Newtonsoft::Json::JsonReader::ReadDoubleString(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "ReadDoubleString", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<double_t>, false>(this, ___internal_method, s);
}
inline ::System::Nullable_1<bool> Newtonsoft::Json::JsonReader::ReadAsBoolean() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>, false>(this, ___internal_method);
}
inline ::System::Nullable_1<bool> Newtonsoft::Json::JsonReader::ReadBooleanString(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "ReadBooleanString", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>, false>(this, ___internal_method, s);
}
inline ::System::Nullable_1<::System::Decimal> Newtonsoft::Json::JsonReader::ReadAsDecimal() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::Decimal>, false>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::Decimal> Newtonsoft::Json::JsonReader::ReadDecimalString(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "ReadDecimalString", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::Decimal>, false>(this, ___internal_method, s);
}
inline ::System::Nullable_1<::System::DateTime> Newtonsoft::Json::JsonReader::ReadAsDateTime() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTime>, false>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::DateTime> Newtonsoft::Json::JsonReader::ReadDateTimeString(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "ReadDateTimeString", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTime>, false>(this, ___internal_method, s);
}
inline ::System::Nullable_1<::System::DateTimeOffset> Newtonsoft::Json::JsonReader::ReadAsDateTimeOffset() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTimeOffset>, false>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::DateTimeOffset> Newtonsoft::Json::JsonReader::ReadDateTimeOffsetString(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "ReadDateTimeOffsetString", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTimeOffset>, false>(this, ___internal_method, s);
}
inline void Newtonsoft::Json::JsonReader::ReaderReadAndAssert() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "ReaderReadAndAssert",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::JsonReaderException* Newtonsoft::Json::JsonReader::CreateUnexpectedEndException() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(),
                                                                             "CreateUnexpectedEndException", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonReaderException*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader::ReadIntoWrappedTypeObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(),
                                                                             "ReadIntoWrappedTypeObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader::Skip() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "Skip",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader::SetToken(::Newtonsoft::Json::JsonToken newToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "SetToken", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newToken);
}
inline void Newtonsoft::Json::JsonReader::SetToken(::Newtonsoft::Json::JsonToken newToken, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "SetToken", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newToken, value);
}
inline void Newtonsoft::Json::JsonReader::SetToken(::Newtonsoft::Json::JsonToken newToken, ::System::Object* value, bool updateIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "SetToken", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newToken, value, updateIndex);
}
inline void Newtonsoft::Json::JsonReader::SetPostValueState(bool updateIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "SetPostValueState", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updateIndex);
}
inline void Newtonsoft::Json::JsonReader::UpdateScopeWithFinishedValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(),
                                                                             "UpdateScopeWithFinishedValue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader::ValidateEnd(::Newtonsoft::Json::JsonToken endToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "ValidateEnd", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, endToken);
}
inline void Newtonsoft::Json::JsonReader::SetStateBasedOnCurrent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "SetStateBasedOnCurrent",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader::SetFinished() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "SetFinished",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::JsonContainerType Newtonsoft::Json::JsonReader::GetTypeForCloseToken(::Newtonsoft::Json::JsonToken token) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "GetTypeForCloseToken", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonContainerType, false>(this, ___internal_method, token);
}
inline void Newtonsoft::Json::JsonReader::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(),
                                                                             "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void Newtonsoft::Json::JsonReader::Close() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonReader::ReadAndAssert() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "ReadAndAssert",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Newtonsoft::Json::JsonReader::ReadAndMoveToContent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "ReadAndMoveToContent",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Newtonsoft::Json::JsonReader::MoveToContent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "MoveToContent",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::JsonToken Newtonsoft::Json::JsonReader::GetContentToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonReader*>::get(), "GetContentToken",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonToken, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonReader::JsonReader() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
