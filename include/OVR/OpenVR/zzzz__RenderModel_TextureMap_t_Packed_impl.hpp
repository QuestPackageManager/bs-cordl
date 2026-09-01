#pragma once
// IWYU pragma private; include "OVR\OpenVR\RenderModel_TextureMap_t_Packed.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "OVR/OpenVR/zzzz__RenderModel_TextureMap_t_Packed_def.hpp"
#include "OVR/OpenVR/zzzz__RenderModel_TextureMap_t_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::RenderModel_TextureMap_t_Packed._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::RenderModel_TextureMap_t_Packed::*)(::OVR::OpenVR::RenderModel_TextureMap_t)>(
    &::OVR::OpenVR::RenderModel_TextureMap_t_Packed::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e48140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::RenderModel_TextureMap_t_Packed>(), { ".ctor", {}, { ::i2c::type_of<::OVR::OpenVR::RenderModel_TextureMap_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::RenderModel_TextureMap_t_Packed.Unpack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::RenderModel_TextureMap_t_Packed::*)(::by_ref<::OVR::OpenVR::RenderModel_TextureMap_t>)>(
    &::OVR::OpenVR::RenderModel_TextureMap_t_Packed::Unpack)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e48154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::RenderModel_TextureMap_t_Packed>(),
                                                                                           { "Unpack", {}, { ::i2c::type_of<::by_ref<::OVR::OpenVR::RenderModel_TextureMap_t>>() } })));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::RenderModel_TextureMap_t_Packed::_ctor(::OVR::OpenVR::RenderModel_TextureMap_t unpacked) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::RenderModel_TextureMap_t_Packed>(), { ".ctor", {}, { ::i2c::type_of<::OVR::OpenVR::RenderModel_TextureMap_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, unpacked);
}
inline void OVR::OpenVR::RenderModel_TextureMap_t_Packed::Unpack(::by_ref<::OVR::OpenVR::RenderModel_TextureMap_t> unpacked) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::RenderModel_TextureMap_t_Packed>(), { "Unpack", {}, { ::i2c::type_of<::by_ref<::OVR::OpenVR::RenderModel_TextureMap_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, unpacked);
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
