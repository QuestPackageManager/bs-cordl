#pragma once
// IWYU pragma private; include "OVR/OpenVR/RenderModel_TextureMap_t_Packed.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "OVR/OpenVR/zzzz__RenderModel_TextureMap_t_Packed_def.hpp"
#include "OVR/OpenVR/zzzz__RenderModel_TextureMap_t_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::RenderModel_TextureMap_t_Packed._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::RenderModel_TextureMap_t_Packed::*)(::OVR::OpenVR::RenderModel_TextureMap_t)>(
    &::OVR::OpenVR::RenderModel_TextureMap_t_Packed::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4001108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::RenderModel_TextureMap_t_Packed>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::RenderModel_TextureMap_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::RenderModel_TextureMap_t_Packed.Unpack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::RenderModel_TextureMap_t_Packed::*)(ByRef<::OVR::OpenVR::RenderModel_TextureMap_t>)>(
    &::OVR::OpenVR::RenderModel_TextureMap_t_Packed::Unpack)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x400111c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::RenderModel_TextureMap_t_Packed>::get(), "Unpack", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::RenderModel_TextureMap_t>>::get() })));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::RenderModel_TextureMap_t_Packed::_ctor(::OVR::OpenVR::RenderModel_TextureMap_t unpacked) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::RenderModel_TextureMap_t_Packed>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::RenderModel_TextureMap_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unpacked);
}
inline void OVR::OpenVR::RenderModel_TextureMap_t_Packed::Unpack(ByRef<::OVR::OpenVR::RenderModel_TextureMap_t> unpacked) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::RenderModel_TextureMap_t_Packed>::get(), "Unpack", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::RenderModel_TextureMap_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unpacked);
}
// Ctor Parameters [CppParam { name: "unWidth", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unHeight", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "rubTextureMapData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::RenderModel_TextureMap_t_Packed::RenderModel_TextureMap_t_Packed(uint16_t unWidth, uint16_t unHeight, ::System::IntPtr rubTextureMapData) noexcept {
  this->unWidth = unWidth;
  this->unHeight = unHeight;
  this->rubTextureMapData = rubTextureMapData;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::RenderModel_TextureMap_t_Packed::RenderModel_TextureMap_t_Packed() {}
