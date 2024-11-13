#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/MenuCategoryAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Timeline/zzzz__MenuCategoryAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::MenuCategoryAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::MenuCategoryAttribute::*)(::StringW)>(
    &::UnityEngine::Timeline::MenuCategoryAttribute::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x47c8030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::MenuCategoryAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___category)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Timeline::MenuCategoryAttribute* UnityEngine::Timeline::MenuCategoryAttribute::New_ctor(::StringW category) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Timeline::MenuCategoryAttribute*>(category));
}
inline void UnityEngine::Timeline::MenuCategoryAttribute::_ctor(::StringW category) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::MenuCategoryAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, category);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::MenuCategoryAttribute::MenuCategoryAttribute() {}
