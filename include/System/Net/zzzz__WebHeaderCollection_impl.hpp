#pragma once
#include "System/Collections/Specialized/zzzz__NameValueCollection_impl.hpp"
#include "System/Net/zzzz__WebHeaderCollectionType_impl.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Collections/Specialized/zzzz__NameValueCollection_def.hpp"
#include "System/Net/zzzz__HttpRequestHeader_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Net/zzzz__HeaderInfoTable_def.hpp"
#include "System/Net/zzzz__WebHeaderCollectionType_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::__WebHeaderCollection__RfcChar::__WebHeaderCollection__RfcChar(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::__WebHeaderCollection__RfcChar::__WebHeaderCollection__RfcChar() {}
constexpr ::System::Net::__WebHeaderCollection__RfcChar System::Net::__WebHeaderCollection__RfcChar::High{ static_cast<uint8_t>(0x0u) };
constexpr ::System::Net::__WebHeaderCollection__RfcChar System::Net::__WebHeaderCollection__RfcChar::Reg{ static_cast<uint8_t>(0x1u) };
constexpr ::System::Net::__WebHeaderCollection__RfcChar System::Net::__WebHeaderCollection__RfcChar::Ctl{ static_cast<uint8_t>(0x2u) };
constexpr ::System::Net::__WebHeaderCollection__RfcChar System::Net::__WebHeaderCollection__RfcChar::CR{ static_cast<uint8_t>(0x3u) };
constexpr ::System::Net::__WebHeaderCollection__RfcChar System::Net::__WebHeaderCollection__RfcChar::LF{ static_cast<uint8_t>(0x4u) };
constexpr ::System::Net::__WebHeaderCollection__RfcChar System::Net::__WebHeaderCollection__RfcChar::WS{ static_cast<uint8_t>(0x5u) };
constexpr ::System::Net::__WebHeaderCollection__RfcChar System::Net::__WebHeaderCollection__RfcChar::Colon{ static_cast<uint8_t>(0x6u) };
constexpr ::System::Net::__WebHeaderCollection__RfcChar System::Net::__WebHeaderCollection__RfcChar::Delim{ static_cast<uint8_t>(0x7u) };
//  Writing Method size for method: ::System::Net::WebHeaderCollection.NormalizeCommonHeaders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebHeaderCollection::*)()>(&::System::Net::WebHeaderCollection::NormalizeCommonHeaders)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x299fd38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(),
                                                                               "NormalizeCommonHeaders", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.get_InnerCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Specialized::NameValueCollection* (::System::Net::WebHeaderCollection::*)()>(
    &::System::Net::WebHeaderCollection::get_InnerCollection)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x299fe38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(),
                                                                               "get_InnerCollection", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.AllowMultiValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::Net::WebHeaderCollection::AllowMultiValues)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x299fedc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), "AllowMultiValues", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.get_AllowHttpRequestHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebHeaderCollection::*)()>(&::System::Net::WebHeaderCollection::get_AllowHttpRequestHeader)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x29a0060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(),
                                                                               "get_AllowHttpRequestHeader", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebHeaderCollection::*)(::System::Net::HttpRequestHeader)>(
    &::System::Net::WebHeaderCollection::Remove)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x29a0098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), "Remove", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpRequestHeader>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.AddInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebHeaderCollection::*)(::StringW, ::StringW)>(
    &::System::Net::WebHeaderCollection::AddInternal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x29a0190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), "AddInternal", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.ChangeInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebHeaderCollection::*)(::StringW, ::StringW)>(
    &::System::Net::WebHeaderCollection::ChangeInternal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x29a01e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), "ChangeInternal", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.RemoveInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebHeaderCollection::*)(::StringW)>(&::System::Net::WebHeaderCollection::RemoveInternal)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x29a0238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), "RemoveInternal", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.CheckBadChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, bool)>(&::System::Net::WebHeaderCollection::CheckBadChars)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x29a0294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), "CheckBadChars", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.ContainsNonAsciiChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::Net::WebHeaderCollection::ContainsNonAsciiChars)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x29a0628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), "ContainsNonAsciiChars",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.ThrowOnRestrictedHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebHeaderCollection::*)(::StringW)>(
    &::System::Net::WebHeaderCollection::ThrowOnRestrictedHeader)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x29a06ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), "ThrowOnRestrictedHeader",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebHeaderCollection::*)(::StringW, ::StringW)>(&::System::Net::WebHeaderCollection::Add)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x29a0814;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebHeaderCollection::*)(::StringW)>(&::System::Net::WebHeaderCollection::Add)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x29a09c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), "Add", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebHeaderCollection::*)(::StringW, ::StringW)>(&::System::Net::WebHeaderCollection::Set)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x29a0ca4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.SetInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebHeaderCollection::*)(::StringW, ::StringW)>(
    &::System::Net::WebHeaderCollection::SetInternal)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x29a0ed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), "SetInternal", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebHeaderCollection::*)(::StringW)>(&::System::Net::WebHeaderCollection::Remove)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x29a10f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.GetValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Net::WebHeaderCollection::*)(::StringW)>(
    &::System::Net::WebHeaderCollection::GetValues)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x29a1234;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::WebHeaderCollection::*)()>(&::System::Net::WebHeaderCollection::ToString)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x29a143c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.GetAsString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Collections::Specialized::NameValueCollection*, bool, bool)>(
    &::System::Net::WebHeaderCollection::GetAsString)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x29a1498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), "GetAsString", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Specialized::NameValueCollection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebHeaderCollection::*)()>(&::System::Net::WebHeaderCollection::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x29a173c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebHeaderCollection::*)(::System::Net::WebHeaderCollectionType)>(
    &::System::Net::WebHeaderCollection::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x29a17a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebHeaderCollectionType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebHeaderCollection::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::WebHeaderCollection::_ctor)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x29a1884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.OnDeserialization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebHeaderCollection::*)(::System::Object*)>(
    &::System::Net::WebHeaderCollection::OnDeserialization)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29a1a48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebHeaderCollection::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::WebHeaderCollection::GetObjectData)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x29a1a4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.System_Runtime_Serialization_ISerializable_GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Net::WebHeaderCollection::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
        &::System::Net::WebHeaderCollection::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29a1bcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::WebHeaderCollection::*)(::StringW)>(&::System::Net::WebHeaderCollection::Get)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x29a1bd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::Net::WebHeaderCollection::*)()>(
    &::System::Net::WebHeaderCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x29a1f00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::WebHeaderCollection::*)()>(&::System::Net::WebHeaderCollection::get_Count)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x29a1f7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::WebHeaderCollection::*)(int32_t)>(&::System::Net::WebHeaderCollection::Get)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x29a1fac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.GetValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Net::WebHeaderCollection::*)(int32_t)>(
    &::System::Net::WebHeaderCollection::GetValues)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x29a1fec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.GetKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::WebHeaderCollection::*)(int32_t)>(&::System::Net::WebHeaderCollection::GetKey)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x29a202c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), 22));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Net::WebHeaderCollection::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Net::WebHeaderCollection::__get_m_CommonHeaders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CommonHeaders;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Net::WebHeaderCollection::__get_m_CommonHeaders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CommonHeaders;
}
constexpr void System::Net::WebHeaderCollection::__set_m_CommonHeaders(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CommonHeaders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Net::WebHeaderCollection::__get_m_NumCommonHeaders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NumCommonHeaders;
}
constexpr int32_t const& System::Net::WebHeaderCollection::__get_m_NumCommonHeaders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NumCommonHeaders;
}
constexpr void System::Net::WebHeaderCollection::__set_m_NumCommonHeaders(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NumCommonHeaders = value;
}
constexpr ::System::Collections::Specialized::NameValueCollection*& System::Net::WebHeaderCollection::__get_m_InnerCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InnerCollection;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Specialized::NameValueCollection*> const& System::Net::WebHeaderCollection::__get_m_InnerCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InnerCollection;
}
constexpr void System::Net::WebHeaderCollection::__set_m_InnerCollection(::System::Collections::Specialized::NameValueCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_InnerCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::WebHeaderCollectionType& System::Net::WebHeaderCollection::__get_m_Type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Type;
}
constexpr ::System::Net::WebHeaderCollectionType const& System::Net::WebHeaderCollection::__get_m_Type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Type;
}
constexpr void System::Net::WebHeaderCollection::__set_m_Type(::System::Net::WebHeaderCollectionType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Type = value;
}
inline void System::Net::WebHeaderCollection::setStaticF_HInfo(::System::Net::HeaderInfoTable* value) {
  ::cordl_internals::setStaticField<::System::Net::HeaderInfoTable*, "HInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get>(
      std::forward<::System::Net::HeaderInfoTable*>(value));
}
inline ::System::Net::HeaderInfoTable* System::Net::WebHeaderCollection::getStaticF_HInfo() {
  return ::cordl_internals::getStaticField<::System::Net::HeaderInfoTable*, "HInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get>();
}
inline void System::Net::WebHeaderCollection::setStaticF_s_CommonHeaderNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "s_CommonHeaderNames", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Net::WebHeaderCollection::getStaticF_s_CommonHeaderNames() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "s_CommonHeaderNames",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get>();
}
inline void System::Net::WebHeaderCollection::setStaticF_s_CommonHeaderHints(::ArrayW<int8_t, ::Array<int8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int8_t, ::Array<int8_t>*>, "s_CommonHeaderHints", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get>(
      std::forward<::ArrayW<int8_t, ::Array<int8_t>*>>(value));
}
inline ::ArrayW<int8_t, ::Array<int8_t>*> System::Net::WebHeaderCollection::getStaticF_s_CommonHeaderHints() {
  return ::cordl_internals::getStaticField<::ArrayW<int8_t, ::Array<int8_t>*>, "s_CommonHeaderHints",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get>();
}
inline void System::Net::WebHeaderCollection::setStaticF_HttpTrimCharacters(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "HttpTrimCharacters", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get>(
      std::forward<::ArrayW<char16_t, ::Array<char16_t>*>>(value));
}
inline ::ArrayW<char16_t, ::Array<char16_t>*> System::Net::WebHeaderCollection::getStaticF_HttpTrimCharacters() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "HttpTrimCharacters",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get>();
}
inline void System::Net::WebHeaderCollection::setStaticF_RfcCharMap(::ArrayW<::System::Net::__WebHeaderCollection__RfcChar, ::Array<::System::Net::__WebHeaderCollection__RfcChar>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Net::__WebHeaderCollection__RfcChar, ::Array<::System::Net::__WebHeaderCollection__RfcChar>*>, "RfcCharMap",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get>(
      std::forward<::ArrayW<::System::Net::__WebHeaderCollection__RfcChar, ::Array<::System::Net::__WebHeaderCollection__RfcChar>*>>(value));
}
inline ::ArrayW<::System::Net::__WebHeaderCollection__RfcChar, ::Array<::System::Net::__WebHeaderCollection__RfcChar>*> System::Net::WebHeaderCollection::getStaticF_RfcCharMap() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Net::__WebHeaderCollection__RfcChar, ::Array<::System::Net::__WebHeaderCollection__RfcChar>*>, "RfcCharMap",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get>();
}
inline void System::Net::WebHeaderCollection::NormalizeCommonHeaders() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(),
                                                                             "NormalizeCommonHeaders", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Specialized::NameValueCollection* System::Net::WebHeaderCollection::get_InnerCollection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), "get_InnerCollection",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Specialized::NameValueCollection*, false>(this, ___internal_method);
}
inline bool System::Net::WebHeaderCollection::AllowMultiValues(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), "AllowMultiValues", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, name);
}
inline bool System::Net::WebHeaderCollection::get_AllowHttpRequestHeader() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(),
                                                                             "get_AllowHttpRequestHeader", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::WebHeaderCollection::Remove(::System::Net::HttpRequestHeader header) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), "Remove", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpRequestHeader>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, header);
}
inline void System::Net::WebHeaderCollection::AddInternal(::StringW name, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), "AddInternal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, value);
}
inline void System::Net::WebHeaderCollection::ChangeInternal(::StringW name, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), "ChangeInternal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, value);
}
inline void System::Net::WebHeaderCollection::RemoveInternal(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), "RemoveInternal", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline ::StringW System::Net::WebHeaderCollection::CheckBadChars(::StringW name, bool isHeaderValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), "CheckBadChars", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, name, isHeaderValue);
}
inline bool System::Net::WebHeaderCollection::ContainsNonAsciiChars(::StringW token) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), "ContainsNonAsciiChars", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, token);
}
inline void System::Net::WebHeaderCollection::ThrowOnRestrictedHeader(::StringW headerName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), "ThrowOnRestrictedHeader",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, headerName);
}
inline void System::Net::WebHeaderCollection::Add(::StringW name, ::StringW value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, value);
}
inline void System::Net::WebHeaderCollection::Add(::StringW header) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), "Add", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, header);
}
inline void System::Net::WebHeaderCollection::Set(::StringW name, ::StringW value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, value);
}
inline void System::Net::WebHeaderCollection::SetInternal(::StringW name, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), "SetInternal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, value);
}
inline void System::Net::WebHeaderCollection::Remove(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Net::WebHeaderCollection::GetValues(::StringW header) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method, header);
}
inline ::StringW System::Net::WebHeaderCollection::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Net::WebHeaderCollection::GetAsString(::System::Collections::Specialized::NameValueCollection* cc, bool winInetCompat, bool forTrace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), "GetAsString", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Specialized::NameValueCollection*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, cc, winInetCompat, forTrace);
}
inline ::System::Net::WebHeaderCollection* System::Net::WebHeaderCollection::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::WebHeaderCollection*>());
}
inline void System::Net::WebHeaderCollection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::WebHeaderCollection* System::Net::WebHeaderCollection::New_ctor(::System::Net::WebHeaderCollectionType type) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::WebHeaderCollection*>(type));
}
inline void System::Net::WebHeaderCollection::_ctor(::System::Net::WebHeaderCollectionType type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebHeaderCollectionType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline ::System::Net::WebHeaderCollection* System::Net::WebHeaderCollection::New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                                      ::System::Runtime::Serialization::StreamingContext streamingContext) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::WebHeaderCollection*>(serializationInfo, streamingContext));
}
inline void System::Net::WebHeaderCollection::_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Net::WebHeaderCollection::OnDeserialization(::System::Object* sender) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender);
}
inline void System::Net::WebHeaderCollection::GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                            ::System::Runtime::Serialization::StreamingContext streamingContext) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Net::WebHeaderCollection::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                                                       ::System::Runtime::Serialization::StreamingContext streamingContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializationInfo, streamingContext);
}
inline ::StringW System::Net::WebHeaderCollection::Get(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, name);
}
inline ::System::Collections::IEnumerator* System::Net::WebHeaderCollection::GetEnumerator() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline int32_t System::Net::WebHeaderCollection::get_Count() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Net::WebHeaderCollection::Get(int32_t index) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, index);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Net::WebHeaderCollection::GetValues(int32_t index) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method, index);
}
inline ::StringW System::Net::WebHeaderCollection::GetKey(int32_t index) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebHeaderCollection*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, index);
}
// Ctor Parameters []
constexpr ::System::Net::WebHeaderCollection::WebHeaderCollection() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
