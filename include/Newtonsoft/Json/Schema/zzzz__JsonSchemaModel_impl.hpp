#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Schema\JsonSchemaModel.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaType_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaModel_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaType_def.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchema_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.get_Required
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Schema::JsonSchemaModel::*)()>(&::Newtonsoft::Json::Schema::JsonSchemaModel::get_Required)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_Required", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.set_Required
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaModel::*)(bool)>(&::Newtonsoft::Json::Schema::JsonSchemaModel::set_Required)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "set_Required", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Schema::JsonSchemaType (::Newtonsoft::Json::Schema::JsonSchemaModel::*)()>(
    &::Newtonsoft::Json::Schema::JsonSchemaModel::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.set_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaModel::*)(::Newtonsoft::Json::Schema::JsonSchemaType)>(
    &::Newtonsoft::Json::Schema::JsonSchemaModel::set_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "set_Type", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.get_MinimumLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (::Newtonsoft::Json::Schema::JsonSchemaModel::*)()>(
    &::Newtonsoft::Json::Schema::JsonSchemaModel::get_MinimumLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_MinimumLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.set_MinimumLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaModel::*)(::System::Nullable_1<int32_t>)>(
    &::Newtonsoft::Json::Schema::JsonSchemaModel::set_MinimumLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "set_MinimumLength", {}, { ::i2c::type_of<::System::Nullable_1<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.get_MaximumLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (::Newtonsoft::Json::Schema::JsonSchemaModel::*)()>(
    &::Newtonsoft::Json::Schema::JsonSchemaModel::get_MaximumLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_MaximumLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.set_MaximumLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaModel::*)(::System::Nullable_1<int32_t>)>(
    &::Newtonsoft::Json::Schema::JsonSchemaModel::set_MaximumLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "set_MaximumLength", {}, { ::i2c::type_of<::System::Nullable_1<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.get_DivisibleBy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<double_t> (::Newtonsoft::Json::Schema::JsonSchemaModel::*)()>(
    &::Newtonsoft::Json::Schema::JsonSchemaModel::get_DivisibleBy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d64ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_DivisibleBy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.set_DivisibleBy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaModel::*)(::System::Nullable_1<double_t>)>(
    &::Newtonsoft::Json::Schema::JsonSchemaModel::set_DivisibleBy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "set_DivisibleBy", {}, { ::i2c::type_of<::System::Nullable_1<double_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.get_Minimum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<double_t> (::Newtonsoft::Json::Schema::JsonSchemaModel::*)()>(&::Newtonsoft::Json::Schema::JsonSchemaModel::get_Minimum)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d64f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_Minimum", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.set_Minimum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaModel::*)(::System::Nullable_1<double_t>)>(
    &::Newtonsoft::Json::Schema::JsonSchemaModel::set_Minimum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "set_Minimum", {}, { ::i2c::type_of<::System::Nullable_1<double_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.get_Maximum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<double_t> (::Newtonsoft::Json::Schema::JsonSchemaModel::*)()>(&::Newtonsoft::Json::Schema::JsonSchemaModel::get_Maximum)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d64f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_Maximum", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.set_Maximum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaModel::*)(::System::Nullable_1<double_t>)>(
    &::Newtonsoft::Json::Schema::JsonSchemaModel::set_Maximum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "set_Maximum", {}, { ::i2c::type_of<::System::Nullable_1<double_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.get_ExclusiveMinimum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Schema::JsonSchemaModel::*)()>(&::Newtonsoft::Json::Schema::JsonSchemaModel::get_ExclusiveMinimum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_ExclusiveMinimum", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.set_ExclusiveMinimum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaModel::*)(bool)>(&::Newtonsoft::Json::Schema::JsonSchemaModel::set_ExclusiveMinimum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "set_ExclusiveMinimum", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.get_ExclusiveMaximum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Schema::JsonSchemaModel::*)()>(&::Newtonsoft::Json::Schema::JsonSchemaModel::get_ExclusiveMaximum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_ExclusiveMaximum", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.set_ExclusiveMaximum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaModel::*)(bool)>(&::Newtonsoft::Json::Schema::JsonSchemaModel::set_ExclusiveMaximum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "set_ExclusiveMaximum", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.get_MinimumItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (::Newtonsoft::Json::Schema::JsonSchemaModel::*)()>(
    &::Newtonsoft::Json::Schema::JsonSchemaModel::get_MinimumItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_MinimumItems", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.set_MinimumItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaModel::*)(::System::Nullable_1<int32_t>)>(
    &::Newtonsoft::Json::Schema::JsonSchemaModel::set_MinimumItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "set_MinimumItems", {}, { ::i2c::type_of<::System::Nullable_1<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.get_MaximumItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (::Newtonsoft::Json::Schema::JsonSchemaModel::*)()>(
    &::Newtonsoft::Json::Schema::JsonSchemaModel::get_MaximumItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_MaximumItems", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.set_MaximumItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaModel::*)(::System::Nullable_1<int32_t>)>(
    &::Newtonsoft::Json::Schema::JsonSchemaModel::set_MaximumItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "set_MaximumItems", {}, { ::i2c::type_of<::System::Nullable_1<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.get_Patterns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::StringW>* (::Newtonsoft::Json::Schema::JsonSchemaModel::*)()>(
    &::Newtonsoft::Json::Schema::JsonSchemaModel::get_Patterns)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_Patterns", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.set_Patterns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaModel::*)(::System::Collections::Generic::IList_1<::StringW>*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaModel::set_Patterns)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(),
                                                                                           { "set_Patterns", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.get_Items
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* (::Newtonsoft::Json::Schema::JsonSchemaModel::*)()>(
    &::Newtonsoft::Json::Schema::JsonSchemaModel::get_Items)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_Items", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.set_Items
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaModel::*)(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaModel::set_Items)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(),
                                                             { "set_Items", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.get_Properties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>* (
    ::Newtonsoft::Json::Schema::JsonSchemaModel::*)()>(&::Newtonsoft::Json::Schema::JsonSchemaModel::get_Properties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_Properties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.set_Properties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaModel::*)(
    ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>*)>(&::Newtonsoft::Json::Schema::JsonSchemaModel::set_Properties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(),
                                         { "set_Properties", {}, { ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.get_PatternProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>* (
    ::Newtonsoft::Json::Schema::JsonSchemaModel::*)()>(&::Newtonsoft::Json::Schema::JsonSchemaModel::get_PatternProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_PatternProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.set_PatternProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaModel::*)(
    ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>*)>(&::Newtonsoft::Json::Schema::JsonSchemaModel::set_PatternProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(),
                            { "set_PatternProperties", {}, { ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.get_AdditionalProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Schema::JsonSchemaModel* (::Newtonsoft::Json::Schema::JsonSchemaModel::*)()>(
    &::Newtonsoft::Json::Schema::JsonSchemaModel::get_AdditionalProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_AdditionalProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.set_AdditionalProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaModel::*)(::Newtonsoft::Json::Schema::JsonSchemaModel*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaModel::set_AdditionalProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(),
                                                                                           { "set_AdditionalProperties", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.get_AdditionalItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Schema::JsonSchemaModel* (::Newtonsoft::Json::Schema::JsonSchemaModel::*)()>(
    &::Newtonsoft::Json::Schema::JsonSchemaModel::get_AdditionalItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_AdditionalItems", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.set_AdditionalItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaModel::*)(::Newtonsoft::Json::Schema::JsonSchemaModel*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaModel::set_AdditionalItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(),
                                                                                           { "set_AdditionalItems", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.get_PositionalItemsValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Schema::JsonSchemaModel::*)()>(&::Newtonsoft::Json::Schema::JsonSchemaModel::get_PositionalItemsValidation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_PositionalItemsValidation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.set_PositionalItemsValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaModel::*)(bool)>(&::Newtonsoft::Json::Schema::JsonSchemaModel::set_PositionalItemsValidation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "set_PositionalItemsValidation", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.get_AllowAdditionalProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Schema::JsonSchemaModel::*)()>(&::Newtonsoft::Json::Schema::JsonSchemaModel::get_AllowAdditionalProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_AllowAdditionalProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.set_AllowAdditionalProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaModel::*)(bool)>(&::Newtonsoft::Json::Schema::JsonSchemaModel::set_AllowAdditionalProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "set_AllowAdditionalProperties", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.get_AllowAdditionalItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Schema::JsonSchemaModel::*)()>(&::Newtonsoft::Json::Schema::JsonSchemaModel::get_AllowAdditionalItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_AllowAdditionalItems", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.set_AllowAdditionalItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaModel::*)(bool)>(&::Newtonsoft::Json::Schema::JsonSchemaModel::set_AllowAdditionalItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "set_AllowAdditionalItems", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.get_UniqueItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Schema::JsonSchemaModel::*)()>(&::Newtonsoft::Json::Schema::JsonSchemaModel::get_UniqueItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d65000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_UniqueItems", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.set_UniqueItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaModel::*)(bool)>(&::Newtonsoft::Json::Schema::JsonSchemaModel::set_UniqueItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d65008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "set_UniqueItems", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.get_Enum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* (::Newtonsoft::Json::Schema::JsonSchemaModel::*)()>(
    &::Newtonsoft::Json::Schema::JsonSchemaModel::get_Enum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d65010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_Enum", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.set_Enum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaModel::*)(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaModel::set_Enum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d65018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(),
                                                             { "set_Enum", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.get_Disallow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Schema::JsonSchemaType (::Newtonsoft::Json::Schema::JsonSchemaModel::*)()>(
    &::Newtonsoft::Json::Schema::JsonSchemaModel::get_Disallow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d65020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_Disallow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.set_Disallow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaModel::*)(::Newtonsoft::Json::Schema::JsonSchemaType)>(
    &::Newtonsoft::Json::Schema::JsonSchemaModel::set_Disallow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d65028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "set_Disallow", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaModel::*)()>(&::Newtonsoft::Json::Schema::JsonSchemaModel::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d65030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Schema::JsonSchemaModel* (*)(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaModel::Create)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x5d65048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(),
                                                             { "Create", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModel.Combine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Newtonsoft::Json::Schema::JsonSchemaModel*, ::Newtonsoft::Json::Schema::JsonSchema*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaModel::Combine)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x5d6532c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(),
                                                { "Combine", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchema*>() } })));
    return ___internal_method;
  }
};
constexpr bool& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__Required_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Required_k__BackingField;
}
constexpr bool const& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__Required_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Required_k__BackingField;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_set__Required_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Required_k__BackingField = value;
}
constexpr ::Newtonsoft::Json::Schema::JsonSchemaType& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__Type_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr ::Newtonsoft::Json::Schema::JsonSchemaType const& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__Type_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_set__Type_k__BackingField(::Newtonsoft::Json::Schema::JsonSchemaType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Type_k__BackingField = value;
}
constexpr ::System::Nullable_1<int32_t>& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__MinimumLength_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MinimumLength_k__BackingField;
}
constexpr ::System::Nullable_1<int32_t> const& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__MinimumLength_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MinimumLength_k__BackingField;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_set__MinimumLength_k__BackingField(::System::Nullable_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MinimumLength_k__BackingField = value;
}
constexpr ::System::Nullable_1<int32_t>& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__MaximumLength_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaximumLength_k__BackingField;
}
constexpr ::System::Nullable_1<int32_t> const& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__MaximumLength_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaximumLength_k__BackingField;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_set__MaximumLength_k__BackingField(::System::Nullable_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MaximumLength_k__BackingField = value;
}
constexpr ::System::Nullable_1<double_t>& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__DivisibleBy_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DivisibleBy_k__BackingField;
}
constexpr ::System::Nullable_1<double_t> const& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__DivisibleBy_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DivisibleBy_k__BackingField;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_set__DivisibleBy_k__BackingField(::System::Nullable_1<double_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____DivisibleBy_k__BackingField = value;
}
constexpr ::System::Nullable_1<double_t>& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__Minimum_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Minimum_k__BackingField;
}
constexpr ::System::Nullable_1<double_t> const& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__Minimum_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Minimum_k__BackingField;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_set__Minimum_k__BackingField(::System::Nullable_1<double_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Minimum_k__BackingField = value;
}
constexpr ::System::Nullable_1<double_t>& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__Maximum_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Maximum_k__BackingField;
}
constexpr ::System::Nullable_1<double_t> const& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__Maximum_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Maximum_k__BackingField;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_set__Maximum_k__BackingField(::System::Nullable_1<double_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Maximum_k__BackingField = value;
}
constexpr bool& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__ExclusiveMinimum_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ExclusiveMinimum_k__BackingField;
}
constexpr bool const& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__ExclusiveMinimum_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ExclusiveMinimum_k__BackingField;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_set__ExclusiveMinimum_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ExclusiveMinimum_k__BackingField = value;
}
constexpr bool& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__ExclusiveMaximum_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ExclusiveMaximum_k__BackingField;
}
constexpr bool const& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__ExclusiveMaximum_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ExclusiveMaximum_k__BackingField;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_set__ExclusiveMaximum_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ExclusiveMaximum_k__BackingField = value;
}
constexpr ::System::Nullable_1<int32_t>& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__MinimumItems_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MinimumItems_k__BackingField;
}
constexpr ::System::Nullable_1<int32_t> const& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__MinimumItems_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MinimumItems_k__BackingField;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_set__MinimumItems_k__BackingField(::System::Nullable_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MinimumItems_k__BackingField = value;
}
constexpr ::System::Nullable_1<int32_t>& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__MaximumItems_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaximumItems_k__BackingField;
}
constexpr ::System::Nullable_1<int32_t> const& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__MaximumItems_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaximumItems_k__BackingField;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_set__MaximumItems_k__BackingField(::System::Nullable_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MaximumItems_k__BackingField = value;
}
constexpr ::System::Collections::Generic::IList_1<::StringW>*& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__Patterns_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Patterns_k__BackingField;
}
constexpr ::System::Collections::Generic::IList_1<::StringW>* const& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__Patterns_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Patterns_k__BackingField;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_set__Patterns_k__BackingField(::System::Collections::Generic::IList_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Patterns_k__BackingField = value;
}
constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>*& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__Items_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Items_k__BackingField;
}
constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* const& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__Items_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Items_k__BackingField;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_set__Items_k__BackingField(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Items_k__BackingField = value;
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>*&
Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__Properties_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Properties_k__BackingField;
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>* const&
Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__Properties_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Properties_k__BackingField;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_set__Properties_k__BackingField(
    ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Properties_k__BackingField = value;
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>*&
Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__PatternProperties_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PatternProperties_k__BackingField;
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>* const&
Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__PatternProperties_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PatternProperties_k__BackingField;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_set__PatternProperties_k__BackingField(
    ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____PatternProperties_k__BackingField = value;
}
constexpr ::Newtonsoft::Json::Schema::JsonSchemaModel*& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__AdditionalProperties_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AdditionalProperties_k__BackingField;
}
constexpr ::Newtonsoft::Json::Schema::JsonSchemaModel* const& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__AdditionalProperties_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AdditionalProperties_k__BackingField;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_set__AdditionalProperties_k__BackingField(::Newtonsoft::Json::Schema::JsonSchemaModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____AdditionalProperties_k__BackingField = value;
}
constexpr ::Newtonsoft::Json::Schema::JsonSchemaModel*& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__AdditionalItems_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AdditionalItems_k__BackingField;
}
constexpr ::Newtonsoft::Json::Schema::JsonSchemaModel* const& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__AdditionalItems_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AdditionalItems_k__BackingField;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_set__AdditionalItems_k__BackingField(::Newtonsoft::Json::Schema::JsonSchemaModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____AdditionalItems_k__BackingField = value;
}
constexpr bool& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__PositionalItemsValidation_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PositionalItemsValidation_k__BackingField;
}
constexpr bool const& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__PositionalItemsValidation_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PositionalItemsValidation_k__BackingField;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_set__PositionalItemsValidation_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____PositionalItemsValidation_k__BackingField = value;
}
constexpr bool& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__AllowAdditionalProperties_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AllowAdditionalProperties_k__BackingField;
}
constexpr bool const& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__AllowAdditionalProperties_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AllowAdditionalProperties_k__BackingField;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_set__AllowAdditionalProperties_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____AllowAdditionalProperties_k__BackingField = value;
}
constexpr bool& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__AllowAdditionalItems_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AllowAdditionalItems_k__BackingField;
}
constexpr bool const& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__AllowAdditionalItems_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AllowAdditionalItems_k__BackingField;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_set__AllowAdditionalItems_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____AllowAdditionalItems_k__BackingField = value;
}
constexpr bool& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__UniqueItems_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UniqueItems_k__BackingField;
}
constexpr bool const& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__UniqueItems_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UniqueItems_k__BackingField;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_set__UniqueItems_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____UniqueItems_k__BackingField = value;
}
constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__Enum_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Enum_k__BackingField;
}
constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* const& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__Enum_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Enum_k__BackingField;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_set__Enum_k__BackingField(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Enum_k__BackingField = value;
}
constexpr ::Newtonsoft::Json::Schema::JsonSchemaType& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__Disallow_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Disallow_k__BackingField;
}
constexpr ::Newtonsoft::Json::Schema::JsonSchemaType const& Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_get__Disallow_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Disallow_k__BackingField;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaModel::__cordl_internal_set__Disallow_k__BackingField(::Newtonsoft::Json::Schema::JsonSchemaType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Disallow_k__BackingField = value;
}
inline bool Newtonsoft::Json::Schema::JsonSchemaModel::get_Required() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_Required", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::Schema::JsonSchemaModel::set_Required(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "set_Required", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Schema::JsonSchemaType Newtonsoft::Json::Schema::JsonSchemaModel::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Schema::JsonSchemaType>(this, ___internal_method);
}
inline void Newtonsoft::Json::Schema::JsonSchemaModel::set_Type(::Newtonsoft::Json::Schema::JsonSchemaType value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "set_Type", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<int32_t> Newtonsoft::Json::Schema::JsonSchemaModel::get_MinimumLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_MinimumLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(this, ___internal_method);
}
inline void Newtonsoft::Json::Schema::JsonSchemaModel::set_MinimumLength(::System::Nullable_1<int32_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "set_MinimumLength", {}, { ::i2c::type_of<::System::Nullable_1<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<int32_t> Newtonsoft::Json::Schema::JsonSchemaModel::get_MaximumLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_MaximumLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(this, ___internal_method);
}
inline void Newtonsoft::Json::Schema::JsonSchemaModel::set_MaximumLength(::System::Nullable_1<int32_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "set_MaximumLength", {}, { ::i2c::type_of<::System::Nullable_1<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<double_t> Newtonsoft::Json::Schema::JsonSchemaModel::get_DivisibleBy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_DivisibleBy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<double_t>>(this, ___internal_method);
}
inline void Newtonsoft::Json::Schema::JsonSchemaModel::set_DivisibleBy(::System::Nullable_1<double_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "set_DivisibleBy", {}, { ::i2c::type_of<::System::Nullable_1<double_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<double_t> Newtonsoft::Json::Schema::JsonSchemaModel::get_Minimum() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_Minimum", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<double_t>>(this, ___internal_method);
}
inline void Newtonsoft::Json::Schema::JsonSchemaModel::set_Minimum(::System::Nullable_1<double_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "set_Minimum", {}, { ::i2c::type_of<::System::Nullable_1<double_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<double_t> Newtonsoft::Json::Schema::JsonSchemaModel::get_Maximum() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_Maximum", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<double_t>>(this, ___internal_method);
}
inline void Newtonsoft::Json::Schema::JsonSchemaModel::set_Maximum(::System::Nullable_1<double_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "set_Maximum", {}, { ::i2c::type_of<::System::Nullable_1<double_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Newtonsoft::Json::Schema::JsonSchemaModel::get_ExclusiveMinimum() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_ExclusiveMinimum", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::Schema::JsonSchemaModel::set_ExclusiveMinimum(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "set_ExclusiveMinimum", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Newtonsoft::Json::Schema::JsonSchemaModel::get_ExclusiveMaximum() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_ExclusiveMaximum", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::Schema::JsonSchemaModel::set_ExclusiveMaximum(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "set_ExclusiveMaximum", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<int32_t> Newtonsoft::Json::Schema::JsonSchemaModel::get_MinimumItems() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_MinimumItems", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(this, ___internal_method);
}
inline void Newtonsoft::Json::Schema::JsonSchemaModel::set_MinimumItems(::System::Nullable_1<int32_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "set_MinimumItems", {}, { ::i2c::type_of<::System::Nullable_1<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<int32_t> Newtonsoft::Json::Schema::JsonSchemaModel::get_MaximumItems() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_MaximumItems", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(this, ___internal_method);
}
inline void Newtonsoft::Json::Schema::JsonSchemaModel::set_MaximumItems(::System::Nullable_1<int32_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "set_MaximumItems", {}, { ::i2c::type_of<::System::Nullable_1<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::StringW>* Newtonsoft::Json::Schema::JsonSchemaModel::get_Patterns() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_Patterns", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::StringW>*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Schema::JsonSchemaModel::set_Patterns(::System::Collections::Generic::IList_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(),
                                                                                         { "set_Patterns", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* Newtonsoft::Json::Schema::JsonSchemaModel::get_Items() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_Items", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Schema::JsonSchemaModel::set_Items(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(),
                                                           { "set_Items", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>* Newtonsoft::Json::Schema::JsonSchemaModel::get_Properties() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_Properties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Schema::JsonSchemaModel::set_Properties(::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(),
                                       { "set_Properties", {}, { ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>* Newtonsoft::Json::Schema::JsonSchemaModel::get_PatternProperties() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_PatternProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Schema::JsonSchemaModel::set_PatternProperties(::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(),
                          { "set_PatternProperties", {}, { ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Schema::JsonSchemaModel* Newtonsoft::Json::Schema::JsonSchemaModel::get_AdditionalProperties() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_AdditionalProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Schema::JsonSchemaModel*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Schema::JsonSchemaModel::set_AdditionalProperties(::Newtonsoft::Json::Schema::JsonSchemaModel* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(),
                                                                                         { "set_AdditionalProperties", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Schema::JsonSchemaModel* Newtonsoft::Json::Schema::JsonSchemaModel::get_AdditionalItems() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_AdditionalItems", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Schema::JsonSchemaModel*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Schema::JsonSchemaModel::set_AdditionalItems(::Newtonsoft::Json::Schema::JsonSchemaModel* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(),
                                                                                         { "set_AdditionalItems", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Newtonsoft::Json::Schema::JsonSchemaModel::get_PositionalItemsValidation() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_PositionalItemsValidation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::Schema::JsonSchemaModel::set_PositionalItemsValidation(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "set_PositionalItemsValidation", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Newtonsoft::Json::Schema::JsonSchemaModel::get_AllowAdditionalProperties() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_AllowAdditionalProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::Schema::JsonSchemaModel::set_AllowAdditionalProperties(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "set_AllowAdditionalProperties", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Newtonsoft::Json::Schema::JsonSchemaModel::get_AllowAdditionalItems() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_AllowAdditionalItems", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::Schema::JsonSchemaModel::set_AllowAdditionalItems(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "set_AllowAdditionalItems", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Newtonsoft::Json::Schema::JsonSchemaModel::get_UniqueItems() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_UniqueItems", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::Schema::JsonSchemaModel::set_UniqueItems(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "set_UniqueItems", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Schema::JsonSchemaModel::get_Enum() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_Enum", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Schema::JsonSchemaModel::set_Enum(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(),
                                                           { "set_Enum", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Schema::JsonSchemaType Newtonsoft::Json::Schema::JsonSchemaModel::get_Disallow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "get_Disallow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Schema::JsonSchemaType>(this, ___internal_method);
}
inline void Newtonsoft::Json::Schema::JsonSchemaModel::set_Disallow(::Newtonsoft::Json::Schema::JsonSchemaType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { "set_Disallow", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Schema::JsonSchemaModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Schema::JsonSchemaModel* Newtonsoft::Json::Schema::JsonSchemaModel::Create(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>* schemata) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(),
                                                           { "Create", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Schema::JsonSchemaModel*>(nullptr, ___internal_method, schemata);
}
inline void Newtonsoft::Json::Schema::JsonSchemaModel::Combine(::Newtonsoft::Json::Schema::JsonSchemaModel* model, ::Newtonsoft::Json::Schema::JsonSchema* schema) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(),
                                              { "Combine", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaModel*>(), ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, model, schema);
}
inline ::Newtonsoft::Json::Schema::JsonSchemaModel* Newtonsoft::Json::Schema::JsonSchemaModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Schema::JsonSchemaModel*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Schema::JsonSchemaModel::JsonSchemaModel() {}
