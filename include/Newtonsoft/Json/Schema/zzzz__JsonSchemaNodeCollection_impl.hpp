#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Schema\JsonSchemaNodeCollection.hpp"
#include "System/Collections/ObjectModel/zzzz__KeyedCollection_2_impl.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaNodeCollection_def.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaNode_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaNodeCollection.GetKeyForItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Schema::JsonSchemaNodeCollection::*)(::Newtonsoft::Json::Schema::JsonSchemaNode*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaNodeCollection::GetKeyForItem)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5d67360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNodeCollection*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNodeCollection*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaNodeCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaNodeCollection::*)()>(&::Newtonsoft::Json::Schema::JsonSchemaNodeCollection::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5d65798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNodeCollection*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW Newtonsoft::Json::Schema::JsonSchemaNodeCollection::GetKeyForItem(::Newtonsoft::Json::Schema::JsonSchemaNode* item) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNodeCollection*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, item);
}
inline void Newtonsoft::Json::Schema::JsonSchemaNodeCollection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNodeCollection*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Schema::JsonSchemaNodeCollection* Newtonsoft::Json::Schema::JsonSchemaNodeCollection::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Schema::JsonSchemaNodeCollection*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Schema::JsonSchemaNodeCollection::JsonSchemaNodeCollection() {}
