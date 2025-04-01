#pragma once
// IWYU pragma private; include "Unity/XR/GoogleVr/DaydreamHMD.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRHMD_impl.hpp"
#include "Unity/XR/GoogleVr/zzzz__DaydreamHMD_def.hpp"
//  Writing Method size for method: ::Unity::XR::GoogleVr::DaydreamHMD._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::GoogleVr::DaydreamHMD::*)()>(&::Unity::XR::GoogleVr::DaydreamHMD::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4537980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::GoogleVr::DaydreamHMD*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::XR::GoogleVr::DaydreamHMD::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::GoogleVr::DaydreamHMD*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::XR::GoogleVr::DaydreamHMD* Unity::XR::GoogleVr::DaydreamHMD::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::XR::GoogleVr::DaydreamHMD*>());
}
// Ctor Parameters []
constexpr ::Unity::XR::GoogleVr::DaydreamHMD::DaydreamHMD() {}
