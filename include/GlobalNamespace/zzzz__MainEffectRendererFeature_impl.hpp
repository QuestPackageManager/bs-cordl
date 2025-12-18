#pragma once
// IWYU pragma private; include "GlobalNamespace/MainEffectRendererFeature.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_impl.hpp"
#include "GlobalNamespace/zzzz__MainEffectRendererFeature_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectContainerSO_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MainEffectRendererFeature.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainEffectRendererFeature::*)()>(&::GlobalNamespace::MainEffectRendererFeature::Create)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d955b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectRendererFeature*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectRendererFeature*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectRendererFeature.AddRenderPasses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainEffectRendererFeature::*)(
    ::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::GlobalNamespace::MainEffectRendererFeature::AddRenderPasses)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d955bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectRendererFeature*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectRendererFeature*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectRendererFeature._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainEffectRendererFeature::*)()>(&::GlobalNamespace::MainEffectRendererFeature::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d955c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectRendererFeature*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO>& GlobalNamespace::MainEffectRendererFeature::__cordl_internal_get__sceneEffectContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneEffectContainer;
}
constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO> const& GlobalNamespace::MainEffectRendererFeature::__cordl_internal_get__sceneEffectContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneEffectContainer;
}
constexpr void GlobalNamespace::MainEffectRendererFeature::__cordl_internal_set__sceneEffectContainer(::UnityW<::GlobalNamespace::MainEffectContainerSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sceneEffectContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MainEffectRendererFeature::Create() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectRendererFeature*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MainEffectRendererFeature::AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer,
                                                                        ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectRendererFeature*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderer, renderingData);
}
inline void GlobalNamespace::MainEffectRendererFeature::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectRendererFeature*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MainEffectRendererFeature* GlobalNamespace::MainEffectRendererFeature::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MainEffectRendererFeature*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainEffectRendererFeature::MainEffectRendererFeature() {}
