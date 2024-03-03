#pragma once
#include "GlobalNamespace/zzzz__MirrorRendererGraphicsSettingsPresets_impl.hpp"
#include "GlobalNamespace/zzzz__NamedPreset_impl.hpp"
#include "GlobalNamespace/zzzz__NamedPresetsSO_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "GlobalNamespace/zzzz__MirrorRendererGraphicsSettingsPresets_def.hpp"
#include "GlobalNamespace/zzzz__MirrorRendererGraphicsSettingsPresets_def.hpp"
#include "GlobalNamespace/zzzz__NamedPreset_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType() {}
constexpr ::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType::None{ static_cast<int32_t>(
    0x0) };
constexpr ::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType::FakeMirror{ static_cast<int32_t>(
    0x1) };
constexpr ::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType::RenderedMirror{
  static_cast<int32_t>(0x2)
};
//  Writing Method size for method: ::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::*)()>(
    &::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x12d5b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType& GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__cordl_internal_get_mirrorType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrorType;
}
constexpr ::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType const&
GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__cordl_internal_get_mirrorType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrorType;
}
constexpr void GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__cordl_internal_set_mirrorType(::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mirrorType = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__cordl_internal_get_reflectLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reflectLayers;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__cordl_internal_get_reflectLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reflectLayers;
}
constexpr void GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__cordl_internal_set_reflectLayers(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reflectLayers = value;
}
constexpr int32_t& GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__cordl_internal_get_stereoTextureWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stereoTextureWidth;
}
constexpr int32_t const& GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__cordl_internal_get_stereoTextureWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stereoTextureWidth;
}
constexpr void GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__cordl_internal_set_stereoTextureWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stereoTextureWidth = value;
}
constexpr int32_t& GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__cordl_internal_get_stereoTextureHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stereoTextureHeight;
}
constexpr int32_t const& GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__cordl_internal_get_stereoTextureHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stereoTextureHeight;
}
constexpr void GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__cordl_internal_set_stereoTextureHeight(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stereoTextureHeight = value;
}
constexpr int32_t& GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__cordl_internal_get_monoTextureWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___monoTextureWidth;
}
constexpr int32_t const& GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__cordl_internal_get_monoTextureWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___monoTextureWidth;
}
constexpr void GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__cordl_internal_set_monoTextureWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___monoTextureWidth = value;
}
constexpr int32_t& GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__cordl_internal_get_monoTextureHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___monoTextureHeight;
}
constexpr int32_t const& GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__cordl_internal_get_monoTextureHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___monoTextureHeight;
}
constexpr void GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__cordl_internal_set_monoTextureHeight(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___monoTextureHeight = value;
}
constexpr int32_t& GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__cordl_internal_get_maxAntiAliasing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxAntiAliasing;
}
constexpr int32_t const& GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__cordl_internal_get_maxAntiAliasing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxAntiAliasing;
}
constexpr void GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__cordl_internal_set_maxAntiAliasing(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxAntiAliasing = value;
}
constexpr bool& GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__cordl_internal_get_enableBloomPrePassFog() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableBloomPrePassFog;
}
constexpr bool const& GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__cordl_internal_get_enableBloomPrePassFog() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableBloomPrePassFog;
}
constexpr void GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__cordl_internal_set_enableBloomPrePassFog(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableBloomPrePassFog = value;
}
inline ::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset* GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*>());
}
inline void GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset::__MirrorRendererGraphicsSettingsPresets__Preset() {}
//  Writing Method size for method: ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets.get_presets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*, ::Array<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*>*> (
        ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets::*)()>(&::GlobalNamespace::MirrorRendererGraphicsSettingsPresets::get_presets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12d5b00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*>::get(),
                                                                               "get_presets", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets.get_namedPresets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::NamedPreset*, ::Array<::GlobalNamespace::NamedPreset*>*> (
    ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets::*)()>(&::GlobalNamespace::MirrorRendererGraphicsSettingsPresets::get_namedPresets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12d5b08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirrorRendererGraphicsSettingsPresets::*)()>(
    &::GlobalNamespace::MirrorRendererGraphicsSettingsPresets::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12d5b10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*, ::Array<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*>*>&
GlobalNamespace::MirrorRendererGraphicsSettingsPresets::__cordl_internal_get__presets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____presets;
}
constexpr ::ArrayW<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*, ::Array<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*>*> const&
GlobalNamespace::MirrorRendererGraphicsSettingsPresets::__cordl_internal_get__presets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____presets;
}
constexpr void GlobalNamespace::MirrorRendererGraphicsSettingsPresets::__cordl_internal_set__presets(
    ::ArrayW<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*, ::Array<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____presets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*, ::Array<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*>*>
GlobalNamespace::MirrorRendererGraphicsSettingsPresets::get_presets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*>::get(),
                                                                             "get_presets", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*, ::Array<::GlobalNamespace::__MirrorRendererGraphicsSettingsPresets__Preset*>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::NamedPreset*, ::Array<::GlobalNamespace::NamedPreset*>*> GlobalNamespace::MirrorRendererGraphicsSettingsPresets::get_namedPresets() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::NamedPreset*, ::Array<::GlobalNamespace::NamedPreset*>*>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets* GlobalNamespace::MirrorRendererGraphicsSettingsPresets::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*>());
}
inline void GlobalNamespace::MirrorRendererGraphicsSettingsPresets::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets::MirrorRendererGraphicsSettingsPresets() {}
