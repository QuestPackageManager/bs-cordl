#pragma once
// IWYU pragma private; include "GlobalNamespace\MainEffectController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MainEffectController_def.hpp"
#include "GlobalNamespace/zzzz__FloatSO_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectRenderData_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MainEffectController.get_renderData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MainEffectRenderData* (::GlobalNamespace::MainEffectController::*)()>(
    &::GlobalNamespace::MainEffectController::get_renderData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f42e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectController*>(), { "get_renderData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectController.add_afterImageEffectEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectController::*)(::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>*)>(
    &::GlobalNamespace::MainEffectController::add_afterImageEffectEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f42e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectController*>(),
                                                             { "add_afterImageEffectEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectController.remove_afterImageEffectEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectController::*)(::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>*)>(
    &::GlobalNamespace::MainEffectController::remove_afterImageEffectEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f42f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectController*>(),
                                                             { "remove_afterImageEffectEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectController.get_fadeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MainEffectController::*)()>(&::GlobalNamespace::MainEffectController::get_fadeValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f4301c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectController*>(), { "get_fadeValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectController.get_container
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MainEffectContainerSO> (::GlobalNamespace::MainEffectController::*)()>(
    &::GlobalNamespace::MainEffectController::get_container)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4306c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectController*>(), { "get_container", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectController::*)()>(&::GlobalNamespace::MainEffectController::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f43074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO>& GlobalNamespace::MainEffectController::__cordl_internal_get__mainEffectContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffectContainer;
}
constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO> const& GlobalNamespace::MainEffectController::__cordl_internal_get__mainEffectContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffectContainer;
}
constexpr void GlobalNamespace::MainEffectController::__cordl_internal_set__mainEffectContainer(::UnityW<::GlobalNamespace::MainEffectContainerSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mainEffectContainer = value;
}
constexpr ::UnityW<::GlobalNamespace::FloatSO>& GlobalNamespace::MainEffectController::__cordl_internal_get__fadeValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeValue;
}
constexpr ::UnityW<::GlobalNamespace::FloatSO> const& GlobalNamespace::MainEffectController::__cordl_internal_get__fadeValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeValue;
}
constexpr void GlobalNamespace::MainEffectController::__cordl_internal_set__fadeValue(::UnityW<::GlobalNamespace::FloatSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeValue = value;
}
constexpr ::GlobalNamespace::MainEffectRenderData*& GlobalNamespace::MainEffectController::__cordl_internal_get__mainEffectRenderData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffectRenderData;
}
constexpr ::GlobalNamespace::MainEffectRenderData* const& GlobalNamespace::MainEffectController::__cordl_internal_get__mainEffectRenderData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffectRenderData;
}
constexpr void GlobalNamespace::MainEffectController::__cordl_internal_set__mainEffectRenderData(::GlobalNamespace::MainEffectRenderData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mainEffectRenderData = value;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>*& GlobalNamespace::MainEffectController::__cordl_internal_get_afterImageEffectEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___afterImageEffectEvent;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>* const& GlobalNamespace::MainEffectController::__cordl_internal_get_afterImageEffectEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___afterImageEffectEvent;
}
constexpr void GlobalNamespace::MainEffectController::__cordl_internal_set_afterImageEffectEvent(::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___afterImageEffectEvent = value;
}
inline ::GlobalNamespace::MainEffectRenderData* GlobalNamespace::MainEffectController::get_renderData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectController*>(), { "get_renderData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MainEffectRenderData*>(this, ___internal_method);
}
inline void GlobalNamespace::MainEffectController::add_afterImageEffectEvent(::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectController*>(),
                                                           { "add_afterImageEffectEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MainEffectController::remove_afterImageEffectEvent(::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectController*>(),
                                                           { "remove_afterImageEffectEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::RenderTexture>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::MainEffectController::get_fadeValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectController*>(), { "get_fadeValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::MainEffectContainerSO> GlobalNamespace::MainEffectController::get_container() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectController*>(), { "get_container", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MainEffectContainerSO>>(this, ___internal_method);
}
inline void GlobalNamespace::MainEffectController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MainEffectController* GlobalNamespace::MainEffectController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainEffectController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainEffectController::MainEffectController() {}
