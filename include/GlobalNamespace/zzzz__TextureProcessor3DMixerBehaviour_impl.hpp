#pragma once
// IWYU pragma private; include "GlobalNamespace\TextureProcessor3DMixerBehaviour.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TextureProcessor3DMixerBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__TextureProcessor3D_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3DMixerBehaviour.ProcessFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3DMixerBehaviour::*)(
    ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(&::GlobalNamespace::TextureProcessor3DMixerBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0xa5c;
  constexpr static std::size_t addrs = 0x5909a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3DMixerBehaviour*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::TextureProcessor3DMixerBehaviour*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3DMixerBehaviour._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3DMixerBehaviour::*)()>(&::GlobalNamespace::TextureProcessor3DMixerBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x590a4cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3DMixerBehaviour*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TextureProcessor3D>& GlobalNamespace::TextureProcessor3DMixerBehaviour::__cordl_internal_get__trackBinding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackBinding;
}
constexpr ::UnityW<::GlobalNamespace::TextureProcessor3D> const& GlobalNamespace::TextureProcessor3DMixerBehaviour::__cordl_internal_get__trackBinding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackBinding;
}
constexpr void GlobalNamespace::TextureProcessor3DMixerBehaviour::__cordl_internal_set__trackBinding(::UnityW<::GlobalNamespace::TextureProcessor3D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trackBinding = value;
}
inline void GlobalNamespace::TextureProcessor3DMixerBehaviour::ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextureProcessor3DMixerBehaviour*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, info, playerData);
}
inline void GlobalNamespace::TextureProcessor3DMixerBehaviour::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3DMixerBehaviour*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TextureProcessor3DMixerBehaviour* GlobalNamespace::TextureProcessor3DMixerBehaviour::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TextureProcessor3DMixerBehaviour*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextureProcessor3DMixerBehaviour::TextureProcessor3DMixerBehaviour() {}
