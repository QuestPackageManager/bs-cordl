#pragma once
// IWYU pragma private; include "System/Data/OperatorInfo.hpp"
#include "System/Data/zzzz__Nodes_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__OperatorInfo_def.hpp"
#include "System/Data/zzzz__Nodes_def.hpp"
//  Writing Method size for method: ::System::Data::OperatorInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::OperatorInfo::*)(::System::Data::Nodes, int32_t, int32_t)>(&::System::Data::OperatorInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x603b8cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::OperatorInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::Nodes>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Data::Nodes& System::Data::OperatorInfo::__cordl_internal_get__type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr ::System::Data::Nodes const& System::Data::OperatorInfo::__cordl_internal_get__type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr void System::Data::OperatorInfo::__cordl_internal_set__type(::System::Data::Nodes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____type = value;
}
constexpr int32_t& System::Data::OperatorInfo::__cordl_internal_get__op() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____op;
}
constexpr int32_t const& System::Data::OperatorInfo::__cordl_internal_get__op() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____op;
}
constexpr void System::Data::OperatorInfo::__cordl_internal_set__op(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____op = value;
}
constexpr int32_t& System::Data::OperatorInfo::__cordl_internal_get__priority() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____priority;
}
constexpr int32_t const& System::Data::OperatorInfo::__cordl_internal_get__priority() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____priority;
}
constexpr void System::Data::OperatorInfo::__cordl_internal_set__priority(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____priority = value;
}
inline void System::Data::OperatorInfo::_ctor(::System::Data::Nodes type, int32_t op, int32_t pri) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::OperatorInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::Nodes>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, op, pri);
}
inline ::System::Data::OperatorInfo* System::Data::OperatorInfo::New_ctor(::System::Data::Nodes type, int32_t op, int32_t pri) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::OperatorInfo*>(type, op, pri));
}
// Ctor Parameters []
constexpr ::System::Data::OperatorInfo::OperatorInfo() {}
