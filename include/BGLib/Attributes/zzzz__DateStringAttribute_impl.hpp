#pragma once
// IWYU pragma private; include "BGLib\Attributes\DateStringAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "BGLib/Attributes/zzzz__DateStringAttribute_def.hpp"
//  Writing Method size for method: ::BGLib::Attributes::DateStringAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Attributes::DateStringAttribute::*)(bool)>(&::BGLib::Attributes::DateStringAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x330b6a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Attributes::DateStringAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr bool& BGLib::Attributes::DateStringAttribute::__cordl_internal_get_allowEmpty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowEmpty;
}
constexpr bool const& BGLib::Attributes::DateStringAttribute::__cordl_internal_get_allowEmpty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowEmpty;
}
constexpr void BGLib::Attributes::DateStringAttribute::__cordl_internal_set_allowEmpty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allowEmpty = value;
}
inline void BGLib::Attributes::DateStringAttribute::_ctor(bool allowEmpty) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Attributes::DateStringAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allowEmpty);
}
inline ::BGLib::Attributes::DateStringAttribute* BGLib::Attributes::DateStringAttribute::New_ctor(bool allowEmpty) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::Attributes::DateStringAttribute*>(allowEmpty));
}
// Ctor Parameters []
constexpr ::BGLib::Attributes::DateStringAttribute::DateStringAttribute() {}
