#pragma once
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "BGLib/UnityExtension/zzzz__ButtonAttribute_def.hpp"
//  Writing Method size for method: ::BGLib::UnityExtension::ButtonAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::UnityExtension::ButtonAttribute::*)(::StringW)>(&::BGLib::UnityExtension::ButtonAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe28e18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::ButtonAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& BGLib::UnityExtension::ButtonAttribute::__get_title() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___title;
}
constexpr ::StringW const& BGLib::UnityExtension::ButtonAttribute::__get_title() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___title;
}
constexpr void BGLib::UnityExtension::ButtonAttribute::__set_title(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___title)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
/// @param title: ::StringW (default: nullptr)
inline ::BGLib::UnityExtension::ButtonAttribute* BGLib::UnityExtension::ButtonAttribute::New_ctor(::StringW title) {
  return THROW_UNLESS(::il2cpp_utils::New<::BGLib::UnityExtension::ButtonAttribute*>(title));
}
/// @param title: ::StringW (default: nullptr)
inline void BGLib::UnityExtension::ButtonAttribute::_ctor(::StringW title) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::ButtonAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, title);
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::ButtonAttribute::ButtonAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
