#pragma once
#include "HMUI/zzzz__ImageWithHint_impl.hpp"
#include "HMUI/zzzz__UIItemsList_1_impl.hpp"
#include "GlobalNamespace/zzzz__ImageWithHintItemsList_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ImageWithHintItemsList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ImageWithHintItemsList::*)()>(&::GlobalNamespace::ImageWithHintItemsList::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x227a9d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImageWithHintItemsList*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::ImageWithHintItemsList* GlobalNamespace::ImageWithHintItemsList::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ImageWithHintItemsList*>());
}
inline void GlobalNamespace::ImageWithHintItemsList::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImageWithHintItemsList*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ImageWithHintItemsList::ImageWithHintItemsList() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
