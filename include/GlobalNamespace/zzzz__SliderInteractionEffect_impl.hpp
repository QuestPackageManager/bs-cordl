#pragma once
// IWYU pragma private; include "GlobalNamespace\SliderInteractionEffect.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SliderInteractionEffect_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__SliderInteractionManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SliderInteractionEffect.get_saberInteractionParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SliderInteractionEffect::*)()>(&::GlobalNamespace::SliderInteractionEffect::get_saberInteractionParam)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x597a734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionEffect*>(), { "get_saberInteractionParam", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderInteractionEffect.get_colorType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ColorType (::GlobalNamespace::SliderInteractionEffect::*)()>(&::GlobalNamespace::SliderInteractionEffect::get_colorType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x597a644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionEffect*>(), { "get_colorType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderInteractionEffect.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderInteractionEffect::*)()>(&::GlobalNamespace::SliderInteractionEffect::Start)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x597a558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionEffect*>(), { ::i2c::class_of<::GlobalNamespace::SliderInteractionEffect*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderInteractionEffect.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderInteractionEffect::*)()>(&::GlobalNamespace::SliderInteractionEffect::OnDestroy)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x597b25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionEffect*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderInteractionEffect.StartEffect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderInteractionEffect::*)(float_t)>(&::GlobalNamespace::SliderInteractionEffect::StartEffect)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionEffect*>(), { ::i2c::class_of<::GlobalNamespace::SliderInteractionEffect*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderInteractionEffect.EndEffect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderInteractionEffect::*)()>(&::GlobalNamespace::SliderInteractionEffect::EndEffect)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionEffect*>(), { ::i2c::class_of<::GlobalNamespace::SliderInteractionEffect*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderInteractionEffect.HandleSliderWasAddedToActiveSliders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderInteractionEffect::*)(::GlobalNamespace::SliderInteractionManager*, float_t)>(
    &::GlobalNamespace::SliderInteractionEffect::HandleSliderWasAddedToActiveSliders)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x597b4c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionEffect*>(),
                                                { "HandleSliderWasAddedToActiveSliders", {}, { ::i2c::type_of<::GlobalNamespace::SliderInteractionManager*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderInteractionEffect.HandleAllSliderWereRemovedFromActiveSliders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderInteractionEffect::*)(::GlobalNamespace::SliderInteractionManager*)>(
    &::GlobalNamespace::SliderInteractionEffect::HandleAllSliderWereRemovedFromActiveSliders)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x597b4d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionEffect*>(),
                                                             { "HandleAllSliderWereRemovedFromActiveSliders", {}, { ::i2c::type_of<::GlobalNamespace::SliderInteractionManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderInteractionEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderInteractionEffect::*)()>(&::GlobalNamespace::SliderInteractionEffect::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x597a7d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionEffect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SliderInteractionManager>& GlobalNamespace::SliderInteractionEffect::__cordl_internal_get__sliderInteractionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderInteractionManager;
}
constexpr ::UnityW<::GlobalNamespace::SliderInteractionManager> const& GlobalNamespace::SliderInteractionEffect::__cordl_internal_get__sliderInteractionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderInteractionManager;
}
constexpr void GlobalNamespace::SliderInteractionEffect::__cordl_internal_set__sliderInteractionManager(::UnityW<::GlobalNamespace::SliderInteractionManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sliderInteractionManager = value;
}
inline float_t GlobalNamespace::SliderInteractionEffect::get_saberInteractionParam() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionEffect*>(), { "get_saberInteractionParam", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorType GlobalNamespace::SliderInteractionEffect::get_colorType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionEffect*>(), { "get_colorType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorType>(this, ___internal_method);
}
inline void GlobalNamespace::SliderInteractionEffect::Start() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SliderInteractionEffect*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SliderInteractionEffect::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionEffect*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SliderInteractionEffect::StartEffect(float_t saberInteractionParam) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SliderInteractionEffect*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, saberInteractionParam);
}
inline void GlobalNamespace::SliderInteractionEffect::EndEffect() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SliderInteractionEffect*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SliderInteractionEffect::HandleSliderWasAddedToActiveSliders(::GlobalNamespace::SliderInteractionManager* sliderInteractionManager, float_t saberInteractionParam) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionEffect*>(),
                                              { "HandleSliderWasAddedToActiveSliders", {}, { ::i2c::type_of<::GlobalNamespace::SliderInteractionManager*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sliderInteractionManager, saberInteractionParam);
}
inline void GlobalNamespace::SliderInteractionEffect::HandleAllSliderWereRemovedFromActiveSliders(::GlobalNamespace::SliderInteractionManager* sliderInteractionManager) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionEffect*>(),
                                                           { "HandleAllSliderWereRemovedFromActiveSliders", {}, { ::i2c::type_of<::GlobalNamespace::SliderInteractionManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sliderInteractionManager);
}
inline void GlobalNamespace::SliderInteractionEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionEffect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SliderInteractionEffect* GlobalNamespace::SliderInteractionEffect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SliderInteractionEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderInteractionEffect::SliderInteractionEffect() {}
