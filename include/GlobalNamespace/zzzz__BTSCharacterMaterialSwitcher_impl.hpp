#pragma once
// IWYU pragma private; include "GlobalNamespace\BTSCharacterMaterialSwitcher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BTSCharacterMaterialSwitcher_def.hpp"
#include "GlobalNamespace/zzzz__BTSCharacterMaterialSwitcher_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs.get_renderer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Renderer> (::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs::*)()>(
    &::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs::get_renderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3284840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs*>(), { "get_renderer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs.get_materialPairs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs*>* (
    ::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs::*)()>(&::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs::get_materialPairs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3284848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs*>(), { "get_materialPairs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs::*)(::UnityEngine::Renderer*)>(
    &::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3284850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Renderer*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs::__cordl_internal_get__renderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs::__cordl_internal_get__renderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderer;
}
constexpr void GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs::__cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____renderer = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs*>*&
GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs::__cordl_internal_get__materialPairs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPairs;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs*>* const&
GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs::__cordl_internal_get__materialPairs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPairs;
}
constexpr void GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs::__cordl_internal_set__materialPairs(
    ::System::Collections::Generic::List_1<::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____materialPairs = value;
}
inline ::UnityW<::UnityEngine::Renderer> GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs::get_renderer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs*>(), { "get_renderer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Renderer>>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs*>*
GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs::get_materialPairs() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs*>(), { "get_materialPairs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs*>*>(this, ___internal_method);
}
inline void GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs::_ctor(::UnityEngine::Renderer* renderer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Renderer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer);
}
inline ::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs* GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs::New_ctor(::UnityEngine::Renderer* renderer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs*>(renderer));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs::BTSCharacterMaterialSwitcher_RendererMaterialsPairs() {}
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs::*)()>(
    &::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32848d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs::__cordl_internal_get_materialIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___materialIndex;
}
constexpr int32_t const& GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs::__cordl_internal_get_materialIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___materialIndex;
}
constexpr void GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs::__cordl_internal_set_materialIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___materialIndex = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs::__cordl_internal_get_defaultMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs::__cordl_internal_get_defaultMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultMaterial;
}
constexpr void GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs::__cordl_internal_set_defaultMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs::__cordl_internal_get_alternativeMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alternativeMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs::__cordl_internal_get_alternativeMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alternativeMaterial;
}
constexpr void GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs::__cordl_internal_set_alternativeMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___alternativeMaterial = value;
}
inline void GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs* GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs::BTSCharacterMaterialSwitcher_MaterialPairs() {}
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterMaterialSwitcher.SwapMaterials
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterMaterialSwitcher::*)(bool)>(&::GlobalNamespace::BTSCharacterMaterialSwitcher::SwapMaterials)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x32845e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterMaterialSwitcher*>(), { "SwapMaterials", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterMaterialSwitcher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterMaterialSwitcher::*)()>(&::GlobalNamespace::BTSCharacterMaterialSwitcher::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x328483c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterMaterialSwitcher*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs*>& GlobalNamespace::BTSCharacterMaterialSwitcher::__cordl_internal_get__rendererMaterialsPairs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rendererMaterialsPairs;
}
constexpr ::ArrayW<::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs*> const& GlobalNamespace::BTSCharacterMaterialSwitcher::__cordl_internal_get__rendererMaterialsPairs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rendererMaterialsPairs;
}
constexpr void GlobalNamespace::BTSCharacterMaterialSwitcher::__cordl_internal_set__rendererMaterialsPairs(::ArrayW<::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rendererMaterialsPairs = value;
}
inline void GlobalNamespace::BTSCharacterMaterialSwitcher::SwapMaterials(bool alternative) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterMaterialSwitcher*>(), { "SwapMaterials", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alternative);
}
inline void GlobalNamespace::BTSCharacterMaterialSwitcher::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterMaterialSwitcher*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BTSCharacterMaterialSwitcher* GlobalNamespace::BTSCharacterMaterialSwitcher::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BTSCharacterMaterialSwitcher*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BTSCharacterMaterialSwitcher::BTSCharacterMaterialSwitcher() {}
