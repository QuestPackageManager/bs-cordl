#pragma once
// IWYU pragma private; include "TMPro/ITextPreprocessor.hpp"
#include "TMPro/zzzz__ITextPreprocessor_def.hpp"
inline ::StringW TMPro::ITextPreprocessor::PreprocessText(::StringW text) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::ITextPreprocessor*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, text);
}
