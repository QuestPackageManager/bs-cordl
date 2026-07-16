#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/MenuCategoryAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Timeline/zzzz__MenuCategoryAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::MenuCategoryAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::MenuCategoryAttribute::*)(::StringW)>(&::UnityEngine::Timeline::MenuCategoryAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x69c5c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::MenuCategoryAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Timeline::MenuCategoryAttribute::__cordl_internal_get_category() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___category;
}
constexpr ::StringW const& UnityEngine::Timeline::MenuCategoryAttribute::__cordl_internal_get_category() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___category;
}
constexpr void UnityEngine::Timeline::MenuCategoryAttribute::__cordl_internal_set_category(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___category = value;
}
inline void UnityEngine::Timeline::MenuCategoryAttribute::_ctor(::StringW category) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::MenuCategoryAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, category);
}
inline ::UnityEngine::Timeline::MenuCategoryAttribute* UnityEngine::Timeline::MenuCategoryAttribute::New_ctor(::StringW category) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::MenuCategoryAttribute*>(category));
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::MenuCategoryAttribute::MenuCategoryAttribute() {}
