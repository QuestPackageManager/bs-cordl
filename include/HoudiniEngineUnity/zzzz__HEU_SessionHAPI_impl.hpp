#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionHAPI_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionHAPI._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_SessionHAPI::*)()>(&::HoudiniEngineUnity::HEU_SessionHAPI::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2238358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionHAPI*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::HoudiniEngineUnity::HEU_SessionHAPI* HoudiniEngineUnity::HEU_SessionHAPI::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_SessionHAPI*>());
}
inline void HoudiniEngineUnity::HEU_SessionHAPI::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionHAPI*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_SessionHAPI::HEU_SessionHAPI() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
