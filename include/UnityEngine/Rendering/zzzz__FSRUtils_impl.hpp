#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FSRUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FSRUtils_def.hpp"
#include "UnityEngine/Rendering/zzzz__BaseCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__FSRUtils_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
inline void UnityEngine::Rendering::FSRUtils_ShaderConstants::setStaticF__FsrEasuConstants0(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FsrEasuConstants0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::FSRUtils_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::FSRUtils_ShaderConstants::getStaticF__FsrEasuConstants0() {
  return ::cordl_internals::getStaticField<int32_t, "_FsrEasuConstants0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::FSRUtils_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::FSRUtils_ShaderConstants::setStaticF__FsrEasuConstants1(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FsrEasuConstants1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::FSRUtils_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::FSRUtils_ShaderConstants::getStaticF__FsrEasuConstants1() {
  return ::cordl_internals::getStaticField<int32_t, "_FsrEasuConstants1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::FSRUtils_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::FSRUtils_ShaderConstants::setStaticF__FsrEasuConstants2(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FsrEasuConstants2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::FSRUtils_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::FSRUtils_ShaderConstants::getStaticF__FsrEasuConstants2() {
  return ::cordl_internals::getStaticField<int32_t, "_FsrEasuConstants2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::FSRUtils_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::FSRUtils_ShaderConstants::setStaticF__FsrEasuConstants3(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FsrEasuConstants3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::FSRUtils_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::FSRUtils_ShaderConstants::getStaticF__FsrEasuConstants3() {
  return ::cordl_internals::getStaticField<int32_t, "_FsrEasuConstants3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::FSRUtils_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::FSRUtils_ShaderConstants::setStaticF__FsrRcasConstants(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FsrRcasConstants", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::FSRUtils_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::FSRUtils_ShaderConstants::getStaticF__FsrRcasConstants() {
  return ::cordl_internals::getStaticField<int32_t, "_FsrRcasConstants", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::FSRUtils_ShaderConstants*>::get>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::FSRUtils_ShaderConstants::FSRUtils_ShaderConstants() {}
//  Writing Method size for method: ::UnityEngine::Rendering::FSRUtils.SetEasuConstants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::UnityEngine::Rendering::FSRUtils::SetEasuConstants)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x65a3bf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::FSRUtils*>::get(), "SetEasuConstants", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::FSRUtils.SetEasuConstants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::BaseCommandBuffer*, ::UnityEngine::Vector2, ::UnityEngine::Vector2,
                                                                                           ::UnityEngine::Vector2)>(&::UnityEngine::Rendering::FSRUtils::SetEasuConstants)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x65a3d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::FSRUtils*>::get(), "SetEasuConstants", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BaseCommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::FSRUtils.SetRcasConstants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, float_t)>(&::UnityEngine::Rendering::FSRUtils::SetRcasConstants)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x65a3d8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::FSRUtils*>::get(), "SetRcasConstants", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::FSRUtils.SetRcasConstantsLinear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, float_t)>(
    &::UnityEngine::Rendering::FSRUtils::SetRcasConstantsLinear)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x65a3e54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::FSRUtils*>::get(), "SetRcasConstantsLinear", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::FSRUtils.SetRcasConstantsLinear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, float_t)>(
    &::UnityEngine::Rendering::FSRUtils::SetRcasConstantsLinear)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x65a3e68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::FSRUtils*>::get(), "SetRcasConstantsLinear", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::FSRUtils.IsSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Rendering::FSRUtils::IsSupported)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x65a3e8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::FSRUtils*>::get(), "IsSupported",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::FSRUtils::SetEasuConstants(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector2 inputViewportSizeInPixels,
                                                               ::UnityEngine::Vector2 inputImageSizeInPixels, ::UnityEngine::Vector2 outputImageSizeInPixels) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::FSRUtils*>::get(), "SetEasuConstants", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, inputViewportSizeInPixels, inputImageSizeInPixels, outputImageSizeInPixels);
}
inline void UnityEngine::Rendering::FSRUtils::SetEasuConstants(::UnityEngine::Rendering::BaseCommandBuffer* cmd, ::UnityEngine::Vector2 inputViewportSizeInPixels,
                                                               ::UnityEngine::Vector2 inputImageSizeInPixels, ::UnityEngine::Vector2 outputImageSizeInPixels) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::FSRUtils*>::get(), "SetEasuConstants", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BaseCommandBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, inputViewportSizeInPixels, inputImageSizeInPixels, outputImageSizeInPixels);
}
inline void UnityEngine::Rendering::FSRUtils::SetRcasConstants(::UnityEngine::Rendering::CommandBuffer* cmd, float_t sharpnessStops) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::FSRUtils*>::get(), "SetRcasConstants", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, sharpnessStops);
}
inline void UnityEngine::Rendering::FSRUtils::SetRcasConstantsLinear(::UnityEngine::Rendering::CommandBuffer* cmd, float_t sharpnessLinear) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::FSRUtils*>::get(), "SetRcasConstantsLinear", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, sharpnessLinear);
}
inline void UnityEngine::Rendering::FSRUtils::SetRcasConstantsLinear(::UnityEngine::Rendering::RasterCommandBuffer* cmd, float_t sharpnessLinear) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::FSRUtils*>::get(), "SetRcasConstantsLinear", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, sharpnessLinear);
}
inline bool UnityEngine::Rendering::FSRUtils::IsSupported() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::FSRUtils*>::get(), "IsSupported",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::FSRUtils::FSRUtils() {}
