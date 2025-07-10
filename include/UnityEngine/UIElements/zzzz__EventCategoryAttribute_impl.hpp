#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventCategoryAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventCategory_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventCategoryAttribute_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCategory_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::EventCategoryAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventCategoryAttribute::*)(::UnityEngine::UIElements::EventCategory)>(
    &::UnityEngine::UIElements::EventCategoryAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x499e908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCategoryAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventCategory>::get() })));
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
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCategoryAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventCategory>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, category);
}
inline ::UnityEngine::UIElements::EventCategoryAttribute* UnityEngine::UIElements::EventCategoryAttribute::New_ctor(::UnityEngine::UIElements::EventCategory category) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::EventCategoryAttribute*>(category));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EventCategoryAttribute::EventCategoryAttribute() {}
