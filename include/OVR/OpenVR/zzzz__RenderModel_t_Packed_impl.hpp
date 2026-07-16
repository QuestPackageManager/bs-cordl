#pragma once
// IWYU pragma private; include "OVR/OpenVR/RenderModel_t_Packed.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "OVR/OpenVR/zzzz__RenderModel_t_Packed_def.hpp"
#include "OVR/OpenVR/zzzz__RenderModel_t_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::RenderModel_t_Packed._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::RenderModel_t_Packed::*)(::OVR::OpenVR::RenderModel_t)>(&::OVR::OpenVR::RenderModel_t_Packed::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e45f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::RenderModel_t_Packed>(), { ".ctor", {}, { ::i2c::type_of<::OVR::OpenVR::RenderModel_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::RenderModel_t_Packed.Unpack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::RenderModel_t_Packed::*)(::by_ref<::OVR::OpenVR::RenderModel_t>)>(&::OVR::OpenVR::RenderModel_t_Packed::Unpack)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e45f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::RenderModel_t_Packed>(), { "Unpack", {}, { ::i2c::type_of<::by_ref<::OVR::OpenVR::RenderModel_t>>() } })));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::RenderModel_t_Packed::_ctor(::OVR::OpenVR::RenderModel_t unpacked) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::RenderModel_t_Packed>(), { ".ctor", {}, { ::i2c::type_of<::OVR::OpenVR::RenderModel_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, unpacked);
}
inline void OVR::OpenVR::RenderModel_t_Packed::Unpack(::by_ref<::OVR::OpenVR::RenderModel_t> unpacked) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::RenderModel_t_Packed>(), { "Unpack", {}, { ::i2c::type_of<::by_ref<::OVR::OpenVR::RenderModel_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, unpacked);
}
// Ctor Parameters [CppParam { name: "rVertexData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "unVertexCount", ty: "uint32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "rIndexData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "unTriangleCount", ty: "uint32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "diffuseTextureId", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::RenderModel_t_Packed::RenderModel_t_Packed(::System::IntPtr rVertexData, uint32_t unVertexCount, ::System::IntPtr rIndexData, uint32_t unTriangleCount,
                                                                    int32_t diffuseTextureId) noexcept {
  this->rVertexData = rVertexData;
  this->unVertexCount = unVertexCount;
  this->rIndexData = rIndexData;
  this->unTriangleCount = unTriangleCount;
  this->diffuseTextureId = diffuseTextureId;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::RenderModel_t_Packed::RenderModel_t_Packed() {}
