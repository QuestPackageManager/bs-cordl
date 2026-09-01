#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Schema\JsonSchemaGenerator.hpp"
#include "Newtonsoft/Json/Schema/zzzz__UndefinedSchemaIdHandling_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaGenerator_def.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaGenerator_def.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaResolver_def.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaType_def.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchema_def.hpp"
#include "Newtonsoft/Json/Schema/zzzz__UndefinedSchemaIdHandling_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__IContractResolver_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonISerializableContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonObjectContract_def.hpp"
#include "Newtonsoft/Json/zzzz__DefaultValueHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__Required_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema::*)()>(
    &::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema*>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema.get_Schema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Schema::JsonSchema* (::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema::*)()>(
    &::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema::get_Schema)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema*>(), { "get_Schema", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema::*)(::System::Type*, ::Newtonsoft::Json::Schema::JsonSchema*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5d64650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchema*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema::__cordl_internal_get__Type_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr ::System::Type* const& Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema::__cordl_internal_get__Type_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema::__cordl_internal_set__Type_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Type_k__BackingField = value;
}
constexpr ::Newtonsoft::Json::Schema::JsonSchema*& Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema::__cordl_internal_get__Schema_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Schema_k__BackingField;
}
constexpr ::Newtonsoft::Json::Schema::JsonSchema* const& Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema::__cordl_internal_get__Schema_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Schema_k__BackingField;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema::__cordl_internal_set__Schema_k__BackingField(::Newtonsoft::Json::Schema::JsonSchema* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Schema_k__BackingField = value;
}
inline ::System::Type* Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema*>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Schema::JsonSchema* Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema::get_Schema() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema*>(), { "get_Schema", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Schema::JsonSchema*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema::_ctor(::System::Type* type, ::Newtonsoft::Json::Schema::JsonSchema* schema) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, schema);
}
inline ::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema* Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema::New_ctor(::System::Type* type,
                                                                                                                                      ::Newtonsoft::Json::Schema::JsonSchema* schema) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema*>(type, schema));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema::JsonSchemaGenerator_TypeSchema() {}
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaGenerator___c__DisplayClass23_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaGenerator___c__DisplayClass23_0::*)()>(
    &::Newtonsoft::Json::Schema::JsonSchemaGenerator___c__DisplayClass23_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d645b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator___c__DisplayClass23_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaGenerator___c__DisplayClass23_0._GenerateInternal_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Schema::JsonSchemaGenerator___c__DisplayClass23_0::*)(::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaGenerator___c__DisplayClass23_0::_GenerateInternal_b__0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5d64e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator___c__DisplayClass23_0*>(),
                                                             { "<GenerateInternal>b__0", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Newtonsoft::Json::Schema::JsonSchemaGenerator___c__DisplayClass23_0::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Type* const& Newtonsoft::Json::Schema::JsonSchemaGenerator___c__DisplayClass23_0::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaGenerator___c__DisplayClass23_0::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
inline void Newtonsoft::Json::Schema::JsonSchemaGenerator___c__DisplayClass23_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator___c__DisplayClass23_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Schema::JsonSchemaGenerator___c__DisplayClass23_0::_GenerateInternal_b__0(::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema* tc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator___c__DisplayClass23_0*>(),
                                                           { "<GenerateInternal>b__0", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tc);
}
inline ::Newtonsoft::Json::Schema::JsonSchemaGenerator___c__DisplayClass23_0* Newtonsoft::Json::Schema::JsonSchemaGenerator___c__DisplayClass23_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Schema::JsonSchemaGenerator___c__DisplayClass23_0*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Schema::JsonSchemaGenerator___c__DisplayClass23_0::JsonSchemaGenerator___c__DisplayClass23_0() {}
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaGenerator.get_UndefinedSchemaIdHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling (::Newtonsoft::Json::Schema::JsonSchemaGenerator::*)()>(
    &::Newtonsoft::Json::Schema::JsonSchemaGenerator::get_UndefinedSchemaIdHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d631f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(), { "get_UndefinedSchemaIdHandling", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaGenerator.set_UndefinedSchemaIdHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaGenerator::*)(::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling)>(
    &::Newtonsoft::Json::Schema::JsonSchemaGenerator::set_UndefinedSchemaIdHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d631fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(),
                                                             { "set_UndefinedSchemaIdHandling", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaGenerator.get_ContractResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::IContractResolver* (::Newtonsoft::Json::Schema::JsonSchemaGenerator::*)()>(
    &::Newtonsoft::Json::Schema::JsonSchemaGenerator::get_ContractResolver)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d63204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(), { "get_ContractResolver", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaGenerator.set_ContractResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaGenerator::*)(::Newtonsoft::Json::Serialization::IContractResolver*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaGenerator::set_ContractResolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d632a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(),
                                                             { "set_ContractResolver", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::IContractResolver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaGenerator.get_CurrentSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Schema::JsonSchema* (::Newtonsoft::Json::Schema::JsonSchemaGenerator::*)()>(
    &::Newtonsoft::Json::Schema::JsonSchemaGenerator::get_CurrentSchema)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d632ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(), { "get_CurrentSchema", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaGenerator.Push
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaGenerator::*)(::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaGenerator::Push)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5d632b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(),
                                                                                           { "Push", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaGenerator.Pop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema* (::Newtonsoft::Json::Schema::JsonSchemaGenerator::*)()>(
    &::Newtonsoft::Json::Schema::JsonSchemaGenerator::Pop)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5d63404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(), { "Pop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Schema::JsonSchema* (::Newtonsoft::Json::Schema::JsonSchemaGenerator::*)(::System::Type*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaGenerator::Generate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d63630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(), { "Generate", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Schema::JsonSchema* (
    ::Newtonsoft::Json::Schema::JsonSchemaGenerator::*)(::System::Type*, ::Newtonsoft::Json::Schema::JsonSchemaResolver*)>(&::Newtonsoft::Json::Schema::JsonSchemaGenerator::Generate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d63754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(),
                                                             { "Generate", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaResolver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Schema::JsonSchema* (::Newtonsoft::Json::Schema::JsonSchemaGenerator::*)(::System::Type*, bool)>(
    &::Newtonsoft::Json::Schema::JsonSchemaGenerator::Generate)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d6375c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(), { "Generate", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Schema::JsonSchema* (
    ::Newtonsoft::Json::Schema::JsonSchemaGenerator::*)(::System::Type*, ::Newtonsoft::Json::Schema::JsonSchemaResolver*, bool)>(&::Newtonsoft::Json::Schema::JsonSchemaGenerator::Generate)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5d636a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(),
                                                { "Generate", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaResolver*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaGenerator.GetTitle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Schema::JsonSchemaGenerator::*)(::System::Type*)>(&::Newtonsoft::Json::Schema::JsonSchemaGenerator::GetTitle)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5d64324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(), { "GetTitle", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaGenerator.GetDescription
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Schema::JsonSchemaGenerator::*)(::System::Type*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaGenerator::GetDescription)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5d643b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(), { "GetDescription", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaGenerator.GetTypeId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Schema::JsonSchemaGenerator::*)(::System::Type*, bool)>(
    &::Newtonsoft::Json::Schema::JsonSchemaGenerator::GetTypeId)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5d644a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(), { "GetTypeId", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaGenerator.GenerateInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Schema::JsonSchema* (
    ::Newtonsoft::Json::Schema::JsonSchemaGenerator::*)(::System::Type*, ::Newtonsoft::Json::Required, bool)>(&::Newtonsoft::Json::Schema::JsonSchemaGenerator::GenerateInternal)> {
  constexpr static std::size_t size = 0xb54;
  constexpr static std::size_t addrs = 0x5d637d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(),
                                                { "GenerateInternal", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::Required>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaGenerator.AddNullType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Schema::JsonSchemaType (::Newtonsoft::Json::Schema::JsonSchemaGenerator::*)(
    ::Newtonsoft::Json::Schema::JsonSchemaType, ::Newtonsoft::Json::Required)>(&::Newtonsoft::Json::Schema::JsonSchemaGenerator::AddNullType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d646e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(),
                                                             { "AddNullType", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaType>(), ::i2c::type_of<::Newtonsoft::Json::Required>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaGenerator.HasFlag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Schema::JsonSchemaGenerator::*)(::Newtonsoft::Json::DefaultValueHandling, ::Newtonsoft::Json::DefaultValueHandling)>(
    &::Newtonsoft::Json::Schema::JsonSchemaGenerator::HasFlag)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d64de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(),
                                                { "HasFlag", {}, { ::i2c::type_of<::Newtonsoft::Json::DefaultValueHandling>(), ::i2c::type_of<::Newtonsoft::Json::DefaultValueHandling>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaGenerator.GenerateObjectSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaGenerator::*)(::System::Type*, ::Newtonsoft::Json::Serialization::JsonObjectContract*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaGenerator::GenerateObjectSchema)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x5d646f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(),
                                                { "GenerateObjectSchema", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaGenerator.GenerateISerializableContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaGenerator::*)(::System::Type*, ::Newtonsoft::Json::Serialization::JsonISerializableContract*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaGenerator::GenerateISerializableContract)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d64dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(),
                            { "GenerateISerializableContract", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonISerializableContract*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaGenerator.HasFlag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Nullable_1<::Newtonsoft::Json::Schema::JsonSchemaType>, ::Newtonsoft::Json::Schema::JsonSchemaType)>(
    &::Newtonsoft::Json::Schema::JsonSchemaGenerator::HasFlag)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5d645b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(),
                            { "HasFlag", {}, { ::i2c::type_of<::System::Nullable_1<::Newtonsoft::Json::Schema::JsonSchemaType>>(), ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaGenerator.GetJsonSchemaType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Schema::JsonSchemaType (::Newtonsoft::Json::Schema::JsonSchemaGenerator::*)(::System::Type*, ::Newtonsoft::Json::Required)>(
    &::Newtonsoft::Json::Schema::JsonSchemaGenerator::GetJsonSchemaType)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5d64bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(),
                                                             { "GetJsonSchemaType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::Required>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaGenerator::*)()>(&::Newtonsoft::Json::Schema::JsonSchemaGenerator::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d64dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling& Newtonsoft::Json::Schema::JsonSchemaGenerator::__cordl_internal_get__UndefinedSchemaIdHandling_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UndefinedSchemaIdHandling_k__BackingField;
}
constexpr ::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling const& Newtonsoft::Json::Schema::JsonSchemaGenerator::__cordl_internal_get__UndefinedSchemaIdHandling_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UndefinedSchemaIdHandling_k__BackingField;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaGenerator::__cordl_internal_set__UndefinedSchemaIdHandling_k__BackingField(::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____UndefinedSchemaIdHandling_k__BackingField = value;
}
constexpr ::Newtonsoft::Json::Serialization::IContractResolver*& Newtonsoft::Json::Schema::JsonSchemaGenerator::__cordl_internal_get__contractResolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contractResolver;
}
constexpr ::Newtonsoft::Json::Serialization::IContractResolver* const& Newtonsoft::Json::Schema::JsonSchemaGenerator::__cordl_internal_get__contractResolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contractResolver;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaGenerator::__cordl_internal_set__contractResolver(::Newtonsoft::Json::Serialization::IContractResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____contractResolver = value;
}
constexpr ::Newtonsoft::Json::Schema::JsonSchemaResolver*& Newtonsoft::Json::Schema::JsonSchemaGenerator::__cordl_internal_get__resolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resolver;
}
constexpr ::Newtonsoft::Json::Schema::JsonSchemaResolver* const& Newtonsoft::Json::Schema::JsonSchemaGenerator::__cordl_internal_get__resolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resolver;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaGenerator::__cordl_internal_set__resolver(::Newtonsoft::Json::Schema::JsonSchemaResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____resolver = value;
}
constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema*>*& Newtonsoft::Json::Schema::JsonSchemaGenerator::__cordl_internal_get__stack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stack;
}
constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema*>* const&
Newtonsoft::Json::Schema::JsonSchemaGenerator::__cordl_internal_get__stack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stack;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaGenerator::__cordl_internal_set__stack(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stack = value;
}
constexpr ::Newtonsoft::Json::Schema::JsonSchema*& Newtonsoft::Json::Schema::JsonSchemaGenerator::__cordl_internal_get__currentSchema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentSchema;
}
constexpr ::Newtonsoft::Json::Schema::JsonSchema* const& Newtonsoft::Json::Schema::JsonSchemaGenerator::__cordl_internal_get__currentSchema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentSchema;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaGenerator::__cordl_internal_set__currentSchema(::Newtonsoft::Json::Schema::JsonSchema* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentSchema = value;
}
inline ::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling Newtonsoft::Json::Schema::JsonSchemaGenerator::get_UndefinedSchemaIdHandling() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(), { "get_UndefinedSchemaIdHandling", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::Schema::JsonSchemaGenerator::set_UndefinedSchemaIdHandling(::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(),
                                                           { "set_UndefinedSchemaIdHandling", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Serialization::IContractResolver* Newtonsoft::Json::Schema::JsonSchemaGenerator::get_ContractResolver() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(), { "get_ContractResolver", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::IContractResolver*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Schema::JsonSchemaGenerator::set_ContractResolver(::Newtonsoft::Json::Serialization::IContractResolver* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(),
                                                                                         { "set_ContractResolver", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::IContractResolver*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Schema::JsonSchema* Newtonsoft::Json::Schema::JsonSchemaGenerator::get_CurrentSchema() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(), { "get_CurrentSchema", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Schema::JsonSchema*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Schema::JsonSchemaGenerator::Push(::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema* typeSchema) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(),
                                                                                         { "Push", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeSchema);
}
inline ::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema* Newtonsoft::Json::Schema::JsonSchemaGenerator::Pop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(), { "Pop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Schema::JsonSchema* Newtonsoft::Json::Schema::JsonSchemaGenerator::Generate(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(), { "Generate", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Schema::JsonSchema*>(this, ___internal_method, type);
}
inline ::Newtonsoft::Json::Schema::JsonSchema* Newtonsoft::Json::Schema::JsonSchemaGenerator::Generate(::System::Type* type, ::Newtonsoft::Json::Schema::JsonSchemaResolver* resolver) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(),
                                                           { "Generate", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaResolver*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Schema::JsonSchema*>(this, ___internal_method, type, resolver);
}
inline ::Newtonsoft::Json::Schema::JsonSchema* Newtonsoft::Json::Schema::JsonSchemaGenerator::Generate(::System::Type* type, bool rootSchemaNullable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(), { "Generate", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Schema::JsonSchema*>(this, ___internal_method, type, rootSchemaNullable);
}
inline ::Newtonsoft::Json::Schema::JsonSchema* Newtonsoft::Json::Schema::JsonSchemaGenerator::Generate(::System::Type* type, ::Newtonsoft::Json::Schema::JsonSchemaResolver* resolver,
                                                                                                       bool rootSchemaNullable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(),
                                              { "Generate", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaResolver*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Schema::JsonSchema*>(this, ___internal_method, type, resolver, rootSchemaNullable);
}
inline ::StringW Newtonsoft::Json::Schema::JsonSchemaGenerator::GetTitle(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(), { "GetTitle", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, type);
}
inline ::StringW Newtonsoft::Json::Schema::JsonSchemaGenerator::GetDescription(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(), { "GetDescription", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, type);
}
inline ::StringW Newtonsoft::Json::Schema::JsonSchemaGenerator::GetTypeId(::System::Type* type, bool explicitOnly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(), { "GetTypeId", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, type, explicitOnly);
}
inline ::Newtonsoft::Json::Schema::JsonSchema* Newtonsoft::Json::Schema::JsonSchemaGenerator::GenerateInternal(::System::Type* type, ::Newtonsoft::Json::Required valueRequired, bool required) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(),
                                                           { "GenerateInternal", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::Required>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Schema::JsonSchema*>(this, ___internal_method, type, valueRequired, required);
}
inline ::Newtonsoft::Json::Schema::JsonSchemaType Newtonsoft::Json::Schema::JsonSchemaGenerator::AddNullType(::Newtonsoft::Json::Schema::JsonSchemaType type,
                                                                                                             ::Newtonsoft::Json::Required valueRequired) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(),
                                                           { "AddNullType", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaType>(), ::i2c::type_of<::Newtonsoft::Json::Required>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Schema::JsonSchemaType>(this, ___internal_method, type, valueRequired);
}
inline bool Newtonsoft::Json::Schema::JsonSchemaGenerator::HasFlag(::Newtonsoft::Json::DefaultValueHandling value, ::Newtonsoft::Json::DefaultValueHandling flag) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(),
                                              { "HasFlag", {}, { ::i2c::type_of<::Newtonsoft::Json::DefaultValueHandling>(), ::i2c::type_of<::Newtonsoft::Json::DefaultValueHandling>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, flag);
}
inline void Newtonsoft::Json::Schema::JsonSchemaGenerator::GenerateObjectSchema(::System::Type* type, ::Newtonsoft::Json::Serialization::JsonObjectContract* contract) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(),
                                              { "GenerateObjectSchema", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, contract);
}
inline void Newtonsoft::Json::Schema::JsonSchemaGenerator::GenerateISerializableContract(::System::Type* type, ::Newtonsoft::Json::Serialization::JsonISerializableContract* contract) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(),
                          { "GenerateISerializableContract", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonISerializableContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, contract);
}
inline bool Newtonsoft::Json::Schema::JsonSchemaGenerator::HasFlag(::System::Nullable_1<::Newtonsoft::Json::Schema::JsonSchemaType> value, ::Newtonsoft::Json::Schema::JsonSchemaType flag) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(),
                          { "HasFlag", {}, { ::i2c::type_of<::System::Nullable_1<::Newtonsoft::Json::Schema::JsonSchemaType>>(), ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, flag);
}
inline ::Newtonsoft::Json::Schema::JsonSchemaType Newtonsoft::Json::Schema::JsonSchemaGenerator::GetJsonSchemaType(::System::Type* type, ::Newtonsoft::Json::Required valueRequired) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(),
                                                           { "GetJsonSchemaType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Newtonsoft::Json::Required>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Schema::JsonSchemaType>(this, ___internal_method, type, valueRequired);
}
inline void Newtonsoft::Json::Schema::JsonSchemaGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Schema::JsonSchemaGenerator* Newtonsoft::Json::Schema::JsonSchemaGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Schema::JsonSchemaGenerator*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Schema::JsonSchemaGenerator::JsonSchemaGenerator() {}
