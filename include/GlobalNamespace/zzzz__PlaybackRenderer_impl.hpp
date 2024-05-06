#pragma once
#include "GlobalNamespace/zzzz__PlaybackRenderer_impl.hpp"
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
constexpr ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type::__PlaybackRenderer__PlaybackScreenshot__Type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type::__PlaybackRenderer__PlaybackScreenshot__Type() {}
constexpr ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type::Foreground{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type::Background{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot.get_name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::*)()>(
    &::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2686490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get(), "get_name",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot.get_texture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::*)()>(
    &::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::get_texture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2686498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get(), "get_texture",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot.get_layerMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::*)()>(
    &::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::get_layerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26864a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get(), "get_layerMask",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot.get_type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type (
    ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::*)()>(&::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26864a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get(), "get_type",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot.get_path
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::*)()>(
    &::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::get_path)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26864b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get(), "get_path",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot.set_path
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::*)(::StringW)>(
    &::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::set_path)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26864b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get(), "set_path",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot.get_backgroundColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::*)()>(
    &::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::get_backgroundColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26864c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get(), "get_backgroundColor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::*)(
    ::StringW, ::UnityEngine::LayerMask, ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type, ::UnityEngine::Color)>(&::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26864cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot.CreateTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::*)(int32_t, int32_t)>(
    &::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::CreateTexture)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2685c60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get(), "CreateTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__cordl_internal_get__name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr ::StringW const& GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__cordl_internal_get__name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr void GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__cordl_internal_set__name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__cordl_internal_get__layerMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__cordl_internal_get__layerMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layerMask;
}
constexpr void GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__cordl_internal_set__layerMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____layerMask = value;
}
constexpr ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type& GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__cordl_internal_get__type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type const& GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__cordl_internal_get__type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr void GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__cordl_internal_set__type(::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____type = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__cordl_internal_get__texture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____texture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__cordl_internal_get__texture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____texture;
}
constexpr void GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__cordl_internal_set__texture(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____texture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__cordl_internal_get__path() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____path;
}
constexpr ::StringW const& GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__cordl_internal_get__path() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____path;
}
constexpr void GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__cordl_internal_set__path(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____path)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__cordl_internal_get__backgroundColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__cordl_internal_get__backgroundColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundColor;
}
constexpr void GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__cordl_internal_set__backgroundColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____backgroundColor = value;
}
inline ::StringW GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::get_name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get(),
                                                                             "get_name", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RenderTexture> GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::get_texture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get(),
                                                                             "get_texture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>, false>(this, ___internal_method);
}
inline ::UnityEngine::LayerMask GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::get_layerMask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get(),
                                                                             "get_layerMask", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::get_type() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get(),
                                                                             "get_type", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::get_path() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get(),
                                                                             "get_path", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::set_path(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get(), "set_path",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Color GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::get_backgroundColor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get(),
                                                                             "get_backgroundColor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*
GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::New_ctor(::StringW name, ::UnityEngine::LayerMask layerMask, ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type type,
                                                                  ::UnityEngine::Color backgroundColor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>(name, layerMask, type, backgroundColor));
}
inline void GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::_ctor(::StringW name, ::UnityEngine::LayerMask layerMask, ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type type,
                                                                           ::UnityEngine::Color backgroundColor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot__Type>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, layerMask, type, backgroundColor);
}
inline void GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::CreateTexture(int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get(), "CreateTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, width, height);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot::__PlaybackRenderer__PlaybackScreenshot() {}
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer.add_texturesReadyEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlaybackRenderer::*)(::System::Action*)>(
    &::GlobalNamespace::PlaybackRenderer::add_texturesReadyEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x268571c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(), "add_texturesReadyEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer.remove_texturesReadyEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlaybackRenderer::*)(::System::Action*)>(
    &::GlobalNamespace::PlaybackRenderer::remove_texturesReadyEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26857b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(), "remove_texturesReadyEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer.get_screenshots
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> (::GlobalNamespace::PlaybackRenderer::*)()>(
        &::GlobalNamespace::PlaybackRenderer::get_screenshots)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2685854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(), "get_screenshots",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlaybackRenderer::*)(
    ::UnityEngine::Camera*, ::UnityEngine::Camera*, ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*, int32_t, int32_t,
    ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>)>(&::GlobalNamespace::PlaybackRenderer::Setup)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2684de4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer.CreateClipQuad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlaybackRenderer::*)()>(&::GlobalNamespace::PlaybackRenderer::CreateClipQuad)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x268596c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(), "CreateClipQuad",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer.InitCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlaybackRenderer::*)(
    ::UnityEngine::Camera*, ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*)>(&::GlobalNamespace::PlaybackRenderer::InitCamera)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x268585c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(), "InitCamera", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer.CreateTextures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlaybackRenderer::*)(int32_t, int32_t)>(
    &::GlobalNamespace::PlaybackRenderer::CreateTextures)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2685bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(), "CreateTextures", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer.GetDistanceToHMD
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::PlaybackRenderer::*)()>(&::GlobalNamespace::PlaybackRenderer::GetDistanceToHMD)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x2685d24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(), "GetDistanceToHMD",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer.OrientClipQuad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlaybackRenderer::*)()>(&::GlobalNamespace::PlaybackRenderer::OrientClipQuad)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2685f90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(), "OrientClipQuad",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer.RenderForeground
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlaybackRenderer::*)(::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*)>(
    &::GlobalNamespace::PlaybackRenderer::RenderForeground)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x26860d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(), "RenderForeground", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer.RenderBackground
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlaybackRenderer::*)(::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*)>(
    &::GlobalNamespace::PlaybackRenderer::RenderBackground)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2686290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(), "RenderBackground", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlaybackRenderer::*)()>(&::GlobalNamespace::PlaybackRenderer::LateUpdate)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x26863e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(), "LateUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackRenderer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlaybackRenderer::*)()>(&::GlobalNamespace::PlaybackRenderer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2686488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::PlaybackRenderer::__cordl_internal_get_texturesReadyEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___texturesReadyEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::PlaybackRenderer::__cordl_internal_get_texturesReadyEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___texturesReadyEvent;
}
constexpr void GlobalNamespace::PlaybackRenderer::__cordl_internal_set_texturesReadyEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___texturesReadyEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clearBackgroundShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hmd)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____camera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*& GlobalNamespace::PlaybackRenderer::__cordl_internal_get__cameraCalibration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraCalibration;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*> const&
GlobalNamespace::PlaybackRenderer::__cordl_internal_get__cameraCalibration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraCalibration;
}
constexpr void GlobalNamespace::PlaybackRenderer::__cordl_internal_set__cameraCalibration(::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cameraCalibration)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clipQuad)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clipMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>&
GlobalNamespace::PlaybackRenderer::__cordl_internal_get__screenshots() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenshots;
}
constexpr ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> const&
GlobalNamespace::PlaybackRenderer::__cordl_internal_get__screenshots() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenshots;
}
constexpr void GlobalNamespace::PlaybackRenderer::__cordl_internal_set__screenshots(
    ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____screenshots)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PlaybackRenderer::add_texturesReadyEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(), "add_texturesReadyEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlaybackRenderer::remove_texturesReadyEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(), "remove_texturesReadyEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> GlobalNamespace::PlaybackRenderer::get_screenshots() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(), "get_screenshots",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>, false>(
      this, ___internal_method);
}
inline void
GlobalNamespace::PlaybackRenderer::Setup(::UnityEngine::Camera* hmdCamera, ::UnityEngine::Camera* camera, ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration* cameraCalibration,
                                         int32_t textureWidth, int32_t textureHeight,
                                         ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> screenshots) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hmdCamera, camera, cameraCalibration, textureWidth, textureHeight, screenshots);
}
inline void GlobalNamespace::PlaybackRenderer::CreateClipQuad() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(), "CreateClipQuad",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlaybackRenderer::InitCamera(::UnityEngine::Camera* camera, ::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration* cameraCalibration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(), "InitCamera", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PosesRecordingData__ExternalCameraCalibration*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, camera, cameraCalibration);
}
inline void GlobalNamespace::PlaybackRenderer::CreateTextures(int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(), "CreateTextures", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, width, height);
}
inline float_t GlobalNamespace::PlaybackRenderer::GetDistanceToHMD() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(), "GetDistanceToHMD",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlaybackRenderer::OrientClipQuad() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(), "OrientClipQuad",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlaybackRenderer::RenderForeground(::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot* screenshot) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(), "RenderForeground", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, screenshot);
}
inline void GlobalNamespace::PlaybackRenderer::RenderBackground(::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot* screenshot) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(), "RenderBackground", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, screenshot);
}
inline void GlobalNamespace::PlaybackRenderer::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(), "LateUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlaybackRenderer* GlobalNamespace::PlaybackRenderer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlaybackRenderer*>());
}
inline void GlobalNamespace::PlaybackRenderer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackRenderer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlaybackRenderer::PlaybackRenderer() {}
