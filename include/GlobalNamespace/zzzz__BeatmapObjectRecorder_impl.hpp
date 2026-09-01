#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapObjectRecorder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectRecorder_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectRecorder_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "note", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bomb", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "burstSliderHead", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "burstSliderElement", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "slider",
// ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "burstSlider", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "obstacle", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts::BeatmapObjectRecorder_ObjectCounts(int32_t note, int32_t bomb, int32_t burstSliderHead, int32_t burstSliderElement, int32_t slider,
                                                                                                    int32_t burstSlider, int32_t obstacle) noexcept {
  this->note = note;
  this->bomb = bomb;
  this->burstSliderHead = burstSliderHead;
  this->burstSliderElement = burstSliderElement;
  this->slider = slider;
  this->burstSlider = burstSlider;
  this->obstacle = obstacle;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts::BeatmapObjectRecorder_ObjectCounts() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectRecorder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectRecorder::*)(int32_t)>(&::GlobalNamespace::BeatmapObjectRecorder::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x58ee208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectRecorder*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectRecorder.Begin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectRecorder::*)(::GlobalNamespace::BeatmapObjectManager*)>(
    &::GlobalNamespace::BeatmapObjectRecorder::Begin)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58ee28c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectRecorder*>(), { "Begin", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapObjectManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectRecorder.CaptureFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectRecorder::*)()>(&::GlobalNamespace::BeatmapObjectRecorder::CaptureFrame)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x58ee4d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectRecorder*>(), { "CaptureFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectRecorder.Finish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts> (::GlobalNamespace::BeatmapObjectRecorder::*)()>(
    &::GlobalNamespace::BeatmapObjectRecorder::Finish)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x58ee5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectRecorder*>(), { "Finish", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectRecorder.GenerateTableReport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts>)>(
    &::GlobalNamespace::BeatmapObjectRecorder::GenerateTableReport)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x58ee89c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectRecorder*>(),
                                                             { "GenerateTableReport", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectRecorder.ClearCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectRecorder::*)()>(&::GlobalNamespace::BeatmapObjectRecorder::ClearCallbacks)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x58ee650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectRecorder*>(), { "ClearCallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectRecorder.SetupCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectRecorder::*)(::GlobalNamespace::BeatmapObjectManager*)>(
    &::GlobalNamespace::BeatmapObjectRecorder::SetupCallbacks)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x58ee290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectRecorder*>(), { "SetupCallbacks", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapObjectManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectRecorder.OnSpawnNote
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectRecorder::*)(::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::BeatmapObjectRecorder::OnSpawnNote)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58eed60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectRecorder*>(), { "OnSpawnNote", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectRecorder.OnDespawnNote
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectRecorder::*)(::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::BeatmapObjectRecorder::OnDespawnNote)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58eedfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectRecorder*>(), { "OnDespawnNote", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectRecorder.OnSpawnSlider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectRecorder::*)(::GlobalNamespace::SliderController*)>(
    &::GlobalNamespace::BeatmapObjectRecorder::OnSpawnSlider)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x58eee34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectRecorder*>(), { "OnSpawnSlider", {}, { ::i2c::type_of<::GlobalNamespace::SliderController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectRecorder.OnDespawnSlider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectRecorder::*)(::GlobalNamespace::SliderController*)>(
    &::GlobalNamespace::BeatmapObjectRecorder::OnDespawnSlider)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x58eeeb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectRecorder*>(), { "OnDespawnSlider", {}, { ::i2c::type_of<::GlobalNamespace::SliderController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectRecorder.OnSpawnObstacle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectRecorder::*)(::GlobalNamespace::ObstacleController*)>(
    &::GlobalNamespace::BeatmapObjectRecorder::OnSpawnObstacle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58eeef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectRecorder*>(), { "OnSpawnObstacle", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectRecorder.OnDepawnObstacle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectRecorder::*)(::GlobalNamespace::ObstacleController*)>(
    &::GlobalNamespace::BeatmapObjectRecorder::OnDepawnObstacle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58eef08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectRecorder*>(), { "OnDepawnObstacle", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectRecorder.ChangeNoteTypeCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts>, ::GlobalNamespace::NoteData*, int32_t)>(
    &::GlobalNamespace::BeatmapObjectRecorder::ChangeNoteTypeCount)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x58eed98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectRecorder*>(), { "ChangeNoteTypeCount",
                                                                                                                {},
                                                                                                                { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts>>(),
                                                                                                                  ::i2c::type_of<::GlobalNamespace::NoteData*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectRecorder.ChangeSliderTypeCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts>, ::GlobalNamespace::SliderData*, int32_t)>(
    &::GlobalNamespace::BeatmapObjectRecorder::ChangeSliderTypeCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x58eee78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectRecorder*>(), { "ChangeSliderTypeCount",
                                                                                                                {},
                                                                                                                { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts>>(),
                                                                                                                  ::i2c::type_of<::GlobalNamespace::SliderData*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts>*& GlobalNamespace::BeatmapObjectRecorder::__cordl_internal_get__samples() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____samples;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts>* const& GlobalNamespace::BeatmapObjectRecorder::__cordl_internal_get__samples() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____samples;
}
constexpr void GlobalNamespace::BeatmapObjectRecorder::__cordl_internal_set__samples(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____samples = value;
}
constexpr ::GlobalNamespace::BeatmapObjectManager*& GlobalNamespace::BeatmapObjectRecorder::__cordl_internal_get__objectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectManager;
}
constexpr ::GlobalNamespace::BeatmapObjectManager* const& GlobalNamespace::BeatmapObjectRecorder::__cordl_internal_get__objectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectManager;
}
constexpr void GlobalNamespace::BeatmapObjectRecorder::__cordl_internal_set__objectManager(::GlobalNamespace::BeatmapObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objectManager = value;
}
constexpr ::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts& GlobalNamespace::BeatmapObjectRecorder::__cordl_internal_get__objectCounts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectCounts;
}
constexpr ::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts const& GlobalNamespace::BeatmapObjectRecorder::__cordl_internal_get__objectCounts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectCounts;
}
constexpr void GlobalNamespace::BeatmapObjectRecorder::__cordl_internal_set__objectCounts(::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objectCounts = value;
}
inline void GlobalNamespace::BeatmapObjectRecorder::_ctor(int32_t initialFrameCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectRecorder*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialFrameCapacity);
}
inline void GlobalNamespace::BeatmapObjectRecorder::Begin(::GlobalNamespace::BeatmapObjectManager* objectManager) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectRecorder*>(), { "Begin", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapObjectManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectManager);
}
inline void GlobalNamespace::BeatmapObjectRecorder::CaptureFrame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectRecorder*>(), { "CaptureFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts> GlobalNamespace::BeatmapObjectRecorder::Finish() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectRecorder*>(), { "Finish", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts>>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::BeatmapObjectRecorder::GenerateTableReport(::ArrayW<::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts> samples) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectRecorder*>(),
                                                           { "GenerateTableReport", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, samples);
}
inline void GlobalNamespace::BeatmapObjectRecorder::ClearCallbacks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectRecorder*>(), { "ClearCallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapObjectRecorder::SetupCallbacks(::GlobalNamespace::BeatmapObjectManager* objectManager) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectRecorder*>(), { "SetupCallbacks", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapObjectManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectManager);
}
inline void GlobalNamespace::BeatmapObjectRecorder::OnSpawnNote(::GlobalNamespace::NoteController* note) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectRecorder*>(), { "OnSpawnNote", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, note);
}
inline void GlobalNamespace::BeatmapObjectRecorder::OnDespawnNote(::GlobalNamespace::NoteController* note) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectRecorder*>(), { "OnDespawnNote", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, note);
}
inline void GlobalNamespace::BeatmapObjectRecorder::OnSpawnSlider(::GlobalNamespace::SliderController* slider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectRecorder*>(), { "OnSpawnSlider", {}, { ::i2c::type_of<::GlobalNamespace::SliderController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slider);
}
inline void GlobalNamespace::BeatmapObjectRecorder::OnDespawnSlider(::GlobalNamespace::SliderController* slider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectRecorder*>(), { "OnDespawnSlider", {}, { ::i2c::type_of<::GlobalNamespace::SliderController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slider);
}
inline void GlobalNamespace::BeatmapObjectRecorder::OnSpawnObstacle(::GlobalNamespace::ObstacleController* obstacle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectRecorder*>(), { "OnSpawnObstacle", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obstacle);
}
inline void GlobalNamespace::BeatmapObjectRecorder::OnDepawnObstacle(::GlobalNamespace::ObstacleController* obstacle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectRecorder*>(), { "OnDepawnObstacle", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obstacle);
}
inline bool GlobalNamespace::BeatmapObjectRecorder::ChangeNoteTypeCount(::by_ref<::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts> counts, ::GlobalNamespace::NoteData* data, int32_t delta) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectRecorder*>(), { "ChangeNoteTypeCount",
                                                                                                              {},
                                                                                                              { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts>>(),
                                                                                                                ::i2c::type_of<::GlobalNamespace::NoteData*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, counts, data, delta);
}
inline bool GlobalNamespace::BeatmapObjectRecorder::ChangeSliderTypeCount(::by_ref<::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts> counts, ::GlobalNamespace::SliderData* data, int32_t delta) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectRecorder*>(), { "ChangeSliderTypeCount",
                                                                                                              {},
                                                                                                              { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts>>(),
                                                                                                                ::i2c::type_of<::GlobalNamespace::SliderData*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, counts, data, delta);
}
inline ::GlobalNamespace::BeatmapObjectRecorder* GlobalNamespace::BeatmapObjectRecorder::New_ctor(int32_t initialFrameCapacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapObjectRecorder*>(initialFrameCapacity));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapObjectRecorder::BeatmapObjectRecorder() {}
