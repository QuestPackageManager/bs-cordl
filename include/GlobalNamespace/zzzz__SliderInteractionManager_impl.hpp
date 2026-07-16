#pragma once
// IWYU pragma private; include "GlobalNamespace/SliderInteractionManager.hpp"
#include "GlobalNamespace/zzzz__ColorType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SliderInteractionManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SliderInteractionManager.get_colorType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ColorType (::GlobalNamespace::SliderInteractionManager::*)()>(&::GlobalNamespace::SliderInteractionManager::get_colorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5978da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionManager*>(), { "get_colorType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderInteractionManager.get_saberInteractionParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SliderInteractionManager::*)()>(&::GlobalNamespace::SliderInteractionManager::get_saberInteractionParam)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5978da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionManager*>(), { "get_saberInteractionParam", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderInteractionManager.set_saberInteractionParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderInteractionManager::*)(float_t)>(&::GlobalNamespace::SliderInteractionManager::set_saberInteractionParam)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5978db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionManager*>(), { "set_saberInteractionParam", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderInteractionManager.add_sliderWasAddedToActiveSlidersEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderInteractionManager::*)(::System::Action_2<::UnityW<::GlobalNamespace::SliderInteractionManager>, float_t>*)>(
    &::GlobalNamespace::SliderInteractionManager::add_sliderWasAddedToActiveSlidersEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x597899c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionManager*>(),
                                         { "add_sliderWasAddedToActiveSlidersEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::SliderInteractionManager>, float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderInteractionManager.remove_sliderWasAddedToActiveSlidersEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderInteractionManager::*)(::System::Action_2<::UnityW<::GlobalNamespace::SliderInteractionManager>, float_t>*)>(
    &::GlobalNamespace::SliderInteractionManager::remove_sliderWasAddedToActiveSlidersEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5978c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionManager*>(),
                            { "remove_sliderWasAddedToActiveSlidersEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::SliderInteractionManager>, float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderInteractionManager.add_allSliderWereRemovedFromActiveSlidersEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderInteractionManager::*)(::System::Action_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>*)>(
    &::GlobalNamespace::SliderInteractionManager::add_allSliderWereRemovedFromActiveSlidersEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5978a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionManager*>(),
                                         { "add_allSliderWereRemovedFromActiveSlidersEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderInteractionManager.remove_allSliderWereRemovedFromActiveSlidersEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderInteractionManager::*)(::System::Action_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>*)>(
    &::GlobalNamespace::SliderInteractionManager::remove_allSliderWereRemovedFromActiveSlidersEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5978cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionManager*>(),
                            { "remove_allSliderWereRemovedFromActiveSlidersEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderInteractionManager.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderInteractionManager::*)()>(&::GlobalNamespace::SliderInteractionManager::Start)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5978db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionManager*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderInteractionManager.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderInteractionManager::*)()>(&::GlobalNamespace::SliderInteractionManager::OnDestroy)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5978e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionManager*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderInteractionManager.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderInteractionManager::*)()>(&::GlobalNamespace::SliderInteractionManager::Update)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5978f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionManager*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderInteractionManager.AddActiveSlider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderInteractionManager::*)(::GlobalNamespace::SliderController*)>(
    &::GlobalNamespace::SliderInteractionManager::AddActiveSlider)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x59790b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionManager*>(), { "AddActiveSlider", {}, { ::i2c::type_of<::GlobalNamespace::SliderController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderInteractionManager.RemoveActiveSlider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderInteractionManager::*)(::GlobalNamespace::SliderController*)>(
    &::GlobalNamespace::SliderInteractionManager::RemoveActiveSlider)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x59792b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionManager*>(), { "RemoveActiveSlider", {}, { ::i2c::type_of<::GlobalNamespace::SliderController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderInteractionManager.HandleSliderWasSpawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderInteractionManager::*)(::GlobalNamespace::SliderController*)>(
    &::GlobalNamespace::SliderInteractionManager::HandleSliderWasSpawned)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5979364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionManager*>(),
                                                                                           { "HandleSliderWasSpawned", {}, { ::i2c::type_of<::GlobalNamespace::SliderController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderInteractionManager.HandleSliderWasDespawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderInteractionManager::*)(::GlobalNamespace::SliderController*)>(
    &::GlobalNamespace::SliderInteractionManager::HandleSliderWasDespawned)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5979398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionManager*>(),
                                                                                           { "HandleSliderWasDespawned", {}, { ::i2c::type_of<::GlobalNamespace::SliderController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderInteractionManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderInteractionManager::*)()>(&::GlobalNamespace::SliderInteractionManager::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x59793cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ColorType& GlobalNamespace::SliderInteractionManager::__cordl_internal_get__colorType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorType;
}
constexpr ::GlobalNamespace::ColorType const& GlobalNamespace::SliderInteractionManager::__cordl_internal_get__colorType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorType;
}
constexpr void GlobalNamespace::SliderInteractionManager::__cordl_internal_set__colorType(::GlobalNamespace::ColorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorType = value;
}
constexpr ::GlobalNamespace::BeatmapObjectManager*& GlobalNamespace::SliderInteractionManager::__cordl_internal_get__beatmapObjectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr ::GlobalNamespace::BeatmapObjectManager* const& GlobalNamespace::SliderInteractionManager::__cordl_internal_get__beatmapObjectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr void GlobalNamespace::SliderInteractionManager::__cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapObjectManager = value;
}
constexpr float_t& GlobalNamespace::SliderInteractionManager::__cordl_internal_get__saberInteractionParam_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberInteractionParam_k__BackingField;
}
constexpr float_t const& GlobalNamespace::SliderInteractionManager::__cordl_internal_get__saberInteractionParam_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberInteractionParam_k__BackingField;
}
constexpr void GlobalNamespace::SliderInteractionManager::__cordl_internal_set__saberInteractionParam_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberInteractionParam_k__BackingField = value;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::SliderInteractionManager>, float_t>*& GlobalNamespace::SliderInteractionManager::__cordl_internal_get_sliderWasAddedToActiveSlidersEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sliderWasAddedToActiveSlidersEvent;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::SliderInteractionManager>, float_t>* const&
GlobalNamespace::SliderInteractionManager::__cordl_internal_get_sliderWasAddedToActiveSlidersEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sliderWasAddedToActiveSlidersEvent;
}
constexpr void
GlobalNamespace::SliderInteractionManager::__cordl_internal_set_sliderWasAddedToActiveSlidersEvent(::System::Action_2<::UnityW<::GlobalNamespace::SliderInteractionManager>, float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sliderWasAddedToActiveSlidersEvent = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>*& GlobalNamespace::SliderInteractionManager::__cordl_internal_get_allSliderWereRemovedFromActiveSlidersEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allSliderWereRemovedFromActiveSlidersEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>* const&
GlobalNamespace::SliderInteractionManager::__cordl_internal_get_allSliderWereRemovedFromActiveSlidersEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allSliderWereRemovedFromActiveSlidersEvent;
}
constexpr void
GlobalNamespace::SliderInteractionManager::__cordl_internal_set_allSliderWereRemovedFromActiveSlidersEvent(::System::Action_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allSliderWereRemovedFromActiveSlidersEvent = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SliderController>>*& GlobalNamespace::SliderInteractionManager::__cordl_internal_get__activeSliders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeSliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SliderController>>* const& GlobalNamespace::SliderInteractionManager::__cordl_internal_get__activeSliders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeSliders;
}
constexpr void GlobalNamespace::SliderInteractionManager::__cordl_internal_set__activeSliders(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SliderController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activeSliders = value;
}
inline ::GlobalNamespace::ColorType GlobalNamespace::SliderInteractionManager::get_colorType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionManager*>(), { "get_colorType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorType>(this, ___internal_method);
}
inline float_t GlobalNamespace::SliderInteractionManager::get_saberInteractionParam() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionManager*>(), { "get_saberInteractionParam", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::SliderInteractionManager::set_saberInteractionParam(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionManager*>(), { "set_saberInteractionParam", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SliderInteractionManager::add_sliderWasAddedToActiveSlidersEvent(::System::Action_2<::UnityW<::GlobalNamespace::SliderInteractionManager>, float_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionManager*>(),
                                       { "add_sliderWasAddedToActiveSlidersEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::SliderInteractionManager>, float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SliderInteractionManager::remove_sliderWasAddedToActiveSlidersEvent(::System::Action_2<::UnityW<::GlobalNamespace::SliderInteractionManager>, float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionManager*>(),
                          { "remove_sliderWasAddedToActiveSlidersEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::SliderInteractionManager>, float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SliderInteractionManager::add_allSliderWereRemovedFromActiveSlidersEvent(::System::Action_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionManager*>(),
                                       { "add_allSliderWereRemovedFromActiveSlidersEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SliderInteractionManager::remove_allSliderWereRemovedFromActiveSlidersEvent(::System::Action_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionManager*>(),
                                       { "remove_allSliderWereRemovedFromActiveSlidersEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::SliderInteractionManager>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SliderInteractionManager::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionManager*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SliderInteractionManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionManager*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SliderInteractionManager::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionManager*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SliderInteractionManager::AddActiveSlider(::GlobalNamespace::SliderController* newSliderController) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionManager*>(), { "AddActiveSlider", {}, { ::i2c::type_of<::GlobalNamespace::SliderController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newSliderController);
}
inline void GlobalNamespace::SliderInteractionManager::RemoveActiveSlider(::GlobalNamespace::SliderController* sliderController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionManager*>(), { "RemoveActiveSlider", {}, { ::i2c::type_of<::GlobalNamespace::SliderController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sliderController);
}
inline void GlobalNamespace::SliderInteractionManager::HandleSliderWasSpawned(::GlobalNamespace::SliderController* sliderController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionManager*>(), { "HandleSliderWasSpawned", {}, { ::i2c::type_of<::GlobalNamespace::SliderController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sliderController);
}
inline void GlobalNamespace::SliderInteractionManager::HandleSliderWasDespawned(::GlobalNamespace::SliderController* sliderController) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionManager*>(),
                                                                                         { "HandleSliderWasDespawned", {}, { ::i2c::type_of<::GlobalNamespace::SliderController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sliderController);
}
inline void GlobalNamespace::SliderInteractionManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderInteractionManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SliderInteractionManager* GlobalNamespace::SliderInteractionManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SliderInteractionManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderInteractionManager::SliderInteractionManager() {}
