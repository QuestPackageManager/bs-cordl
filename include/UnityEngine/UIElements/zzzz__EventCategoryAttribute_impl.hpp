#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventCategoryAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventCategory_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventCategoryAttribute_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCategory_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::EventCategoryAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::EventCategoryAttribute::*)(::UnityEngine::UIElements::EventCategory)>(
    &::UnityEngine::UIElements::EventCategoryAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cc79b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCategoryAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventCategory>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::EventCategory& UnityEngine::UIElements::EventCategoryAttribute::__cordl_internal_get_category() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___category;
}
constexpr ::UnityEngine::UIElements::EventCategory const& UnityEngine::UIElements::EventCategoryAttribute::__cordl_internal_get_category() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___category;
}
constexpr void UnityEngine::UIElements::EventCategoryAttribute::__cordl_internal_set_category(::UnityEngine::UIElements::EventCategory value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___category = value;
}
inline void UnityEngine::UIElements::EventCategoryAttribute::_ctor(::UnityEngine::UIElements::EventCategory category) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCategoryAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventCategory>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, category);
}
inline ::UnityEngine::UIElements::EventCategoryAttribute* UnityEngine::UIElements::EventCategoryAttribute::New_ctor(::UnityEngine::UIElements::EventCategory category) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::EventCategoryAttribute*>(category));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EventCategoryAttribute::EventCategoryAttribute() {}
