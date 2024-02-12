#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "OVR/OpenVR/zzzz__RenderModel_t_Packed_def.hpp"
#include "OVR/OpenVR/zzzz__RenderModel_t_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::RenderModel_t_Packed._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::RenderModel_t_Packed::*)(::OVR::OpenVR::RenderModel_t)>(
    &::OVR::OpenVR::RenderModel_t_Packed::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2803f6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::RenderModel_t_Packed>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::RenderModel_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::RenderModel_t_Packed.Unpack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::RenderModel_t_Packed::*)(ByRef<::OVR::OpenVR::RenderModel_t>)>(
    &::OVR::OpenVR::RenderModel_t_Packed::Unpack)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2803f98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::RenderModel_t_Packed>::get(), "Unpack", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::RenderModel_t>>::get() })));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::RenderModel_t_Packed::_ctor(::OVR::OpenVR::RenderModel_t unpacked) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::RenderModel_t_Packed>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::RenderModel_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unpacked);
}
inline void OVR::OpenVR::RenderModel_t_Packed::Unpack(ByRef<::OVR::OpenVR::RenderModel_t> unpacked) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::RenderModel_t_Packed>::get(), "Unpack", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::RenderModel_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unpacked);
}
// Ctor Parameters [CppParam { name: "rVertexData", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "unVertexCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "rIndexData", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "unTriangleCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "diffuseTextureId", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::RenderModel_t_Packed::RenderModel_t_Packed(void* rVertexData, uint32_t unVertexCount, void* rIndexData, uint32_t unTriangleCount, int32_t diffuseTextureId) noexcept {
  this->rVertexData = rVertexData;
  this->unVertexCount = unVertexCount;
  this->rIndexData = rIndexData;
  this->unTriangleCount = unTriangleCount;
  this->diffuseTextureId = diffuseTextureId;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::RenderModel_t_Packed::RenderModel_t_Packed() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
