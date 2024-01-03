#pragma once
#include "System/Globalization/zzzz__Bootstring_impl.hpp"
#include "System/Globalization/zzzz__Punycode_def.hpp"
//  Writing Method size for method: ::System::Globalization::Punycode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::Punycode::*)()>(&::System::Globalization::Punycode::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2577d4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::Punycode*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Globalization::Punycode* System::Globalization::Punycode::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Globalization::Punycode*>());
}
inline void System::Globalization::Punycode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::Punycode*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Globalization::Punycode::Punycode() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
