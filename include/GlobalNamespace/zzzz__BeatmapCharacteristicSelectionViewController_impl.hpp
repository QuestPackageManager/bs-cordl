#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapCharacteristicSelectionViewController.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_impl.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSelectionViewController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollection_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "HMUI/zzzz__IconSegmentedControl_def.hpp"
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicSelectionViewController.add_didSelectBeatmapCharacteristicEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicSelectionViewController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSelectionViewController>, ::GlobalNamespace::BeatmapCharacteristic>*)>(
    &::GlobalNamespace::BeatmapCharacteristicSelectionViewController::add_didSelectBeatmapCharacteristicEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a10dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSelectionViewController*>(),
                            { "add_didSelectBeatmapCharacteristicEvent",
                              {},
                              { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSelectionViewController>, ::GlobalNamespace::BeatmapCharacteristic>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicSelectionViewController.remove_didSelectBeatmapCharacteristicEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicSelectionViewController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSelectionViewController>, ::GlobalNamespace::BeatmapCharacteristic>*)>(
    &::GlobalNamespace::BeatmapCharacteristicSelectionViewController::remove_didSelectBeatmapCharacteristicEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a10e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSelectionViewController*>(),
                            { "remove_didSelectBeatmapCharacteristicEvent",
                              {},
                              { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSelectionViewController>, ::GlobalNamespace::BeatmapCharacteristic>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicSelectionViewController.get_selectedBeatmapCharacteristic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapCharacteristic (::GlobalNamespace::BeatmapCharacteristicSelectionViewController::*)()>(
    &::GlobalNamespace::BeatmapCharacteristicSelectionViewController::get_selectedBeatmapCharacteristic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a10f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSelectionViewController*>(), { "get_selectedBeatmapCharacteristic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicSelectionViewController.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicSelectionViewController::*)()>(
    &::GlobalNamespace::BeatmapCharacteristicSelectionViewController::Init)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5a10f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSelectionViewController*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicSelectionViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicSelectionViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::BeatmapCharacteristicSelectionViewController::DidActivate)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x5a11018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSelectionViewController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSelectionViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicSelectionViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicSelectionViewController::*)(bool, bool)>(
    &::GlobalNamespace::BeatmapCharacteristicSelectionViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a1137c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSelectionViewController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSelectionViewController*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicSelectionViewController.HandleBeatmapCharacteristicSegmentedControlDidSelectCell
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicSelectionViewController::*)(::HMUI::SegmentedControl*, int32_t)>(
    &::GlobalNamespace::BeatmapCharacteristicSelectionViewController::HandleBeatmapCharacteristicSegmentedControlDidSelectCell)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5a1142c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSelectionViewController*>(),
                                                { "HandleBeatmapCharacteristicSegmentedControlDidSelectCell", {}, { ::i2c::type_of<::HMUI::SegmentedControl*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicSelectionViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicSelectionViewController::*)()>(
    &::GlobalNamespace::BeatmapCharacteristicSelectionViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a11518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSelectionViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::IconSegmentedControl>& GlobalNamespace::BeatmapCharacteristicSelectionViewController::__cordl_internal_get__beatmapCharacteristicSegmentedControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicSegmentedControl;
}
constexpr ::UnityW<::HMUI::IconSegmentedControl> const& GlobalNamespace::BeatmapCharacteristicSelectionViewController::__cordl_internal_get__beatmapCharacteristicSegmentedControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicSegmentedControl;
}
constexpr void GlobalNamespace::BeatmapCharacteristicSelectionViewController::__cordl_internal_set__beatmapCharacteristicSegmentedControl(::UnityW<::HMUI::IconSegmentedControl> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCharacteristicSegmentedControl = value;
}
constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& GlobalNamespace::BeatmapCharacteristicSelectionViewController::__cordl_internal_get__beatmapCharacteristicCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicCollection;
}
constexpr ::GlobalNamespace::BeatmapCharacteristicCollection* const& GlobalNamespace::BeatmapCharacteristicSelectionViewController::__cordl_internal_get__beatmapCharacteristicCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicCollection;
}
constexpr void GlobalNamespace::BeatmapCharacteristicSelectionViewController::__cordl_internal_set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCharacteristicCollection = value;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSelectionViewController>, ::GlobalNamespace::BeatmapCharacteristic>*&
GlobalNamespace::BeatmapCharacteristicSelectionViewController::__cordl_internal_get_didSelectBeatmapCharacteristicEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectBeatmapCharacteristicEvent;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSelectionViewController>, ::GlobalNamespace::BeatmapCharacteristic>* const&
GlobalNamespace::BeatmapCharacteristicSelectionViewController::__cordl_internal_get_didSelectBeatmapCharacteristicEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectBeatmapCharacteristicEvent;
}
constexpr void GlobalNamespace::BeatmapCharacteristicSelectionViewController::__cordl_internal_set_didSelectBeatmapCharacteristicEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSelectionViewController>, ::GlobalNamespace::BeatmapCharacteristic>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didSelectBeatmapCharacteristicEvent = value;
}
constexpr ::GlobalNamespace::BeatmapCharacteristic& GlobalNamespace::BeatmapCharacteristicSelectionViewController::__cordl_internal_get__selectedBeatmapCharacteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedBeatmapCharacteristic;
}
constexpr ::GlobalNamespace::BeatmapCharacteristic const& GlobalNamespace::BeatmapCharacteristicSelectionViewController::__cordl_internal_get__selectedBeatmapCharacteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedBeatmapCharacteristic;
}
constexpr void GlobalNamespace::BeatmapCharacteristicSelectionViewController::__cordl_internal_set__selectedBeatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristic value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedBeatmapCharacteristic = value;
}
inline void GlobalNamespace::BeatmapCharacteristicSelectionViewController::add_didSelectBeatmapCharacteristicEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSelectionViewController>, ::GlobalNamespace::BeatmapCharacteristic>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSelectionViewController*>(),
                          { "add_didSelectBeatmapCharacteristicEvent",
                            {},
                            { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSelectionViewController>, ::GlobalNamespace::BeatmapCharacteristic>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapCharacteristicSelectionViewController::remove_didSelectBeatmapCharacteristicEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSelectionViewController>, ::GlobalNamespace::BeatmapCharacteristic>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSelectionViewController*>(),
                          { "remove_didSelectBeatmapCharacteristicEvent",
                            {},
                            { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSelectionViewController>, ::GlobalNamespace::BeatmapCharacteristic>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapCharacteristic GlobalNamespace::BeatmapCharacteristicSelectionViewController::get_selectedBeatmapCharacteristic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSelectionViewController*>(), { "get_selectedBeatmapCharacteristic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapCharacteristic>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapCharacteristicSelectionViewController::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSelectionViewController*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapCharacteristicSelectionViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSelectionViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::BeatmapCharacteristicSelectionViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSelectionViewController*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::BeatmapCharacteristicSelectionViewController::HandleBeatmapCharacteristicSegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t cellNumber) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSelectionViewController*>(),
                                              { "HandleBeatmapCharacteristicSegmentedControlDidSelectCell", {}, { ::i2c::type_of<::HMUI::SegmentedControl*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segmentedControl, cellNumber);
}
inline void GlobalNamespace::BeatmapCharacteristicSelectionViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicSelectionViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapCharacteristicSelectionViewController* GlobalNamespace::BeatmapCharacteristicSelectionViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapCharacteristicSelectionViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapCharacteristicSelectionViewController::BeatmapCharacteristicSelectionViewController() {}
