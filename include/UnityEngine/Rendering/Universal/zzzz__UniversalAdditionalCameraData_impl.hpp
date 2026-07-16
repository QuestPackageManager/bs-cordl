#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalAdditionalCameraData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AntialiasingMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AntialiasingQuality_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraOverrideOption_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraRenderType_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TemporalAA_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__VolumeFrameworkUpdateMode_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalAdditionalCameraData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AntialiasingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AntialiasingQuality_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraOverrideOption_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraRenderType_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MotionVectorsPersistentData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TemporalAA_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalAdditionalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraHistory_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__VolumeFrameworkUpdateMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__IAdditionalData_def.hpp"
#include "UnityEngine/Rendering/zzzz__ICameraHistoryReadAccess_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeStack_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68c3cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c._UpdateCameraStack_b__53_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c::*)(::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c::_UpdateCameraStack_b__53_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68c3ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c*>(),
                                                                                           { "<UpdateCameraStack>b__53_0", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c::setStaticF___9(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c*, "<>9", ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c*>(
      std::forward<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c* UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c*, "<>9", ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c*>();
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c::setStaticF___9__53_0(::System::Predicate_1<::UnityW<::UnityEngine::Camera>>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Camera>>*, "<>9__53_0", ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c*>(
      std::forward<::System::Predicate_1<::UnityW<::UnityEngine::Camera>>*>(value));
}
inline ::System::Predicate_1<::UnityW<::UnityEngine::Camera>>* UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c::getStaticF___9__53_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Camera>>*, "<>9__53_0", ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c*>();
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c::_UpdateCameraStack_b__53_0(::UnityEngine::Camera* cam) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c*>(),
                                                                                         { "<UpdateCameraStack>b__53_0", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cam);
}
inline ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c* UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c::UniversalAdditionalCameraData___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c2dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_defaultAdditionalCameraData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData> (*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_defaultAdditionalCameraData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x68c2de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_defaultAdditionalCameraData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_camera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_camera)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x68c2fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_camera", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::Start)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x68c3068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_renderShadows
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_renderShadows)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c309c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_renderShadows", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_renderShadows
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_renderShadows)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c30a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "set_renderShadows", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_requiresDepthOption
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::CameraOverrideOption (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_requiresDepthOption)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c30ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_requiresDepthOption", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_requiresDepthOption
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(::UnityEngine::Rendering::Universal::CameraOverrideOption)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_requiresDepthOption)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c30b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(),
                                                             { "set_requiresDepthOption", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::CameraOverrideOption>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_requiresColorOption
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::CameraOverrideOption (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_requiresColorOption)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c30bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_requiresColorOption", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_requiresColorOption
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(::UnityEngine::Rendering::Universal::CameraOverrideOption)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_requiresColorOption)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c30c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(),
                                                             { "set_requiresColorOption", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::CameraOverrideOption>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_renderType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::CameraRenderType (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_renderType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c30cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_renderType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_renderType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(::UnityEngine::Rendering::Universal::CameraRenderType)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_renderType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c30d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(),
                                                                                           { "set_renderType", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::CameraRenderType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_cameraStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* (
    ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(&::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_cameraStack)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x68ba288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_cameraStack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.UpdateCameraStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::UpdateCameraStack)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x68c3370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "UpdateCameraStack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_clearDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_clearDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c3638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_clearDepth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_requiresDepthTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_requiresDepthTexture)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x68c3640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_requiresDepthTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_requiresDepthTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_requiresDepthTexture)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x68c36c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "set_requiresDepthTexture", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_requiresColorTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_requiresColorTexture)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x68c36e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_requiresColorTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_requiresColorTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_requiresColorTexture)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x68c3768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "set_requiresColorTexture", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_scriptableRenderer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::ScriptableRenderer* (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_scriptableRenderer)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x68c30dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_scriptableRenderer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.SetRenderer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::SetRenderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c3780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "SetRenderer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_volumeLayerMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_volumeLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c3788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_volumeLayerMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_volumeLayerMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(::UnityEngine::LayerMask)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_volumeLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c3790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(),
                                                                                           { "set_volumeLayerMask", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_volumeTrigger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_volumeTrigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c3798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_volumeTrigger", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_volumeTrigger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(::UnityEngine::Transform*)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_volumeTrigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c37a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(),
                                                                                           { "set_volumeTrigger", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_volumeFrameworkUpdateMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_volumeFrameworkUpdateMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c37a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_volumeFrameworkUpdateMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_volumeFrameworkUpdateMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_volumeFrameworkUpdateMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c37b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(),
                                                             { "set_volumeFrameworkUpdateMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_requiresVolumeFrameworkUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_requiresVolumeFrameworkUpdate)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x68c2554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_requiresVolumeFrameworkUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_volumeStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::VolumeStack* (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_volumeStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c37b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_volumeStack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_volumeStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(::UnityEngine::Rendering::VolumeStack*)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_volumeStack)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x68c2b10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(),
                                                                                           { "set_volumeStack", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeStack*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.GetOrCreateVolumeStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::GetOrCreateVolumeStack)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x68c274c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "GetOrCreateVolumeStack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_renderPostProcessing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_renderPostProcessing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c37c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_renderPostProcessing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_renderPostProcessing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_renderPostProcessing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c37c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "set_renderPostProcessing", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_antialiasing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::AntialiasingMode (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_antialiasing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c37d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_antialiasing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_antialiasing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(::UnityEngine::Rendering::Universal::AntialiasingMode)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_antialiasing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c37d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(),
                                                                                           { "set_antialiasing", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::AntialiasingMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_antialiasingQuality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::AntialiasingQuality (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_antialiasingQuality)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c37e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_antialiasingQuality", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_antialiasingQuality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(::UnityEngine::Rendering::Universal::AntialiasingQuality)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_antialiasingQuality)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c37e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(),
                                                             { "set_antialiasingQuality", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::AntialiasingQuality>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_taaSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Rendering::Universal::TemporalAA_Settings> (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_taaSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c37f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_taaSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_history
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ICameraHistoryReadAccess* (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_history)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c37f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_history", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_historyManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::UniversalCameraHistory* (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_historyManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c3800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_historyManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_motionVectorsPersistentData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData* (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_motionVectorsPersistentData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c3808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_motionVectorsPersistentData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_resetHistory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_resetHistory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x68c3810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_resetHistory", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_resetHistory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_resetHistory)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x68c3820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "set_resetHistory", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_stopNaN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_stopNaN)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c3884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_stopNaN", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_stopNaN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_stopNaN)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c388c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "set_stopNaN", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_dithering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_dithering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c3894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_dithering", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_dithering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_dithering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c389c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "set_dithering", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_allowXRRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_allowXRRendering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c38a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_allowXRRendering", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_allowXRRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_allowXRRendering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c38ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "set_allowXRRendering", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_useScreenCoordOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_useScreenCoordOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c38b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_useScreenCoordOverride", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_useScreenCoordOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_useScreenCoordOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c38bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "set_useScreenCoordOverride", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_screenSizeOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_screenSizeOverride)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x68c38c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_screenSizeOverride", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_screenSizeOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(::UnityEngine::Vector4)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_screenSizeOverride)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x68c38d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(),
                                                                                           { "set_screenSizeOverride", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_screenCoordScaleBias
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_screenCoordScaleBias)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x68c38dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_screenCoordScaleBias", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_screenCoordScaleBias
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(::UnityEngine::Vector4)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_screenCoordScaleBias)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x68c38e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(),
                                                                                           { "set_screenCoordScaleBias", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.get_allowHDROutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_allowHDROutput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c38f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_allowHDROutput", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.set_allowHDROutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_allowHDROutput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c38fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "set_allowHDROutput", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68c3904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "OnBeforeSerialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x68c3908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "OnAfterDeserialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.OnValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::OnValidate)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x68c3930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "OnValidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.OnDrawGizmos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x68c39c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "OnDrawGizmos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::OnDestroy)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x68c3af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData.GetRawRenderer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::ScriptableRenderer* (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::GetRawRenderer)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x68c3b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "GetRawRenderer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x68c2e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_RenderShadows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderShadows;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_RenderShadows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderShadows;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_RenderShadows(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderShadows = value;
}
constexpr ::UnityEngine::Rendering::Universal::CameraOverrideOption& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_RequiresDepthTextureOption() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequiresDepthTextureOption;
}
constexpr ::UnityEngine::Rendering::Universal::CameraOverrideOption const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_RequiresDepthTextureOption() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequiresDepthTextureOption;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_RequiresDepthTextureOption(::UnityEngine::Rendering::Universal::CameraOverrideOption value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RequiresDepthTextureOption = value;
}
constexpr ::UnityEngine::Rendering::Universal::CameraOverrideOption& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_RequiresOpaqueTextureOption() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequiresOpaqueTextureOption;
}
constexpr ::UnityEngine::Rendering::Universal::CameraOverrideOption const&
UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_RequiresOpaqueTextureOption() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequiresOpaqueTextureOption;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_RequiresOpaqueTextureOption(::UnityEngine::Rendering::Universal::CameraOverrideOption value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RequiresOpaqueTextureOption = value;
}
constexpr ::UnityEngine::Rendering::Universal::CameraRenderType& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_CameraType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraType;
}
constexpr ::UnityEngine::Rendering::Universal::CameraRenderType const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_CameraType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraType;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_CameraType(::UnityEngine::Rendering::Universal::CameraRenderType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CameraType = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_Cameras() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Cameras;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_Cameras() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Cameras;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_Cameras(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Cameras = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_RendererIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RendererIndex;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_RendererIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RendererIndex;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_RendererIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RendererIndex = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_VolumeLayerMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VolumeLayerMask;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_VolumeLayerMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VolumeLayerMask;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_VolumeLayerMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VolumeLayerMask = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_VolumeTrigger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VolumeTrigger;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_VolumeTrigger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VolumeTrigger;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_VolumeTrigger(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VolumeTrigger = value;
}
constexpr ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_VolumeFrameworkUpdateModeOption() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VolumeFrameworkUpdateModeOption;
}
constexpr ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode const&
UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_VolumeFrameworkUpdateModeOption() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VolumeFrameworkUpdateModeOption;
}
constexpr void
UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_VolumeFrameworkUpdateModeOption(::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VolumeFrameworkUpdateModeOption = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_RenderPostProcessing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderPostProcessing;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_RenderPostProcessing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderPostProcessing;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_RenderPostProcessing(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderPostProcessing = value;
}
constexpr ::UnityEngine::Rendering::Universal::AntialiasingMode& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_Antialiasing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Antialiasing;
}
constexpr ::UnityEngine::Rendering::Universal::AntialiasingMode const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_Antialiasing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Antialiasing;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_Antialiasing(::UnityEngine::Rendering::Universal::AntialiasingMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Antialiasing = value;
}
constexpr ::UnityEngine::Rendering::Universal::AntialiasingQuality& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_AntialiasingQuality() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AntialiasingQuality;
}
constexpr ::UnityEngine::Rendering::Universal::AntialiasingQuality const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_AntialiasingQuality() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AntialiasingQuality;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_AntialiasingQuality(::UnityEngine::Rendering::Universal::AntialiasingQuality value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AntialiasingQuality = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_StopNaN() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StopNaN;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_StopNaN() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StopNaN;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_StopNaN(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StopNaN = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_Dithering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dithering;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_Dithering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dithering;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_Dithering(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Dithering = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_ClearDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClearDepth;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_ClearDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClearDepth;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_ClearDepth(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClearDepth = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_AllowXRRendering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowXRRendering;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_AllowXRRendering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowXRRendering;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_AllowXRRendering(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AllowXRRendering = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_AllowHDROutput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowHDROutput;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_AllowHDROutput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowHDROutput;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_AllowHDROutput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AllowHDROutput = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_UseScreenCoordOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseScreenCoordOverride;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_UseScreenCoordOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseScreenCoordOverride;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_UseScreenCoordOverride(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseScreenCoordOverride = value;
}
constexpr ::UnityEngine::Vector4& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_ScreenSizeOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScreenSizeOverride;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_ScreenSizeOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScreenSizeOverride;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_ScreenSizeOverride(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScreenSizeOverride = value;
}
constexpr ::UnityEngine::Vector4& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_ScreenCoordScaleBias() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScreenCoordScaleBias;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_ScreenCoordScaleBias() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScreenCoordScaleBias;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_ScreenCoordScaleBias(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScreenCoordScaleBias = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_Camera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_Camera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Camera;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_Camera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Camera = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_RequiresDepthTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequiresDepthTexture;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_RequiresDepthTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequiresDepthTexture;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_RequiresDepthTexture(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RequiresDepthTexture = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_RequiresColorTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequiresColorTexture;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_RequiresColorTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequiresColorTexture;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_RequiresColorTexture(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RequiresColorTexture = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr float_t const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_Version(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Version = value;
}
constexpr ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_MotionVectorsPersistentData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MotionVectorsPersistentData;
}
constexpr ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData* const&
UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_MotionVectorsPersistentData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MotionVectorsPersistentData;
}
constexpr void
UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_MotionVectorsPersistentData(::UnityEngine::Rendering::Universal::MotionVectorsPersistentData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MotionVectorsPersistentData = value;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraHistory*& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_History() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_History;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraHistory* const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_History() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_History;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_History(::UnityEngine::Rendering::Universal::UniversalCameraHistory* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_History = value;
}
constexpr ::UnityEngine::Rendering::Universal::TemporalAA_Settings& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_TaaSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TaaSettings;
}
constexpr ::UnityEngine::Rendering::Universal::TemporalAA_Settings const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_TaaSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TaaSettings;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_TaaSettings(::UnityEngine::Rendering::Universal::TemporalAA_Settings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TaaSettings = value;
}
constexpr ::UnityEngine::Rendering::VolumeStack*& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_VolumeStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VolumeStack;
}
constexpr ::UnityEngine::Rendering::VolumeStack* const& UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_get_m_VolumeStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VolumeStack;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::__cordl_internal_set_m_VolumeStack(::UnityEngine::Rendering::VolumeStack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VolumeStack = value;
}
inline void
UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::setStaticF_s_DefaultAdditionalCameraData(::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData>, "s_DefaultAdditionalCameraData",
                                    ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(
      std::forward<::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData>>(value));
}
inline ::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData> UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::getStaticF_s_DefaultAdditionalCameraData() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData>, "s_DefaultAdditionalCameraData",
                                           ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>();
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::setStaticF_s_CachedVolumeStacks(::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeStack*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeStack*>*, "s_CachedVolumeStacks",
                                    ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeStack*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeStack*>* UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::getStaticF_s_CachedVolumeStacks() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeStack*>*, "s_CachedVolumeStacks",
                                           ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>();
}
inline float_t UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_version() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData> UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_defaultAdditionalCameraData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_defaultAdditionalCameraData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_camera() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_camera", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_renderShadows() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_renderShadows", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_renderShadows(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "set_renderShadows", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::CameraOverrideOption UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_requiresDepthOption() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_requiresDepthOption", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::CameraOverrideOption>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_requiresDepthOption(::UnityEngine::Rendering::Universal::CameraOverrideOption value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(),
                                                           { "set_requiresDepthOption", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::CameraOverrideOption>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::CameraOverrideOption UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_requiresColorOption() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_requiresColorOption", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::CameraOverrideOption>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_requiresColorOption(::UnityEngine::Rendering::Universal::CameraOverrideOption value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(),
                                                           { "set_requiresColorOption", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::CameraOverrideOption>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::CameraRenderType UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_renderType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_renderType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::CameraRenderType>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_renderType(::UnityEngine::Rendering::Universal::CameraRenderType value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(),
                                                                                         { "set_renderType", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::CameraRenderType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_cameraStack() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_cameraStack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::UpdateCameraStack() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "UpdateCameraStack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_clearDepth() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_clearDepth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_requiresDepthTexture() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_requiresDepthTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_requiresDepthTexture(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "set_requiresDepthTexture", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_requiresColorTexture() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_requiresColorTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_requiresColorTexture(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "set_requiresColorTexture", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_scriptableRenderer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_scriptableRenderer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::SetRenderer(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "SetRenderer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline ::UnityEngine::LayerMask UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_volumeLayerMask() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_volumeLayerMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_volumeLayerMask(::UnityEngine::LayerMask value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(),
                                                                                         { "set_volumeLayerMask", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_volumeTrigger() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_volumeTrigger", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_volumeTrigger(::UnityEngine::Transform* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(),
                                                                                         { "set_volumeTrigger", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_volumeFrameworkUpdateMode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_volumeFrameworkUpdateMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_volumeFrameworkUpdateMode(::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(),
                                                           { "set_volumeFrameworkUpdateMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_requiresVolumeFrameworkUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_requiresVolumeFrameworkUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::VolumeStack* UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_volumeStack() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_volumeStack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::VolumeStack*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_volumeStack(::UnityEngine::Rendering::VolumeStack* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(),
                                                                                         { "set_volumeStack", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeStack*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::GetOrCreateVolumeStack() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "GetOrCreateVolumeStack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_renderPostProcessing() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_renderPostProcessing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_renderPostProcessing(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "set_renderPostProcessing", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::AntialiasingMode UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_antialiasing() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_antialiasing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::AntialiasingMode>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_antialiasing(::UnityEngine::Rendering::Universal::AntialiasingMode value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(),
                                                                                         { "set_antialiasing", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::AntialiasingMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::AntialiasingQuality UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_antialiasingQuality() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_antialiasingQuality", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::AntialiasingQuality>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_antialiasingQuality(::UnityEngine::Rendering::Universal::AntialiasingQuality value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(),
                                                           { "set_antialiasingQuality", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::AntialiasingQuality>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::by_ref<::UnityEngine::Rendering::Universal::TemporalAA_Settings> UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_taaSettings() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_taaSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Rendering::Universal::TemporalAA_Settings>>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ICameraHistoryReadAccess* UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_history() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_history", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ICameraHistoryReadAccess*>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::UniversalCameraHistory* UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_historyManager() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_historyManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData* UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_motionVectorsPersistentData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_motionVectorsPersistentData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_resetHistory() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_resetHistory", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_resetHistory(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "set_resetHistory", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_stopNaN() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_stopNaN", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_stopNaN(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "set_stopNaN", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_dithering() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_dithering", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_dithering(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "set_dithering", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_allowXRRendering() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_allowXRRendering", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_allowXRRendering(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "set_allowXRRendering", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_useScreenCoordOverride() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_useScreenCoordOverride", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_useScreenCoordOverride(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "set_useScreenCoordOverride", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_screenSizeOverride() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_screenSizeOverride", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_screenSizeOverride(::UnityEngine::Vector4 value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(),
                                                                                         { "set_screenSizeOverride", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_screenCoordScaleBias() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_screenCoordScaleBias", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_screenCoordScaleBias(::UnityEngine::Vector4 value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(),
                                                                                         { "set_screenCoordScaleBias", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::get_allowHDROutput() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "get_allowHDROutput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::set_allowHDROutput(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "set_allowHDROutput", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::OnBeforeSerialize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "OnBeforeSerialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::OnAfterDeserialize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "OnAfterDeserialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::OnValidate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "OnValidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::OnDrawGizmos() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "OnDrawGizmos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::OnDestroy() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::GetRawRenderer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { "GetRawRenderer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IAdditionalData"
constexpr UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::operator ::UnityEngine::Rendering::IAdditionalData*() noexcept {
  return static_cast<::UnityEngine::Rendering::IAdditionalData*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IAdditionalData"
constexpr ::UnityEngine::Rendering::IAdditionalData* UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::i___UnityEngine__Rendering__IAdditionalData() noexcept {
  return static_cast<::UnityEngine::Rendering::IAdditionalData*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData::UniversalAdditionalCameraData() {}
