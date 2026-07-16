#pragma once
// IWYU pragma private; include "System/Xml/Schema/KSStruct.hpp"
#include "System/Xml/Schema/zzzz__LocatedActiveAxis_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__KSStruct_def.hpp"
#include "System/Xml/Schema/zzzz__KeySequence_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::KSStruct._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::KSStruct::*)(::System::Xml::Schema::KeySequence*, int32_t)>(&::System::Xml::Schema::KSStruct::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x63169e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::KSStruct*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::KeySequence*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Xml::Schema::KSStruct::__cordl_internal_get_depth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr int32_t const& System::Xml::Schema::KSStruct::__cordl_internal_get_depth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr void System::Xml::Schema::KSStruct::__cordl_internal_set_depth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depth = value;
}
constexpr ::System::Xml::Schema::KeySequence*& System::Xml::Schema::KSStruct::__cordl_internal_get_ks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ks;
}
constexpr ::System::Xml::Schema::KeySequence* const& System::Xml::Schema::KSStruct::__cordl_internal_get_ks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ks;
}
constexpr void System::Xml::Schema::KSStruct::__cordl_internal_set_ks(::System::Xml::Schema::KeySequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ks = value;
}
constexpr ::ArrayW<::System::Xml::Schema::LocatedActiveAxis*>& System::Xml::Schema::KSStruct::__cordl_internal_get_fields() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fields;
}
constexpr ::ArrayW<::System::Xml::Schema::LocatedActiveAxis*> const& System::Xml::Schema::KSStruct::__cordl_internal_get_fields() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fields;
}
constexpr void System::Xml::Schema::KSStruct::__cordl_internal_set_fields(::ArrayW<::System::Xml::Schema::LocatedActiveAxis*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fields = value;
}
inline void System::Xml::Schema::KSStruct::_ctor(::System::Xml::Schema::KeySequence* ks, int32_t dim) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::KSStruct*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::KeySequence*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ks, dim);
}
inline ::System::Xml::Schema::KSStruct* System::Xml::Schema::KSStruct::New_ctor(::System::Xml::Schema::KeySequence* ks, int32_t dim) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::KSStruct*>(ks, dim));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::KSStruct::KSStruct() {}
