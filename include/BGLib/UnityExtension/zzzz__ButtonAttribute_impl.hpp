#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/ButtonAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "BGLib/UnityExtension/zzzz__ButtonAttribute_def.hpp"
//  Writing Method size for method: ::BGLib::UnityExtension::ButtonAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UnityExtension::ButtonAttribute::*)(::StringW)>(&::BGLib::UnityExtension::ButtonAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x33260ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::ButtonAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& BGLib::UnityExtension::ButtonAttribute::__cordl_internal_get_title() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___title;
}
constexpr ::StringW const& BGLib::UnityExtension::ButtonAttribute::__cordl_internal_get_title() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___title;
}
constexpr void BGLib::UnityExtension::ButtonAttribute::__cordl_internal_set_title(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___title = value;
}
inline void BGLib::UnityExtension::ButtonAttribute::_ctor(::StringW title) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::ButtonAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, title);
}
inline ::BGLib::UnityExtension::ButtonAttribute* BGLib::UnityExtension::ButtonAttribute::New_ctor(::StringW title) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::UnityExtension::ButtonAttribute*>(title));
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::ButtonAttribute::ButtonAttribute() {}
