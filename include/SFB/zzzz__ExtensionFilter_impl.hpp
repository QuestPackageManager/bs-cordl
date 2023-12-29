#pragma once
#include "SFB/zzzz__ExtensionFilter_def.hpp"
//  Writing Method size for method: ::SFB::ExtensionFilter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::SFB::ExtensionFilter::*)(::StringW, ::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::SFB::ExtensionFilter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e6e38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::SFB::ExtensionFilter>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
inline void SFB::ExtensionFilter::_ctor(::StringW filterName, ::ArrayW<::StringW, ::Array<::StringW>*> filterExtensions) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::SFB::ExtensionFilter>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, filterName, filterExtensions);
}
// Ctor Parameters [CppParam { name: "_name", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_extensions", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers:
// "", def_value: Some("nullptr") }]
constexpr ::SFB::ExtensionFilter::ExtensionFilter(::StringW _name, ::ArrayW<::StringW, ::Array<::StringW>*> _extensions) noexcept {
  this->_name = _name;
  this->_extensions = _extensions;
}
// Ctor Parameters []
constexpr ::SFB::ExtensionFilter::ExtensionFilter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
