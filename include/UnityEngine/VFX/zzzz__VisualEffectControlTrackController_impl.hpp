#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VisualEffectControlTrackController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectControlTrackController_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/VFX/zzzz__EventAttributes_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXEventAttribute_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectControlPlayableBehaviour_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectControlTrackController_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectControlTrack_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectPlayableSerializedEvent_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffect_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::VFX::Event_VisualEffectControlTrackController_ClipType::Event_VisualEffectControlTrackController_ClipType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::Event_VisualEffectControlTrackController_ClipType::Event_VisualEffectControlTrackController_ClipType() {}
constexpr ::UnityEngine::VFX::Event_VisualEffectControlTrackController_ClipType UnityEngine::VFX::Event_VisualEffectControlTrackController_ClipType::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::VFX::Event_VisualEffectControlTrackController_ClipType UnityEngine::VFX::Event_VisualEffectControlTrackController_ClipType::Enter{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::VFX::Event_VisualEffectControlTrackController_ClipType UnityEngine::VFX::Event_VisualEffectControlTrackController_ClipType::Exit{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "nameId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "attribute", ty: "::UnityEngine::VFX::VFXEventAttribute*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "time", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "clipIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "clipType", ty: "::UnityEngine::VFX::Event_VisualEffectControlTrackController_ClipType", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::VFX::VisualEffectControlTrackController_Event::VisualEffectControlTrackController_Event(
    int32_t nameId, ::UnityEngine::VFX::VFXEventAttribute* attribute, double_t time, int32_t clipIndex, ::UnityEngine::VFX::Event_VisualEffectControlTrackController_ClipType clipType) noexcept {
  this->nameId = nameId;
  this->attribute = attribute;
  this->time = time;
  this->clipIndex = clipIndex;
  this->clipType = clipType;
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VisualEffectControlTrackController_Event::VisualEffectControlTrackController_Event() {}
// Ctor Parameters [CppParam { name: "enter", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "exit", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::VFX::VisualEffectControlTrackController_Clip::VisualEffectControlTrackController_Clip(int32_t enter, int32_t exit) noexcept {
  this->enter = enter;
  this->exit = exit;
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VisualEffectControlTrackController_Clip::VisualEffectControlTrackController_Clip() {}
// Ctor Parameters [CppParam { name: "scrubbing", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "reinitEnter", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "reinitExit", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "startSeed", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "begin", ty:
// "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "end", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "prewarmCount", ty: "uint32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "prewarmDeltaTime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "prewarmOffset", ty: "double_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "prewarmEvent", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "events", ty:
// "::ArrayW<::UnityEngine::VFX::VisualEffectControlTrackController_Event>", modifiers: "", def_value: Some("{}") }, CppParam { name: "clips", ty:
// "::ArrayW<::UnityEngine::VFX::VisualEffectControlTrackController_Clip>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::VFX::VisualEffectControlTrackController_Chunk::VisualEffectControlTrackController_Chunk(bool scrubbing, bool reinitEnter, bool reinitExit, uint32_t startSeed, double_t begin,
                                                                                                                 double_t end, uint32_t prewarmCount, float_t prewarmDeltaTime, double_t prewarmOffset,
                                                                                                                 int32_t prewarmEvent,
                                                                                                                 ::ArrayW<::UnityEngine::VFX::VisualEffectControlTrackController_Event> events,
                                                                                                                 ::ArrayW<::UnityEngine::VFX::VisualEffectControlTrackController_Clip> clips) noexcept {
  this->scrubbing = scrubbing;
  this->reinitEnter = reinitEnter;
  this->reinitExit = reinitExit;
  this->startSeed = startSeed;
  this->begin = begin;
  this->end = end;
  this->prewarmCount = prewarmCount;
  this->prewarmDeltaTime = prewarmDeltaTime;
  this->prewarmOffset = prewarmOffset;
  this->prewarmEvent = prewarmEvent;
  this->events = events;
  this->clips = clips;
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VisualEffectControlTrackController_Chunk::VisualEffectControlTrackController_Chunk() {}
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::VFX::VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer::*)(
    ::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*, ::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*)>(
    &::UnityEngine::VFX::VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer::Compare)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x69d1d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer*>(),
            { "Compare", {}, { ::i2c::type_of<::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*>(), ::i2c::type_of<::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer::*)()>(
    &::UnityEngine::VFX::VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69d1ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::VFX::VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer::Compare(::UnityEngine::VFX::VisualEffectControlPlayableBehaviour* x,
                                                                                                                          ::UnityEngine::VFX::VisualEffectControlPlayableBehaviour* y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer*>(),
          { "Compare", {}, { ::i2c::type_of<::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*>(), ::i2c::type_of<::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline void UnityEngine::VFX::VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer*
UnityEngine::VFX::VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*>"
constexpr UnityEngine::VFX::VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer::operator ::System::Collections::Generic::IComparer_1<
    ::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*>*() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*>*
UnityEngine::VFX::VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer::
    i___System__Collections__Generic__IComparer_1___UnityEngine__VFX__VisualEffectControlPlayableBehaviour__() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer::VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer() {}
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrackController___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VisualEffectControlTrackController___c::*)()>(&::UnityEngine::VFX::VisualEffectControlTrackController___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69d1df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrackController___c._Init_b__24_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::VFX::VisualEffectControlTrackController___c::*)(
    ::System::ValueTuple_2<::UnityEngine::VFX::VisualEffectControlTrackController_Event, int32_t>, ::System::ValueTuple_2<::UnityEngine::VFX::VisualEffectControlTrackController_Event, int32_t>)>(
    &::UnityEngine::VFX::VisualEffectControlTrackController___c::_Init_b__24_1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x69d1df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController___c*>(),
                                                             { "<Init>b__24_1",
                                                               {},
                                                               { ::i2c::type_of<::System::ValueTuple_2<::UnityEngine::VFX::VisualEffectControlTrackController_Event, int32_t>>(),
                                                                 ::i2c::type_of<::System::ValueTuple_2<::UnityEngine::VFX::VisualEffectControlTrackController_Event, int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrackController___c._Init_b__24_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::VFX::VisualEffectControlTrackController___c::*)(::UnityEngine::VFX::VisualEffectControlTrackController_Event,
                                                                                                                               ::UnityEngine::VFX::VisualEffectControlTrackController_Event)>(
    &::UnityEngine::VFX::VisualEffectControlTrackController___c::_Init_b__24_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x69d1e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController___c*>(),
                            { "<Init>b__24_0",
                              {},
                              { ::i2c::type_of<::UnityEngine::VFX::VisualEffectControlTrackController_Event>(), ::i2c::type_of<::UnityEngine::VFX::VisualEffectControlTrackController_Event>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::VFX::VisualEffectControlTrackController___c::setStaticF___9(::UnityEngine::VFX::VisualEffectControlTrackController___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::VFX::VisualEffectControlTrackController___c*, "<>9", ::UnityEngine::VFX::VisualEffectControlTrackController___c*>(
      std::forward<::UnityEngine::VFX::VisualEffectControlTrackController___c*>(value));
}
inline ::UnityEngine::VFX::VisualEffectControlTrackController___c* UnityEngine::VFX::VisualEffectControlTrackController___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::VFX::VisualEffectControlTrackController___c*, "<>9", ::UnityEngine::VFX::VisualEffectControlTrackController___c*>();
}
inline void UnityEngine::VFX::VisualEffectControlTrackController___c::setStaticF___9__24_1(
    ::System::Comparison_1<::System::ValueTuple_2<::UnityEngine::VFX::VisualEffectControlTrackController_Event, int32_t>>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::System::ValueTuple_2<::UnityEngine::VFX::VisualEffectControlTrackController_Event, int32_t>>*, "<>9__24_1",
                                    ::UnityEngine::VFX::VisualEffectControlTrackController___c*>(
      std::forward<::System::Comparison_1<::System::ValueTuple_2<::UnityEngine::VFX::VisualEffectControlTrackController_Event, int32_t>>*>(value));
}
inline ::System::Comparison_1<::System::ValueTuple_2<::UnityEngine::VFX::VisualEffectControlTrackController_Event, int32_t>>*
UnityEngine::VFX::VisualEffectControlTrackController___c::getStaticF___9__24_1() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::System::ValueTuple_2<::UnityEngine::VFX::VisualEffectControlTrackController_Event, int32_t>>*, "<>9__24_1",
                                           ::UnityEngine::VFX::VisualEffectControlTrackController___c*>();
}
inline void UnityEngine::VFX::VisualEffectControlTrackController___c::setStaticF___9__24_0(::System::Comparison_1<::UnityEngine::VFX::VisualEffectControlTrackController_Event>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::VFX::VisualEffectControlTrackController_Event>*, "<>9__24_0", ::UnityEngine::VFX::VisualEffectControlTrackController___c*>(
      std::forward<::System::Comparison_1<::UnityEngine::VFX::VisualEffectControlTrackController_Event>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::VFX::VisualEffectControlTrackController_Event>* UnityEngine::VFX::VisualEffectControlTrackController___c::getStaticF___9__24_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::VFX::VisualEffectControlTrackController_Event>*, "<>9__24_0",
                                           ::UnityEngine::VFX::VisualEffectControlTrackController___c*>();
}
inline void UnityEngine::VFX::VisualEffectControlTrackController___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::VFX::VisualEffectControlTrackController___c::_Init_b__24_1(::System::ValueTuple_2<::UnityEngine::VFX::VisualEffectControlTrackController_Event, int32_t> x,
                                                                                       ::System::ValueTuple_2<::UnityEngine::VFX::VisualEffectControlTrackController_Event, int32_t> y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController___c*>(),
                                                           { "<Init>b__24_1",
                                                             {},
                                                             { ::i2c::type_of<::System::ValueTuple_2<::UnityEngine::VFX::VisualEffectControlTrackController_Event, int32_t>>(),
                                                               ::i2c::type_of<::System::ValueTuple_2<::UnityEngine::VFX::VisualEffectControlTrackController_Event, int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline int32_t UnityEngine::VFX::VisualEffectControlTrackController___c::_Init_b__24_0(::UnityEngine::VFX::VisualEffectControlTrackController_Event x,
                                                                                       ::UnityEngine::VFX::VisualEffectControlTrackController_Event y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController___c*>(),
                          { "<Init>b__24_0",
                            {},
                            { ::i2c::type_of<::UnityEngine::VFX::VisualEffectControlTrackController_Event>(), ::i2c::type_of<::UnityEngine::VFX::VisualEffectControlTrackController_Event>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline ::UnityEngine::VFX::VisualEffectControlTrackController___c* UnityEngine::VFX::VisualEffectControlTrackController___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::VisualEffectControlTrackController___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VisualEffectControlTrackController___c::VisualEffectControlTrackController___c() {}
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::*)(int32_t)>(
    &::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x69d08e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::*)()>(
    &::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x69d1ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::*)()>(
    &::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x69d1ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21.__m__Finally1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::*)()>(
    &::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::__m__Finally1)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x69d2260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21*>(), { "<>m__Finally1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21.System_Collections_Generic_IEnumerator_UnityEngine_VFX_VisualEffectControlTrackController_Event__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::VFX::VisualEffectControlTrackController_Event (
    ::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::*)()>(
    &::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::System_Collections_Generic_IEnumerator_UnityEngine_VFX_VisualEffectControlTrackController_Event__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x69d2314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21*>(),
                                                             { "System.Collections.Generic.IEnumerator<UnityEngine.VFX.VisualEffectControlTrackController.Event>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::*)()>(
    &::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x69d2324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::*)()>(
    &::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x69d235c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21*>(),
                                                                                           { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21.System_Collections_Generic_IEnumerable_UnityEngine_VFX_VisualEffectControlTrackController_Event__GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectControlTrackController_Event>* (
    ::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::*)()>(
    &::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::
        System_Collections_Generic_IEnumerable_UnityEngine_VFX_VisualEffectControlTrackController_Event__GetEnumerator)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x69d23c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21*>(),
                                                             { "System.Collections.Generic.IEnumerable<UnityEngine.VFX.VisualEffectControlTrackController.Event>.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::*)()>(
    &::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69d2460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21*>(),
                                                                                           { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::UnityEngine::VFX::VisualEffectControlTrackController_Event& UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::UnityEngine::VFX::VisualEffectControlTrackController_Event const&
UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::__cordl_internal_set___2__current(::UnityEngine::VFX::VisualEffectControlTrackController_Event value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*& UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::__cordl_internal_get_behavior() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___behavior;
}
constexpr ::UnityEngine::VFX::VisualEffectControlPlayableBehaviour* const& UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::__cordl_internal_get_behavior() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___behavior;
}
constexpr void UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::__cordl_internal_set_behavior(::UnityEngine::VFX::VisualEffectControlPlayableBehaviour* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___behavior = value;
}
constexpr ::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*& UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::__cordl_internal_get___3__behavior() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__behavior;
}
constexpr ::UnityEngine::VFX::VisualEffectControlPlayableBehaviour* const& UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::__cordl_internal_get___3__behavior() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__behavior;
}
constexpr void UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::__cordl_internal_set___3__behavior(::UnityEngine::VFX::VisualEffectControlPlayableBehaviour* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__behavior = value;
}
constexpr ::UnityW<::UnityEngine::VFX::VisualEffect>& UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::__cordl_internal_get_vfx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vfx;
}
constexpr ::UnityW<::UnityEngine::VFX::VisualEffect> const& UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::__cordl_internal_get_vfx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vfx;
}
constexpr void UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::__cordl_internal_set_vfx(::UnityW<::UnityEngine::VFX::VisualEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vfx = value;
}
constexpr ::UnityW<::UnityEngine::VFX::VisualEffect>& UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::__cordl_internal_get___3__vfx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__vfx;
}
constexpr ::UnityW<::UnityEngine::VFX::VisualEffect> const& UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::__cordl_internal_get___3__vfx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__vfx;
}
constexpr void UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::__cordl_internal_set___3__vfx(::UnityW<::UnityEngine::VFX::VisualEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__vfx = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>*&
UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>* const&
UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr void UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::__cordl_internal_set___7__wrap1(
    ::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap1 = value;
}
inline void UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21*>(), { "<>m__Finally1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::VisualEffectControlTrackController_Event
UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::System_Collections_Generic_IEnumerator_UnityEngine_VFX_VisualEffectControlTrackController_Event__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21*>(),
                                                           { "System.Collections.Generic.IEnumerator<UnityEngine.VFX.VisualEffectControlTrackController.Event>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::VFX::VisualEffectControlTrackController_Event>(this, ___internal_method);
}
inline void UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21*>(),
                                                                                         { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectControlTrackController_Event>*
UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::System_Collections_Generic_IEnumerable_UnityEngine_VFX_VisualEffectControlTrackController_Event__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21*>(),
                                                           { "System.Collections.Generic.IEnumerable<UnityEngine.VFX.VisualEffectControlTrackController.Event>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectControlTrackController_Event>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21*>(),
                                                                                         { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21*
UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::VFX::VisualEffectControlTrackController_Event>"
constexpr UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::operator ::System::Collections::Generic::IEnumerable_1<
    ::UnityEngine::VFX::VisualEffectControlTrackController_Event>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::VFX::VisualEffectControlTrackController_Event>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::VFX::VisualEffectControlTrackController_Event>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::VFX::VisualEffectControlTrackController_Event>* UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::
    i___System__Collections__Generic__IEnumerable_1___UnityEngine__VFX__VisualEffectControlTrackController_Event_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::VFX::VisualEffectControlTrackController_Event>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectControlTrackController_Event>"
constexpr UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::operator ::System::Collections::Generic::IEnumerator_1<
    ::UnityEngine::VFX::VisualEffectControlTrackController_Event>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectControlTrackController_Event>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectControlTrackController_Event>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectControlTrackController_Event>* UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::
    i___System__Collections__Generic__IEnumerator_1___UnityEngine__VFX__VisualEffectControlTrackController_Event_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectControlTrackController_Event>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21() {}
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrackController.OnEnterChunk
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VisualEffectControlTrackController::*)(int32_t)>(
    &::UnityEngine::VFX::VisualEffectControlTrackController::OnEnterChunk)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x69cf814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController*>(), { "OnEnterChunk", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrackController.OnLeaveChunk
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VisualEffectControlTrackController::*)(int32_t, bool)>(
    &::UnityEngine::VFX::VisualEffectControlTrackController::OnLeaveChunk)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x69cf8f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController*>(), { "OnLeaveChunk", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrackController.IsTimeInChunk
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::VFX::VisualEffectControlTrackController::*)(double_t, int32_t)>(
    &::UnityEngine::VFX::VisualEffectControlTrackController::IsTimeInChunk)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x69cfd54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController*>(),
                                                                                           { "IsTimeInChunk", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrackController.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VisualEffectControlTrackController::*)(double_t, float_t)>(
    &::UnityEngine::VFX::VisualEffectControlTrackController::Update)> {
  constexpr static std::size_t size = 0x87c;
  constexpr static std::size_t addrs = 0x69cfd98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController*>(), { "Update", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrackController.ProcessNoScrubbingEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VisualEffectControlTrackController::*)(
    ::UnityEngine::VFX::VisualEffectControlTrackController_Chunk, double_t, double_t)>(&::UnityEngine::VFX::VisualEffectControlTrackController::ProcessNoScrubbingEvents)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x69cf9c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController*>(),
            { "ProcessNoScrubbingEvents", {}, { ::i2c::type_of<::UnityEngine::VFX::VisualEffectControlTrackController_Chunk>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrackController.ProcessEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VisualEffectControlTrackController::*)(int32_t, ::UnityEngine::VFX::VisualEffectControlTrackController_Chunk)>(
    &::UnityEngine::VFX::VisualEffectControlTrackController::ProcessEvent)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x69d0750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController*>(),
                                                             { "ProcessEvent", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::VFX::VisualEffectControlTrackController_Chunk>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrackController.GetEventsIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::VFX::VisualEffectControlTrackController_Chunk, double_t, double_t, int32_t,
                                                                ::System::Collections::Generic::List_1<int32_t>*)>(&::UnityEngine::VFX::VisualEffectControlTrackController::GetEventsIndex)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x69d0614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController*>(),
                                                             { "GetEventsIndex",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::VFX::VisualEffectControlTrackController_Chunk>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrackController.ComputeAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::VFX::VFXEventAttribute* (*)(::UnityEngine::VFX::VisualEffect*, ::UnityEngine::VFX::EventAttributes)>(
    &::UnityEngine::VFX::VisualEffectControlTrackController::ComputeAttribute)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x69d07cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController*>(),
                                                { "ComputeAttribute", {}, { ::i2c::type_of<::UnityEngine::VFX::VisualEffect*>(), ::i2c::type_of<::UnityEngine::VFX::EventAttributes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrackController.ComputeRuntimeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<
    ::UnityEngine::VFX::VisualEffectControlTrackController_Event>* (*)(::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*, ::UnityEngine::VFX::VisualEffect*)>(
    &::UnityEngine::VFX::VisualEffectControlTrackController::ComputeRuntimeEvent)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x69d086c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController*>(),
                            { "ComputeRuntimeEvent", {}, { ::i2c::type_of<::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*>(), ::i2c::type_of<::UnityEngine::VFX::VisualEffect*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrackController.RestoreVFXState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VisualEffectControlTrackController::*)(bool, bool)>(
    &::UnityEngine::VFX::VisualEffectControlTrackController::RestoreVFXState)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x69cfc84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController*>(), { "RestoreVFXState", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrackController.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VisualEffectControlTrackController::*)(
    ::UnityEngine::Playables::Playable, ::UnityEngine::VFX::VisualEffect*, ::UnityEngine::VFX::VisualEffectControlTrack*)>(&::UnityEngine::VFX::VisualEffectControlTrackController::Init)> {
  constexpr static std::size_t size = 0x1298;
  constexpr static std::size_t addrs = 0x69d0908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController*>(),
                                                             { "Init",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Playables::Playable>(), ::i2c::type_of<::UnityEngine::VFX::VisualEffect*>(),
                                                                 ::i2c::type_of<::UnityEngine::VFX::VisualEffectControlTrack*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrackController.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VisualEffectControlTrackController::*)()>(&::UnityEngine::VFX::VisualEffectControlTrackController::Release)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69d1c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController*>(), { "Release", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VisualEffectControlTrackController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VisualEffectControlTrackController::*)()>(&::UnityEngine::VFX::VisualEffectControlTrackController::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x69d1c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::VFX::VisualEffectControlTrackController::__cordl_internal_get_m_LastChunk() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastChunk;
}
constexpr int32_t const& UnityEngine::VFX::VisualEffectControlTrackController::__cordl_internal_get_m_LastChunk() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastChunk;
}
constexpr void UnityEngine::VFX::VisualEffectControlTrackController::__cordl_internal_set_m_LastChunk(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastChunk = value;
}
constexpr int32_t& UnityEngine::VFX::VisualEffectControlTrackController::__cordl_internal_get_m_LastEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastEvent;
}
constexpr int32_t const& UnityEngine::VFX::VisualEffectControlTrackController::__cordl_internal_get_m_LastEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastEvent;
}
constexpr void UnityEngine::VFX::VisualEffectControlTrackController::__cordl_internal_set_m_LastEvent(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastEvent = value;
}
constexpr double_t& UnityEngine::VFX::VisualEffectControlTrackController::__cordl_internal_get_m_LastPlayableTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastPlayableTime;
}
constexpr double_t const& UnityEngine::VFX::VisualEffectControlTrackController::__cordl_internal_get_m_LastPlayableTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastPlayableTime;
}
constexpr void UnityEngine::VFX::VisualEffectControlTrackController::__cordl_internal_set_m_LastPlayableTime(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastPlayableTime = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::VFX::VisualEffectControlTrackController::__cordl_internal_get_m_EventListIndexCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventListIndexCache;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& UnityEngine::VFX::VisualEffectControlTrackController::__cordl_internal_get_m_EventListIndexCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventListIndexCache;
}
constexpr void UnityEngine::VFX::VisualEffectControlTrackController::__cordl_internal_set_m_EventListIndexCache(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EventListIndexCache = value;
}
constexpr ::UnityW<::UnityEngine::VFX::VisualEffect>& UnityEngine::VFX::VisualEffectControlTrackController::__cordl_internal_get_m_Target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Target;
}
constexpr ::UnityW<::UnityEngine::VFX::VisualEffect> const& UnityEngine::VFX::VisualEffectControlTrackController::__cordl_internal_get_m_Target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Target;
}
constexpr void UnityEngine::VFX::VisualEffectControlTrackController::__cordl_internal_set_m_Target(::UnityW<::UnityEngine::VFX::VisualEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Target = value;
}
constexpr bool& UnityEngine::VFX::VisualEffectControlTrackController::__cordl_internal_get_m_BackupReseedOnPlay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BackupReseedOnPlay;
}
constexpr bool const& UnityEngine::VFX::VisualEffectControlTrackController::__cordl_internal_get_m_BackupReseedOnPlay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BackupReseedOnPlay;
}
constexpr void UnityEngine::VFX::VisualEffectControlTrackController::__cordl_internal_set_m_BackupReseedOnPlay(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BackupReseedOnPlay = value;
}
constexpr uint32_t& UnityEngine::VFX::VisualEffectControlTrackController::__cordl_internal_get_m_BackupStartSeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BackupStartSeed;
}
constexpr uint32_t const& UnityEngine::VFX::VisualEffectControlTrackController::__cordl_internal_get_m_BackupStartSeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BackupStartSeed;
}
constexpr void UnityEngine::VFX::VisualEffectControlTrackController::__cordl_internal_set_m_BackupStartSeed(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BackupStartSeed = value;
}
constexpr ::ArrayW<::UnityEngine::VFX::VisualEffectControlTrackController_Chunk>& UnityEngine::VFX::VisualEffectControlTrackController::__cordl_internal_get_m_Chunks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Chunks;
}
constexpr ::ArrayW<::UnityEngine::VFX::VisualEffectControlTrackController_Chunk> const& UnityEngine::VFX::VisualEffectControlTrackController::__cordl_internal_get_m_Chunks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Chunks;
}
constexpr void UnityEngine::VFX::VisualEffectControlTrackController::__cordl_internal_set_m_Chunks(::ArrayW<::UnityEngine::VFX::VisualEffectControlTrackController_Chunk> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Chunks = value;
}
inline void UnityEngine::VFX::VisualEffectControlTrackController::setStaticF_kEpsilonEvent(double_t value) {
  ::cordl_internals::setStaticField<double_t, "kEpsilonEvent", ::UnityEngine::VFX::VisualEffectControlTrackController*>(std::forward<double_t>(value));
}
inline double_t UnityEngine::VFX::VisualEffectControlTrackController::getStaticF_kEpsilonEvent() {
  return ::cordl_internals::getStaticField<double_t, "kEpsilonEvent", ::UnityEngine::VFX::VisualEffectControlTrackController*>();
}
inline void UnityEngine::VFX::VisualEffectControlTrackController::OnEnterChunk(int32_t currentChunk) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController*>(), { "OnEnterChunk", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentChunk);
}
inline void UnityEngine::VFX::VisualEffectControlTrackController::OnLeaveChunk(int32_t previousChunkIndex, bool leavingGoingBeforeClip) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController*>(), { "OnLeaveChunk", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previousChunkIndex, leavingGoingBeforeClip);
}
inline bool UnityEngine::VFX::VisualEffectControlTrackController::IsTimeInChunk(double_t time, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController*>(),
                                                                                         { "IsTimeInChunk", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, time, index);
}
inline void UnityEngine::VFX::VisualEffectControlTrackController::Update(double_t playableTime, float_t deltaTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController*>(), { "Update", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playableTime, deltaTime);
}
inline void UnityEngine::VFX::VisualEffectControlTrackController::ProcessNoScrubbingEvents(::UnityEngine::VFX::VisualEffectControlTrackController_Chunk chunk, double_t oldTime, double_t newTime) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController*>(),
          { "ProcessNoScrubbingEvents", {}, { ::i2c::type_of<::UnityEngine::VFX::VisualEffectControlTrackController_Chunk>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chunk, oldTime, newTime);
}
inline void UnityEngine::VFX::VisualEffectControlTrackController::ProcessEvent(int32_t eventIndex, ::UnityEngine::VFX::VisualEffectControlTrackController_Chunk currentChunk) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController*>(),
                                                           { "ProcessEvent", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::VFX::VisualEffectControlTrackController_Chunk>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventIndex, currentChunk);
}
inline void UnityEngine::VFX::VisualEffectControlTrackController::GetEventsIndex(::UnityEngine::VFX::VisualEffectControlTrackController_Chunk chunk, double_t minTime, double_t maxTime,
                                                                                 int32_t lastIndex, ::System::Collections::Generic::List_1<int32_t>* eventListIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController*>(),
                                                           { "GetEventsIndex",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::VFX::VisualEffectControlTrackController_Chunk>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, chunk, minTime, maxTime, lastIndex, eventListIndex);
}
inline ::UnityEngine::VFX::VFXEventAttribute* UnityEngine::VFX::VisualEffectControlTrackController::ComputeAttribute(::UnityEngine::VFX::VisualEffect* vfx,
                                                                                                                     ::UnityEngine::VFX::EventAttributes attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController*>(),
                                              { "ComputeAttribute", {}, { ::i2c::type_of<::UnityEngine::VFX::VisualEffect*>(), ::i2c::type_of<::UnityEngine::VFX::EventAttributes>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::VFX::VFXEventAttribute*>(nullptr, ___internal_method, vfx, attributes);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::VFX::VisualEffectControlTrackController_Event>*
UnityEngine::VFX::VisualEffectControlTrackController::ComputeRuntimeEvent(::UnityEngine::VFX::VisualEffectControlPlayableBehaviour* behavior, ::UnityEngine::VFX::VisualEffect* vfx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController*>(),
                          { "ComputeRuntimeEvent", {}, { ::i2c::type_of<::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*>(), ::i2c::type_of<::UnityEngine::VFX::VisualEffect*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::VFX::VisualEffectControlTrackController_Event>*>(nullptr, ___internal_method, behavior, vfx);
}
inline void UnityEngine::VFX::VisualEffectControlTrackController::RestoreVFXState(bool restorePause, bool restoreSeedState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController*>(), { "RestoreVFXState", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, restorePause, restoreSeedState);
}
inline void UnityEngine::VFX::VisualEffectControlTrackController::Init(::UnityEngine::Playables::Playable playable, ::UnityEngine::VFX::VisualEffect* vfx,
                                                                       ::UnityEngine::VFX::VisualEffectControlTrack* parentTrack) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController*>(),
                                                                                         { "Init",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Playables::Playable>(), ::i2c::type_of<::UnityEngine::VFX::VisualEffect*>(),
                                                                                             ::i2c::type_of<::UnityEngine::VFX::VisualEffectControlTrack*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, vfx, parentTrack);
}
inline void UnityEngine::VFX::VisualEffectControlTrackController::Release() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController*>(), { "Release", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::VisualEffectControlTrackController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VisualEffectControlTrackController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::VisualEffectControlTrackController* UnityEngine::VFX::VisualEffectControlTrackController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::VisualEffectControlTrackController*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VisualEffectControlTrackController::VisualEffectControlTrackController() {}
