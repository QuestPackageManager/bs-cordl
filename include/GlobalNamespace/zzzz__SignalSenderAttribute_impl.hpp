#pragma once
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "GlobalNamespace/zzzz__SignalSenderAttribute_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SignalSenderAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SignalSenderAttribute::*)()>(&::GlobalNamespace::SignalSenderAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f5ae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SignalSenderAttribute*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::SignalSenderAttribute* GlobalNamespace::SignalSenderAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SignalSenderAttribute*>());
}
inline void GlobalNamespace::SignalSenderAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SignalSenderAttribute*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SignalSenderAttribute::SignalSenderAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
