#pragma once
// IWYU pragma private; include "GlobalNamespace/ScreenDisplacementEffectRendererFeature.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "GlobalNamespace/zzzz__ScreenDisplacementEffectRendererFeature_def.hpp"
#include "GlobalNamespace/zzzz__ScreenDisplacementEffectDrawPass_def.hpp"
#include "GlobalNamespace/zzzz__ScreenDisplacementEffectGrabPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ScreenDisplacementEffectRendererFeature.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenDisplacementEffectRendererFeature::*)()>(
    &::GlobalNamespace::ScreenDisplacementEffectRendererFeature::Create)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5d98b6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectRendererFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectRendererFeature*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenDisplacementEffectRendererFeature.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenDisplacementEffectRendererFeature::*)(bool)>(
    &::GlobalNamespace::ScreenDisplacementEffectRendererFeature::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5d98f1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectRendererFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectRendererFeature*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenDisplacementEffectRendererFeature.AddRenderPasses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenDisplacementEffectRendererFeature::*)(
    ::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(
    &::GlobalNamespace::ScreenDisplacementEffectRendererFeature::AddRenderPasses)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d98f58;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectRendererFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectRendererFeature*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenDisplacementEffectRendererFeature.DestroySafe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Object*)>(&::GlobalNamespace::ScreenDisplacementEffectRendererFeature::DestroySafe)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5d98ff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectRendererFeature*>::get(), "DestroySafe", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenDisplacementEffectRendererFeature._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenDisplacementEffectRendererFeature::*)()>(
    &::GlobalNamespace::ScreenDisplacementEffectRendererFeature::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d99084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectRendererFeature*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::LayerMask& GlobalNamespace::ScreenDisplacementEffectRendererFeature::__cordl_internal_get_effectLayerMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effectLayerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::ScreenDisplacementEffectRendererFeature::__cordl_internal_get_effectLayerMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effectLayerMask;
}
constexpr void GlobalNamespace::ScreenDisplacementEffectRendererFeature::__cordl_internal_set_effectLayerMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___effectLayerMask = value;
}
constexpr ::GlobalNamespace::ScreenDisplacementEffectGrabPass*& GlobalNamespace::ScreenDisplacementEffectRendererFeature::__cordl_internal_get__grabPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____grabPass;
}
constexpr ::GlobalNamespace::ScreenDisplacementEffectGrabPass* const& GlobalNamespace::ScreenDisplacementEffectRendererFeature::__cordl_internal_get__grabPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____grabPass;
}
constexpr void GlobalNamespace::ScreenDisplacementEffectRendererFeature::__cordl_internal_set__grabPass(::GlobalNamespace::ScreenDisplacementEffectGrabPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____grabPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ScreenDisplacementEffectDrawPass*& GlobalNamespace::ScreenDisplacementEffectRendererFeature::__cordl_internal_get__drawPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____drawPass;
}
constexpr ::GlobalNamespace::ScreenDisplacementEffectDrawPass* const& GlobalNamespace::ScreenDisplacementEffectRendererFeature::__cordl_internal_get__drawPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____drawPass;
}
constexpr void GlobalNamespace::ScreenDisplacementEffectRendererFeature::__cordl_internal_set__drawPass(::GlobalNamespace::ScreenDisplacementEffectDrawPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____drawPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ScreenDisplacementEffectRendererFeature::setStaticF_enabled(bool value) {
  ::cordl_internals::setStaticField<bool, "enabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectRendererFeature*>::get>(
      std::forward<bool>(value));
}
inline bool GlobalNamespace::ScreenDisplacementEffectRendererFeature::getStaticF_enabled() {
  return ::cordl_internals::getStaticField<bool, "enabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectRendererFeature*>::get>();
}
inline void GlobalNamespace::ScreenDisplacementEffectRendererFeature::Create() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectRendererFeature*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ScreenDisplacementEffectRendererFeature::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectRendererFeature*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::ScreenDisplacementEffectRendererFeature::AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer,
                                                                                      ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectRendererFeature*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderer, renderingData);
}
inline void GlobalNamespace::ScreenDisplacementEffectRendererFeature::DestroySafe(::UnityEngine::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectRendererFeature*>::get(), "DestroySafe", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::ScreenDisplacementEffectRendererFeature::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenDisplacementEffectRendererFeature*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ScreenDisplacementEffectRendererFeature* GlobalNamespace::ScreenDisplacementEffectRendererFeature::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ScreenDisplacementEffectRendererFeature*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScreenDisplacementEffectRendererFeature::ScreenDisplacementEffectRendererFeature() {}
