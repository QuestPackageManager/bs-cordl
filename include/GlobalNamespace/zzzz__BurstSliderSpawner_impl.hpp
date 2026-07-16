#pragma once
// IWYU pragma private; include "GlobalNamespace/BurstSliderSpawner.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BurstSliderSpawner_def.hpp"
#include "GlobalNamespace/zzzz__BurstSliderSpawner_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteSpawnData_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "GlobalNamespace/zzzz__SliderSpawnData_def.hpp"
#include "GlobalNamespace/zzzz__VariableMovementDataProvider_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x58cd504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate::*)(
    ::GlobalNamespace::NoteData*, ::by_ref<::GlobalNamespace::NoteSpawnData>, bool)>(&::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58cd64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate::*)(::GlobalNamespace::NoteData*, ::by_ref<::GlobalNamespace::NoteSpawnData>, bool, ::System::AsyncCallback*, ::System::Object*)>(
    &::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x58cd660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate::*)(::by_ref<::GlobalNamespace::NoteSpawnData>, ::System::IAsyncResult*)>(
    &::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58cd714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate::Invoke(::GlobalNamespace::NoteData* noteData, ::by_ref<::GlobalNamespace::NoteSpawnData> noteSpawnData,
                                                                                bool forceIsFirstNote) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteData, noteSpawnData, forceIsFirstNote);
}
inline ::System::IAsyncResult* GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate::BeginInvoke(::GlobalNamespace::NoteData* noteData, ::by_ref<::GlobalNamespace::NoteSpawnData> noteSpawnData,
                                                                                                        bool forceIsFirstNote, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, noteData, noteSpawnData, forceIsFirstNote, callback, object);
}
inline void GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate::EndInvoke(::by_ref<::GlobalNamespace::NoteSpawnData> noteSpawnData, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteSpawnData, result);
}
inline ::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate* GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate::BurstSliderSpawner_ProcessNoteDataDelegate() {}
//  Writing Method size for method: ::GlobalNamespace::BurstSliderSpawner.BezierCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, ::by_ref<::UnityEngine::Vector2>,
                                                                ::by_ref<::UnityEngine::Vector2>)>(&::GlobalNamespace::BurstSliderSpawner::BezierCurve)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x58cd024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderSpawner*>(),
                                                { "BezierCurve",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                    ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderSpawner.ProcessSliderData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::SliderData*, ::by_ref<::GlobalNamespace::SliderSpawnData>, bool, ::GlobalNamespace::VariableMovementDataProvider*,
                                                                ::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate*)>(&::GlobalNamespace::BurstSliderSpawner::ProcessSliderData)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x58cd0b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderSpawner*>(),
                            { "ProcessSliderData",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::SliderData*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SliderSpawnData>>(), ::i2c::type_of<bool>(),
                                ::i2c::type_of<::GlobalNamespace::VariableMovementDataProvider*>(), ::i2c::type_of<::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BurstSliderSpawner::BezierCurve(::UnityEngine::Vector2 p0, ::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 p2, float_t t, ::by_ref<::UnityEngine::Vector2> pos,
                                                             ::by_ref<::UnityEngine::Vector2> tangent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderSpawner*>(),
                                                           { "BezierCurve",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p0, p1, p2, t, pos, tangent);
}
inline void GlobalNamespace::BurstSliderSpawner::ProcessSliderData(::GlobalNamespace::SliderData* sliderData, ::by_ref<::GlobalNamespace::SliderSpawnData> sliderSpawnData, bool forceIsFirstNote,
                                                                   ::GlobalNamespace::VariableMovementDataProvider* variableMovementDataProvider,
                                                                   ::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate* processNoteData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderSpawner*>(),
                                       { "ProcessSliderData",
                                         {},
                                         { ::i2c::type_of<::GlobalNamespace::SliderData*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SliderSpawnData>>(), ::i2c::type_of<bool>(),
                                           ::i2c::type_of<::GlobalNamespace::VariableMovementDataProvider*>(), ::i2c::type_of<::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sliderData, sliderSpawnData, forceIsFirstNote, variableMovementDataProvider, processNoteData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BurstSliderSpawner::BurstSliderSpawner() {}
