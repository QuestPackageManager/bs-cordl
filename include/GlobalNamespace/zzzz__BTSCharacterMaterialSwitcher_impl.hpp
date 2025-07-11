#pragma once
// IWYU pragma private; include "GlobalNamespace/BTSCharacterMaterialSwitcher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BTSCharacterMaterialSwitcher_def.hpp"
#include "GlobalNamespace/zzzz__BTSCharacterMaterialSwitcher_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs.get_renderer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Renderer> (::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs::*)()>(
    &::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs::get_renderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22620dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs*>::get(), "get_renderer",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs.get_materialPairs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs*>* (
    ::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs::*)()>(&::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs::get_materialPairs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22620e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs*>::get(),
                                                 "get_materialPairs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs::*)(::UnityEngine::Renderer*)>(
    &::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x22620ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materialPairs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::UnityEngine::Renderer> GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs::get_renderer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs*>::get(), "get_renderer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Renderer>, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs*>*
GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs::get_materialPairs() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs*>::get(),
                                               "get_materialPairs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs*>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs::_ctor(::UnityEngine::Renderer* renderer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderer);
}
inline ::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs* GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs::New_ctor(::UnityEngine::Renderer* renderer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs*>(renderer));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs::BTSCharacterMaterialSwitcher_RendererMaterialsPairs() {}
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs::*)()>(
    &::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2262174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___defaultMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___alternativeMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs* GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs::BTSCharacterMaterialSwitcher_MaterialPairs() {}
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterMaterialSwitcher.SwapMaterials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BTSCharacterMaterialSwitcher::*)(bool)>(
    &::GlobalNamespace::BTSCharacterMaterialSwitcher::SwapMaterials)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2261e30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterMaterialSwitcher*>::get(), "SwapMaterials",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterMaterialSwitcher._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BTSCharacterMaterialSwitcher::*)()>(
    &::GlobalNamespace::BTSCharacterMaterialSwitcher::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22620d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterMaterialSwitcher*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs*, ::Array<::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs*>*>&
GlobalNamespace::BTSCharacterMaterialSwitcher::__cordl_internal_get__rendererMaterialsPairs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rendererMaterialsPairs;
}
constexpr ::ArrayW<::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs*, ::Array<::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs*>*> const&
GlobalNamespace::BTSCharacterMaterialSwitcher::__cordl_internal_get__rendererMaterialsPairs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rendererMaterialsPairs;
}
constexpr void GlobalNamespace::BTSCharacterMaterialSwitcher::__cordl_internal_set__rendererMaterialsPairs(
    ::ArrayW<::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs*, ::Array<::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rendererMaterialsPairs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BTSCharacterMaterialSwitcher::SwapMaterials(bool alternative) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterMaterialSwitcher*>::get(), "SwapMaterials",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, alternative);
}
inline void GlobalNamespace::BTSCharacterMaterialSwitcher::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterMaterialSwitcher*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BTSCharacterMaterialSwitcher* GlobalNamespace::BTSCharacterMaterialSwitcher::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BTSCharacterMaterialSwitcher*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BTSCharacterMaterialSwitcher::BTSCharacterMaterialSwitcher() {}
