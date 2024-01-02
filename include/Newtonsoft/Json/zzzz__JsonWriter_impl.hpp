#pragma once
#include "Newtonsoft/Json/zzzz__DateFormatHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__DateTimeZoneHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__FloatFormatHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__Formatting_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonPosition_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_impl.hpp"
#include "Newtonsoft/Json/zzzz__StringEscapeHandling_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonPosition_def.hpp"
#include "Newtonsoft/Json/zzzz__StringEscapeHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriterException_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "Newtonsoft/Json/zzzz__Formatting_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "Newtonsoft/Json/zzzz__WriteState_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonToken_def.hpp"
#include "Newtonsoft/Json/zzzz__DateTimeZoneHandling_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Newtonsoft/Json/zzzz__FloatFormatHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonContainerType_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Newtonsoft/Json/zzzz__DateFormatHandling_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__PrimitiveTypeCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::__JsonWriter__State::__JsonWriter__State(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::__JsonWriter__State::__JsonWriter__State() {}
constexpr ::Newtonsoft::Json::__JsonWriter__State Newtonsoft::Json::__JsonWriter__State::Start{ static_cast<int32_t>(0x0) };
constexpr ::Newtonsoft::Json::__JsonWriter__State Newtonsoft::Json::__JsonWriter__State::Property{ static_cast<int32_t>(0x1) };
constexpr ::Newtonsoft::Json::__JsonWriter__State Newtonsoft::Json::__JsonWriter__State::ObjectStart{ static_cast<int32_t>(0x2) };
constexpr ::Newtonsoft::Json::__JsonWriter__State Newtonsoft::Json::__JsonWriter__State::Object{ static_cast<int32_t>(0x3) };
constexpr ::Newtonsoft::Json::__JsonWriter__State Newtonsoft::Json::__JsonWriter__State::ArrayStart{ static_cast<int32_t>(0x4) };
constexpr ::Newtonsoft::Json::__JsonWriter__State Newtonsoft::Json::__JsonWriter__State::Array{ static_cast<int32_t>(0x5) };
constexpr ::Newtonsoft::Json::__JsonWriter__State Newtonsoft::Json::__JsonWriter__State::ConstructorStart{ static_cast<int32_t>(0x6) };
constexpr ::Newtonsoft::Json::__JsonWriter__State Newtonsoft::Json::__JsonWriter__State::Constructor{ static_cast<int32_t>(0x7) };
constexpr ::Newtonsoft::Json::__JsonWriter__State Newtonsoft::Json::__JsonWriter__State::Closed{ static_cast<int32_t>(0x8) };
constexpr ::Newtonsoft::Json::__JsonWriter__State Newtonsoft::Json::__JsonWriter__State::Error{ static_cast<int32_t>(0x9) };
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.BuildStateArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>,
                         ::Array<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>>*> (*)()>(&::Newtonsoft::Json::JsonWriter::BuildStateArray)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x2653c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "BuildStateArray",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_CloseOutput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::get_CloseOutput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2654dd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "get_CloseOutput",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.set_CloseOutput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(bool)>(&::Newtonsoft::Json::JsonWriter::set_CloseOutput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2654de0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "set_CloseOutput", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_Top
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::get_Top)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2654dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "get_Top",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_WriteState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::WriteState (::Newtonsoft::Json::JsonWriter::*)()>(
    &::Newtonsoft::Json::JsonWriter::get_WriteState)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2654e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "get_WriteState",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_ContainerPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::get_ContainerPath)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2654ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "get_ContainerPath",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_Path
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::get_Path)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2654f8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "get_Path",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_Formatting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Formatting (::Newtonsoft::Json::JsonWriter::*)()>(
    &::Newtonsoft::Json::JsonWriter::get_Formatting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26550b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "get_Formatting",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.set_Formatting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::Formatting)>(
    &::Newtonsoft::Json::JsonWriter::set_Formatting)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x26550b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "set_Formatting", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Formatting>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_DateFormatHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::DateFormatHandling (::Newtonsoft::Json::JsonWriter::*)()>(
    &::Newtonsoft::Json::JsonWriter::get_DateFormatHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x265511c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "get_DateFormatHandling",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.set_DateFormatHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::DateFormatHandling)>(
    &::Newtonsoft::Json::JsonWriter::set_DateFormatHandling)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2655124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "set_DateFormatHandling", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::DateFormatHandling>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_DateTimeZoneHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::DateTimeZoneHandling (::Newtonsoft::Json::JsonWriter::*)()>(
    &::Newtonsoft::Json::JsonWriter::get_DateTimeZoneHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2655188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                               "get_DateTimeZoneHandling", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.set_DateTimeZoneHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::DateTimeZoneHandling)>(
    &::Newtonsoft::Json::JsonWriter::set_DateTimeZoneHandling)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2655190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "set_DateTimeZoneHandling", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::DateTimeZoneHandling>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_StringEscapeHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::StringEscapeHandling (::Newtonsoft::Json::JsonWriter::*)()>(
    &::Newtonsoft::Json::JsonWriter::get_StringEscapeHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26551f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                               "get_StringEscapeHandling", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.set_StringEscapeHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::StringEscapeHandling)>(
    &::Newtonsoft::Json::JsonWriter::set_StringEscapeHandling)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x26551fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "set_StringEscapeHandling", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::StringEscapeHandling>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.OnStringEscapeHandlingChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::OnStringEscapeHandlingChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2655268;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_FloatFormatHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::FloatFormatHandling (::Newtonsoft::Json::JsonWriter::*)()>(
    &::Newtonsoft::Json::JsonWriter::get_FloatFormatHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x265526c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                               "get_FloatFormatHandling", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.set_FloatFormatHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::FloatFormatHandling)>(
    &::Newtonsoft::Json::JsonWriter::set_FloatFormatHandling)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2655274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "set_FloatFormatHandling", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::FloatFormatHandling>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_DateFormatString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::get_DateFormatString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26552d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "get_DateFormatString",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.set_DateFormatString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonWriter::set_DateFormatString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26552e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "set_DateFormatString", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.get_Culture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (::Newtonsoft::Json::JsonWriter::*)()>(
    &::Newtonsoft::Json::JsonWriter::get_Culture)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26552e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "get_Culture",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.set_Culture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Globalization::CultureInfo*)>(
    &::Newtonsoft::Json::JsonWriter::set_Culture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2655350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "set_Culture", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2655358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.UpdateScopeWithFinishedValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::UpdateScopeWithFinishedValue)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2655384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                               "UpdateScopeWithFinishedValue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.Push
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonContainerType)>(
    &::Newtonsoft::Json::JsonWriter::Push)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x265539c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "Push", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonContainerType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.Pop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonContainerType (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::Pop)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2655514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "Pop",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.Peek
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonContainerType (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::Peek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2654e3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "Peek",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.Flush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::Flush)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::Close)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26555e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteStartObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::WriteStartObject)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2655628;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteEndObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::WriteEndObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2655674;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteStartArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::WriteStartArray)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2655680;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteEndArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::WriteEndArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x265568c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteStartConstructor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonWriter::WriteStartConstructor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2655694;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteEndConstructor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::WriteEndConstructor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26556a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WritePropertyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonWriter::WritePropertyName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26556a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WritePropertyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::StringW, bool)>(&::Newtonsoft::Json::JsonWriter::WritePropertyName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26556c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::WriteEnd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26556d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonReader*)>(
    &::Newtonsoft::Json::JsonWriter::WriteToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x265579c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "WriteToken", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonReader*, bool)>(
    &::Newtonsoft::Json::JsonWriter::WriteToken)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x26557a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "WriteToken", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonToken, ::System::Object*)>(
    &::Newtonsoft::Json::JsonWriter::WriteToken)> {
  constexpr static std::size_t size = 0x5cc;
  constexpr static std::size_t addrs = 0x2655874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "WriteToken", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonToken)>(
    &::Newtonsoft::Json::JsonWriter::WriteToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2655f40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "WriteToken", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonReader*, bool, bool, bool)>(
    &::Newtonsoft::Json::JsonWriter::WriteToken)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2655f48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteConstructorDate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonReader*)>(
    &::Newtonsoft::Json::JsonWriter::WriteConstructorDate)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x2656118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "WriteConstructorDate", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonContainerType)>(
    &::Newtonsoft::Json::JsonWriter::WriteEnd)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x26556e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "WriteEnd", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonContainerType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.AutoCompleteAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::AutoCompleteAll)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x26555e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "AutoCompleteAll",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.GetCloseTokenForType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonToken (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonContainerType)>(
    &::Newtonsoft::Json::JsonWriter::GetCloseTokenForType)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x26563a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "GetCloseTokenForType", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonContainerType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.AutoCompleteClose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonContainerType)>(
    &::Newtonsoft::Json::JsonWriter::AutoCompleteClose)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x2656428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "AutoCompleteClose", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonContainerType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonToken)>(&::Newtonsoft::Json::JsonWriter::WriteEnd)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2656608;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteIndent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::WriteIndent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x265660c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValueDelimiter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::WriteValueDelimiter)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2656610;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteIndentSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::WriteIndentSpace)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2656614;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.AutoComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonToken)>(
    &::Newtonsoft::Json::JsonWriter::AutoComplete)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x2656618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "AutoComplete", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::WriteNull)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26568f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteUndefined
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::WriteUndefined)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x265692c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonWriter::WriteRaw)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2656948;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteRawValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonWriter::WriteRawValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2656950;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26569a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(int32_t)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26569bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(uint32_t)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26569d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(int64_t)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26569f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(uint64_t)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2656a10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(float_t)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2656a2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(double_t)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2656a48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(bool)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2656a64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(int16_t)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2656a80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(uint16_t)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2656a9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(char16_t)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2656ab8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(uint8_t)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2656ad4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(int8_t)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2656af0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Decimal)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2656b0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 39));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::DateTime)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2656b28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::DateTimeOffset)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2656b44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 41));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Guid)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2656b60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 42));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::TimeSpan)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2656b7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 43));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<int32_t>)>(
    &::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2656b98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 44));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<uint32_t>)>(
    &::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2656c14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 45));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<int64_t>)>(
    &::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2656c90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 46));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<uint64_t>)>(
    &::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2656d1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 47));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<float_t>)>(
    &::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2656da8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 48));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<double_t>)>(
    &::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2656e28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 49));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<bool>)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2656eb8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 50));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<int16_t>)>(
    &::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2656f40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 51));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<uint16_t>)>(
    &::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2656fbc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 52));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<char16_t>)>(
    &::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2657038;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 53));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<uint8_t>)>(
    &::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x26570b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 54));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<int8_t>)>(
    &::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2657130;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 55));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<::System::Decimal>)>(
    &::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x26571ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 56));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<::System::DateTime>)>(
    &::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x265722c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 57));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<::System::DateTimeOffset>)>(
    &::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x26572b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 58));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<::System::Guid>)>(
    &::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2657338;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 59));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Nullable_1<::System::TimeSpan>)>(
    &::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x26573bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 60));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2657448;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 61));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Uri*)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2657478;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 62));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::System::Object*)>(&::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2657524;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 63));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteComment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonWriter::WriteComment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2658778;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 64));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteWhitespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonWriter::WriteWhitespace)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2658788;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 65));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x26587e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(bool)>(&::Newtonsoft::Json::JsonWriter::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2658858;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 66));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode, ::System::Object*)>(
    &::Newtonsoft::Json::JsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x1118;
  constexpr static std::size_t addrs = 0x2657660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "WriteValue", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Utilities::PrimitiveTypeCode>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.CreateUnsupportedTypeException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonWriterException* (*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*)>(
    &::Newtonsoft::Json::JsonWriter::CreateUnsupportedTypeException)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2658964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "CreateUnsupportedTypeException", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.SetWriteState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonToken, ::System::Object*)>(
    &::Newtonsoft::Json::JsonWriter::SetWriteState)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2658ac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "SetWriteState", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.InternalWriteEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonContainerType)>(
    &::Newtonsoft::Json::JsonWriter::InternalWriteEnd)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x265567c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "InternalWriteEnd", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonContainerType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.InternalWritePropertyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonWriter::InternalWritePropertyName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26556b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "InternalWritePropertyName",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.InternalWriteRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::InternalWriteRaw)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x265694c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "InternalWriteRaw",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.InternalWriteStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonToken, ::Newtonsoft::Json::JsonContainerType)>(
    &::Newtonsoft::Json::JsonWriter::InternalWriteStart)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2655634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "InternalWriteStart", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonContainerType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.InternalWriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::Newtonsoft::Json::JsonToken)>(
    &::Newtonsoft::Json::JsonWriter::InternalWriteValue)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2656914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "InternalWriteValue", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.InternalWriteWhitespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)(::StringW)>(&::Newtonsoft::Json::JsonWriter::InternalWriteWhitespace)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x265878c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "InternalWriteWhitespace", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonWriter.InternalWriteComment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonWriter::*)()>(&::Newtonsoft::Json::JsonWriter::InternalWriteComment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2658780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "InternalWriteComment",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr Newtonsoft::Json::JsonWriter::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*& Newtonsoft::Json::JsonWriter::__get__stack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stack;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*> const& Newtonsoft::Json::JsonWriter::__get__stack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stack;
}
constexpr void Newtonsoft::Json::JsonWriter::__set__stack(::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::JsonPosition& Newtonsoft::Json::JsonWriter::__get__currentPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPosition;
}
constexpr ::Newtonsoft::Json::JsonPosition const& Newtonsoft::Json::JsonWriter::__get__currentPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPosition;
}
constexpr void Newtonsoft::Json::JsonWriter::__set__currentPosition(::Newtonsoft::Json::JsonPosition value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentPosition = value;
}
constexpr ::Newtonsoft::Json::__JsonWriter__State& Newtonsoft::Json::JsonWriter::__get__currentState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentState;
}
constexpr ::Newtonsoft::Json::__JsonWriter__State const& Newtonsoft::Json::JsonWriter::__get__currentState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentState;
}
constexpr void Newtonsoft::Json::JsonWriter::__set__currentState(::Newtonsoft::Json::__JsonWriter__State value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentState = value;
}
constexpr ::Newtonsoft::Json::Formatting& Newtonsoft::Json::JsonWriter::__get__formatting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____formatting;
}
constexpr ::Newtonsoft::Json::Formatting const& Newtonsoft::Json::JsonWriter::__get__formatting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____formatting;
}
constexpr void Newtonsoft::Json::JsonWriter::__set__formatting(::Newtonsoft::Json::Formatting value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____formatting = value;
}
constexpr bool& Newtonsoft::Json::JsonWriter::__get__CloseOutput_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CloseOutput_k__BackingField;
}
constexpr bool const& Newtonsoft::Json::JsonWriter::__get__CloseOutput_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CloseOutput_k__BackingField;
}
constexpr void Newtonsoft::Json::JsonWriter::__set__CloseOutput_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CloseOutput_k__BackingField = value;
}
constexpr ::Newtonsoft::Json::DateFormatHandling& Newtonsoft::Json::JsonWriter::__get__dateFormatHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateFormatHandling;
}
constexpr ::Newtonsoft::Json::DateFormatHandling const& Newtonsoft::Json::JsonWriter::__get__dateFormatHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateFormatHandling;
}
constexpr void Newtonsoft::Json::JsonWriter::__set__dateFormatHandling(::Newtonsoft::Json::DateFormatHandling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dateFormatHandling = value;
}
constexpr ::Newtonsoft::Json::DateTimeZoneHandling& Newtonsoft::Json::JsonWriter::__get__dateTimeZoneHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateTimeZoneHandling;
}
constexpr ::Newtonsoft::Json::DateTimeZoneHandling const& Newtonsoft::Json::JsonWriter::__get__dateTimeZoneHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateTimeZoneHandling;
}
constexpr void Newtonsoft::Json::JsonWriter::__set__dateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dateTimeZoneHandling = value;
}
constexpr ::Newtonsoft::Json::StringEscapeHandling& Newtonsoft::Json::JsonWriter::__get__stringEscapeHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringEscapeHandling;
}
constexpr ::Newtonsoft::Json::StringEscapeHandling const& Newtonsoft::Json::JsonWriter::__get__stringEscapeHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringEscapeHandling;
}
constexpr void Newtonsoft::Json::JsonWriter::__set__stringEscapeHandling(::Newtonsoft::Json::StringEscapeHandling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stringEscapeHandling = value;
}
constexpr ::Newtonsoft::Json::FloatFormatHandling& Newtonsoft::Json::JsonWriter::__get__floatFormatHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatFormatHandling;
}
constexpr ::Newtonsoft::Json::FloatFormatHandling const& Newtonsoft::Json::JsonWriter::__get__floatFormatHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatFormatHandling;
}
constexpr void Newtonsoft::Json::JsonWriter::__set__floatFormatHandling(::Newtonsoft::Json::FloatFormatHandling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floatFormatHandling = value;
}
constexpr ::StringW& Newtonsoft::Json::JsonWriter::__get__dateFormatString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateFormatString;
}
constexpr ::StringW const& Newtonsoft::Json::JsonWriter::__get__dateFormatString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateFormatString;
}
constexpr void Newtonsoft::Json::JsonWriter::__set__dateFormatString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dateFormatString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Globalization::CultureInfo*& Newtonsoft::Json::JsonWriter::__get__culture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____culture;
}
constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureInfo*> const& Newtonsoft::Json::JsonWriter::__get__culture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____culture;
}
constexpr void Newtonsoft::Json::JsonWriter::__set__culture(::System::Globalization::CultureInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____culture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Newtonsoft::Json::JsonWriter::setStaticF_StateArray(::ArrayW<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>,
                                                                         ::Array<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>>*>
                                                                    value) {
  ::cordl_internals::setStaticField<::ArrayW<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>,
                                             ::Array<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>>*>,
                                    "StateArray", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get>(
      std::forward<::ArrayW<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>,
                            ::Array<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>>*>>(value));
}
inline ::ArrayW<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>,
                ::Array<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>>*>
Newtonsoft::Json::JsonWriter::getStaticF_StateArray() {
  return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>,
                                                    ::Array<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>>*>,
                                           "StateArray", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get>();
}
inline void Newtonsoft::Json::JsonWriter::setStaticF_StateArrayTempate(::ArrayW<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>,
                                                                                ::Array<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>>*>
                                                                           value) {
  ::cordl_internals::setStaticField<::ArrayW<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>,
                                             ::Array<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>>*>,
                                    "StateArrayTempate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get>(
      std::forward<::ArrayW<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>,
                            ::Array<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>>*>>(value));
}
inline ::ArrayW<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>,
                ::Array<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>>*>
Newtonsoft::Json::JsonWriter::getStaticF_StateArrayTempate() {
  return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>,
                                                    ::Array<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>>*>,
                                           "StateArrayTempate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get>();
}
inline ::ArrayW<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>,
                ::Array<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>>*>
Newtonsoft::Json::JsonWriter::BuildStateArray() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "BuildStateArray",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>,
                                                      ::Array<::ArrayW<::Newtonsoft::Json::__JsonWriter__State, ::Array<::Newtonsoft::Json::__JsonWriter__State>*>>*>,
                                             false>(nullptr, ___internal_method);
}
inline bool Newtonsoft::Json::JsonWriter::get_CloseOutput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "get_CloseOutput",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::set_CloseOutput(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "set_CloseOutput", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Newtonsoft::Json::JsonWriter::get_Top() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "get_Top",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::WriteState Newtonsoft::Json::JsonWriter::get_WriteState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "get_WriteState",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::WriteState, false>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::JsonWriter::get_ContainerPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "get_ContainerPath",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::JsonWriter::get_Path() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "get_Path",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Formatting Newtonsoft::Json::JsonWriter::get_Formatting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "get_Formatting",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Formatting, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::set_Formatting(::Newtonsoft::Json::Formatting value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "set_Formatting", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Formatting>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::DateFormatHandling Newtonsoft::Json::JsonWriter::get_DateFormatHandling() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "get_DateFormatHandling",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::DateFormatHandling, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::set_DateFormatHandling(::Newtonsoft::Json::DateFormatHandling value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "set_DateFormatHandling", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::DateFormatHandling>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::DateTimeZoneHandling Newtonsoft::Json::JsonWriter::get_DateTimeZoneHandling() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "get_DateTimeZoneHandling",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::DateTimeZoneHandling, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::set_DateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "set_DateTimeZoneHandling", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::DateTimeZoneHandling>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::StringEscapeHandling Newtonsoft::Json::JsonWriter::get_StringEscapeHandling() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "get_StringEscapeHandling",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::StringEscapeHandling, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::set_StringEscapeHandling(::Newtonsoft::Json::StringEscapeHandling value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "set_StringEscapeHandling", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::StringEscapeHandling>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::OnStringEscapeHandlingChanged() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::FloatFormatHandling Newtonsoft::Json::JsonWriter::get_FloatFormatHandling() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "get_FloatFormatHandling",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::FloatFormatHandling, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::set_FloatFormatHandling(::Newtonsoft::Json::FloatFormatHandling value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "set_FloatFormatHandling", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::FloatFormatHandling>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonWriter::get_DateFormatString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "get_DateFormatString",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::set_DateFormatString(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "set_DateFormatString", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Globalization::CultureInfo* Newtonsoft::Json::JsonWriter::get_Culture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "get_Culture",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::set_Culture(::System::Globalization::CultureInfo* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "set_Culture", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::JsonWriter* Newtonsoft::Json::JsonWriter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::JsonWriter*>());
}
inline void Newtonsoft::Json::JsonWriter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::UpdateScopeWithFinishedValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                             "UpdateScopeWithFinishedValue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::Push(::Newtonsoft::Json::JsonContainerType value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "Push", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonContainerType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::JsonContainerType Newtonsoft::Json::JsonWriter::Pop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "Pop",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonContainerType, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::JsonContainerType Newtonsoft::Json::JsonWriter::Peek() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "Peek",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonContainerType, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::Flush() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::Close() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::WriteStartObject() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::WriteEndObject() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::WriteStartArray() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::WriteEndArray() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::WriteStartConstructor(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void Newtonsoft::Json::JsonWriter::WriteEndConstructor() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::WritePropertyName(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void Newtonsoft::Json::JsonWriter::WritePropertyName(::StringW name, bool escape) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, escape);
}
inline void Newtonsoft::Json::JsonWriter::WriteEnd() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::WriteToken(::Newtonsoft::Json::JsonReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "WriteToken", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void Newtonsoft::Json::JsonWriter::WriteToken(::Newtonsoft::Json::JsonReader* reader, bool writeChildren) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "WriteToken", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, writeChildren);
}
inline void Newtonsoft::Json::JsonWriter::WriteToken(::Newtonsoft::Json::JsonToken token, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "WriteToken", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, token, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteToken(::Newtonsoft::Json::JsonToken token) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "WriteToken", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, token);
}
inline void Newtonsoft::Json::JsonWriter::WriteToken(::Newtonsoft::Json::JsonReader* reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, writeChildren, writeDateConstructorAsDate, writeComments);
}
inline void Newtonsoft::Json::JsonWriter::WriteConstructorDate(::Newtonsoft::Json::JsonReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "WriteConstructorDate", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void Newtonsoft::Json::JsonWriter::WriteEnd(::Newtonsoft::Json::JsonContainerType type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "WriteEnd", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonContainerType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void Newtonsoft::Json::JsonWriter::AutoCompleteAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "AutoCompleteAll",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::JsonToken Newtonsoft::Json::JsonWriter::GetCloseTokenForType(::Newtonsoft::Json::JsonContainerType type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "GetCloseTokenForType", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonContainerType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonToken, false>(this, ___internal_method, type);
}
inline void Newtonsoft::Json::JsonWriter::AutoCompleteClose(::Newtonsoft::Json::JsonContainerType type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "AutoCompleteClose", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonContainerType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void Newtonsoft::Json::JsonWriter::WriteEnd(::Newtonsoft::Json::JsonToken token) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, token);
}
inline void Newtonsoft::Json::JsonWriter::WriteIndent() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::WriteValueDelimiter() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::WriteIndentSpace() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::AutoComplete(::Newtonsoft::Json::JsonToken tokenBeingWritten) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "AutoComplete", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tokenBeingWritten);
}
inline void Newtonsoft::Json::JsonWriter::WriteNull() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::WriteUndefined() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::WriteRaw(::StringW json) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, json);
}
inline void Newtonsoft::Json::JsonWriter::WriteRawValue(::StringW json) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, json);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::StringW value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(int32_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(uint32_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(int64_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(uint64_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(float_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(double_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(bool value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(int16_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(uint16_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(char16_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(uint8_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(int8_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Decimal value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 39)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::DateTime value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 40)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::DateTimeOffset value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 41)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Guid value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 42)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::TimeSpan value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 43)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<int32_t> value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 44)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<uint32_t> value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 45)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<int64_t> value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 46)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<uint64_t> value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 47)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<float_t> value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 48)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<double_t> value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 49)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<bool> value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 50)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<int16_t> value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 51)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<uint16_t> value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 52)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<char16_t> value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 53)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<uint8_t> value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 54)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<int8_t> value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 55)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<::System::Decimal> value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 56)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<::System::DateTime> value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 57)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<::System::DateTimeOffset> value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 58)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<::System::Guid> value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 59)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Nullable_1<::System::TimeSpan> value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 60)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 61)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Uri* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 62)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 63)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonWriter::WriteComment(::StringW text) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 64)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text);
}
inline void Newtonsoft::Json::JsonWriter::WriteWhitespace(::StringW ws) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 65)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ws);
}
inline void Newtonsoft::Json::JsonWriter::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                             "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), 66)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void Newtonsoft::Json::JsonWriter::WriteValue(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode typeCode, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "WriteValue", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Utilities::PrimitiveTypeCode>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, writer, typeCode, value);
}
inline ::Newtonsoft::Json::JsonWriterException* Newtonsoft::Json::JsonWriter::CreateUnsupportedTypeException(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "CreateUnsupportedTypeException", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonWriterException*, false>(nullptr, ___internal_method, writer, value);
}
inline void Newtonsoft::Json::JsonWriter::SetWriteState(::Newtonsoft::Json::JsonToken token, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "SetWriteState", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, token, value);
}
inline void Newtonsoft::Json::JsonWriter::InternalWriteEnd(::Newtonsoft::Json::JsonContainerType container) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "InternalWriteEnd", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonContainerType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline void Newtonsoft::Json::JsonWriter::InternalWritePropertyName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "InternalWritePropertyName", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void Newtonsoft::Json::JsonWriter::InternalWriteRaw() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "InternalWriteRaw",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonWriter::InternalWriteStart(::Newtonsoft::Json::JsonToken token, ::Newtonsoft::Json::JsonContainerType container) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "InternalWriteStart", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonContainerType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, token, container);
}
inline void Newtonsoft::Json::JsonWriter::InternalWriteValue(::Newtonsoft::Json::JsonToken token) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "InternalWriteValue", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, token);
}
inline void Newtonsoft::Json::JsonWriter::InternalWriteWhitespace(::StringW ws) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "InternalWriteWhitespace", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ws);
}
inline void Newtonsoft::Json::JsonWriter::InternalWriteComment() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonWriter*>::get(), "InternalWriteComment",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonWriter::JsonWriter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
