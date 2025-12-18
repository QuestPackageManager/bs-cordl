#pragma once
// IWYU pragma private; include "GlobalNamespace/SetApplicationVersionText.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SetApplicationVersionText_def.hpp"
#include "BeatSaber/Init/zzzz__GameVersionProvider_def.hpp"
#include "BeatSaber/Init/zzzz__GameVersion_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SetApplicationVersionText.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetApplicationVersionText::*)()>(&::GlobalNamespace::SetApplicationVersionText::Start)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x57ff23c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetApplicationVersionText*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetApplicationVersionText.SetText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetApplicationVersionText::*)(::BeatSaber::Init::GameVersion*)>(
    &::GlobalNamespace::SetApplicationVersionText::SetText)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x57ff350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetApplicationVersionText*>::get(), "SetText", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::GameVersion*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetApplicationVersionText.ToggleVersionColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetApplicationVersionText::*)()>(
    &::GlobalNamespace::SetApplicationVersionText::ToggleVersionColor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x57ff650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetApplicationVersionText*>::get(),
                                                                               "ToggleVersionColor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetApplicationVersionText._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetApplicationVersionText::*)()>(&::GlobalNamespace::SetApplicationVersionText::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x57ff6e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetApplicationVersionText*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::SetApplicationVersionText::__cordl_internal_get__versionText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____versionText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::SetApplicationVersionText::__cordl_internal_get__versionText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____versionText;
}
constexpr void GlobalNamespace::SetApplicationVersionText::__cordl_internal_set__versionText(::UnityW<::TMPro::TextMeshPro> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____versionText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::SetApplicationVersionText::__cordl_internal_get__labelText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____labelText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::SetApplicationVersionText::__cordl_internal_get__labelText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____labelText;
}
constexpr void GlobalNamespace::SetApplicationVersionText::__cordl_internal_set__labelText(::UnityW<::TMPro::TextMeshPro> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____labelText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::SetApplicationVersionText::__cordl_internal_get__buildIdText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buildIdText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::SetApplicationVersionText::__cordl_internal_get__buildIdText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buildIdText;
}
constexpr void GlobalNamespace::SetApplicationVersionText::__cordl_internal_set__buildIdText(::UnityW<::TMPro::TextMeshPro> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buildIdText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::SetApplicationVersionText::__cordl_internal_get__platformIdText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformIdText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::SetApplicationVersionText::__cordl_internal_get__platformIdText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformIdText;
}
constexpr void GlobalNamespace::SetApplicationVersionText::__cordl_internal_set__platformIdText(::UnityW<::TMPro::TextMeshPro> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____platformIdText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& GlobalNamespace::SetApplicationVersionText::__cordl_internal_get__footSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____footSprite;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& GlobalNamespace::SetApplicationVersionText::__cordl_internal_get__footSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____footSprite;
}
constexpr void GlobalNamespace::SetApplicationVersionText::__cordl_internal_set__footSprite(::UnityW<::UnityEngine::SpriteRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____footSprite)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::SetApplicationVersionText::__cordl_internal_get__rcBuildColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rcBuildColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::SetApplicationVersionText::__cordl_internal_get__rcBuildColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rcBuildColor;
}
constexpr void GlobalNamespace::SetApplicationVersionText::__cordl_internal_set__rcBuildColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rcBuildColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::SetApplicationVersionText::__cordl_internal_get__nonRCBuildColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nonRCBuildColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::SetApplicationVersionText::__cordl_internal_get__nonRCBuildColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nonRCBuildColor;
}
constexpr void GlobalNamespace::SetApplicationVersionText::__cordl_internal_set__nonRCBuildColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nonRCBuildColor = value;
}
constexpr ::BeatSaber::Init::GameVersionProvider*& GlobalNamespace::SetApplicationVersionText::__cordl_internal_get__gameVersionProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameVersionProvider;
}
constexpr ::BeatSaber::Init::GameVersionProvider* const& GlobalNamespace::SetApplicationVersionText::__cordl_internal_get__gameVersionProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameVersionProvider;
}
constexpr void GlobalNamespace::SetApplicationVersionText::__cordl_internal_set__gameVersionProvider(::BeatSaber::Init::GameVersionProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameVersionProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SetApplicationVersionText::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetApplicationVersionText*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SetApplicationVersionText::SetText(::BeatSaber::Init::GameVersion* gameVersion) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetApplicationVersionText*>::get(), "SetText", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::GameVersion*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gameVersion);
}
inline void GlobalNamespace::SetApplicationVersionText::ToggleVersionColor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetApplicationVersionText*>::get(),
                                                                             "ToggleVersionColor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SetApplicationVersionText::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetApplicationVersionText*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SetApplicationVersionText* GlobalNamespace::SetApplicationVersionText::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SetApplicationVersionText*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SetApplicationVersionText::SetApplicationVersionText() {}
