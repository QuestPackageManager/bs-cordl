#pragma once
// IWYU pragma private; include "GlobalNamespace/PlaybackRenderer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlaybackRenderer_def.hpp"
#include "GlobalNamespace/zzzz__PlaybackRenderer_def.hpp"
#include "GlobalNamespace/zzzz__PosesRecordingData_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlaybackScreenshot_PlaybackRenderer_Type::PlaybackScreenshot_PlaybackRenderer_Type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlaybackScreenshot_PlaybackRenderer_Type::PlaybackScreenshot_PlaybackRenderer_Type() {}
constexpr ::GlobalNamespace::PlaybackScreenshot_PlaybackRenderer_Type GlobalNamespace::PlaybackScreenshot_PlaybackRenderer_Type::Foreground{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::PlaybackScreenshot_PlaybackRenderer_Type GlobalNamespace::PlaybackScreenshot_PlaybackRenderer_Type::Background{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::*)()>(&::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e7c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>(), { "get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot.get_texture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::*)()>(
    &::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::get_texture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e7c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>(), { "get_texture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot.get_layerMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::*)()>(
    &::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::get_layerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e7c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>(), { "get_layerMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlaybackScreenshot_PlaybackRenderer_Type (::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::*)()>(
    &::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e7c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>(), { "get_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot.get_path
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::*)()>(&::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::get_path)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e7c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>(), { "get_path", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot.set_path
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::*)(::StringW)>(
    &::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::set_path)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e7c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>(), { "set_path", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot.get_backgroundColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::*)()>(
    &::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::get_backgroundColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58e7c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>(), { "get_backgroundColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::*)(
    ::StringW, ::UnityEngine::LayerMask, ::GlobalNamespace::PlaybackScreenshot_PlaybackRenderer_Type, ::UnityEngine::Color)>(&::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58e7c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LayerMask>(),
                                                                 ::i2c::type_of<::GlobalNamespace::PlaybackScreenshot_PlaybackRenderer_Type>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot.CreateTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::*)(int32_t, int32_t)>(
    &::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::CreateTexture)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x58e7274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>(),
                                                                                           { "CreateTexture", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::__cordl_internal_get__name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr ::StringW const& GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::__cordl_internal_get__name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr void GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::__cordl_internal_set__name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____name = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::__cordl_internal_get__layerMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::__cordl_internal_get__layerMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layerMask;
}
constexpr void GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::__cordl_internal_set__layerMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____layerMask = value;
}
constexpr ::GlobalNamespace::PlaybackScreenshot_PlaybackRenderer_Type& GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::__cordl_internal_get__type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr ::GlobalNamespace::PlaybackScreenshot_PlaybackRenderer_Type const& GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::__cordl_internal_get__type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr void GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::__cordl_internal_set__type(::GlobalNamespace::PlaybackScreenshot_PlaybackRenderer_Type value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____type = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::__cordl_internal_get__texture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____texture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::__cordl_internal_get__texture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____texture;
}
constexpr void GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::__cordl_internal_set__texture(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____texture = value;
}
constexpr ::StringW& GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::__cordl_internal_get__path() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____path;
}
constexpr ::StringW const& GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::__cordl_internal_get__path() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____path;
}
constexpr void GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::__cordl_internal_set__path(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____path = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::__cordl_internal_get__backgroundColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::__cordl_internal_get__backgroundColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundColor;
}
constexpr void GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::__cordl_internal_set__backgroundColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____backgroundColor = value;
}
inline ::StringW GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::get_name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RenderTexture> GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::get_texture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>(), { "get_texture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method);
}
inline ::UnityEngine::LayerMask GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::get_layerMask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>(), { "get_layerMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline ::GlobalNamespace::PlaybackScreenshot_PlaybackRenderer_Type GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::get_type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>(), { "get_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlaybackScreenshot_PlaybackRenderer_Type>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::get_path() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>(), { "get_path", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::set_path(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>(), { "set_path", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::get_backgroundColor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>(), { "get_backgroundColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::_ctor(::StringW name, ::UnityEngine::LayerMask layerMask, ::GlobalNamespace::PlaybackScreenshot_PlaybackRenderer_Type type,
                                                                        ::UnityEngine::Color backgroundColor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LayerMask>(),
                                                               ::i2c::type_of<::GlobalNamespace::PlaybackScreenshot_PlaybackRenderer_Type>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, layerMask, type, backgroundColor);
}
inline void GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::CreateTexture(int32_t width, int32_t height) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>(), { "CreateTexture", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height);
}
inline ::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot* GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::New_ctor(::StringW name, ::UnityEngine::LayerMask layerMask,
                                                                                                                              ::GlobalNamespace::PlaybackScreenshot_PlaybackRenderer_Type type,
                                                                                                                              ::UnityEngine::Color backgroundColor) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>(name, layerMask, type, backgroundColor));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot::PlaybackRenderer_PlaybackScreenshot() {}
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer.add_texturesReadyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlaybackRenderer::*)(::System::Action*)>(&::GlobalNamespace::PlaybackRenderer::add_texturesReadyEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x58e6d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer*>(), { "add_texturesReadyEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer.remove_texturesReadyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlaybackRenderer::*)(::System::Action*)>(&::GlobalNamespace::PlaybackRenderer::remove_texturesReadyEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x58e6de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer*>(), { "remove_texturesReadyEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer.get_screenshots
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*> (::GlobalNamespace::PlaybackRenderer::*)()>(
    &::GlobalNamespace::PlaybackRenderer::get_screenshots)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e6e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer*>(), { "get_screenshots", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::PlaybackRenderer::*)(::UnityEngine::Camera*, ::UnityEngine::Camera*, ::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration*, int32_t, int32_t,
                                                              ::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>)>(&::GlobalNamespace::PlaybackRenderer::Setup)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x58e63b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer*>(),
                            { "Setup",
                              {},
                              { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration*>(),
                                ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer.CreateClipQuad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlaybackRenderer::*)()>(&::GlobalNamespace::PlaybackRenderer::CreateClipQuad)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x58e6f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer*>(), { "CreateClipQuad", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer.InitCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlaybackRenderer::*)(::UnityEngine::Camera*, ::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration*)>(
    &::GlobalNamespace::PlaybackRenderer::InitCamera)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x58e6e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer*>(),
                                         { "InitCamera", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer.CreateTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlaybackRenderer::*)(int32_t, int32_t)>(&::GlobalNamespace::PlaybackRenderer::CreateTextures)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x58e720c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer*>(), { "CreateTextures", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer.GetDistanceToHMD
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlaybackRenderer::*)()>(&::GlobalNamespace::PlaybackRenderer::GetDistanceToHMD)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x58e733c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer*>(), { "GetDistanceToHMD", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer.OrientClipQuad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlaybackRenderer::*)()>(&::GlobalNamespace::PlaybackRenderer::OrientClipQuad)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x58e7668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer*>(), { "OrientClipQuad", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer.RenderForeground
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlaybackRenderer::*)(::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*)>(
    &::GlobalNamespace::PlaybackRenderer::RenderForeground)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x58e77a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer*>(),
                                                                                           { "RenderForeground", {}, { ::i2c::type_of<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer.RenderBackground
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlaybackRenderer::*)(::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*)>(
    &::GlobalNamespace::PlaybackRenderer::RenderBackground)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x58e79cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer*>(),
                                                                                           { "RenderBackground", {}, { ::i2c::type_of<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlaybackRenderer::*)()>(&::GlobalNamespace::PlaybackRenderer::LateUpdate)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x58e7b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlaybackRenderer::*)()>(&::GlobalNamespace::PlaybackRenderer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58e7c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::PlaybackRenderer::__cordl_internal_get_texturesReadyEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___texturesReadyEvent;
}
constexpr ::System::Action* const& GlobalNamespace::PlaybackRenderer::__cordl_internal_get_texturesReadyEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___texturesReadyEvent;
}
constexpr void GlobalNamespace::PlaybackRenderer::__cordl_internal_set_texturesReadyEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___texturesReadyEvent = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::PlaybackRenderer::__cordl_internal_get__clearBackgroundShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearBackgroundShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::PlaybackRenderer::__cordl_internal_get__clearBackgroundShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearBackgroundShader;
}
constexpr void GlobalNamespace::PlaybackRenderer::__cordl_internal_set__clearBackgroundShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clearBackgroundShader = value;
}
constexpr bool& GlobalNamespace::PlaybackRenderer::__cordl_internal_get__isSetup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isSetup;
}
constexpr bool const& GlobalNamespace::PlaybackRenderer::__cordl_internal_get__isSetup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isSetup;
}
constexpr void GlobalNamespace::PlaybackRenderer::__cordl_internal_set__isSetup(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isSetup = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlaybackRenderer::__cordl_internal_get__hmd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hmd;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlaybackRenderer::__cordl_internal_get__hmd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hmd;
}
constexpr void GlobalNamespace::PlaybackRenderer::__cordl_internal_set__hmd(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hmd = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::PlaybackRenderer::__cordl_internal_get__camera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::PlaybackRenderer::__cordl_internal_get__camera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____camera;
}
constexpr void GlobalNamespace::PlaybackRenderer::__cordl_internal_set__camera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____camera = value;
}
constexpr ::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration*& GlobalNamespace::PlaybackRenderer::__cordl_internal_get__cameraCalibration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraCalibration;
}
constexpr ::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration* const& GlobalNamespace::PlaybackRenderer::__cordl_internal_get__cameraCalibration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraCalibration;
}
constexpr void GlobalNamespace::PlaybackRenderer::__cordl_internal_set__cameraCalibration(::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cameraCalibration = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PlaybackRenderer::__cordl_internal_get__clipQuad() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clipQuad;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PlaybackRenderer::__cordl_internal_get__clipQuad() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clipQuad;
}
constexpr void GlobalNamespace::PlaybackRenderer::__cordl_internal_set__clipQuad(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clipQuad = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::PlaybackRenderer::__cordl_internal_get__clipMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clipMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::PlaybackRenderer::__cordl_internal_get__clipMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clipMaterial;
}
constexpr void GlobalNamespace::PlaybackRenderer::__cordl_internal_set__clipMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clipMaterial = value;
}
constexpr ::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>& GlobalNamespace::PlaybackRenderer::__cordl_internal_get__screenshots() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenshots;
}
constexpr ::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*> const& GlobalNamespace::PlaybackRenderer::__cordl_internal_get__screenshots() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenshots;
}
constexpr void GlobalNamespace::PlaybackRenderer::__cordl_internal_set__screenshots(::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____screenshots = value;
}
inline void GlobalNamespace::PlaybackRenderer::add_texturesReadyEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer*>(), { "add_texturesReadyEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlaybackRenderer::remove_texturesReadyEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer*>(), { "remove_texturesReadyEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*> GlobalNamespace::PlaybackRenderer::get_screenshots() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer*>(), { "get_screenshots", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>>(this, ___internal_method);
}
inline void GlobalNamespace::PlaybackRenderer::Setup(::UnityEngine::Camera* hmdCamera, ::UnityEngine::Camera* camera,
                                                     ::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration* cameraCalibration, int32_t textureWidth, int32_t textureHeight,
                                                     ::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*> screenshots) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer*>(),
                          { "Setup",
                            {},
                            { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration*>(),
                              ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hmdCamera, camera, cameraCalibration, textureWidth, textureHeight, screenshots);
}
inline void GlobalNamespace::PlaybackRenderer::CreateClipQuad() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer*>(), { "CreateClipQuad", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlaybackRenderer::InitCamera(::UnityEngine::Camera* camera, ::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration* cameraCalibration) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer*>(),
                                              { "InitCamera", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::GlobalNamespace::PosesRecordingData_ExternalCameraCalibration*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera, cameraCalibration);
}
inline void GlobalNamespace::PlaybackRenderer::CreateTextures(int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer*>(), { "CreateTextures", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height);
}
inline float_t GlobalNamespace::PlaybackRenderer::GetDistanceToHMD() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer*>(), { "GetDistanceToHMD", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlaybackRenderer::OrientClipQuad() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer*>(), { "OrientClipQuad", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlaybackRenderer::RenderForeground(::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot* screenshot) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer*>(),
                                                                                         { "RenderForeground", {}, { ::i2c::type_of<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, screenshot);
}
inline void GlobalNamespace::PlaybackRenderer::RenderBackground(::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot* screenshot) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer*>(),
                                                                                         { "RenderBackground", {}, { ::i2c::type_of<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, screenshot);
}
inline void GlobalNamespace::PlaybackRenderer::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlaybackRenderer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlaybackRenderer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlaybackRenderer* GlobalNamespace::PlaybackRenderer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlaybackRenderer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlaybackRenderer::PlaybackRenderer() {}
