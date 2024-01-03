#pragma once
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_impl.hpp"
#include "Oculus/Platform/Models/zzzz__UserCapability_impl.hpp"
#include "Oculus/Platform/Models/zzzz__UserCapabilityList_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::UserCapabilityList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::UserCapabilityList::*)(void*)>(
    &::Oculus::Platform::Models::UserCapabilityList::_ctor)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x27090e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::UserCapabilityList*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Models::UserCapabilityList* Oculus::Platform::Models::UserCapabilityList::New_ctor(void* a) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::UserCapabilityList*>(a));
}
inline void Oculus::Platform::Models::UserCapabilityList::_ctor(void* a) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::UserCapabilityList*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, a);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::UserCapabilityList::UserCapabilityList() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
