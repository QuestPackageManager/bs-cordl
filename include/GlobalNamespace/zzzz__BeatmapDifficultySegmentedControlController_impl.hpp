#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapDifficultySegmentedControlController.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultySegmentedControlController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "HMUI/zzzz__TextSegmentedControl_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultySegmentedControlController.add_didSelectDifficultyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDifficultySegmentedControlController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController>, ::GlobalNamespace::BeatmapDifficulty>*)>(
    &::GlobalNamespace::BeatmapDifficultySegmentedControlController::add_didSelectDifficultyEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5944a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultySegmentedControlController*>(),
                            { "add_didSelectDifficultyEvent",
                              {},
                              { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController>, ::GlobalNamespace::BeatmapDifficulty>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultySegmentedControlController.remove_didSelectDifficultyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDifficultySegmentedControlController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController>, ::GlobalNamespace::BeatmapDifficulty>*)>(
    &::GlobalNamespace::BeatmapDifficultySegmentedControlController::remove_didSelectDifficultyEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5944ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultySegmentedControlController*>(),
                            { "remove_didSelectDifficultyEvent",
                              {},
                              { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController>, ::GlobalNamespace::BeatmapDifficulty>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultySegmentedControlController.get_selectedDifficulty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapDifficulty (::GlobalNamespace::BeatmapDifficultySegmentedControlController::*)()>(
    &::GlobalNamespace::BeatmapDifficultySegmentedControlController::get_selectedDifficulty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5944ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultySegmentedControlController*>(), { "get_selectedDifficulty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultySegmentedControlController.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDifficultySegmentedControlController::*)()>(
    &::GlobalNamespace::BeatmapDifficultySegmentedControlController::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5944ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultySegmentedControlController*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultySegmentedControlController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDifficultySegmentedControlController::*)()>(
    &::GlobalNamespace::BeatmapDifficultySegmentedControlController::OnDestroy)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5944c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultySegmentedControlController*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultySegmentedControlController.GetClosestDifficultyIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapDifficultySegmentedControlController::*)(::GlobalNamespace::BeatmapDifficulty)>(
    &::GlobalNamespace::BeatmapDifficultySegmentedControlController::GetClosestDifficultyIndex)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5944d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultySegmentedControlController*>(),
                                                                                           { "GetClosestDifficultyIndex", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultySegmentedControlController.HandleDifficultySegmentedControlDidSelectCell
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDifficultySegmentedControlController::*)(::HMUI::SegmentedControl*, int32_t)>(
    &::GlobalNamespace::BeatmapDifficultySegmentedControlController::HandleDifficultySegmentedControlDidSelectCell)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5944e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultySegmentedControlController*>(),
                                                             { "HandleDifficultySegmentedControlDidSelectCell", {}, { ::i2c::type_of<::HMUI::SegmentedControl*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultySegmentedControlController.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDifficultySegmentedControlController::*)(
    ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapDifficulty>*, ::GlobalNamespace::BeatmapDifficulty, ::GlobalNamespace::BeatmapDifficultyMask)>(
    &::GlobalNamespace::BeatmapDifficultySegmentedControlController::SetData)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x5944ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultySegmentedControlController*>(),
                                                             { "SetData",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapDifficulty>*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultySegmentedControlController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDifficultySegmentedControlController::*)()>(
    &::GlobalNamespace::BeatmapDifficultySegmentedControlController::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x59453bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultySegmentedControlController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::TextSegmentedControl>& GlobalNamespace::BeatmapDifficultySegmentedControlController::__cordl_internal_get__difficultySegmentedControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultySegmentedControl;
}
constexpr ::UnityW<::HMUI::TextSegmentedControl> const& GlobalNamespace::BeatmapDifficultySegmentedControlController::__cordl_internal_get__difficultySegmentedControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultySegmentedControl;
}
constexpr void GlobalNamespace::BeatmapDifficultySegmentedControlController::__cordl_internal_set__difficultySegmentedControl(::UnityW<::HMUI::TextSegmentedControl> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____difficultySegmentedControl = value;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController>, ::GlobalNamespace::BeatmapDifficulty>*&
GlobalNamespace::BeatmapDifficultySegmentedControlController::__cordl_internal_get_didSelectDifficultyEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectDifficultyEvent;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController>, ::GlobalNamespace::BeatmapDifficulty>* const&
GlobalNamespace::BeatmapDifficultySegmentedControlController::__cordl_internal_get_didSelectDifficultyEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectDifficultyEvent;
}
constexpr void GlobalNamespace::BeatmapDifficultySegmentedControlController::__cordl_internal_set_didSelectDifficultyEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController>, ::GlobalNamespace::BeatmapDifficulty>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didSelectDifficultyEvent = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty>*& GlobalNamespace::BeatmapDifficultySegmentedControlController::__cordl_internal_get__difficulties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficulties;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty>* const&
GlobalNamespace::BeatmapDifficultySegmentedControlController::__cordl_internal_get__difficulties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficulties;
}
constexpr void GlobalNamespace::BeatmapDifficultySegmentedControlController::__cordl_internal_set__difficulties(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____difficulties = value;
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::BeatmapDifficultySegmentedControlController::__cordl_internal_get__selectedDifficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedDifficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::BeatmapDifficultySegmentedControlController::__cordl_internal_get__selectedDifficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedDifficulty;
}
constexpr void GlobalNamespace::BeatmapDifficultySegmentedControlController::__cordl_internal_set__selectedDifficulty(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedDifficulty = value;
}
inline void GlobalNamespace::BeatmapDifficultySegmentedControlController::add_didSelectDifficultyEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController>, ::GlobalNamespace::BeatmapDifficulty>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultySegmentedControlController*>(),
                                       { "add_didSelectDifficultyEvent",
                                         {},
                                         { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController>, ::GlobalNamespace::BeatmapDifficulty>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapDifficultySegmentedControlController::remove_didSelectDifficultyEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController>, ::GlobalNamespace::BeatmapDifficulty>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultySegmentedControlController*>(),
                                       { "remove_didSelectDifficultyEvent",
                                         {},
                                         { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController>, ::GlobalNamespace::BeatmapDifficulty>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapDifficulty GlobalNamespace::BeatmapDifficultySegmentedControlController::get_selectedDifficulty() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultySegmentedControlController*>(), { "get_selectedDifficulty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDifficulty>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapDifficultySegmentedControlController::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultySegmentedControlController*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapDifficultySegmentedControlController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultySegmentedControlController*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BeatmapDifficultySegmentedControlController::GetClosestDifficultyIndex(::GlobalNamespace::BeatmapDifficulty searchDifficulty) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultySegmentedControlController*>(),
                                                                                         { "GetClosestDifficultyIndex", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, searchDifficulty);
}
inline void GlobalNamespace::BeatmapDifficultySegmentedControlController::HandleDifficultySegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t cellIdx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultySegmentedControlController*>(),
                                                           { "HandleDifficultySegmentedControlDidSelectCell", {}, { ::i2c::type_of<::HMUI::SegmentedControl*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segmentedControl, cellIdx);
}
inline void GlobalNamespace::BeatmapDifficultySegmentedControlController::SetData(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapDifficulty>* difficultyBeatmaps,
                                                                                  ::GlobalNamespace::BeatmapDifficulty selectedDifficulty,
                                                                                  ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultySegmentedControlController*>(),
                                                           { "SetData",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapDifficulty>*>(),
                                                               ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, difficultyBeatmaps, selectedDifficulty, allowedBeatmapDifficultyMask);
}
inline void GlobalNamespace::BeatmapDifficultySegmentedControlController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultySegmentedControlController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapDifficultySegmentedControlController* GlobalNamespace::BeatmapDifficultySegmentedControlController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapDifficultySegmentedControlController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDifficultySegmentedControlController::BeatmapDifficultySegmentedControlController() {}
