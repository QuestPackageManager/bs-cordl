#pragma once
// IWYU pragma private; include "GlobalNamespace\MaterialPropertyBlockController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockController.get_renderers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Renderer>> (::GlobalNamespace::MaterialPropertyBlockController::*)()>(
    &::GlobalNamespace::MaterialPropertyBlockController::get_renderers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5871fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockController*>(), { "get_renderers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockController.get_materialPropertyBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::MaterialPropertyBlock* (::GlobalNamespace::MaterialPropertyBlockController::*)()>(
    &::GlobalNamespace::MaterialPropertyBlockController::get_materialPropertyBlock)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5871bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockController*>(), { "get_materialPropertyBlock", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockController.ApplyChanges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockController::*)()>(&::GlobalNamespace::MaterialPropertyBlockController::ApplyChanges)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5871b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockController*>(), { "ApplyChanges", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockController.SetRendererState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockController::*)(bool)>(&::GlobalNamespace::MaterialPropertyBlockController::SetRendererState)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5871dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockController*>(), { "SetRendererState", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockController::*)()>(&::GlobalNamespace::MaterialPropertyBlockController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5871fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& GlobalNamespace::MaterialPropertyBlockController::__cordl_internal_get__renderers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& GlobalNamespace::MaterialPropertyBlockController::__cordl_internal_get__renderers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderers;
}
constexpr void GlobalNamespace::MaterialPropertyBlockController::__cordl_internal_set__renderers(::ArrayW<::UnityW<::UnityEngine::Renderer>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____renderers = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& GlobalNamespace::MaterialPropertyBlockController::__cordl_internal_get__materialPropertyBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& GlobalNamespace::MaterialPropertyBlockController::__cordl_internal_get__materialPropertyBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlock;
}
constexpr void GlobalNamespace::MaterialPropertyBlockController::__cordl_internal_set__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____materialPropertyBlock = value;
}
inline ::ArrayW<::UnityW<::UnityEngine::Renderer>> GlobalNamespace::MaterialPropertyBlockController::get_renderers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockController*>(), { "get_renderers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Renderer>>>(this, ___internal_method);
}
inline ::UnityEngine::MaterialPropertyBlock* GlobalNamespace::MaterialPropertyBlockController::get_materialPropertyBlock() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockController*>(), { "get_materialPropertyBlock", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::MaterialPropertyBlock*>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyBlockController::ApplyChanges() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockController*>(), { "ApplyChanges", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyBlockController::SetRendererState(bool newState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockController*>(), { "SetRendererState", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::MaterialPropertyBlockController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MaterialPropertyBlockController* GlobalNamespace::MaterialPropertyBlockController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MaterialPropertyBlockController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialPropertyBlockController::MaterialPropertyBlockController() {}
