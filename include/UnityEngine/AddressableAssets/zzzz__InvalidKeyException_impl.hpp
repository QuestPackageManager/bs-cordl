#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/InvalidKeyException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/AddressableAssets/zzzz__Addressables_impl.hpp"
#include "UnityEngine/AddressableAssets/zzzz__InvalidKeyException_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AddressablesImpl_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__Addressables_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__InvalidKeyException_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AddressableAssets::InvalidKeyException_Format::InvalidKeyException_Format(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::InvalidKeyException_Format::InvalidKeyException_Format() {}
constexpr ::UnityEngine::AddressableAssets::InvalidKeyException_Format UnityEngine::AddressableAssets::InvalidKeyException_Format::StandardMessage{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::AddressableAssets::InvalidKeyException_Format UnityEngine::AddressableAssets::InvalidKeyException_Format::NoMergeMode{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::AddressableAssets::InvalidKeyException_Format UnityEngine::AddressableAssets::InvalidKeyException_Format::MultipleTypesRequested{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::AddressableAssets::InvalidKeyException_Format UnityEngine::AddressableAssets::InvalidKeyException_Format::NoLocation{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::AddressableAssets::InvalidKeyException_Format UnityEngine::AddressableAssets::InvalidKeyException_Format::TypeMismatch{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::AddressableAssets::InvalidKeyException_Format UnityEngine::AddressableAssets::InvalidKeyException_Format::MultipleTypeMismatch{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::AddressableAssets::InvalidKeyException_Format UnityEngine::AddressableAssets::InvalidKeyException_Format::MergeModeBase{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::AddressableAssets::InvalidKeyException_Format UnityEngine::AddressableAssets::InvalidKeyException_Format::UnionAvailableForKeys{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::AddressableAssets::InvalidKeyException_Format UnityEngine::AddressableAssets::InvalidKeyException_Format::UnionAvailableForKeysWithoutOther{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::AddressableAssets::InvalidKeyException_Format UnityEngine::AddressableAssets::InvalidKeyException_Format::IntersectionAvailable{ static_cast<int32_t>(0x9) };
constexpr ::UnityEngine::AddressableAssets::InvalidKeyException_Format UnityEngine::AddressableAssets::InvalidKeyException_Format::KeyAvailableAsType{ static_cast<int32_t>(0xa) };
//  Writing Method size for method: ::UnityEngine::AddressableAssets::InvalidKeyException.get_Key
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::AddressableAssets::InvalidKeyException::*)()>(
    &::UnityEngine::AddressableAssets::InvalidKeyException::get_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6446274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(), { "get_Key", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::InvalidKeyException.set_Key
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::InvalidKeyException::*)(::System::Object*)>(
    &::UnityEngine::AddressableAssets::InvalidKeyException::set_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x644627c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(), { "set_Key", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::InvalidKeyException.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::AddressableAssets::InvalidKeyException::*)()>(
    &::UnityEngine::AddressableAssets::InvalidKeyException::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6446284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::InvalidKeyException.set_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::InvalidKeyException::*)(::System::Type*)>(
    &::UnityEngine::AddressableAssets::InvalidKeyException::set_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x644628c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(), { "set_Type", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::InvalidKeyException.get_MergeMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::AddressableAssets::Addressables_MergeMode> (::UnityEngine::AddressableAssets::InvalidKeyException::*)()>(
    &::UnityEngine::AddressableAssets::InvalidKeyException::get_MergeMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6446294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(), { "get_MergeMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::InvalidKeyException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::InvalidKeyException::*)(::System::Object*)>(
    &::UnityEngine::AddressableAssets::InvalidKeyException::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x644629c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::InvalidKeyException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::InvalidKeyException::*)(::System::Object*, ::System::Type*)>(
    &::UnityEngine::AddressableAssets::InvalidKeyException::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x64462f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::InvalidKeyException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::InvalidKeyException::*)(
    ::System::Object*, ::System::Type*, ::UnityEngine::AddressableAssets::AddressablesImpl*)>(&::UnityEngine::AddressableAssets::InvalidKeyException::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6446360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::AddressableAssets::AddressablesImpl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::InvalidKeyException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::InvalidKeyException::*)(
    ::System::Object*, ::System::Type*, ::UnityEngine::AddressableAssets::Addressables_MergeMode)>(&::UnityEngine::AddressableAssets::InvalidKeyException::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x64463e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::AddressableAssets::Addressables_MergeMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::InvalidKeyException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::InvalidKeyException::*)(
    ::System::Object*, ::System::Type*, ::UnityEngine::AddressableAssets::Addressables_MergeMode, ::UnityEngine::AddressableAssets::AddressablesImpl*)>(
    &::UnityEngine::AddressableAssets::InvalidKeyException::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x644647c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::AddressableAssets::Addressables_MergeMode>(),
                                                    ::i2c::type_of<::UnityEngine::AddressableAssets::AddressablesImpl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::InvalidKeyException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::InvalidKeyException::*)()>(&::UnityEngine::AddressableAssets::InvalidKeyException::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x644651c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::InvalidKeyException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::InvalidKeyException::*)(::StringW)>(&::UnityEngine::AddressableAssets::InvalidKeyException::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6446574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::InvalidKeyException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::InvalidKeyException::*)(::StringW, ::System::Exception*)>(
    &::UnityEngine::AddressableAssets::InvalidKeyException::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x64465e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::InvalidKeyException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddressableAssets::InvalidKeyException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::UnityEngine::AddressableAssets::InvalidKeyException::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6446654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::InvalidKeyException.FormatMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AddressableAssets::InvalidKeyException::*)(::UnityEngine::AddressableAssets::InvalidKeyException_Format, ::StringW)>(
    &::UnityEngine::AddressableAssets::InvalidKeyException::FormatMessage)> {
  constexpr static std::size_t size = 0x7d4;
  constexpr static std::size_t addrs = 0x64466d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(),
                                                { "FormatMessage", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::InvalidKeyException_Format>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::InvalidKeyException.FormatMergeModeMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AddressableAssets::InvalidKeyException::*)(
    ::UnityEngine::AddressableAssets::InvalidKeyException_Format, ::StringW, ::StringW, ::StringW)>(&::UnityEngine::AddressableAssets::InvalidKeyException::FormatMergeModeMessage)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x6446eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(),
                                                                                           { "FormatMergeModeMessage",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::AddressableAssets::InvalidKeyException_Format>(),
                                                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::InvalidKeyException.get_Message
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AddressableAssets::InvalidKeyException::*)()>(&::UnityEngine::AddressableAssets::InvalidKeyException::get_Message)> {
  constexpr static std::size_t size = 0x698;
  constexpr static std::size_t addrs = 0x6447424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::InvalidKeyException.GetMessageForSingleKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AddressableAssets::InvalidKeyException::*)(::StringW)>(
    &::UnityEngine::AddressableAssets::InvalidKeyException::GetMessageForSingleKey)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6447abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(), { "GetMessageForSingleKey", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::InvalidKeyException.FormatNotFoundMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AddressableAssets::InvalidKeyException::*)(::StringW)>(
    &::UnityEngine::AddressableAssets::InvalidKeyException::FormatNotFoundMessage)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6449238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(), { "FormatNotFoundMessage", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::InvalidKeyException.FormatTypeNotAssignableMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AddressableAssets::InvalidKeyException::*)(::StringW, ::System::Collections::Generic::HashSet_1<::System::Type*>*)>(
    &::UnityEngine::AddressableAssets::InvalidKeyException::FormatTypeNotAssignableMessage)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6449244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(),
                                         { "FormatTypeNotAssignableMessage", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::System::Type*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::InvalidKeyException.FormatMultipleAssignableTypesMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AddressableAssets::InvalidKeyException::*)(::StringW, ::System::Collections::Generic::HashSet_1<::System::Type*>*)>(
    &::UnityEngine::AddressableAssets::InvalidKeyException::FormatMultipleAssignableTypesMessage)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x6449388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(),
                            { "FormatMultipleAssignableTypesMessage", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::System::Type*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::InvalidKeyException.GetMessageforMergeKeys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AddressableAssets::InvalidKeyException::*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::UnityEngine::AddressableAssets::InvalidKeyException::GetMessageforMergeKeys)> {
  constexpr static std::size_t size = 0xbf8;
  constexpr static std::size_t addrs = 0x6447f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(),
                                                             { "GetMessageforMergeKeys", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::InvalidKeyException.GetTypesForKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::System::Type*>* (::UnityEngine::AddressableAssets::InvalidKeyException::*)(::StringW)>(
    &::UnityEngine::AddressableAssets::InvalidKeyException::GetTypesForKey)> {
  constexpr static std::size_t size = 0x6d0;
  constexpr static std::size_t addrs = 0x6448b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(), { "GetTypesForKey", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::InvalidKeyException.GetTypeToKeys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AddressableAssets::InvalidKeyException::*)(
    ::StringW, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::StringW>*>*)>(
    &::UnityEngine::AddressableAssets::InvalidKeyException::GetTypeToKeys)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x6449584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(),
                         { "GetTypeToKeys",
                           {},
                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::StringW>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::InvalidKeyException.GetKeyString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AddressableAssets::InvalidKeyException::*)()>(&::UnityEngine::AddressableAssets::InvalidKeyException::GetKeyString)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6447338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(), { "GetKeyString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::InvalidKeyException.GetCSVString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Collections::IEnumerable*, ::StringW, ::StringW)>(
    &::UnityEngine::AddressableAssets::InvalidKeyException::GetCSVString)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x6447b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(),
                                                { "GetCSVString", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& UnityEngine::AddressableAssets::InvalidKeyException::__cordl_internal_get__Key_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Key_k__BackingField;
}
constexpr ::System::Object* const& UnityEngine::AddressableAssets::InvalidKeyException::__cordl_internal_get__Key_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Key_k__BackingField;
}
constexpr void UnityEngine::AddressableAssets::InvalidKeyException::__cordl_internal_set__Key_k__BackingField(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Key_k__BackingField = value;
}
constexpr ::System::Type*& UnityEngine::AddressableAssets::InvalidKeyException::__cordl_internal_get__Type_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr ::System::Type* const& UnityEngine::AddressableAssets::InvalidKeyException::__cordl_internal_get__Type_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr void UnityEngine::AddressableAssets::InvalidKeyException::__cordl_internal_set__Type_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Type_k__BackingField = value;
}
constexpr ::System::Nullable_1<::UnityEngine::AddressableAssets::Addressables_MergeMode>& UnityEngine::AddressableAssets::InvalidKeyException::__cordl_internal_get__MergeMode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MergeMode_k__BackingField;
}
constexpr ::System::Nullable_1<::UnityEngine::AddressableAssets::Addressables_MergeMode> const&
UnityEngine::AddressableAssets::InvalidKeyException::__cordl_internal_get__MergeMode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MergeMode_k__BackingField;
}
constexpr void
UnityEngine::AddressableAssets::InvalidKeyException::__cordl_internal_set__MergeMode_k__BackingField(::System::Nullable_1<::UnityEngine::AddressableAssets::Addressables_MergeMode> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MergeMode_k__BackingField = value;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& UnityEngine::AddressableAssets::InvalidKeyException::__cordl_internal_get_m_Addressables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Addressables;
}
constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& UnityEngine::AddressableAssets::InvalidKeyException::__cordl_internal_get_m_Addressables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Addressables;
}
constexpr void UnityEngine::AddressableAssets::InvalidKeyException::__cordl_internal_set_m_Addressables(::UnityEngine::AddressableAssets::AddressablesImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Addressables = value;
}
inline ::System::Object* UnityEngine::AddressableAssets::InvalidKeyException::get_Key() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(), { "get_Key", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::InvalidKeyException::set_Key(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(), { "set_Key", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Type* UnityEngine::AddressableAssets::InvalidKeyException::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::InvalidKeyException::set_Type(::System::Type* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(), { "set_Type", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::UnityEngine::AddressableAssets::Addressables_MergeMode> UnityEngine::AddressableAssets::InvalidKeyException::get_MergeMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(), { "get_MergeMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::AddressableAssets::Addressables_MergeMode>>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::InvalidKeyException::_ctor(::System::Object* key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void UnityEngine::AddressableAssets::InvalidKeyException::_ctor(::System::Object* key, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, type);
}
inline void UnityEngine::AddressableAssets::InvalidKeyException::_ctor(::System::Object* key, ::System::Type* type, ::UnityEngine::AddressableAssets::AddressablesImpl* addr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::AddressableAssets::AddressablesImpl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, type, addr);
}
inline void UnityEngine::AddressableAssets::InvalidKeyException::_ctor(::System::Object* key, ::System::Type* type, ::UnityEngine::AddressableAssets::Addressables_MergeMode mergeMode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::AddressableAssets::Addressables_MergeMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, type, mergeMode);
}
inline void UnityEngine::AddressableAssets::InvalidKeyException::_ctor(::System::Object* key, ::System::Type* type, ::UnityEngine::AddressableAssets::Addressables_MergeMode mergeMode,
                                                                       ::UnityEngine::AddressableAssets::AddressablesImpl* addr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::AddressableAssets::Addressables_MergeMode>(),
                                                  ::i2c::type_of<::UnityEngine::AddressableAssets::AddressablesImpl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, type, mergeMode, addr);
}
inline void UnityEngine::AddressableAssets::InvalidKeyException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AddressableAssets::InvalidKeyException::_ctor(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void UnityEngine::AddressableAssets::InvalidKeyException::_ctor(::StringW message, ::System::Exception* innerException) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, innerException);
}
inline void UnityEngine::AddressableAssets::InvalidKeyException::_ctor(::System::Runtime::Serialization::SerializationInfo* message, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, context);
}
inline ::StringW UnityEngine::AddressableAssets::InvalidKeyException::FormatMessage(::UnityEngine::AddressableAssets::InvalidKeyException_Format format, ::StringW foundWithTypeString) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(),
                                                           { "FormatMessage", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::InvalidKeyException_Format>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, format, foundWithTypeString);
}
inline ::StringW UnityEngine::AddressableAssets::InvalidKeyException::FormatMergeModeMessage(::UnityEngine::AddressableAssets::InvalidKeyException_Format format, ::StringW keysAvailable,
                                                                                             ::StringW keysUnavailable, ::StringW typeString) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(),
                                                                                         { "FormatMergeModeMessage",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::AddressableAssets::InvalidKeyException_Format>(),
                                                                                             ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, format, keysAvailable, keysUnavailable, typeString);
}
inline ::StringW UnityEngine::AddressableAssets::InvalidKeyException::get_Message() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::AddressableAssets::InvalidKeyException::GetMessageForSingleKey(::StringW keyString) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(), { "GetMessageForSingleKey", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, keyString);
}
inline ::StringW UnityEngine::AddressableAssets::InvalidKeyException::FormatNotFoundMessage(::StringW keyString) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(), { "FormatNotFoundMessage", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, keyString);
}
inline ::StringW UnityEngine::AddressableAssets::InvalidKeyException::FormatTypeNotAssignableMessage(::StringW keyString,
                                                                                                     ::System::Collections::Generic::HashSet_1<::System::Type*>* typesAvailableForKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(),
                                       { "FormatTypeNotAssignableMessage", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::System::Type*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, keyString, typesAvailableForKey);
}
inline ::StringW UnityEngine::AddressableAssets::InvalidKeyException::FormatMultipleAssignableTypesMessage(::StringW keyString,
                                                                                                           ::System::Collections::Generic::HashSet_1<::System::Type*>* typesAvailableForKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(),
                          { "FormatMultipleAssignableTypesMessage", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::System::Type*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, keyString, typesAvailableForKey);
}
inline ::StringW UnityEngine::AddressableAssets::InvalidKeyException::GetMessageforMergeKeys(::System::Collections::Generic::List_1<::StringW>* keys) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(),
                                                                                         { "GetMessageforMergeKeys", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, keys);
}
inline ::System::Collections::Generic::HashSet_1<::System::Type*>* UnityEngine::AddressableAssets::InvalidKeyException::GetTypesForKey(::StringW keyString) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(), { "GetTypesForKey", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::System::Type*>*>(this, ___internal_method, keyString);
}
inline bool
UnityEngine::AddressableAssets::InvalidKeyException::GetTypeToKeys(::StringW key,
                                                                   ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::StringW>*>* typeToKeys) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(),
                          { "GetTypeToKeys",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::StringW>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, typeToKeys);
}
inline ::StringW UnityEngine::AddressableAssets::InvalidKeyException::GetKeyString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(), { "GetKeyString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::AddressableAssets::InvalidKeyException::GetCSVString(::System::Collections::IEnumerable* enumerator, ::StringW prefixSingle, ::StringW prefixPlural) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddressableAssets::InvalidKeyException*>(),
                                              { "GetCSVString", {}, { ::i2c::type_of<::System::Collections::IEnumerable*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, enumerator, prefixSingle, prefixPlural);
}
inline ::UnityEngine::AddressableAssets::InvalidKeyException* UnityEngine::AddressableAssets::InvalidKeyException::New_ctor(::System::Object* key) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::InvalidKeyException*>(key));
}
inline ::UnityEngine::AddressableAssets::InvalidKeyException* UnityEngine::AddressableAssets::InvalidKeyException::New_ctor(::System::Object* key, ::System::Type* type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::InvalidKeyException*>(key, type));
}
inline ::UnityEngine::AddressableAssets::InvalidKeyException* UnityEngine::AddressableAssets::InvalidKeyException::New_ctor(::System::Object* key, ::System::Type* type,
                                                                                                                            ::UnityEngine::AddressableAssets::AddressablesImpl* addr) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::InvalidKeyException*>(key, type, addr));
}
inline ::UnityEngine::AddressableAssets::InvalidKeyException* UnityEngine::AddressableAssets::InvalidKeyException::New_ctor(::System::Object* key, ::System::Type* type,
                                                                                                                            ::UnityEngine::AddressableAssets::Addressables_MergeMode mergeMode) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::InvalidKeyException*>(key, type, mergeMode));
}
inline ::UnityEngine::AddressableAssets::InvalidKeyException* UnityEngine::AddressableAssets::InvalidKeyException::New_ctor(::System::Object* key, ::System::Type* type,
                                                                                                                            ::UnityEngine::AddressableAssets::Addressables_MergeMode mergeMode,
                                                                                                                            ::UnityEngine::AddressableAssets::AddressablesImpl* addr) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::InvalidKeyException*>(key, type, mergeMode, addr));
}
inline ::UnityEngine::AddressableAssets::InvalidKeyException* UnityEngine::AddressableAssets::InvalidKeyException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::InvalidKeyException*>());
}
inline ::UnityEngine::AddressableAssets::InvalidKeyException* UnityEngine::AddressableAssets::InvalidKeyException::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::InvalidKeyException*>(message));
}
inline ::UnityEngine::AddressableAssets::InvalidKeyException* UnityEngine::AddressableAssets::InvalidKeyException::New_ctor(::StringW message, ::System::Exception* innerException) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::InvalidKeyException*>(message, innerException));
}
inline ::UnityEngine::AddressableAssets::InvalidKeyException* UnityEngine::AddressableAssets::InvalidKeyException::New_ctor(::System::Runtime::Serialization::SerializationInfo* message,
                                                                                                                            ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddressableAssets::InvalidKeyException*>(message, context));
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::InvalidKeyException::InvalidKeyException() {}
