#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderPipelineGlobalSettings_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipelineGlobalSettings_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipelineGlobalSettings_2_def.hpp"
#include "System/zzzz__Lazy_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipelineGlobalSettings_2_def.hpp"
template <typename TGlobalRenderPipelineSettings, typename TRenderPipeline>
inline void UnityEngine::Rendering::RenderPipelineGlobalSettings_2___c<TGlobalRenderPipelineSettings, TRenderPipeline>::setStaticF___9(
    ::UnityEngine::Rendering::RenderPipelineGlobalSettings_2___c<TGlobalRenderPipelineSettings, TRenderPipeline>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderPipelineGlobalSettings_2___c<TGlobalRenderPipelineSettings, TRenderPipeline>*, "<>9",
                                    ::UnityEngine::Rendering::RenderPipelineGlobalSettings_2___c<TGlobalRenderPipelineSettings, TRenderPipeline>*>(
      std::forward<::UnityEngine::Rendering::RenderPipelineGlobalSettings_2___c<TGlobalRenderPipelineSettings, TRenderPipeline>*>(value));
}
template <typename TGlobalRenderPipelineSettings, typename TRenderPipeline>
inline ::UnityEngine::Rendering::RenderPipelineGlobalSettings_2___c<TGlobalRenderPipelineSettings, TRenderPipeline>*
UnityEngine::Rendering::RenderPipelineGlobalSettings_2___c<TGlobalRenderPipelineSettings, TRenderPipeline>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderPipelineGlobalSettings_2___c<TGlobalRenderPipelineSettings, TRenderPipeline>*, "<>9",
                                           ::UnityEngine::Rendering::RenderPipelineGlobalSettings_2___c<TGlobalRenderPipelineSettings, TRenderPipeline>*>();
}
template <typename TGlobalRenderPipelineSettings, typename TRenderPipeline>
inline void UnityEngine::Rendering::RenderPipelineGlobalSettings_2___c<TGlobalRenderPipelineSettings, TRenderPipeline>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineGlobalSettings_2___c<TGlobalRenderPipelineSettings, TRenderPipeline>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TGlobalRenderPipelineSettings, typename TRenderPipeline>
inline TGlobalRenderPipelineSettings UnityEngine::Rendering::RenderPipelineGlobalSettings_2___c<TGlobalRenderPipelineSettings, TRenderPipeline>::__cctor_b__5_0() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineGlobalSettings_2___c<TGlobalRenderPipelineSettings, TRenderPipeline>*>(), { "<.cctor>b__5_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TGlobalRenderPipelineSettings>(this, ___internal_method);
}
template <typename TGlobalRenderPipelineSettings, typename TRenderPipeline>
inline ::UnityEngine::Rendering::RenderPipelineGlobalSettings_2___c<TGlobalRenderPipelineSettings, TRenderPipeline>*
UnityEngine::Rendering::RenderPipelineGlobalSettings_2___c<TGlobalRenderPipelineSettings, TRenderPipeline>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderPipelineGlobalSettings_2___c<TGlobalRenderPipelineSettings, TRenderPipeline>*>());
}
// Ctor Parameters []
template <typename TGlobalRenderPipelineSettings, typename TRenderPipeline>
constexpr ::UnityEngine::Rendering::RenderPipelineGlobalSettings_2___c<TGlobalRenderPipelineSettings, TRenderPipeline>::RenderPipelineGlobalSettings_2___c() {}
template <typename TGlobalRenderPipelineSettings, typename TRenderPipeline>
inline void UnityEngine::Rendering::RenderPipelineGlobalSettings_2<TGlobalRenderPipelineSettings, TRenderPipeline>::setStaticF_s_Instance(::System::Lazy_1<TGlobalRenderPipelineSettings>* value) {
  ::cordl_internals::setStaticField<::System::Lazy_1<TGlobalRenderPipelineSettings>*, "s_Instance",
                                    ::UnityEngine::Rendering::RenderPipelineGlobalSettings_2<TGlobalRenderPipelineSettings, TRenderPipeline>*>(
      std::forward<::System::Lazy_1<TGlobalRenderPipelineSettings>*>(value));
}
template <typename TGlobalRenderPipelineSettings, typename TRenderPipeline>
inline ::System::Lazy_1<TGlobalRenderPipelineSettings>* UnityEngine::Rendering::RenderPipelineGlobalSettings_2<TGlobalRenderPipelineSettings, TRenderPipeline>::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<::System::Lazy_1<TGlobalRenderPipelineSettings>*, "s_Instance",
                                           ::UnityEngine::Rendering::RenderPipelineGlobalSettings_2<TGlobalRenderPipelineSettings, TRenderPipeline>*>();
}
template <typename TGlobalRenderPipelineSettings, typename TRenderPipeline>
inline TGlobalRenderPipelineSettings UnityEngine::Rendering::RenderPipelineGlobalSettings_2<TGlobalRenderPipelineSettings, TRenderPipeline>::get_instance() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineGlobalSettings_2<TGlobalRenderPipelineSettings, TRenderPipeline>*>(), { "get_instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TGlobalRenderPipelineSettings>(nullptr, ___internal_method);
}
template <typename TGlobalRenderPipelineSettings, typename TRenderPipeline>
inline void UnityEngine::Rendering::RenderPipelineGlobalSettings_2<TGlobalRenderPipelineSettings, TRenderPipeline>::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::UnityEngine::Rendering::RenderPipelineGlobalSettings_2<TGlobalRenderPipelineSettings, TRenderPipeline>*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TGlobalRenderPipelineSettings, typename TRenderPipeline>
inline void UnityEngine::Rendering::RenderPipelineGlobalSettings_2<TGlobalRenderPipelineSettings, TRenderPipeline>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineGlobalSettings_2<TGlobalRenderPipelineSettings, TRenderPipeline>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TGlobalRenderPipelineSettings, typename TRenderPipeline>
inline ::UnityEngine::Rendering::RenderPipelineGlobalSettings_2<TGlobalRenderPipelineSettings, TRenderPipeline>*
UnityEngine::Rendering::RenderPipelineGlobalSettings_2<TGlobalRenderPipelineSettings, TRenderPipeline>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderPipelineGlobalSettings_2<TGlobalRenderPipelineSettings, TRenderPipeline>*>());
}
// Ctor Parameters []
template <typename TGlobalRenderPipelineSettings, typename TRenderPipeline>
constexpr ::UnityEngine::Rendering::RenderPipelineGlobalSettings_2<TGlobalRenderPipelineSettings, TRenderPipeline>::RenderPipelineGlobalSettings_2() {}
