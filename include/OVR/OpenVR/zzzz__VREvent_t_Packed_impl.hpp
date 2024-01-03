#pragma once
#include "OVR/OpenVR/zzzz__VREvent_Data_t_impl.hpp"
#include "OVR/OpenVR/zzzz__VREvent_t_Packed_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Data_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_t_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::VREvent_t_Packed._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::VREvent_t_Packed::*)(::OVR::OpenVR::VREvent_t)>(&::OVR::OpenVR::VREvent_t_Packed::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x27f674c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::VREvent_t_Packed>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::VREvent_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::VREvent_t_Packed.Unpack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::VREvent_t_Packed::*)(ByRef<::OVR::OpenVR::VREvent_t>)>(
    &::OVR::OpenVR::VREvent_t_Packed::Unpack)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27f10c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::VREvent_t_Packed>::get(), "Unpack", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VREvent_t>>::get() })));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::VREvent_t_Packed::_ctor(::OVR::OpenVR::VREvent_t unpacked) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::VREvent_t_Packed>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::VREvent_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unpacked);
}
inline void OVR::OpenVR::VREvent_t_Packed::Unpack(ByRef<::OVR::OpenVR::VREvent_t> unpacked) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::VREvent_t_Packed>::get(), "Unpack", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VREvent_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unpacked);
}
// Ctor Parameters [CppParam { name: "eventType", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "trackedDeviceIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "eventAgeSeconds", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "data", ty: "::OVR::OpenVR::VREvent_Data_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_t_Packed::VREvent_t_Packed(uint32_t eventType, uint32_t trackedDeviceIndex, float_t eventAgeSeconds, ::OVR::OpenVR::VREvent_Data_t data) noexcept {
  this->eventType = eventType;
  this->trackedDeviceIndex = trackedDeviceIndex;
  this->eventAgeSeconds = eventAgeSeconds;
  this->data = data;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::VREvent_t_Packed::VREvent_t_Packed() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
