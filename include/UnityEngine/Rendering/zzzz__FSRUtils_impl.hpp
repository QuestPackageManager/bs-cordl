#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\FSRUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FSRUtils_def.hpp"
#include "UnityEngine/Rendering/zzzz__BaseCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__FSRUtils_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
inline void UnityEngine::Rendering::FSRUtils_ShaderConstants::setStaticF__FsrEasuConstants0(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FsrEasuConstants0", ::UnityEngine::Rendering::FSRUtils_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::FSRUtils_ShaderConstants::getStaticF__FsrEasuConstants0() {
  return ::cordl_internals::getStaticField<int32_t, "_FsrEasuConstants0", ::UnityEngine::Rendering::FSRUtils_ShaderConstants*>();
}
inline void UnityEngine::Rendering::FSRUtils_ShaderConstants::setStaticF__FsrEasuConstants1(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FsrEasuConstants1", ::UnityEngine::Rendering::FSRUtils_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::FSRUtils_ShaderConstants::getStaticF__FsrEasuConstants1() {
  return ::cordl_internals::getStaticField<int32_t, "_FsrEasuConstants1", ::UnityEngine::Rendering::FSRUtils_ShaderConstants*>();
}
inline void UnityEngine::Rendering::FSRUtils_ShaderConstants::setStaticF__FsrEasuConstants2(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FsrEasuConstants2", ::UnityEngine::Rendering::FSRUtils_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::FSRUtils_ShaderConstants::getStaticF__FsrEasuConstants2() {
  return ::cordl_internals::getStaticField<int32_t, "_FsrEasuConstants2", ::UnityEngine::Rendering::FSRUtils_ShaderConstants*>();
}
inline void UnityEngine::Rendering::FSRUtils_ShaderConstants::setStaticF__FsrEasuConstants3(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FsrEasuConstants3", ::UnityEngine::Rendering::FSRUtils_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::FSRUtils_ShaderConstants::getStaticF__FsrEasuConstants3() {
  return ::cordl_internals::getStaticField<int32_t, "_FsrEasuConstants3", ::UnityEngine::Rendering::FSRUtils_ShaderConstants*>();
}
inline void UnityEngine::Rendering::FSRUtils_ShaderConstants::setStaticF__FsrRcasConstants(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FsrRcasConstants", ::UnityEngine::Rendering::FSRUtils_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::FSRUtils_ShaderConstants::getStaticF__FsrRcasConstants() {
  return ::cordl_internals::getStaticField<int32_t, "_FsrRcasConstants", ::UnityEngine::Rendering::FSRUtils_ShaderConstants*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::FSRUtils_ShaderConstants::FSRUtils_ShaderConstants() {}
//  Writing Method size for method: ::UnityEngine::Rendering::FSRUtils.SetEasuConstants
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2)>(
    &::UnityEngine::Rendering::FSRUtils::SetEasuConstants)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x67c28e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FSRUtils*>(),
                                                                                           { "SetEasuConstants",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                                               ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::FSRUtils.SetEasuConstants
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::BaseCommandBuffer*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2)>(
    &::UnityEngine::Rendering::FSRUtils::SetEasuConstants)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67c2a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FSRUtils*>(),
                                                                                           { "SetEasuConstants",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::BaseCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                                               ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::FSRUtils.SetRcasConstants
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, float_t)>(&::UnityEngine::Rendering::FSRUtils::SetRcasConstants)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x67c2a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FSRUtils*>(),
                                                             { "SetRcasConstants", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::FSRUtils.SetRcasConstantsLinear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, float_t)>(&::UnityEngine::Rendering::FSRUtils::SetRcasConstantsLinear)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67c2b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FSRUtils*>(),
                                                             { "SetRcasConstantsLinear", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::FSRUtils.SetRcasConstantsLinear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, float_t)>(&::UnityEngine::Rendering::FSRUtils::SetRcasConstantsLinear)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x67c2b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FSRUtils*>(),
                                                             { "SetRcasConstantsLinear", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::FSRUtils.IsSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::FSRUtils::IsSupported)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x67c2b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FSRUtils*>(), { "IsSupported", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::FSRUtils::SetEasuConstants(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector2 inputViewportSizeInPixels,
                                                               ::UnityEngine::Vector2 inputImageSizeInPixels, ::UnityEngine::Vector2 outputImageSizeInPixels) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FSRUtils*>(), { "SetEasuConstants",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                                                   ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, inputViewportSizeInPixels, inputImageSizeInPixels, outputImageSizeInPixels);
}
inline void UnityEngine::Rendering::FSRUtils::SetEasuConstants(::UnityEngine::Rendering::BaseCommandBuffer* cmd, ::UnityEngine::Vector2 inputViewportSizeInPixels,
                                                               ::UnityEngine::Vector2 inputImageSizeInPixels, ::UnityEngine::Vector2 outputImageSizeInPixels) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FSRUtils*>(),
                                                                                         { "SetEasuConstants",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::BaseCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                                             ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, inputViewportSizeInPixels, inputImageSizeInPixels, outputImageSizeInPixels);
}
inline void UnityEngine::Rendering::FSRUtils::SetRcasConstants(::UnityEngine::Rendering::CommandBuffer* cmd, float_t sharpnessStops) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FSRUtils*>(),
                                                           { "SetRcasConstants", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, sharpnessStops);
}
inline void UnityEngine::Rendering::FSRUtils::SetRcasConstantsLinear(::UnityEngine::Rendering::CommandBuffer* cmd, float_t sharpnessLinear) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FSRUtils*>(),
                                                           { "SetRcasConstantsLinear", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, sharpnessLinear);
}
inline void UnityEngine::Rendering::FSRUtils::SetRcasConstantsLinear(::UnityEngine::Rendering::RasterCommandBuffer* cmd, float_t sharpnessLinear) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FSRUtils*>(),
                                                           { "SetRcasConstantsLinear", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, sharpnessLinear);
}
inline bool UnityEngine::Rendering::FSRUtils::IsSupported() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::FSRUtils*>(), { "IsSupported", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::FSRUtils::FSRUtils() {}
