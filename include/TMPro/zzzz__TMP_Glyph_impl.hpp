#pragma once
#include "TMPro/zzzz__TMP_TextElement_Legacy_impl.hpp"
#include "TMPro/zzzz__TMP_Glyph_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_Glyph.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_Glyph* (*)(::TMPro::TMP_Glyph*)>(&::TMPro::TMP_Glyph::Clone)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2a8b43c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Glyph*>::get(), "Clone", std::vector<Il2CppClass*>{},
                                                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Glyph*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Glyph._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Glyph::*)()>(&::TMPro::TMP_Glyph::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a8b4b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Glyph*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::TMPro::TMP_Glyph* TMPro::TMP_Glyph::Clone(::TMPro::TMP_Glyph* source) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Glyph*>::get(), "Clone", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Glyph*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_Glyph*, false>(nullptr, ___internal_method, source);
}
inline ::TMPro::TMP_Glyph* TMPro::TMP_Glyph::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::TMPro::TMP_Glyph*>());
}
inline void TMPro::TMP_Glyph::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Glyph*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::TMPro::TMP_Glyph::TMP_Glyph() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
