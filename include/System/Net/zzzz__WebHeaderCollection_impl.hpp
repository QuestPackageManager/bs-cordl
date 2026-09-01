#pragma once
// IWYU pragma private; include "System\Net\WebHeaderCollection.hpp"
#include "System/Collections/Specialized/zzzz__NameValueCollection_impl.hpp"
#include "System/Net/zzzz__WebHeaderCollectionType_impl.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Collections/Specialized/zzzz__NameValueCollection_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Net/zzzz__HeaderInfoTable_def.hpp"
#include "System/Net/zzzz__HttpRequestHeader_def.hpp"
#include "System/Net/zzzz__WebHeaderCollectionType_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebHeaderCollection_RfcChar::WebHeaderCollection_RfcChar(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::WebHeaderCollection_RfcChar::WebHeaderCollection_RfcChar() {}
constexpr ::System::Net::WebHeaderCollection_RfcChar System::Net::WebHeaderCollection_RfcChar::High{ static_cast<uint8_t>(0x0u) };
constexpr ::System::Net::WebHeaderCollection_RfcChar System::Net::WebHeaderCollection_RfcChar::Reg{ static_cast<uint8_t>(0x1u) };
constexpr ::System::Net::WebHeaderCollection_RfcChar System::Net::WebHeaderCollection_RfcChar::Ctl{ static_cast<uint8_t>(0x2u) };
constexpr ::System::Net::WebHeaderCollection_RfcChar System::Net::WebHeaderCollection_RfcChar::CR{ static_cast<uint8_t>(0x3u) };
constexpr ::System::Net::WebHeaderCollection_RfcChar System::Net::WebHeaderCollection_RfcChar::LF{ static_cast<uint8_t>(0x4u) };
constexpr ::System::Net::WebHeaderCollection_RfcChar System::Net::WebHeaderCollection_RfcChar::WS{ static_cast<uint8_t>(0x5u) };
constexpr ::System::Net::WebHeaderCollection_RfcChar System::Net::WebHeaderCollection_RfcChar::Colon{ static_cast<uint8_t>(0x6u) };
constexpr ::System::Net::WebHeaderCollection_RfcChar System::Net::WebHeaderCollection_RfcChar::Delim{ static_cast<uint8_t>(0x7u) };
//  Writing Method size for method: ::System::Net::WebHeaderCollection.NormalizeCommonHeaders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebHeaderCollection::*)()>(&::System::Net::WebHeaderCollection::NormalizeCommonHeaders)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x640fad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { "NormalizeCommonHeaders", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.get_InnerCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Specialized::NameValueCollection* (::System::Net::WebHeaderCollection::*)()>(
    &::System::Net::WebHeaderCollection::get_InnerCollection)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x640fbd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { "get_InnerCollection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.AllowMultiValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Net::WebHeaderCollection::AllowMultiValues)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x640fc78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { "AllowMultiValues", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.get_AllowHttpRequestHeader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebHeaderCollection::*)()>(&::System::Net::WebHeaderCollection::get_AllowHttpRequestHeader)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x640fe08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { "get_AllowHttpRequestHeader", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebHeaderCollection::*)(::System::Net::HttpRequestHeader)>(&::System::Net::WebHeaderCollection::Remove)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x640fe4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { "Remove", {}, { ::i2c::type_of<::System::Net::HttpRequestHeader>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.AddInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebHeaderCollection::*)(::StringW, ::StringW)>(&::System::Net::WebHeaderCollection::AddInternal)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x640ff48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { "AddInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.ChangeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebHeaderCollection::*)(::StringW, ::StringW)>(&::System::Net::WebHeaderCollection::ChangeInternal)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x640ff94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { "ChangeInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.RemoveInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebHeaderCollection::*)(::StringW)>(&::System::Net::WebHeaderCollection::RemoveInternal)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x640ffe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { "RemoveInternal", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.CheckBadChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, bool)>(&::System::Net::WebHeaderCollection::CheckBadChars)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x6410028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { "CheckBadChars", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.ContainsNonAsciiChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Net::WebHeaderCollection::ContainsNonAsciiChars)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6410400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { "ContainsNonAsciiChars", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.ThrowOnRestrictedHeader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebHeaderCollection::*)(::StringW)>(&::System::Net::WebHeaderCollection::ThrowOnRestrictedHeader)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6410474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { "ThrowOnRestrictedHeader", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebHeaderCollection::*)(::StringW, ::StringW)>(&::System::Net::WebHeaderCollection::Add)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x64105e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { ::i2c::class_of<::System::Net::WebHeaderCollection*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebHeaderCollection::*)(::StringW)>(&::System::Net::WebHeaderCollection::Add)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x6410790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { "Add", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.Set
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebHeaderCollection::*)(::StringW, ::StringW)>(&::System::Net::WebHeaderCollection::Set)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x6410a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { ::i2c::class_of<::System::Net::WebHeaderCollection*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.SetInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebHeaderCollection::*)(::StringW, ::StringW)>(&::System::Net::WebHeaderCollection::SetInternal)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x6410c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { "SetInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebHeaderCollection::*)(::StringW)>(&::System::Net::WebHeaderCollection::Remove)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6410e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { ::i2c::class_of<::System::Net::WebHeaderCollection*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.GetValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Net::WebHeaderCollection::*)(::StringW)>(&::System::Net::WebHeaderCollection::GetValues)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x6410fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { ::i2c::class_of<::System::Net::WebHeaderCollection*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::WebHeaderCollection::*)()>(&::System::Net::WebHeaderCollection::ToString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x64111cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { ::i2c::class_of<::System::Net::WebHeaderCollection*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.GetAsString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Collections::Specialized::NameValueCollection*, bool, bool)>(&::System::Net::WebHeaderCollection::GetAsString)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x641122c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(),
                                         { "GetAsString", {}, { ::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebHeaderCollection::*)()>(&::System::Net::WebHeaderCollection::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x640a680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebHeaderCollection::*)(::System::Net::WebHeaderCollectionType)>(&::System::Net::WebHeaderCollection::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x64114d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::WebHeaderCollectionType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebHeaderCollection::*)(::System::Runtime::Serialization::SerializationInfo*,
                                                                                                    ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::WebHeaderCollection::_ctor)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x64115c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.OnDeserialization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebHeaderCollection::*)(::System::Object*)>(&::System::Net::WebHeaderCollection::OnDeserialization)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x641178c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { ::i2c::class_of<::System::Net::WebHeaderCollection*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebHeaderCollection::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::WebHeaderCollection::GetObjectData)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6411790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { ::i2c::class_of<::System::Net::WebHeaderCollection*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.System_Runtime_Serialization_ISerializable_GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::System::Net::WebHeaderCollection::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
        &::System::Net::WebHeaderCollection::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x641190c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(),
                                                { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::WebHeaderCollection::*)(::StringW)>(&::System::Net::WebHeaderCollection::Get)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x6411918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { ::i2c::class_of<::System::Net::WebHeaderCollection*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Net::WebHeaderCollection::*)()>(&::System::Net::WebHeaderCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6411c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { ::i2c::class_of<::System::Net::WebHeaderCollection*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::WebHeaderCollection::*)()>(&::System::Net::WebHeaderCollection::get_Count)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6411ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { ::i2c::class_of<::System::Net::WebHeaderCollection*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::WebHeaderCollection::*)(int32_t)>(&::System::Net::WebHeaderCollection::Get)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6411cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { ::i2c::class_of<::System::Net::WebHeaderCollection*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.GetValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Net::WebHeaderCollection::*)(int32_t)>(&::System::Net::WebHeaderCollection::GetValues)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6411d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { ::i2c::class_of<::System::Net::WebHeaderCollection*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebHeaderCollection.GetKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::WebHeaderCollection::*)(int32_t)>(&::System::Net::WebHeaderCollection::GetKey)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6411d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { ::i2c::class_of<::System::Net::WebHeaderCollection*>(), 22 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& System::Net::WebHeaderCollection::__cordl_internal_get_m_CommonHeaders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CommonHeaders;
}
constexpr ::ArrayW<::StringW> const& System::Net::WebHeaderCollection::__cordl_internal_get_m_CommonHeaders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CommonHeaders;
}
constexpr void System::Net::WebHeaderCollection::__cordl_internal_set_m_CommonHeaders(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CommonHeaders = value;
}
constexpr int32_t& System::Net::WebHeaderCollection::__cordl_internal_get_m_NumCommonHeaders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NumCommonHeaders;
}
constexpr int32_t const& System::Net::WebHeaderCollection::__cordl_internal_get_m_NumCommonHeaders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NumCommonHeaders;
}
constexpr void System::Net::WebHeaderCollection::__cordl_internal_set_m_NumCommonHeaders(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NumCommonHeaders = value;
}
constexpr ::System::Collections::Specialized::NameValueCollection*& System::Net::WebHeaderCollection::__cordl_internal_get_m_InnerCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InnerCollection;
}
constexpr ::System::Collections::Specialized::NameValueCollection* const& System::Net::WebHeaderCollection::__cordl_internal_get_m_InnerCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InnerCollection;
}
constexpr void System::Net::WebHeaderCollection::__cordl_internal_set_m_InnerCollection(::System::Collections::Specialized::NameValueCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InnerCollection = value;
}
constexpr ::System::Net::WebHeaderCollectionType& System::Net::WebHeaderCollection::__cordl_internal_get_m_Type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Type;
}
constexpr ::System::Net::WebHeaderCollectionType const& System::Net::WebHeaderCollection::__cordl_internal_get_m_Type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Type;
}
constexpr void System::Net::WebHeaderCollection::__cordl_internal_set_m_Type(::System::Net::WebHeaderCollectionType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Type = value;
}
inline void System::Net::WebHeaderCollection::setStaticF_HInfo(::System::Net::HeaderInfoTable* value) {
  ::cordl_internals::setStaticField<::System::Net::HeaderInfoTable*, "HInfo", ::System::Net::WebHeaderCollection*>(std::forward<::System::Net::HeaderInfoTable*>(value));
}
inline ::System::Net::HeaderInfoTable* System::Net::WebHeaderCollection::getStaticF_HInfo() {
  return ::cordl_internals::getStaticField<::System::Net::HeaderInfoTable*, "HInfo", ::System::Net::WebHeaderCollection*>();
}
inline void System::Net::WebHeaderCollection::setStaticF_s_CommonHeaderNames(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_CommonHeaderNames", ::System::Net::WebHeaderCollection*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Net::WebHeaderCollection::getStaticF_s_CommonHeaderNames() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_CommonHeaderNames", ::System::Net::WebHeaderCollection*>();
}
inline void System::Net::WebHeaderCollection::setStaticF_s_CommonHeaderHints(::ArrayW<int8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int8_t>, "s_CommonHeaderHints", ::System::Net::WebHeaderCollection*>(std::forward<::ArrayW<int8_t>>(value));
}
inline ::ArrayW<int8_t> System::Net::WebHeaderCollection::getStaticF_s_CommonHeaderHints() {
  return ::cordl_internals::getStaticField<::ArrayW<int8_t>, "s_CommonHeaderHints", ::System::Net::WebHeaderCollection*>();
}
inline void System::Net::WebHeaderCollection::setStaticF_HttpTrimCharacters(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "HttpTrimCharacters", ::System::Net::WebHeaderCollection*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::Net::WebHeaderCollection::getStaticF_HttpTrimCharacters() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "HttpTrimCharacters", ::System::Net::WebHeaderCollection*>();
}
inline void System::Net::WebHeaderCollection::setStaticF_RfcCharMap(::ArrayW<::System::Net::WebHeaderCollection_RfcChar> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Net::WebHeaderCollection_RfcChar>, "RfcCharMap", ::System::Net::WebHeaderCollection*>(
      std::forward<::ArrayW<::System::Net::WebHeaderCollection_RfcChar>>(value));
}
inline ::ArrayW<::System::Net::WebHeaderCollection_RfcChar> System::Net::WebHeaderCollection::getStaticF_RfcCharMap() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Net::WebHeaderCollection_RfcChar>, "RfcCharMap", ::System::Net::WebHeaderCollection*>();
}
inline void System::Net::WebHeaderCollection::NormalizeCommonHeaders() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { "NormalizeCommonHeaders", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Specialized::NameValueCollection* System::Net::WebHeaderCollection::get_InnerCollection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { "get_InnerCollection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Specialized::NameValueCollection*>(this, ___internal_method);
}
inline bool System::Net::WebHeaderCollection::AllowMultiValues(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { "AllowMultiValues", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name);
}
inline bool System::Net::WebHeaderCollection::get_AllowHttpRequestHeader() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { "get_AllowHttpRequestHeader", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::WebHeaderCollection::Remove(::System::Net::HttpRequestHeader header) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { "Remove", {}, { ::i2c::type_of<::System::Net::HttpRequestHeader>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, header);
}
inline void System::Net::WebHeaderCollection::AddInternal(::StringW name, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { "AddInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void System::Net::WebHeaderCollection::ChangeInternal(::StringW name, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { "ChangeInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void System::Net::WebHeaderCollection::RemoveInternal(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { "RemoveInternal", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::StringW System::Net::WebHeaderCollection::CheckBadChars(::StringW name, bool isHeaderValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { "CheckBadChars", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, name, isHeaderValue);
}
inline bool System::Net::WebHeaderCollection::ContainsNonAsciiChars(::StringW token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { "ContainsNonAsciiChars", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, token);
}
inline void System::Net::WebHeaderCollection::ThrowOnRestrictedHeader(::StringW headerName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { "ThrowOnRestrictedHeader", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headerName);
}
inline void System::Net::WebHeaderCollection::Add(::StringW name, ::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebHeaderCollection*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void System::Net::WebHeaderCollection::Add(::StringW header) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { "Add", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, header);
}
inline void System::Net::WebHeaderCollection::Set(::StringW name, ::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebHeaderCollection*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void System::Net::WebHeaderCollection::SetInternal(::StringW name, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { "SetInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void System::Net::WebHeaderCollection::Remove(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebHeaderCollection*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::ArrayW<::StringW> System::Net::WebHeaderCollection::GetValues(::StringW header) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebHeaderCollection*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, header);
}
inline ::StringW System::Net::WebHeaderCollection::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebHeaderCollection*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Net::WebHeaderCollection::GetAsString(::System::Collections::Specialized::NameValueCollection* cc, bool winInetCompat, bool forTrace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(),
                                              { "GetAsString", {}, { ::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, cc, winInetCompat, forTrace);
}
inline void System::Net::WebHeaderCollection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebHeaderCollection::_ctor(::System::Net::WebHeaderCollectionType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::WebHeaderCollectionType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void System::Net::WebHeaderCollection::_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Net::WebHeaderCollection::OnDeserialization(::System::Object* sender) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebHeaderCollection*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender);
}
inline void System::Net::WebHeaderCollection::GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                            ::System::Runtime::Serialization::StreamingContext streamingContext) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebHeaderCollection*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Net::WebHeaderCollection::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                                                       ::System::Runtime::Serialization::StreamingContext streamingContext) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebHeaderCollection*>(),
                                              { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline ::StringW System::Net::WebHeaderCollection::Get(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebHeaderCollection*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name);
}
inline ::System::Collections::IEnumerator* System::Net::WebHeaderCollection::GetEnumerator() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebHeaderCollection*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline int32_t System::Net::WebHeaderCollection::get_Count() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebHeaderCollection*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Net::WebHeaderCollection::Get(int32_t index) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebHeaderCollection*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline ::ArrayW<::StringW> System::Net::WebHeaderCollection::GetValues(int32_t index) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebHeaderCollection*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, index);
}
inline ::StringW System::Net::WebHeaderCollection::GetKey(int32_t index) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebHeaderCollection*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline ::System::Net::WebHeaderCollection* System::Net::WebHeaderCollection::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebHeaderCollection*>());
}
inline ::System::Net::WebHeaderCollection* System::Net::WebHeaderCollection::New_ctor(::System::Net::WebHeaderCollectionType type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebHeaderCollection*>(type));
}
inline ::System::Net::WebHeaderCollection* System::Net::WebHeaderCollection::New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                                      ::System::Runtime::Serialization::StreamingContext streamingContext) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebHeaderCollection*>(serializationInfo, streamingContext));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Net::WebHeaderCollection::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Net::WebHeaderCollection::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::WebHeaderCollection::WebHeaderCollection() {}
