#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz____ComObject_def.hpp"
//  Writing Method size for method: ::System::__ComObject._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::__ComObject::*)()>(&::System::__ComObject::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x260993c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__ComObject*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::__ComObject* System::__ComObject::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::__ComObject*>());
}
inline void System::__ComObject::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__ComObject*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::__ComObject::__ComObject() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
