#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\Shapes\ShapeAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__ShapeAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::ShapeAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Shapes::ShapeAttribute::*)(::StringW)>(&::UnityEngine::ProBuilder::Shapes::ShapeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6708bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ShapeAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::ProBuilder::Shapes::ShapeAttribute::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& UnityEngine::ProBuilder::Shapes::ShapeAttribute::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void UnityEngine::ProBuilder::Shapes::ShapeAttribute::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
inline void UnityEngine::ProBuilder::Shapes::ShapeAttribute::_ctor(::StringW n) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Shapes::ShapeAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, n);
}
inline ::UnityEngine::ProBuilder::Shapes::ShapeAttribute* UnityEngine::ProBuilder::Shapes::ShapeAttribute::New_ctor(::StringW n) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Shapes::ShapeAttribute*>(n));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Shapes::ShapeAttribute::ShapeAttribute() {}
