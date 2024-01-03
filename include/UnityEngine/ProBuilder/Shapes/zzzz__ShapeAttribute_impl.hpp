#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__ShapeAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::ShapeAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Shapes::ShapeAttribute::*)(::StringW)>(
    &::UnityEngine::ProBuilder::Shapes::ShapeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b8dc40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::ShapeAttribute*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::ProBuilder::Shapes::ShapeAttribute::__get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& UnityEngine::ProBuilder::Shapes::ShapeAttribute::__get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void UnityEngine::ProBuilder::Shapes::ShapeAttribute::__set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::ProBuilder::Shapes::ShapeAttribute* UnityEngine::ProBuilder::Shapes::ShapeAttribute::New_ctor(::StringW n) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::Shapes::ShapeAttribute*>(n));
}
inline void UnityEngine::ProBuilder::Shapes::ShapeAttribute::_ctor(::StringW n) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::ShapeAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, n);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Shapes::ShapeAttribute::ShapeAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
