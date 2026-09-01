#pragma once
// IWYU pragma private; include "UnityEngine\XR\OpenXR\API\UnityXRDisplay.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/OpenXR/API/zzzz__UnityXRDisplay_def.hpp"
#include "UnityEngine/XR/OpenXR/API/zzzz__UnityXRRenderTextureDesc_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::API::UnityXRDisplay.CreateTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureDesc, ::by_ref<uint32_t>)>(
    &::UnityEngine::XR::OpenXR::API::UnityXRDisplay::CreateTexture)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x69f6da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::API::UnityXRDisplay*>(),
                                                { "CreateTexture", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureDesc>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::OpenXR::API::UnityXRDisplay::CreateTexture(::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureDesc desc, ::by_ref<uint32_t> id) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::API::UnityXRDisplay*>(),
                                              { "CreateTexture", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::API::UnityXRRenderTextureDesc>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, desc, id);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::API::UnityXRDisplay::UnityXRDisplay() {}
