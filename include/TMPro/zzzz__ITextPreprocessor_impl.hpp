#pragma once
#include "TMPro/zzzz__ITextPreprocessor_def.hpp"
//  Writing Method size for method: ::TMPro::ITextPreprocessor.PreprocessText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::TMPro::ITextPreprocessor::*)(::StringW)>(&::TMPro::ITextPreprocessor::PreprocessText)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ITextPreprocessor*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ITextPreprocessor*>::get(), 0));
    return ___internal_method;
  }
};
inline ::StringW TMPro::ITextPreprocessor::PreprocessText(::StringW text) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ITextPreprocessor*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, text);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
