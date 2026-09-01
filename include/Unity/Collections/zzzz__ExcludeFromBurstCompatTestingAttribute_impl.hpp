#pragma once
// IWYU pragma private; include "Unity\Collections\ExcludeFromBurstCompatTestingAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Collections/zzzz__ExcludeFromBurstCompatTestingAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Collections::ExcludeFromBurstCompatTestingAttribute.get_Reason
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Collections::ExcludeFromBurstCompatTestingAttribute::*)()>(
    &::Unity::Collections::ExcludeFromBurstCompatTestingAttribute::get_Reason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64c205c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ExcludeFromBurstCompatTestingAttribute*>(), { "get_Reason", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::ExcludeFromBurstCompatTestingAttribute.set_Reason
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::ExcludeFromBurstCompatTestingAttribute::*)(::StringW)>(
    &::Unity::Collections::ExcludeFromBurstCompatTestingAttribute::set_Reason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64c2064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ExcludeFromBurstCompatTestingAttribute*>(), { "set_Reason", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::ExcludeFromBurstCompatTestingAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::ExcludeFromBurstCompatTestingAttribute::*)(::StringW)>(
    &::Unity::Collections::ExcludeFromBurstCompatTestingAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64c206c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ExcludeFromBurstCompatTestingAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& Unity::Collections::ExcludeFromBurstCompatTestingAttribute::__cordl_internal_get__Reason_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Reason_k__BackingField;
}
constexpr ::StringW const& Unity::Collections::ExcludeFromBurstCompatTestingAttribute::__cordl_internal_get__Reason_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Reason_k__BackingField;
}
constexpr void Unity::Collections::ExcludeFromBurstCompatTestingAttribute::__cordl_internal_set__Reason_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Reason_k__BackingField = value;
}
inline ::StringW Unity::Collections::ExcludeFromBurstCompatTestingAttribute::get_Reason() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ExcludeFromBurstCompatTestingAttribute*>(), { "get_Reason", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Unity::Collections::ExcludeFromBurstCompatTestingAttribute::set_Reason(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ExcludeFromBurstCompatTestingAttribute*>(), { "set_Reason", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::Collections::ExcludeFromBurstCompatTestingAttribute::_ctor(::StringW _reason) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ExcludeFromBurstCompatTestingAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _reason);
}
inline ::Unity::Collections::ExcludeFromBurstCompatTestingAttribute* Unity::Collections::ExcludeFromBurstCompatTestingAttribute::New_ctor(::StringW _reason) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Collections::ExcludeFromBurstCompatTestingAttribute*>(_reason));
}
// Ctor Parameters []
constexpr ::Unity::Collections::ExcludeFromBurstCompatTestingAttribute::ExcludeFromBurstCompatTestingAttribute() {}
