#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Serialization\JsonObjectContract.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContainerContract_impl.hpp"
#include "Newtonsoft/Json/zzzz__MemberSerialization_impl.hpp"
#include "Newtonsoft/Json/zzzz__MissingMemberHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__NullValueHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__Required_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonObjectContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ExtensionDataGetter_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ExtensionDataSetter_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonPropertyCollection_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ObjectConstructor_1_def.hpp"
#include "Newtonsoft/Json/zzzz__MemberSerialization_def.hpp"
#include "Newtonsoft/Json/zzzz__MissingMemberHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__NullValueHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__Required_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonObjectContract.get_MemberSerialization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::MemberSerialization (::Newtonsoft::Json::Serialization::JsonObjectContract::*)()>(
    &::Newtonsoft::Json::Serialization::JsonObjectContract::get_MemberSerialization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d43bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), { "get_MemberSerialization", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonObjectContract.set_MemberSerialization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonObjectContract::*)(::Newtonsoft::Json::MemberSerialization)>(
    &::Newtonsoft::Json::Serialization::JsonObjectContract::set_MemberSerialization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d43c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(),
                                                                                           { "set_MemberSerialization", {}, { ::i2c::type_of<::Newtonsoft::Json::MemberSerialization>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonObjectContract.get_MissingMemberHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling> (::Newtonsoft::Json::Serialization::JsonObjectContract::*)()>(
    &::Newtonsoft::Json::Serialization::JsonObjectContract::get_MissingMemberHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d43c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), { "get_MissingMemberHandling", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonObjectContract.set_MissingMemberHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonObjectContract::*)(::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling>)>(
    &::Newtonsoft::Json::Serialization::JsonObjectContract::set_MissingMemberHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d43c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(),
                                                             { "set_MissingMemberHandling", {}, { ::i2c::type_of<::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonObjectContract.get_ItemRequired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Newtonsoft::Json::Required> (::Newtonsoft::Json::Serialization::JsonObjectContract::*)()>(
    &::Newtonsoft::Json::Serialization::JsonObjectContract::get_ItemRequired)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d43c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), { "get_ItemRequired", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonObjectContract.set_ItemRequired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonObjectContract::*)(::System::Nullable_1<::Newtonsoft::Json::Required>)>(
    &::Newtonsoft::Json::Serialization::JsonObjectContract::set_ItemRequired)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d43c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(),
                                                                                           { "set_ItemRequired", {}, { ::i2c::type_of<::System::Nullable_1<::Newtonsoft::Json::Required>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonObjectContract.get_ItemNullValueHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> (::Newtonsoft::Json::Serialization::JsonObjectContract::*)()>(
    &::Newtonsoft::Json::Serialization::JsonObjectContract::get_ItemNullValueHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d43c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), { "get_ItemNullValueHandling", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonObjectContract.set_ItemNullValueHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonObjectContract::*)(::System::Nullable_1<::Newtonsoft::Json::NullValueHandling>)>(
    &::Newtonsoft::Json::Serialization::JsonObjectContract::set_ItemNullValueHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d43c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(),
                                                             { "set_ItemNullValueHandling", {}, { ::i2c::type_of<::System::Nullable_1<::Newtonsoft::Json::NullValueHandling>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonObjectContract.get_Properties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::JsonPropertyCollection* (::Newtonsoft::Json::Serialization::JsonObjectContract::*)()>(
    &::Newtonsoft::Json::Serialization::JsonObjectContract::get_Properties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d43c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), { "get_Properties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonObjectContract.get_CreatorParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::JsonPropertyCollection* (::Newtonsoft::Json::Serialization::JsonObjectContract::*)()>(
    &::Newtonsoft::Json::Serialization::JsonObjectContract::get_CreatorParameters)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d37408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), { "get_CreatorParameters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonObjectContract.get_OverrideCreator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* (::Newtonsoft::Json::Serialization::JsonObjectContract::*)()>(
    &::Newtonsoft::Json::Serialization::JsonObjectContract::get_OverrideCreator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d43c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), { "get_OverrideCreator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonObjectContract.set_OverrideCreator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonObjectContract::*)(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*)>(
    &::Newtonsoft::Json::Serialization::JsonObjectContract::set_OverrideCreator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d43c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(),
                                                             { "set_OverrideCreator", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonObjectContract.get_ParameterizedCreator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* (::Newtonsoft::Json::Serialization::JsonObjectContract::*)()>(
    &::Newtonsoft::Json::Serialization::JsonObjectContract::get_ParameterizedCreator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d43c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), { "get_ParameterizedCreator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonObjectContract.set_ParameterizedCreator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonObjectContract::*)(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*)>(
    &::Newtonsoft::Json::Serialization::JsonObjectContract::set_ParameterizedCreator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d43c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(),
                                                             { "set_ParameterizedCreator", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonObjectContract.get_ExtensionDataSetter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::ExtensionDataSetter* (::Newtonsoft::Json::Serialization::JsonObjectContract::*)()>(
    &::Newtonsoft::Json::Serialization::JsonObjectContract::get_ExtensionDataSetter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d43c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), { "get_ExtensionDataSetter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonObjectContract.set_ExtensionDataSetter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonObjectContract::*)(::Newtonsoft::Json::Serialization::ExtensionDataSetter*)>(
    &::Newtonsoft::Json::Serialization::JsonObjectContract::set_ExtensionDataSetter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d43c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(),
                                                             { "set_ExtensionDataSetter", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::ExtensionDataSetter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonObjectContract.get_ExtensionDataGetter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::ExtensionDataGetter* (::Newtonsoft::Json::Serialization::JsonObjectContract::*)()>(
    &::Newtonsoft::Json::Serialization::JsonObjectContract::get_ExtensionDataGetter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d43c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), { "get_ExtensionDataGetter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonObjectContract.set_ExtensionDataGetter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonObjectContract::*)(::Newtonsoft::Json::Serialization::ExtensionDataGetter*)>(
    &::Newtonsoft::Json::Serialization::JsonObjectContract::set_ExtensionDataGetter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d43c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(),
                                                             { "set_ExtensionDataGetter", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::ExtensionDataGetter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonObjectContract.get_ExtensionDataValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Newtonsoft::Json::Serialization::JsonObjectContract::*)()>(
    &::Newtonsoft::Json::Serialization::JsonObjectContract::get_ExtensionDataValueType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d43c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), { "get_ExtensionDataValueType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonObjectContract.set_ExtensionDataValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonObjectContract::*)(::System::Type*)>(
    &::Newtonsoft::Json::Serialization::JsonObjectContract::set_ExtensionDataValueType)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5d387d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), { "set_ExtensionDataValueType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonObjectContract.get_ExtensionDataNameResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_2<::StringW, ::StringW>* (::Newtonsoft::Json::Serialization::JsonObjectContract::*)()>(
    &::Newtonsoft::Json::Serialization::JsonObjectContract::get_ExtensionDataNameResolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d43c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), { "get_ExtensionDataNameResolver", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonObjectContract.set_ExtensionDataNameResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonObjectContract::*)(::System::Func_2<::StringW, ::StringW>*)>(
    &::Newtonsoft::Json::Serialization::JsonObjectContract::set_ExtensionDataNameResolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d43c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(),
                                                                                           { "set_ExtensionDataNameResolver", {}, { ::i2c::type_of<::System::Func_2<::StringW, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonObjectContract.get_HasRequiredOrDefaultValueProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonObjectContract::*)()>(
    &::Newtonsoft::Json::Serialization::JsonObjectContract::get_HasRequiredOrDefaultValueProperties)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x5d43c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), { "get_HasRequiredOrDefaultValueProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonObjectContract._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonObjectContract::*)(::System::Type*)>(
    &::Newtonsoft::Json::Serialization::JsonObjectContract::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d36c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonObjectContract.GetUninitializedObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::Serialization::JsonObjectContract::*)()>(
    &::Newtonsoft::Json::Serialization::JsonObjectContract::GetUninitializedObject)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5d4406c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), { "GetUninitializedObject", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::MemberSerialization& Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_get__MemberSerialization_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MemberSerialization_k__BackingField;
}
constexpr ::Newtonsoft::Json::MemberSerialization const& Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_get__MemberSerialization_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MemberSerialization_k__BackingField;
}
constexpr void Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_set__MemberSerialization_k__BackingField(::Newtonsoft::Json::MemberSerialization value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MemberSerialization_k__BackingField = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling>& Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_get__MissingMemberHandling_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MissingMemberHandling_k__BackingField;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling> const&
Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_get__MissingMemberHandling_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MissingMemberHandling_k__BackingField;
}
constexpr void Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_set__MissingMemberHandling_k__BackingField(::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MissingMemberHandling_k__BackingField = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::Required>& Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_get__ItemRequired_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ItemRequired_k__BackingField;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::Required> const& Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_get__ItemRequired_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ItemRequired_k__BackingField;
}
constexpr void Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_set__ItemRequired_k__BackingField(::System::Nullable_1<::Newtonsoft::Json::Required> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ItemRequired_k__BackingField = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling>& Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_get__ItemNullValueHandling_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ItemNullValueHandling_k__BackingField;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> const& Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_get__ItemNullValueHandling_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ItemNullValueHandling_k__BackingField;
}
constexpr void Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_set__ItemNullValueHandling_k__BackingField(::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ItemNullValueHandling_k__BackingField = value;
}
constexpr ::Newtonsoft::Json::Serialization::JsonPropertyCollection*& Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_get__Properties_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Properties_k__BackingField;
}
constexpr ::Newtonsoft::Json::Serialization::JsonPropertyCollection* const& Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_get__Properties_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Properties_k__BackingField;
}
constexpr void Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_set__Properties_k__BackingField(::Newtonsoft::Json::Serialization::JsonPropertyCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Properties_k__BackingField = value;
}
constexpr ::Newtonsoft::Json::Serialization::ExtensionDataSetter*& Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_get__ExtensionDataSetter_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ExtensionDataSetter_k__BackingField;
}
constexpr ::Newtonsoft::Json::Serialization::ExtensionDataSetter* const& Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_get__ExtensionDataSetter_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ExtensionDataSetter_k__BackingField;
}
constexpr void Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_set__ExtensionDataSetter_k__BackingField(::Newtonsoft::Json::Serialization::ExtensionDataSetter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ExtensionDataSetter_k__BackingField = value;
}
constexpr ::Newtonsoft::Json::Serialization::ExtensionDataGetter*& Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_get__ExtensionDataGetter_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ExtensionDataGetter_k__BackingField;
}
constexpr ::Newtonsoft::Json::Serialization::ExtensionDataGetter* const& Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_get__ExtensionDataGetter_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ExtensionDataGetter_k__BackingField;
}
constexpr void Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_set__ExtensionDataGetter_k__BackingField(::Newtonsoft::Json::Serialization::ExtensionDataGetter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ExtensionDataGetter_k__BackingField = value;
}
constexpr ::System::Func_2<::StringW, ::StringW>*& Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_get__ExtensionDataNameResolver_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ExtensionDataNameResolver_k__BackingField;
}
constexpr ::System::Func_2<::StringW, ::StringW>* const& Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_get__ExtensionDataNameResolver_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ExtensionDataNameResolver_k__BackingField;
}
constexpr void Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_set__ExtensionDataNameResolver_k__BackingField(::System::Func_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ExtensionDataNameResolver_k__BackingField = value;
}
constexpr bool& Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_get_ExtensionDataIsJToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExtensionDataIsJToken;
}
constexpr bool const& Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_get_ExtensionDataIsJToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExtensionDataIsJToken;
}
constexpr void Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_set_ExtensionDataIsJToken(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ExtensionDataIsJToken = value;
}
constexpr ::System::Nullable_1<bool>& Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_get__hasRequiredOrDefaultValueProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasRequiredOrDefaultValueProperties;
}
constexpr ::System::Nullable_1<bool> const& Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_get__hasRequiredOrDefaultValueProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasRequiredOrDefaultValueProperties;
}
constexpr void Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_set__hasRequiredOrDefaultValueProperties(::System::Nullable_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasRequiredOrDefaultValueProperties = value;
}
constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*& Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_get__overrideCreator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideCreator;
}
constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* const& Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_get__overrideCreator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideCreator;
}
constexpr void Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_set__overrideCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overrideCreator = value;
}
constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*& Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_get__parameterizedCreator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parameterizedCreator;
}
constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* const& Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_get__parameterizedCreator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parameterizedCreator;
}
constexpr void Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_set__parameterizedCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parameterizedCreator = value;
}
constexpr ::Newtonsoft::Json::Serialization::JsonPropertyCollection*& Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_get__creatorParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____creatorParameters;
}
constexpr ::Newtonsoft::Json::Serialization::JsonPropertyCollection* const& Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_get__creatorParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____creatorParameters;
}
constexpr void Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_set__creatorParameters(::Newtonsoft::Json::Serialization::JsonPropertyCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____creatorParameters = value;
}
constexpr ::System::Type*& Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_get__extensionDataValueType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extensionDataValueType;
}
constexpr ::System::Type* const& Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_get__extensionDataValueType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extensionDataValueType;
}
constexpr void Newtonsoft::Json::Serialization::JsonObjectContract::__cordl_internal_set__extensionDataValueType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____extensionDataValueType = value;
}
inline ::Newtonsoft::Json::MemberSerialization Newtonsoft::Json::Serialization::JsonObjectContract::get_MemberSerialization() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), { "get_MemberSerialization", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::MemberSerialization>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonObjectContract::set_MemberSerialization(::Newtonsoft::Json::MemberSerialization value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(),
                                                                                         { "set_MemberSerialization", {}, { ::i2c::type_of<::Newtonsoft::Json::MemberSerialization>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling> Newtonsoft::Json::Serialization::JsonObjectContract::get_MissingMemberHandling() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), { "get_MissingMemberHandling", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling>>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonObjectContract::set_MissingMemberHandling(::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(),
                                                           { "set_MissingMemberHandling", {}, { ::i2c::type_of<::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::Newtonsoft::Json::Required> Newtonsoft::Json::Serialization::JsonObjectContract::get_ItemRequired() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), { "get_ItemRequired", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Newtonsoft::Json::Required>>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonObjectContract::set_ItemRequired(::System::Nullable_1<::Newtonsoft::Json::Required> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(),
                                                                                         { "set_ItemRequired", {}, { ::i2c::type_of<::System::Nullable_1<::Newtonsoft::Json::Required>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> Newtonsoft::Json::Serialization::JsonObjectContract::get_ItemNullValueHandling() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), { "get_ItemNullValueHandling", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Newtonsoft::Json::NullValueHandling>>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonObjectContract::set_ItemNullValueHandling(::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(),
                                                           { "set_ItemNullValueHandling", {}, { ::i2c::type_of<::System::Nullable_1<::Newtonsoft::Json::NullValueHandling>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Serialization::JsonPropertyCollection* Newtonsoft::Json::Serialization::JsonObjectContract::get_Properties() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), { "get_Properties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::JsonPropertyCollection*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Serialization::JsonPropertyCollection* Newtonsoft::Json::Serialization::JsonObjectContract::get_CreatorParameters() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), { "get_CreatorParameters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::JsonPropertyCollection*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* Newtonsoft::Json::Serialization::JsonObjectContract::get_OverrideCreator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), { "get_OverrideCreator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonObjectContract::set_OverrideCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(),
                                                           { "set_OverrideCreator", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* Newtonsoft::Json::Serialization::JsonObjectContract::get_ParameterizedCreator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), { "get_ParameterizedCreator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonObjectContract::set_ParameterizedCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(),
                                                           { "set_ParameterizedCreator", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Serialization::ExtensionDataSetter* Newtonsoft::Json::Serialization::JsonObjectContract::get_ExtensionDataSetter() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), { "get_ExtensionDataSetter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::ExtensionDataSetter*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonObjectContract::set_ExtensionDataSetter(::Newtonsoft::Json::Serialization::ExtensionDataSetter* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(),
                                                           { "set_ExtensionDataSetter", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::ExtensionDataSetter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Serialization::ExtensionDataGetter* Newtonsoft::Json::Serialization::JsonObjectContract::get_ExtensionDataGetter() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), { "get_ExtensionDataGetter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::ExtensionDataGetter*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonObjectContract::set_ExtensionDataGetter(::Newtonsoft::Json::Serialization::ExtensionDataGetter* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(),
                                                           { "set_ExtensionDataGetter", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::ExtensionDataGetter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Type* Newtonsoft::Json::Serialization::JsonObjectContract::get_ExtensionDataValueType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), { "get_ExtensionDataValueType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonObjectContract::set_ExtensionDataValueType(::System::Type* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), { "set_ExtensionDataValueType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Func_2<::StringW, ::StringW>* Newtonsoft::Json::Serialization::JsonObjectContract::get_ExtensionDataNameResolver() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), { "get_ExtensionDataNameResolver", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<::StringW, ::StringW>*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonObjectContract::set_ExtensionDataNameResolver(::System::Func_2<::StringW, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(),
                                                                                         { "set_ExtensionDataNameResolver", {}, { ::i2c::type_of<::System::Func_2<::StringW, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Newtonsoft::Json::Serialization::JsonObjectContract::get_HasRequiredOrDefaultValueProperties() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), { "get_HasRequiredOrDefaultValueProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonObjectContract::_ctor(::System::Type* underlyingType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, underlyingType);
}
inline ::System::Object* Newtonsoft::Json::Serialization::JsonObjectContract::GetUninitializedObject() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), { "GetUninitializedObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Serialization::JsonObjectContract* Newtonsoft::Json::Serialization::JsonObjectContract::New_ctor(::System::Type* underlyingType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::JsonObjectContract*>(underlyingType));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::JsonObjectContract::JsonObjectContract() {}
