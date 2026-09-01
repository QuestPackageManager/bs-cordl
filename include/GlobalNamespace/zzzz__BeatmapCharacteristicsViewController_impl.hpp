#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapCharacteristicsViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicsViewController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollection_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicsTableView_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicsViewController.add_didSelectBeatmapCharacteristicEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicsViewController::*)(::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>*)>(
    &::GlobalNamespace::BeatmapCharacteristicsViewController::add_didSelectBeatmapCharacteristicEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x594d34c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsViewController*>(),
                                                             { "add_didSelectBeatmapCharacteristicEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicsViewController.remove_didSelectBeatmapCharacteristicEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicsViewController::*)(::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>*)>(
    &::GlobalNamespace::BeatmapCharacteristicsViewController::remove_didSelectBeatmapCharacteristicEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x594d40c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsViewController*>(),
                                                { "remove_didSelectBeatmapCharacteristicEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicsViewController.get_selectedBeatmapCharacteristic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapCharacteristic (::GlobalNamespace::BeatmapCharacteristicsViewController::*)()>(
    &::GlobalNamespace::BeatmapCharacteristicsViewController::get_selectedBeatmapCharacteristic)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x594d4cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsViewController*>(), { "get_selectedBeatmapCharacteristic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicsViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicsViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::BeatmapCharacteristicsViewController::DidActivate)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x594d58c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsViewController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicsViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicsViewController::*)(bool, bool)>(
    &::GlobalNamespace::BeatmapCharacteristicsViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x594d650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsViewController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsViewController*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicsViewController.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicsViewController::*)(::GlobalNamespace::BeatmapCharacteristicCollection*, int32_t)>(
    &::GlobalNamespace::BeatmapCharacteristicsViewController::SetData)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x594d700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsViewController*>(),
                                                             { "SetData", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristicCollection*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicsViewController.HandleBeatmapCharacteristicsTableViewDidSelecteCharacteristic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicsViewController::*)(::GlobalNamespace::BeatmapCharacteristic)>(
    &::GlobalNamespace::BeatmapCharacteristicsViewController::HandleBeatmapCharacteristicsTableViewDidSelecteCharacteristic)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x594d764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsViewController*>(),
                                                             { "HandleBeatmapCharacteristicsTableViewDidSelecteCharacteristic", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicsViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicsViewController::*)()>(&::GlobalNamespace::BeatmapCharacteristicsViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x594d8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicsTableView>& GlobalNamespace::BeatmapCharacteristicsViewController::__cordl_internal_get__beatmapCharacteristicsTableView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicsTableView;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicsTableView> const& GlobalNamespace::BeatmapCharacteristicsViewController::__cordl_internal_get__beatmapCharacteristicsTableView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicsTableView;
}
constexpr void GlobalNamespace::BeatmapCharacteristicsViewController::__cordl_internal_set__beatmapCharacteristicsTableView(::UnityW<::GlobalNamespace::BeatmapCharacteristicsTableView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCharacteristicsTableView = value;
}
constexpr ::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>*& GlobalNamespace::BeatmapCharacteristicsViewController::__cordl_internal_get_didSelectBeatmapCharacteristicEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectBeatmapCharacteristicEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>* const& GlobalNamespace::BeatmapCharacteristicsViewController::__cordl_internal_get_didSelectBeatmapCharacteristicEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectBeatmapCharacteristicEvent;
}
constexpr void GlobalNamespace::BeatmapCharacteristicsViewController::__cordl_internal_set_didSelectBeatmapCharacteristicEvent(::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didSelectBeatmapCharacteristicEvent = value;
}
constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& GlobalNamespace::BeatmapCharacteristicsViewController::__cordl_internal_get__beatmapCharacteristicCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicCollection;
}
constexpr ::GlobalNamespace::BeatmapCharacteristicCollection* const& GlobalNamespace::BeatmapCharacteristicsViewController::__cordl_internal_get__beatmapCharacteristicCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicCollection;
}
constexpr void GlobalNamespace::BeatmapCharacteristicsViewController::__cordl_internal_set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCharacteristicCollection = value;
}
constexpr int32_t& GlobalNamespace::BeatmapCharacteristicsViewController::__cordl_internal_get__selectedBeatmapCharacteristicNum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedBeatmapCharacteristicNum;
}
constexpr int32_t const& GlobalNamespace::BeatmapCharacteristicsViewController::__cordl_internal_get__selectedBeatmapCharacteristicNum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedBeatmapCharacteristicNum;
}
constexpr void GlobalNamespace::BeatmapCharacteristicsViewController::__cordl_internal_set__selectedBeatmapCharacteristicNum(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedBeatmapCharacteristicNum = value;
}
inline void GlobalNamespace::BeatmapCharacteristicsViewController::add_didSelectBeatmapCharacteristicEvent(::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsViewController*>(),
                                                           { "add_didSelectBeatmapCharacteristicEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapCharacteristicsViewController::remove_didSelectBeatmapCharacteristicEvent(::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsViewController*>(),
                                                           { "remove_didSelectBeatmapCharacteristicEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapCharacteristic GlobalNamespace::BeatmapCharacteristicsViewController::get_selectedBeatmapCharacteristic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsViewController*>(), { "get_selectedBeatmapCharacteristic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapCharacteristic>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapCharacteristicsViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::BeatmapCharacteristicsViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsViewController*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::BeatmapCharacteristicsViewController::SetData(::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection, int32_t selectedCharacteristicNum) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsViewController*>(),
                                                           { "SetData", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristicCollection*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapCharacteristicCollection, selectedCharacteristicNum);
}
inline void GlobalNamespace::BeatmapCharacteristicsViewController::HandleBeatmapCharacteristicsTableViewDidSelecteCharacteristic(::GlobalNamespace::BeatmapCharacteristic beatmapCharacteristic) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsViewController*>(),
                                                           { "HandleBeatmapCharacteristicsTableViewDidSelecteCharacteristic", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapCharacteristic);
}
inline void GlobalNamespace::BeatmapCharacteristicsViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapCharacteristicsViewController* GlobalNamespace::BeatmapCharacteristicsViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapCharacteristicsViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapCharacteristicsViewController::BeatmapCharacteristicsViewController() {}
