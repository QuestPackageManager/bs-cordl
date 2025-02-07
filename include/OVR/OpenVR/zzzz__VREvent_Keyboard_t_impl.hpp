#pragma once
// IWYU pragma private; include "OVR/OpenVR/VREvent_Keyboard_t.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Keyboard_t_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::VREvent_Keyboard_t.get_cNewInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OVR::OpenVR::VREvent_Keyboard_t::*)()>(&::OVR::OpenVR::VREvent_Keyboard_t::get_cNewInput)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x407b5d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::VREvent_Keyboard_t>::get(), "get_cNewInput",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::StringW OVR::OpenVR::VREvent_Keyboard_t::get_cNewInput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::VREvent_Keyboard_t>::get(), "get_cNewInput",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "cNewInput0", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cNewInput1", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "cNewInput2", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cNewInput3", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cNewInput4", ty:
// "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cNewInput5", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cNewInput6", ty: "uint8_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "cNewInput7", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uUserValue", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_Keyboard_t::VREvent_Keyboard_t(uint8_t cNewInput0, uint8_t cNewInput1, uint8_t cNewInput2, uint8_t cNewInput3, uint8_t cNewInput4, uint8_t cNewInput5,
                                                                uint8_t cNewInput6, uint8_t cNewInput7, uint64_t uUserValue) noexcept {
  this->cNewInput0 = cNewInput0;
  this->cNewInput1 = cNewInput1;
  this->cNewInput2 = cNewInput2;
  this->cNewInput3 = cNewInput3;
  this->cNewInput4 = cNewInput4;
  this->cNewInput5 = cNewInput5;
  this->cNewInput6 = cNewInput6;
  this->cNewInput7 = cNewInput7;
  this->uUserValue = uUserValue;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::VREvent_Keyboard_t::VREvent_Keyboard_t() {}
