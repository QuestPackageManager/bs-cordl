#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/XRSystemUniversal.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XRSystemUniversal_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XRPassUniversal_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRSystemUniversal.BeginLateLatching
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::Universal::XRPassUniversal*)>(
    &::UnityEngine::Rendering::Universal::XRSystemUniversal::BeginLateLatching)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6730824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystemUniversal*>::get(), "BeginLateLatching", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::XRPassUniversal*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRSystemUniversal.EndLateLatching
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::Universal::XRPassUniversal*)>(
    &::UnityEngine::Rendering::Universal::XRSystemUniversal::EndLateLatching)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6730900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystemUniversal*>::get(), "EndLateLatching", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::XRPassUniversal*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRSystemUniversal.UnmarkShaderProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::XRPassUniversal*)>(
    &::UnityEngine::Rendering::Universal::XRSystemUniversal::UnmarkShaderProperties)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x67309c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystemUniversal*>::get(), "UnmarkShaderProperties", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::XRPassUniversal*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRSystemUniversal.MarkShaderProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::XRPassUniversal*,
                                                                                           bool)>(&::UnityEngine::Rendering::Universal::XRSystemUniversal::MarkShaderProperties)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x6730a54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystemUniversal*>::get(), "MarkShaderProperties", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::XRPassUniversal*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::XRSystemUniversal::setStaticF_s_projMatrix(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, "s_projMatrix",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystemUniversal*>::get>(
      std::forward<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>(value));
}
inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> UnityEngine::Rendering::Universal::XRSystemUniversal::getStaticF_s_projMatrix() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, "s_projMatrix",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystemUniversal*>::get>();
}
inline void UnityEngine::Rendering::Universal::XRSystemUniversal::BeginLateLatching(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::Universal::XRPassUniversal* xrPass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystemUniversal*>::get(), "BeginLateLatching", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::XRPassUniversal*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, camera, xrPass);
}
inline void UnityEngine::Rendering::Universal::XRSystemUniversal::EndLateLatching(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::Universal::XRPassUniversal* xrPass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystemUniversal*>::get(), "EndLateLatching", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::XRPassUniversal*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, camera, xrPass);
}
inline void UnityEngine::Rendering::Universal::XRSystemUniversal::UnmarkShaderProperties(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                         ::UnityEngine::Rendering::Universal::XRPassUniversal* xrPass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystemUniversal*>::get(), "UnmarkShaderProperties", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::XRPassUniversal*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, xrPass);
}
inline void UnityEngine::Rendering::Universal::XRSystemUniversal::MarkShaderProperties(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::XRPassUniversal* xrPass,
                                                                                       bool renderIntoTexture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRSystemUniversal*>::get(), "MarkShaderProperties", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::XRPassUniversal*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, xrPass, renderIntoTexture);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::XRSystemUniversal::XRSystemUniversal() {}
