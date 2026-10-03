#pragma once
// IWYU pragma private; include "GlobalNamespace/OverdrawRendererFeature.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_impl.hpp"
#include "GlobalNamespace/zzzz__OverdrawRendererFeature_def.hpp"
#include "GlobalNamespace/zzzz__OverdrawComputePass_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OverdrawRendererFeature.Register
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>*)>(
    &::GlobalNamespace::OverdrawRendererFeature::Register)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6367090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OverdrawRendererFeature*>(),
                            { "Register", {}, { ::i2c::type_of<::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OverdrawRendererFeature.Unregister
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>*)>(
    &::GlobalNamespace::OverdrawRendererFeature::Unregister)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x63670e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OverdrawRendererFeature*>(),
                            { "Unregister", {}, { ::i2c::type_of<::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OverdrawRendererFeature.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OverdrawRendererFeature::*)()>(&::GlobalNamespace::OverdrawRendererFeature::Create)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6367164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OverdrawRendererFeature*>(), { ::i2c::class_of<::GlobalNamespace::OverdrawRendererFeature*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OverdrawRendererFeature.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OverdrawRendererFeature::*)(bool)>(&::GlobalNamespace::OverdrawRendererFeature::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63671e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OverdrawRendererFeature*>(), { ::i2c::class_of<::GlobalNamespace::OverdrawRendererFeature*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OverdrawRendererFeature.AddRenderPasses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OverdrawRendererFeature::*)(
    ::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::GlobalNamespace::OverdrawRendererFeature::AddRenderPasses)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x63671f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OverdrawRendererFeature*>(), { ::i2c::class_of<::GlobalNamespace::OverdrawRendererFeature*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OverdrawRendererFeature._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OverdrawRendererFeature::*)()>(&::GlobalNamespace::OverdrawRendererFeature::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x636727c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OverdrawRendererFeature*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OverdrawComputePass*& GlobalNamespace::OverdrawRendererFeature::__cordl_internal_get__pass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pass;
}
constexpr ::GlobalNamespace::OverdrawComputePass* const& GlobalNamespace::OverdrawRendererFeature::__cordl_internal_get__pass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pass;
}
constexpr void GlobalNamespace::OverdrawRendererFeature::__cordl_internal_set__pass(::GlobalNamespace::OverdrawComputePass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pass = value;
}
inline void GlobalNamespace::OverdrawRendererFeature::setStaticF__recordOverdrawCompute(
    ::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>*, "_recordOverdrawCompute",
                                    ::GlobalNamespace::OverdrawRendererFeature*>(
      std::forward<::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>*>(value));
}
inline ::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>*
GlobalNamespace::OverdrawRendererFeature::getStaticF__recordOverdrawCompute() {
  return ::cordl_internals::getStaticField<::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>*, "_recordOverdrawCompute",
                                           ::GlobalNamespace::OverdrawRendererFeature*>();
}
inline void
GlobalNamespace::OverdrawRendererFeature::Register(::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>* recordOverdrawCompute) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OverdrawRendererFeature*>(),
                          { "Register", {}, { ::i2c::type_of<::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, recordOverdrawCompute);
}
inline void
GlobalNamespace::OverdrawRendererFeature::Unregister(::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>* recordOverdrawCompute) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OverdrawRendererFeature*>(),
                          { "Unregister", {}, { ::i2c::type_of<::System::Action_4<::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, int32_t, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, recordOverdrawCompute);
}
inline void GlobalNamespace::OverdrawRendererFeature::Create() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OverdrawRendererFeature*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OverdrawRendererFeature::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OverdrawRendererFeature*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::OverdrawRendererFeature::AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer,
                                                                      ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OverdrawRendererFeature*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer, renderingData);
}
inline void GlobalNamespace::OverdrawRendererFeature::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OverdrawRendererFeature*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OverdrawRendererFeature* GlobalNamespace::OverdrawRendererFeature::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OverdrawRendererFeature*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OverdrawRendererFeature::OverdrawRendererFeature() {}
