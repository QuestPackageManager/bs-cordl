#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__IntToRoman_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IntToRoman.Roman
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int32_t)>(&::GlobalNamespace::IntToRoman::Roman)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x1f972e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IntToRoman*>::get(), "Roman", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::IntToRoman::Roman(int32_t number) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IntToRoman*>::get(), "Roman", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, number);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IntToRoman::IntToRoman() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
