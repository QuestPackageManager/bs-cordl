#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRKtxTexture.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRKtxTexture_def.hpp"
#include "GlobalNamespace/zzzz__OVRTextureData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRKtxTexture.Load
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, ::by_ref<::GlobalNamespace::OVRTextureData>)>(&::GlobalNamespace::OVRKtxTexture::Load)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5e60508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRKtxTexture*>(),
                                                             { "Load", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRTextureData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRKtxTexture._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRKtxTexture::*)()>(&::GlobalNamespace::OVRKtxTexture::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e6076c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRKtxTexture*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::OVRKtxTexture::Load(::ArrayW<uint8_t> data, ::by_ref<::GlobalNamespace::OVRTextureData> ktxData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRKtxTexture*>(),
                                                           { "Load", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRTextureData>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, data, ktxData);
}
inline void GlobalNamespace::OVRKtxTexture::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRKtxTexture*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRKtxTexture* GlobalNamespace::OVRKtxTexture::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRKtxTexture*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRKtxTexture::OVRKtxTexture() {}
