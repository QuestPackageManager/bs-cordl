#pragma once
// IWYU pragma private; include "Meta\XR\BuildingBlocks\VariantCheckpoint.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__VariantCheckpoint_def.hpp"
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::VariantCheckpoint.get_MemberName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::BuildingBlocks::VariantCheckpoint::*)()>(&::Meta::XR::BuildingBlocks::VariantCheckpoint::get_MemberName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a3c454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::VariantCheckpoint*>(), { "get_MemberName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::VariantCheckpoint.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::BuildingBlocks::VariantCheckpoint::*)()>(&::Meta::XR::BuildingBlocks::VariantCheckpoint::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a3c45c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::VariantCheckpoint*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::VariantCheckpoint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::VariantCheckpoint::*)(::StringW, ::StringW)>(&::Meta::XR::BuildingBlocks::VariantCheckpoint::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5a3c464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::VariantCheckpoint*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::XR::BuildingBlocks::VariantCheckpoint::__cordl_internal_get__memberName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____memberName;
}
constexpr ::StringW const& Meta::XR::BuildingBlocks::VariantCheckpoint::__cordl_internal_get__memberName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____memberName;
}
constexpr void Meta::XR::BuildingBlocks::VariantCheckpoint::__cordl_internal_set__memberName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____memberName = value;
}
constexpr ::StringW& Meta::XR::BuildingBlocks::VariantCheckpoint::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr ::StringW const& Meta::XR::BuildingBlocks::VariantCheckpoint::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr void Meta::XR::BuildingBlocks::VariantCheckpoint::__cordl_internal_set__value(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____value = value;
}
inline ::StringW Meta::XR::BuildingBlocks::VariantCheckpoint::get_MemberName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::VariantCheckpoint*>(), { "get_MemberName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Meta::XR::BuildingBlocks::VariantCheckpoint::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::VariantCheckpoint*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::VariantCheckpoint::_ctor(::StringW memberName, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::VariantCheckpoint*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memberName, value);
}
inline ::Meta::XR::BuildingBlocks::VariantCheckpoint* Meta::XR::BuildingBlocks::VariantCheckpoint::New_ctor(::StringW memberName, ::StringW value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::BuildingBlocks::VariantCheckpoint*>(memberName, value));
}
// Ctor Parameters []
constexpr ::Meta::XR::BuildingBlocks::VariantCheckpoint::VariantCheckpoint() {}
