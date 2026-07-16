#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Schema/JsonSchemaBuilder.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaBuilder_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JObject_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaBuilder_def.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaResolver_def.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaType_def.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchema_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaBuilder___c__DisplayClass23_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaBuilder___c__DisplayClass23_0::*)()>(
    &::Newtonsoft::Json::Schema::JsonSchemaBuilder___c__DisplayClass23_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d60c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder___c__DisplayClass23_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaBuilder___c__DisplayClass23_0._MapType_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Schema::JsonSchemaBuilder___c__DisplayClass23_0::*)(
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaType>)>(&::Newtonsoft::Json::Schema::JsonSchemaBuilder___c__DisplayClass23_0::_MapType_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d60c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder___c__DisplayClass23_0*>(),
                                                { "<MapType>b__0", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaType>>() } })));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Schema::JsonSchemaType& Newtonsoft::Json::Schema::JsonSchemaBuilder___c__DisplayClass23_0::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::Newtonsoft::Json::Schema::JsonSchemaType const& Newtonsoft::Json::Schema::JsonSchemaBuilder___c__DisplayClass23_0::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaBuilder___c__DisplayClass23_0::__cordl_internal_set_type(::Newtonsoft::Json::Schema::JsonSchemaType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
inline void Newtonsoft::Json::Schema::JsonSchemaBuilder___c__DisplayClass23_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder___c__DisplayClass23_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Schema::JsonSchemaBuilder___c__DisplayClass23_0::_MapType_b__0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaType> kv) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder___c__DisplayClass23_0*>(),
                                              { "<MapType>b__0", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaType>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, kv);
}
inline ::Newtonsoft::Json::Schema::JsonSchemaBuilder___c__DisplayClass23_0* Newtonsoft::Json::Schema::JsonSchemaBuilder___c__DisplayClass23_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Schema::JsonSchemaBuilder___c__DisplayClass23_0*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Schema::JsonSchemaBuilder___c__DisplayClass23_0::JsonSchemaBuilder___c__DisplayClass23_0() {}
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaBuilder::*)(::Newtonsoft::Json::Schema::JsonSchemaResolver*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaBuilder::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5d5b6ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(), { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaResolver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaBuilder.Push
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaBuilder::*)(::Newtonsoft::Json::Schema::JsonSchema*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaBuilder::Push)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5d5cd68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(), { "Push", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchema*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaBuilder.Pop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Schema::JsonSchema* (::Newtonsoft::Json::Schema::JsonSchemaBuilder::*)()>(
    &::Newtonsoft::Json::Schema::JsonSchemaBuilder::Pop)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5d5cf20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(), { "Pop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaBuilder.get_CurrentSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Schema::JsonSchema* (::Newtonsoft::Json::Schema::JsonSchemaBuilder::*)()>(
    &::Newtonsoft::Json::Schema::JsonSchemaBuilder::get_CurrentSchema)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d5d080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(), { "get_CurrentSchema", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaBuilder.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Schema::JsonSchema* (::Newtonsoft::Json::Schema::JsonSchemaBuilder::*)(::Newtonsoft::Json::JsonReader*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaBuilder::Read)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5d5b798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(), { "Read", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaBuilder.UnescapeReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Schema::JsonSchemaBuilder::*)(::StringW)>(&::Newtonsoft::Json::Schema::JsonSchemaBuilder::UnescapeReference)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5d5dd00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(), { "UnescapeReference", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaBuilder.ResolveReferences
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Schema::JsonSchema* (::Newtonsoft::Json::Schema::JsonSchemaBuilder::*)(::Newtonsoft::Json::Schema::JsonSchema*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaBuilder::ResolveReferences)> {
  constexpr static std::size_t size = 0x8c0;
  constexpr static std::size_t addrs = 0x5d5d440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(),
                                                                                           { "ResolveReferences", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchema*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaBuilder.BuildSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Schema::JsonSchema* (::Newtonsoft::Json::Schema::JsonSchemaBuilder::*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaBuilder::BuildSchema)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x5d5d088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(), { "BuildSchema", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaBuilder.ProcessSchemaProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaBuilder::*)(::Newtonsoft::Json::Linq::JObject*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaBuilder::ProcessSchemaProperties)> {
  constexpr static std::size_t size = 0x1070;
  constexpr static std::size_t addrs = 0x5d5dde8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(),
                                                                                           { "ProcessSchemaProperties", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaBuilder.ProcessExtends
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaBuilder::*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaBuilder::ProcessExtends)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x5d604f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(), { "ProcessExtends", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaBuilder.ProcessEnum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaBuilder::*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaBuilder::ProcessEnum)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x5d60074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(), { "ProcessEnum", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaBuilder.ProcessAdditionalProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaBuilder::*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaBuilder::ProcessAdditionalProperties)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5d5ff04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(),
                                                                                           { "ProcessAdditionalProperties", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaBuilder.ProcessAdditionalItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaBuilder::*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaBuilder::ProcessAdditionalItems)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5d5ffbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(),
                                                                                           { "ProcessAdditionalItems", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaBuilder.ProcessProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>* (
    ::Newtonsoft::Json::Schema::JsonSchemaBuilder::*)(::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Schema::JsonSchemaBuilder::ProcessProperties)> {
  constexpr static std::size_t size = 0x5fc;
  constexpr static std::size_t addrs = 0x5d5f3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(), { "ProcessProperties", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaBuilder.ProcessItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaBuilder::*)(::Newtonsoft::Json::Linq::JToken*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaBuilder::ProcessItems)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x5d5f9e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(), { "ProcessItems", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaBuilder.ProcessType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Newtonsoft::Json::Schema::JsonSchemaType> (::Newtonsoft::Json::Schema::JsonSchemaBuilder::*)(
    ::Newtonsoft::Json::Linq::JToken*)>(&::Newtonsoft::Json::Schema::JsonSchemaBuilder::ProcessType)> {
  constexpr static std::size_t size = 0x590;
  constexpr static std::size_t addrs = 0x5d5ee58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(), { "ProcessType", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaBuilder.MapType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Schema::JsonSchemaType (*)(::StringW)>(&::Newtonsoft::Json::Schema::JsonSchemaBuilder::MapType)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5d6098c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(), { "MapType", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaBuilder.MapType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Newtonsoft::Json::Schema::JsonSchemaType)>(&::Newtonsoft::Json::Schema::JsonSchemaBuilder::MapType)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5d60af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(), { "MapType", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaType>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>*& Newtonsoft::Json::Schema::JsonSchemaBuilder::__cordl_internal_get__stack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stack;
}
constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>* const& Newtonsoft::Json::Schema::JsonSchemaBuilder::__cordl_internal_get__stack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stack;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaBuilder::__cordl_internal_set__stack(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stack = value;
}
constexpr ::Newtonsoft::Json::Schema::JsonSchemaResolver*& Newtonsoft::Json::Schema::JsonSchemaBuilder::__cordl_internal_get__resolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resolver;
}
constexpr ::Newtonsoft::Json::Schema::JsonSchemaResolver* const& Newtonsoft::Json::Schema::JsonSchemaBuilder::__cordl_internal_get__resolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resolver;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaBuilder::__cordl_internal_set__resolver(::Newtonsoft::Json::Schema::JsonSchemaResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____resolver = value;
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>*& Newtonsoft::Json::Schema::JsonSchemaBuilder::__cordl_internal_get__documentSchemas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____documentSchemas;
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>* const&
Newtonsoft::Json::Schema::JsonSchemaBuilder::__cordl_internal_get__documentSchemas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____documentSchemas;
}
constexpr void
Newtonsoft::Json::Schema::JsonSchemaBuilder::__cordl_internal_set__documentSchemas(::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____documentSchemas = value;
}
constexpr ::Newtonsoft::Json::Schema::JsonSchema*& Newtonsoft::Json::Schema::JsonSchemaBuilder::__cordl_internal_get__currentSchema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentSchema;
}
constexpr ::Newtonsoft::Json::Schema::JsonSchema* const& Newtonsoft::Json::Schema::JsonSchemaBuilder::__cordl_internal_get__currentSchema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentSchema;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaBuilder::__cordl_internal_set__currentSchema(::Newtonsoft::Json::Schema::JsonSchema* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentSchema = value;
}
constexpr ::Newtonsoft::Json::Linq::JObject*& Newtonsoft::Json::Schema::JsonSchemaBuilder::__cordl_internal_get__rootSchema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rootSchema;
}
constexpr ::Newtonsoft::Json::Linq::JObject* const& Newtonsoft::Json::Schema::JsonSchemaBuilder::__cordl_internal_get__rootSchema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rootSchema;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaBuilder::__cordl_internal_set__rootSchema(::Newtonsoft::Json::Linq::JObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rootSchema = value;
}
inline void Newtonsoft::Json::Schema::JsonSchemaBuilder::_ctor(::Newtonsoft::Json::Schema::JsonSchemaResolver* resolver) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(), { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaResolver*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resolver);
}
inline void Newtonsoft::Json::Schema::JsonSchemaBuilder::Push(::Newtonsoft::Json::Schema::JsonSchema* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(), { "Push", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Schema::JsonSchema* Newtonsoft::Json::Schema::JsonSchemaBuilder::Pop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(), { "Pop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Schema::JsonSchema*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Schema::JsonSchema* Newtonsoft::Json::Schema::JsonSchemaBuilder::get_CurrentSchema() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(), { "get_CurrentSchema", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Schema::JsonSchema*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Schema::JsonSchema* Newtonsoft::Json::Schema::JsonSchemaBuilder::Read(::Newtonsoft::Json::JsonReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(), { "Read", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Schema::JsonSchema*>(this, ___internal_method, reader);
}
inline ::StringW Newtonsoft::Json::Schema::JsonSchemaBuilder::UnescapeReference(::StringW reference) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(), { "UnescapeReference", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, reference);
}
inline ::Newtonsoft::Json::Schema::JsonSchema* Newtonsoft::Json::Schema::JsonSchemaBuilder::ResolveReferences(::Newtonsoft::Json::Schema::JsonSchema* schema) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(), { "ResolveReferences", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Schema::JsonSchema*>(this, ___internal_method, schema);
}
inline ::Newtonsoft::Json::Schema::JsonSchema* Newtonsoft::Json::Schema::JsonSchemaBuilder::BuildSchema(::Newtonsoft::Json::Linq::JToken* token) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(), { "BuildSchema", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Schema::JsonSchema*>(this, ___internal_method, token);
}
inline void Newtonsoft::Json::Schema::JsonSchemaBuilder::ProcessSchemaProperties(::Newtonsoft::Json::Linq::JObject* schemaObject) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(),
                                                                                         { "ProcessSchemaProperties", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schemaObject);
}
inline void Newtonsoft::Json::Schema::JsonSchemaBuilder::ProcessExtends(::Newtonsoft::Json::Linq::JToken* token) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(), { "ProcessExtends", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline void Newtonsoft::Json::Schema::JsonSchemaBuilder::ProcessEnum(::Newtonsoft::Json::Linq::JToken* token) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(), { "ProcessEnum", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline void Newtonsoft::Json::Schema::JsonSchemaBuilder::ProcessAdditionalProperties(::Newtonsoft::Json::Linq::JToken* token) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(),
                                                                                         { "ProcessAdditionalProperties", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline void Newtonsoft::Json::Schema::JsonSchemaBuilder::ProcessAdditionalItems(::Newtonsoft::Json::Linq::JToken* token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(), { "ProcessAdditionalItems", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>*
Newtonsoft::Json::Schema::JsonSchemaBuilder::ProcessProperties(::Newtonsoft::Json::Linq::JToken* token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(), { "ProcessProperties", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>*>(this, ___internal_method, token);
}
inline void Newtonsoft::Json::Schema::JsonSchemaBuilder::ProcessItems(::Newtonsoft::Json::Linq::JToken* token) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(), { "ProcessItems", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline ::System::Nullable_1<::Newtonsoft::Json::Schema::JsonSchemaType> Newtonsoft::Json::Schema::JsonSchemaBuilder::ProcessType(::Newtonsoft::Json::Linq::JToken* token) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(), { "ProcessType", {}, { ::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Newtonsoft::Json::Schema::JsonSchemaType>>(this, ___internal_method, token);
}
inline ::Newtonsoft::Json::Schema::JsonSchemaType Newtonsoft::Json::Schema::JsonSchemaBuilder::MapType(::StringW type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(), { "MapType", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Schema::JsonSchemaType>(nullptr, ___internal_method, type);
}
inline ::StringW Newtonsoft::Json::Schema::JsonSchemaBuilder::MapType(::Newtonsoft::Json::Schema::JsonSchemaType type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(), { "MapType", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaType>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type);
}
inline ::Newtonsoft::Json::Schema::JsonSchemaBuilder* Newtonsoft::Json::Schema::JsonSchemaBuilder::New_ctor(::Newtonsoft::Json::Schema::JsonSchemaResolver* resolver) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Schema::JsonSchemaBuilder*>(resolver));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Schema::JsonSchemaBuilder::JsonSchemaBuilder() {}
