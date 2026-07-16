#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapObjectManager.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapObjectController_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapObjectSpawner_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteDidDissolveEvent_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteDidFinishJumpEvent_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteDidStartDissolvingEvent_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteDidStartJumpEvent_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteWasCutEvent_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteWasMissedEvent_def.hpp"
#include "GlobalNamespace/zzzz__ISliderDidDissolveEvent_def.hpp"
#include "GlobalNamespace/zzzz__ISliderDidFinishJumpEvent_def.hpp"
#include "GlobalNamespace/zzzz__NoteControllerBase_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteSpawnData_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleSpawnData_def.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "GlobalNamespace/zzzz__SliderSpawnData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x58cb924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate::*)(
    ::GlobalNamespace::NoteController*, ::by_ref<::GlobalNamespace::NoteCutInfo>)>(&::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58cba6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate::*)(::GlobalNamespace::NoteController*, ::by_ref<::GlobalNamespace::NoteCutInfo>, ::System::AsyncCallback*, ::System::Object*)>(
    &::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x58cba80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate::*)(::by_ref<::GlobalNamespace::NoteCutInfo>, ::System::IAsyncResult*)>(
    &::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58cbb18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate::Invoke(::GlobalNamespace::NoteController* noteController, ::by_ref<::GlobalNamespace::NoteCutInfo> noteCutInfo) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController, noteCutInfo);
}
inline ::System::IAsyncResult* GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate::BeginInvoke(::GlobalNamespace::NoteController* noteController,
                                                                                                     ::by_ref<::GlobalNamespace::NoteCutInfo> noteCutInfo, ::System::AsyncCallback* callback,
                                                                                                     ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, noteController, noteCutInfo, callback, object);
}
inline void GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate::EndInvoke(::by_ref<::GlobalNamespace::NoteCutInfo> noteCutInfo, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteCutInfo, result);
}
inline ::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate* GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate::BeatmapObjectManager_NoteWasCutDelegate() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.add_noteWasAddedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::System::Action_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::NoteSpawnData>*)>(
    &::GlobalNamespace::BeatmapObjectManager::add_noteWasAddedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58c7bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                { "add_noteWasAddedEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::NoteSpawnData>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.remove_noteWasAddedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::System::Action_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::NoteSpawnData>*)>(
    &::GlobalNamespace::BeatmapObjectManager::remove_noteWasAddedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58c7cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                { "remove_noteWasAddedEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::NoteSpawnData>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.add_noteWasSpawnedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>*)>(
    &::GlobalNamespace::BeatmapObjectManager::add_noteWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58c7d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                             { "add_noteWasSpawnedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.remove_noteWasSpawnedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>*)>(
    &::GlobalNamespace::BeatmapObjectManager::remove_noteWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58c7e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                             { "remove_noteWasSpawnedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.add_noteWasDespawnedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>*)>(
    &::GlobalNamespace::BeatmapObjectManager::add_noteWasDespawnedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58c7ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                             { "add_noteWasDespawnedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.remove_noteWasDespawnedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>*)>(
    &::GlobalNamespace::BeatmapObjectManager::remove_noteWasDespawnedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58c7fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                             { "remove_noteWasDespawnedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.add_noteWasMissedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>*)>(
    &::GlobalNamespace::BeatmapObjectManager::add_noteWasMissedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58c8074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                             { "add_noteWasMissedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.remove_noteWasMissedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>*)>(
    &::GlobalNamespace::BeatmapObjectManager::remove_noteWasMissedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58c8134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                             { "remove_noteWasMissedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.add_noteWasCutEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate*)>(
    &::GlobalNamespace::BeatmapObjectManager::add_noteWasCutEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x58c81f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                             { "add_noteWasCutEvent", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.remove_noteWasCutEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate*)>(
    &::GlobalNamespace::BeatmapObjectManager::remove_noteWasCutEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x58c82a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                             { "remove_noteWasCutEvent", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.add_noteDidStartJumpEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>*)>(
    &::GlobalNamespace::BeatmapObjectManager::add_noteDidStartJumpEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58c834c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                             { "add_noteDidStartJumpEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.remove_noteDidStartJumpEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>*)>(
    &::GlobalNamespace::BeatmapObjectManager::remove_noteDidStartJumpEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58c840c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                             { "remove_noteDidStartJumpEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.add_noteDidStartDissolvingEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::System::Action_1<::UnityW<::GlobalNamespace::NoteControllerBase>>*)>(
    &::GlobalNamespace::BeatmapObjectManager::add_noteDidStartDissolvingEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58c84cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                             { "add_noteDidStartDissolvingEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::NoteControllerBase>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.remove_noteDidStartDissolvingEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::System::Action_1<::UnityW<::GlobalNamespace::NoteControllerBase>>*)>(
    &::GlobalNamespace::BeatmapObjectManager::remove_noteDidStartDissolvingEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58c858c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                { "remove_noteDidStartDissolvingEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::NoteControllerBase>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.add_obstacleWasAddedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(
    ::System::Action_3<::GlobalNamespace::ObstacleData*, ::GlobalNamespace::ObstacleSpawnData, float_t>*)>(&::GlobalNamespace::BeatmapObjectManager::add_obstacleWasAddedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58c864c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                            { "add_obstacleWasAddedEvent", {}, { ::i2c::type_of<::System::Action_3<::GlobalNamespace::ObstacleData*, ::GlobalNamespace::ObstacleSpawnData, float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.remove_obstacleWasAddedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(
    ::System::Action_3<::GlobalNamespace::ObstacleData*, ::GlobalNamespace::ObstacleSpawnData, float_t>*)>(&::GlobalNamespace::BeatmapObjectManager::remove_obstacleWasAddedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58c870c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                            { "remove_obstacleWasAddedEvent", {}, { ::i2c::type_of<::System::Action_3<::GlobalNamespace::ObstacleData*, ::GlobalNamespace::ObstacleSpawnData, float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.add_obstacleWasSpawnedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*)>(
    &::GlobalNamespace::BeatmapObjectManager::add_obstacleWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58c87cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                             { "add_obstacleWasSpawnedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.remove_obstacleWasSpawnedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*)>(
    &::GlobalNamespace::BeatmapObjectManager::remove_obstacleWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58c888c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                             { "remove_obstacleWasSpawnedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.add_obstacleWasDespawnedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*)>(
    &::GlobalNamespace::BeatmapObjectManager::add_obstacleWasDespawnedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58c894c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                             { "add_obstacleWasDespawnedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.remove_obstacleWasDespawnedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*)>(
    &::GlobalNamespace::BeatmapObjectManager::remove_obstacleWasDespawnedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58c8a0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                             { "remove_obstacleWasDespawnedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.add_obstacleDidPassThreeQuartersOfMove2Event
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*)>(
    &::GlobalNamespace::BeatmapObjectManager::add_obstacleDidPassThreeQuartersOfMove2Event)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58c8acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                { "add_obstacleDidPassThreeQuartersOfMove2Event", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.remove_obstacleDidPassThreeQuartersOfMove2Event
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*)>(
    &::GlobalNamespace::BeatmapObjectManager::remove_obstacleDidPassThreeQuartersOfMove2Event)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58c8b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                         { "remove_obstacleDidPassThreeQuartersOfMove2Event", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.add_obstacleDidPassAvoidedMarkEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*)>(
    &::GlobalNamespace::BeatmapObjectManager::add_obstacleDidPassAvoidedMarkEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58c7128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                { "add_obstacleDidPassAvoidedMarkEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.remove_obstacleDidPassAvoidedMarkEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*)>(
    &::GlobalNamespace::BeatmapObjectManager::remove_obstacleDidPassAvoidedMarkEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58c73e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                { "remove_obstacleDidPassAvoidedMarkEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.add_sliderWasAddedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::System::Action_2<::GlobalNamespace::SliderData*, ::GlobalNamespace::SliderSpawnData>*)>(
    &::GlobalNamespace::BeatmapObjectManager::add_sliderWasAddedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58c8c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                { "add_sliderWasAddedEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::SliderData*, ::GlobalNamespace::SliderSpawnData>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.remove_sliderWasAddedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::System::Action_2<::GlobalNamespace::SliderData*, ::GlobalNamespace::SliderSpawnData>*)>(
    &::GlobalNamespace::BeatmapObjectManager::remove_sliderWasAddedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58c8d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                { "remove_sliderWasAddedEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::SliderData*, ::GlobalNamespace::SliderSpawnData>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.add_sliderWasSpawnedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::System::Action_1<::UnityW<::GlobalNamespace::SliderController>>*)>(
    &::GlobalNamespace::BeatmapObjectManager::add_sliderWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58c8dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                             { "add_sliderWasSpawnedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::SliderController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.remove_sliderWasSpawnedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::System::Action_1<::UnityW<::GlobalNamespace::SliderController>>*)>(
    &::GlobalNamespace::BeatmapObjectManager::remove_sliderWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58c8e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                             { "remove_sliderWasSpawnedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::SliderController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.add_sliderWasDespawnedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::System::Action_1<::UnityW<::GlobalNamespace::SliderController>>*)>(
    &::GlobalNamespace::BeatmapObjectManager::add_sliderWasDespawnedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58c8f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                             { "add_sliderWasDespawnedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::SliderController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.remove_sliderWasDespawnedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::System::Action_1<::UnityW<::GlobalNamespace::SliderController>>*)>(
    &::GlobalNamespace::BeatmapObjectManager::remove_sliderWasDespawnedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58c900c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                             { "remove_sliderWasDespawnedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::SliderController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.add_didHideAllBeatmapObjectsEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::System::Action_1<bool>*)>(
    &::GlobalNamespace::BeatmapObjectManager::add_didHideAllBeatmapObjectsEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58c90cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), { "add_didHideAllBeatmapObjectsEvent", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.remove_didHideAllBeatmapObjectsEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::System::Action_1<bool>*)>(
    &::GlobalNamespace::BeatmapObjectManager::remove_didHideAllBeatmapObjectsEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58c918c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                                                           { "remove_didHideAllBeatmapObjectsEvent", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.get_activeObstacleControllers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>* (::GlobalNamespace::BeatmapObjectManager::*)()>(
    &::GlobalNamespace::BeatmapObjectManager::get_activeObstacleControllers)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), { ::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.ProcessObstacleData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::GlobalNamespace::ObstacleData*, ::by_ref<::GlobalNamespace::ObstacleSpawnData>)>(
    &::GlobalNamespace::BeatmapObjectManager::ProcessObstacleData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), { ::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.ProcessNoteData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::GlobalNamespace::NoteData*, ::by_ref<::GlobalNamespace::NoteSpawnData>, bool)>(
    &::GlobalNamespace::BeatmapObjectManager::ProcessNoteData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), { ::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.ProcessSliderData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::GlobalNamespace::SliderData*, ::by_ref<::GlobalNamespace::SliderSpawnData>)>(
    &::GlobalNamespace::BeatmapObjectManager::ProcessSliderData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), { ::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.DespawnInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::BeatmapObjectManager::DespawnInternal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), { ::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.DespawnInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::GlobalNamespace::ObstacleController*)>(
    &::GlobalNamespace::BeatmapObjectManager::DespawnInternal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), { ::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.DespawnInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::GlobalNamespace::SliderController*)>(
    &::GlobalNamespace::BeatmapObjectManager::DespawnInternal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), { ::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.get_spawnHidden
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapObjectManager::*)()>(&::GlobalNamespace::BeatmapObjectManager::get_spawnHidden)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c924c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), { "get_spawnHidden", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.set_spawnHidden
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(bool)>(&::GlobalNamespace::BeatmapObjectManager::set_spawnHidden)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c9254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), { "set_spawnHidden", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.AddSpawnedObstacleController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::GlobalNamespace::ObstacleController*, ::GlobalNamespace::ObstacleSpawnData)>(
    &::GlobalNamespace::BeatmapObjectManager::AddSpawnedObstacleController)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x58c925c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                            { "AddSpawnedObstacleController", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleController*>(), ::i2c::type_of<::GlobalNamespace::ObstacleSpawnData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.AddSpawnedNoteController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::GlobalNamespace::NoteController*, ::GlobalNamespace::NoteSpawnData)>(
    &::GlobalNamespace::BeatmapObjectManager::AddSpawnedNoteController)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x58c9da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                { "AddSpawnedNoteController", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>(), ::i2c::type_of<::GlobalNamespace::NoteSpawnData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.AddSpawnedSliderController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::GlobalNamespace::SliderController*, ::GlobalNamespace::SliderSpawnData)>(
    &::GlobalNamespace::BeatmapObjectManager::AddSpawnedSliderController)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x58ca27c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                         { "AddSpawnedSliderController", {}, { ::i2c::type_of<::GlobalNamespace::SliderController*>(), ::i2c::type_of<::GlobalNamespace::SliderSpawnData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.SetNoteControllerEventCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::BeatmapObjectManager::SetNoteControllerEventCallbacks)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x58c9f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                                                           { "SetNoteControllerEventCallbacks", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.RemoveNoteControllerEventCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::BeatmapObjectManager::RemoveNoteControllerEventCallbacks)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x58ca518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                                                           { "RemoveNoteControllerEventCallbacks", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.SetSliderNoteControllerEventCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::GlobalNamespace::SliderController*)>(
    &::GlobalNamespace::BeatmapObjectManager::SetSliderNoteControllerEventCallbacks)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x58ca3e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), { "SetSliderNoteControllerEventCallbacks", {}, { ::i2c::type_of<::GlobalNamespace::SliderController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.RemoveSliderNoteControllerEventCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::GlobalNamespace::SliderController*)>(
    &::GlobalNamespace::BeatmapObjectManager::RemoveSliderNoteControllerEventCallbacks)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x58ca864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                             { "RemoveSliderNoteControllerEventCallbacks", {}, { ::i2c::type_of<::GlobalNamespace::SliderController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.SetObstacleEventCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::GlobalNamespace::ObstacleController*)>(
    &::GlobalNamespace::BeatmapObjectManager::SetObstacleEventCallbacks)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x58c93d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                                                           { "SetObstacleEventCallbacks", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.RemoveObstacleEventCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::GlobalNamespace::ObstacleController*)>(
    &::GlobalNamespace::BeatmapObjectManager::RemoveObstacleEventCallbacks)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x58caca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                                                           { "RemoveObstacleEventCallbacks", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.Despawn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::GlobalNamespace::NoteController*)>(&::GlobalNamespace::BeatmapObjectManager::Despawn)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x58cb0f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), { "Despawn", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.Despawn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::GlobalNamespace::ObstacleController*)>(&::GlobalNamespace::BeatmapObjectManager::Despawn)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x58cb1a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), { "Despawn", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.Despawn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::GlobalNamespace::SliderController*)>(&::GlobalNamespace::BeatmapObjectManager::Despawn)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x58cb25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), { "Despawn", {}, { ::i2c::type_of<::GlobalNamespace::SliderController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.HandleNoteControllerNoteDidStartJump
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::BeatmapObjectManager::HandleNoteControllerNoteDidStartJump)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58cb310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                                                           { "HandleNoteControllerNoteDidStartJump", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.HandleNoteControllerNoteWasMissed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::BeatmapObjectManager::HandleNoteControllerNoteWasMissed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58cb32c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                                                           { "HandleNoteControllerNoteWasMissed", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.HandleNoteControllerNoteDidFinishJump
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::BeatmapObjectManager::HandleNoteControllerNoteDidFinishJump)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58cb348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                                                           { "HandleNoteControllerNoteDidFinishJump", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.HandleNoteControllerNoteDidStartDissolving
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::GlobalNamespace::NoteControllerBase*, float_t)>(
    &::GlobalNamespace::BeatmapObjectManager::HandleNoteControllerNoteDidStartDissolving)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58cb34c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                { "HandleNoteControllerNoteDidStartDissolving", {}, { ::i2c::type_of<::GlobalNamespace::NoteControllerBase*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.HandleNoteControllerNoteDidDissolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::BeatmapObjectManager::HandleNoteControllerNoteDidDissolve)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58cb368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                                                           { "HandleNoteControllerNoteDidDissolve", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.HandleNoteControllerNoteWasCut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::GlobalNamespace::NoteController*, ::by_ref<::GlobalNamespace::NoteCutInfo>)>(
    &::GlobalNamespace::BeatmapObjectManager::HandleNoteControllerNoteWasCut)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x58cb36c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                            { "HandleNoteControllerNoteWasCut", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NoteCutInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.HandleObstaclePassedThreeQuartersOfJumpDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::GlobalNamespace::ObstacleController*)>(
    &::GlobalNamespace::BeatmapObjectManager::HandleObstaclePassedThreeQuartersOfJumpDuration)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58cb3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                             { "HandleObstaclePassedThreeQuartersOfJumpDuration", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.HandleObstaclePassedAvoidedMark
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::GlobalNamespace::ObstacleController*)>(
    &::GlobalNamespace::BeatmapObjectManager::HandleObstaclePassedAvoidedMark)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58cb3c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                                                           { "HandleObstaclePassedAvoidedMark", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.HandleObstacleFinishedMovement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::GlobalNamespace::ObstacleController*)>(
    &::GlobalNamespace::BeatmapObjectManager::HandleObstacleFinishedMovement)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58cb3e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                                                           { "HandleObstacleFinishedMovement", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.HandleObstacleDidDissolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::GlobalNamespace::ObstacleController*)>(
    &::GlobalNamespace::BeatmapObjectManager::HandleObstacleDidDissolve)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58cb3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                                                           { "HandleObstacleDidDissolve", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.HandleSliderDidFinishJump
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::GlobalNamespace::SliderController*)>(
    &::GlobalNamespace::BeatmapObjectManager::HandleSliderDidFinishJump)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58cb3ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                                                           { "HandleSliderDidFinishJump", {}, { ::i2c::type_of<::GlobalNamespace::SliderController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.HandleSliderDidDissolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::GlobalNamespace::SliderController*)>(
    &::GlobalNamespace::BeatmapObjectManager::HandleSliderDidDissolve)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58cb3f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), { "HandleSliderDidDissolve", {}, { ::i2c::type_of<::GlobalNamespace::SliderController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.DissolveAllObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)()>(&::GlobalNamespace::BeatmapObjectManager::DissolveAllObjects)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x58cb3f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), { "DissolveAllObjects", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.HideAllBeatmapObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(bool)>(&::GlobalNamespace::BeatmapObjectManager::HideAllBeatmapObjects)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x58cb578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), { "HideAllBeatmapObjects", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.PauseAllBeatmapObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(bool)>(&::GlobalNamespace::BeatmapObjectManager::PauseAllBeatmapObjects)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x58cb728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), { "PauseAllBeatmapObjects", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)()>(&::GlobalNamespace::BeatmapObjectManager::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x58cb8ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectManager.INoteControllerNoteWasCutEvent_HandleNoteControllerNoteWasCut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectManager::*)(::GlobalNamespace::NoteController*, ::by_ref<::GlobalNamespace::NoteCutInfo>)>(
    &::GlobalNamespace::BeatmapObjectManager::INoteControllerNoteWasCutEvent_HandleNoteControllerNoteWasCut)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58cb920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                             { "INoteControllerNoteWasCutEvent.HandleNoteControllerNoteWasCut",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::NoteController*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NoteCutInfo>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Action_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::NoteSpawnData>*& GlobalNamespace::BeatmapObjectManager::__cordl_internal_get_noteWasAddedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteWasAddedEvent;
}
constexpr ::System::Action_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::NoteSpawnData>* const& GlobalNamespace::BeatmapObjectManager::__cordl_internal_get_noteWasAddedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteWasAddedEvent;
}
constexpr void GlobalNamespace::BeatmapObjectManager::__cordl_internal_set_noteWasAddedEvent(::System::Action_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::NoteSpawnData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteWasAddedEvent = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>*& GlobalNamespace::BeatmapObjectManager::__cordl_internal_get_noteWasSpawnedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteWasSpawnedEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>* const& GlobalNamespace::BeatmapObjectManager::__cordl_internal_get_noteWasSpawnedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteWasSpawnedEvent;
}
constexpr void GlobalNamespace::BeatmapObjectManager::__cordl_internal_set_noteWasSpawnedEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteWasSpawnedEvent = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>*& GlobalNamespace::BeatmapObjectManager::__cordl_internal_get_noteWasDespawnedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteWasDespawnedEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>* const& GlobalNamespace::BeatmapObjectManager::__cordl_internal_get_noteWasDespawnedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteWasDespawnedEvent;
}
constexpr void GlobalNamespace::BeatmapObjectManager::__cordl_internal_set_noteWasDespawnedEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteWasDespawnedEvent = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>*& GlobalNamespace::BeatmapObjectManager::__cordl_internal_get_noteWasMissedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteWasMissedEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>* const& GlobalNamespace::BeatmapObjectManager::__cordl_internal_get_noteWasMissedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteWasMissedEvent;
}
constexpr void GlobalNamespace::BeatmapObjectManager::__cordl_internal_set_noteWasMissedEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteWasMissedEvent = value;
}
constexpr ::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate*& GlobalNamespace::BeatmapObjectManager::__cordl_internal_get_noteWasCutEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteWasCutEvent;
}
constexpr ::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate* const& GlobalNamespace::BeatmapObjectManager::__cordl_internal_get_noteWasCutEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteWasCutEvent;
}
constexpr void GlobalNamespace::BeatmapObjectManager::__cordl_internal_set_noteWasCutEvent(::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteWasCutEvent = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>*& GlobalNamespace::BeatmapObjectManager::__cordl_internal_get_noteDidStartJumpEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteDidStartJumpEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>* const& GlobalNamespace::BeatmapObjectManager::__cordl_internal_get_noteDidStartJumpEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteDidStartJumpEvent;
}
constexpr void GlobalNamespace::BeatmapObjectManager::__cordl_internal_set_noteDidStartJumpEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteDidStartJumpEvent = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::NoteControllerBase>>*& GlobalNamespace::BeatmapObjectManager::__cordl_internal_get_noteDidStartDissolvingEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteDidStartDissolvingEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::NoteControllerBase>>* const& GlobalNamespace::BeatmapObjectManager::__cordl_internal_get_noteDidStartDissolvingEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteDidStartDissolvingEvent;
}
constexpr void GlobalNamespace::BeatmapObjectManager::__cordl_internal_set_noteDidStartDissolvingEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteControllerBase>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteDidStartDissolvingEvent = value;
}
constexpr ::System::Action_3<::GlobalNamespace::ObstacleData*, ::GlobalNamespace::ObstacleSpawnData, float_t>*& GlobalNamespace::BeatmapObjectManager::__cordl_internal_get_obstacleWasAddedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstacleWasAddedEvent;
}
constexpr ::System::Action_3<::GlobalNamespace::ObstacleData*, ::GlobalNamespace::ObstacleSpawnData, float_t>* const&
GlobalNamespace::BeatmapObjectManager::__cordl_internal_get_obstacleWasAddedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstacleWasAddedEvent;
}
constexpr void
GlobalNamespace::BeatmapObjectManager::__cordl_internal_set_obstacleWasAddedEvent(::System::Action_3<::GlobalNamespace::ObstacleData*, ::GlobalNamespace::ObstacleSpawnData, float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___obstacleWasAddedEvent = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*& GlobalNamespace::BeatmapObjectManager::__cordl_internal_get_obstacleWasSpawnedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstacleWasSpawnedEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* const& GlobalNamespace::BeatmapObjectManager::__cordl_internal_get_obstacleWasSpawnedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstacleWasSpawnedEvent;
}
constexpr void GlobalNamespace::BeatmapObjectManager::__cordl_internal_set_obstacleWasSpawnedEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___obstacleWasSpawnedEvent = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*& GlobalNamespace::BeatmapObjectManager::__cordl_internal_get_obstacleWasDespawnedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstacleWasDespawnedEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* const& GlobalNamespace::BeatmapObjectManager::__cordl_internal_get_obstacleWasDespawnedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstacleWasDespawnedEvent;
}
constexpr void GlobalNamespace::BeatmapObjectManager::__cordl_internal_set_obstacleWasDespawnedEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___obstacleWasDespawnedEvent = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*& GlobalNamespace::BeatmapObjectManager::__cordl_internal_get_obstacleDidPassThreeQuartersOfMove2Event() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstacleDidPassThreeQuartersOfMove2Event;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* const& GlobalNamespace::BeatmapObjectManager::__cordl_internal_get_obstacleDidPassThreeQuartersOfMove2Event() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstacleDidPassThreeQuartersOfMove2Event;
}
constexpr void GlobalNamespace::BeatmapObjectManager::__cordl_internal_set_obstacleDidPassThreeQuartersOfMove2Event(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___obstacleDidPassThreeQuartersOfMove2Event = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*& GlobalNamespace::BeatmapObjectManager::__cordl_internal_get_obstacleDidPassAvoidedMarkEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstacleDidPassAvoidedMarkEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* const& GlobalNamespace::BeatmapObjectManager::__cordl_internal_get_obstacleDidPassAvoidedMarkEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstacleDidPassAvoidedMarkEvent;
}
constexpr void GlobalNamespace::BeatmapObjectManager::__cordl_internal_set_obstacleDidPassAvoidedMarkEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___obstacleDidPassAvoidedMarkEvent = value;
}
constexpr ::System::Action_2<::GlobalNamespace::SliderData*, ::GlobalNamespace::SliderSpawnData>*& GlobalNamespace::BeatmapObjectManager::__cordl_internal_get_sliderWasAddedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sliderWasAddedEvent;
}
constexpr ::System::Action_2<::GlobalNamespace::SliderData*, ::GlobalNamespace::SliderSpawnData>* const& GlobalNamespace::BeatmapObjectManager::__cordl_internal_get_sliderWasAddedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sliderWasAddedEvent;
}
constexpr void GlobalNamespace::BeatmapObjectManager::__cordl_internal_set_sliderWasAddedEvent(::System::Action_2<::GlobalNamespace::SliderData*, ::GlobalNamespace::SliderSpawnData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sliderWasAddedEvent = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::SliderController>>*& GlobalNamespace::BeatmapObjectManager::__cordl_internal_get_sliderWasSpawnedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sliderWasSpawnedEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::SliderController>>* const& GlobalNamespace::BeatmapObjectManager::__cordl_internal_get_sliderWasSpawnedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sliderWasSpawnedEvent;
}
constexpr void GlobalNamespace::BeatmapObjectManager::__cordl_internal_set_sliderWasSpawnedEvent(::System::Action_1<::UnityW<::GlobalNamespace::SliderController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sliderWasSpawnedEvent = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::SliderController>>*& GlobalNamespace::BeatmapObjectManager::__cordl_internal_get_sliderWasDespawnedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sliderWasDespawnedEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::SliderController>>* const& GlobalNamespace::BeatmapObjectManager::__cordl_internal_get_sliderWasDespawnedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sliderWasDespawnedEvent;
}
constexpr void GlobalNamespace::BeatmapObjectManager::__cordl_internal_set_sliderWasDespawnedEvent(::System::Action_1<::UnityW<::GlobalNamespace::SliderController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sliderWasDespawnedEvent = value;
}
constexpr ::System::Action_1<bool>*& GlobalNamespace::BeatmapObjectManager::__cordl_internal_get_didHideAllBeatmapObjectsEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didHideAllBeatmapObjectsEvent;
}
constexpr ::System::Action_1<bool>* const& GlobalNamespace::BeatmapObjectManager::__cordl_internal_get_didHideAllBeatmapObjectsEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didHideAllBeatmapObjectsEvent;
}
constexpr void GlobalNamespace::BeatmapObjectManager::__cordl_internal_set_didHideAllBeatmapObjectsEvent(::System::Action_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didHideAllBeatmapObjectsEvent = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBeatmapObjectController*>*& GlobalNamespace::BeatmapObjectManager::__cordl_internal_get__allBeatmapObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allBeatmapObjects;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBeatmapObjectController*>* const& GlobalNamespace::BeatmapObjectManager::__cordl_internal_get__allBeatmapObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allBeatmapObjects;
}
constexpr void GlobalNamespace::BeatmapObjectManager::__cordl_internal_set__allBeatmapObjects(::System::Collections::Generic::List_1<::GlobalNamespace::IBeatmapObjectController*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allBeatmapObjects = value;
}
constexpr bool& GlobalNamespace::BeatmapObjectManager::__cordl_internal_get__spawnHidden_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnHidden_k__BackingField;
}
constexpr bool const& GlobalNamespace::BeatmapObjectManager::__cordl_internal_get__spawnHidden_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnHidden_k__BackingField;
}
constexpr void GlobalNamespace::BeatmapObjectManager::__cordl_internal_set__spawnHidden_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spawnHidden_k__BackingField = value;
}
inline void GlobalNamespace::BeatmapObjectManager::add_noteWasAddedEvent(::System::Action_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::NoteSpawnData>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                              { "add_noteWasAddedEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::NoteSpawnData>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapObjectManager::remove_noteWasAddedEvent(::System::Action_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::NoteSpawnData>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                              { "remove_noteWasAddedEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::NoteSpawnData>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapObjectManager::add_noteWasSpawnedEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                           { "add_noteWasSpawnedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapObjectManager::remove_noteWasSpawnedEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                           { "remove_noteWasSpawnedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapObjectManager::add_noteWasDespawnedEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                           { "add_noteWasDespawnedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapObjectManager::remove_noteWasDespawnedEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                           { "remove_noteWasDespawnedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapObjectManager::add_noteWasMissedEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                           { "add_noteWasMissedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapObjectManager::remove_noteWasMissedEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                           { "remove_noteWasMissedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapObjectManager::add_noteWasCutEvent(::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                           { "add_noteWasCutEvent", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapObjectManager::remove_noteWasCutEvent(::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                           { "remove_noteWasCutEvent", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapObjectManager_NoteWasCutDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapObjectManager::add_noteDidStartJumpEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                           { "add_noteDidStartJumpEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapObjectManager::remove_noteDidStartJumpEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                           { "remove_noteDidStartJumpEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapObjectManager::add_noteDidStartDissolvingEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteControllerBase>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                           { "add_noteDidStartDissolvingEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::NoteControllerBase>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapObjectManager::remove_noteDidStartDissolvingEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteControllerBase>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                           { "remove_noteDidStartDissolvingEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::NoteControllerBase>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapObjectManager::add_obstacleWasAddedEvent(::System::Action_3<::GlobalNamespace::ObstacleData*, ::GlobalNamespace::ObstacleSpawnData, float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                          { "add_obstacleWasAddedEvent", {}, { ::i2c::type_of<::System::Action_3<::GlobalNamespace::ObstacleData*, ::GlobalNamespace::ObstacleSpawnData, float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapObjectManager::remove_obstacleWasAddedEvent(::System::Action_3<::GlobalNamespace::ObstacleData*, ::GlobalNamespace::ObstacleSpawnData, float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                          { "remove_obstacleWasAddedEvent", {}, { ::i2c::type_of<::System::Action_3<::GlobalNamespace::ObstacleData*, ::GlobalNamespace::ObstacleSpawnData, float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapObjectManager::add_obstacleWasSpawnedEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                           { "add_obstacleWasSpawnedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapObjectManager::remove_obstacleWasSpawnedEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                           { "remove_obstacleWasSpawnedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapObjectManager::add_obstacleWasDespawnedEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                           { "add_obstacleWasDespawnedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapObjectManager::remove_obstacleWasDespawnedEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                           { "remove_obstacleWasDespawnedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapObjectManager::add_obstacleDidPassThreeQuartersOfMove2Event(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                              { "add_obstacleDidPassThreeQuartersOfMove2Event", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapObjectManager::remove_obstacleDidPassThreeQuartersOfMove2Event(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                              { "remove_obstacleDidPassThreeQuartersOfMove2Event", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapObjectManager::add_obstacleDidPassAvoidedMarkEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                           { "add_obstacleDidPassAvoidedMarkEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapObjectManager::remove_obstacleDidPassAvoidedMarkEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                              { "remove_obstacleDidPassAvoidedMarkEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapObjectManager::add_sliderWasAddedEvent(::System::Action_2<::GlobalNamespace::SliderData*, ::GlobalNamespace::SliderSpawnData>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                              { "add_sliderWasAddedEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::SliderData*, ::GlobalNamespace::SliderSpawnData>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapObjectManager::remove_sliderWasAddedEvent(::System::Action_2<::GlobalNamespace::SliderData*, ::GlobalNamespace::SliderSpawnData>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                              { "remove_sliderWasAddedEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::SliderData*, ::GlobalNamespace::SliderSpawnData>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapObjectManager::add_sliderWasSpawnedEvent(::System::Action_1<::UnityW<::GlobalNamespace::SliderController>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                           { "add_sliderWasSpawnedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::SliderController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapObjectManager::remove_sliderWasSpawnedEvent(::System::Action_1<::UnityW<::GlobalNamespace::SliderController>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                           { "remove_sliderWasSpawnedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::SliderController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapObjectManager::add_sliderWasDespawnedEvent(::System::Action_1<::UnityW<::GlobalNamespace::SliderController>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                           { "add_sliderWasDespawnedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::SliderController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapObjectManager::remove_sliderWasDespawnedEvent(::System::Action_1<::UnityW<::GlobalNamespace::SliderController>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                           { "remove_sliderWasDespawnedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::SliderController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapObjectManager::add_didHideAllBeatmapObjectsEvent(::System::Action_1<bool>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), { "add_didHideAllBeatmapObjectsEvent", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapObjectManager::remove_didHideAllBeatmapObjectsEvent(::System::Action_1<bool>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), { "remove_didHideAllBeatmapObjectsEvent", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>* GlobalNamespace::BeatmapObjectManager::get_activeObstacleControllers() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>*>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapObjectManager::ProcessObstacleData(::GlobalNamespace::ObstacleData* obstacleData, ::by_ref<::GlobalNamespace::ObstacleSpawnData> obstacleSpawnData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obstacleData, obstacleSpawnData);
}
inline void GlobalNamespace::BeatmapObjectManager::ProcessNoteData(::GlobalNamespace::NoteData* noteData, ::by_ref<::GlobalNamespace::NoteSpawnData> noteSpawnData, bool forceIsFirstNoteBehaviour) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteData, noteSpawnData, forceIsFirstNoteBehaviour);
}
inline void GlobalNamespace::BeatmapObjectManager::ProcessSliderData(::GlobalNamespace::SliderData* sliderData, ::by_ref<::GlobalNamespace::SliderSpawnData> sliderSpawnData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sliderData, sliderSpawnData);
}
inline void GlobalNamespace::BeatmapObjectManager::DespawnInternal(::GlobalNamespace::NoteController* noteController) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::BeatmapObjectManager::DespawnInternal(::GlobalNamespace::ObstacleController* obstacleController) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obstacleController);
}
inline void GlobalNamespace::BeatmapObjectManager::DespawnInternal(::GlobalNamespace::SliderController* sliderNoteController) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sliderNoteController);
}
inline bool GlobalNamespace::BeatmapObjectManager::get_spawnHidden() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), { "get_spawnHidden", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapObjectManager::set_spawnHidden(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), { "set_spawnHidden", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapObjectManager::AddSpawnedObstacleController(::GlobalNamespace::ObstacleController* obstacleController, ::GlobalNamespace::ObstacleSpawnData obstacleSpawnData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                       { "AddSpawnedObstacleController", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleController*>(), ::i2c::type_of<::GlobalNamespace::ObstacleSpawnData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obstacleController, obstacleSpawnData);
}
inline void GlobalNamespace::BeatmapObjectManager::AddSpawnedNoteController(::GlobalNamespace::NoteController* noteController, ::GlobalNamespace::NoteSpawnData noteSpawnData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                              { "AddSpawnedNoteController", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>(), ::i2c::type_of<::GlobalNamespace::NoteSpawnData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController, noteSpawnData);
}
inline void GlobalNamespace::BeatmapObjectManager::AddSpawnedSliderController(::GlobalNamespace::SliderController* sliderController, ::GlobalNamespace::SliderSpawnData sliderSpawnData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                              { "AddSpawnedSliderController", {}, { ::i2c::type_of<::GlobalNamespace::SliderController*>(), ::i2c::type_of<::GlobalNamespace::SliderSpawnData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sliderController, sliderSpawnData);
}
inline void GlobalNamespace::BeatmapObjectManager::SetNoteControllerEventCallbacks(::GlobalNamespace::NoteController* noteController) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                                                         { "SetNoteControllerEventCallbacks", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::BeatmapObjectManager::RemoveNoteControllerEventCallbacks(::GlobalNamespace::NoteController* noteController) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                                                         { "RemoveNoteControllerEventCallbacks", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::BeatmapObjectManager::SetSliderNoteControllerEventCallbacks(::GlobalNamespace::SliderController* sliderNoteController) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                                                         { "SetSliderNoteControllerEventCallbacks", {}, { ::i2c::type_of<::GlobalNamespace::SliderController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sliderNoteController);
}
inline void GlobalNamespace::BeatmapObjectManager::RemoveSliderNoteControllerEventCallbacks(::GlobalNamespace::SliderController* sliderNoteController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                           { "RemoveSliderNoteControllerEventCallbacks", {}, { ::i2c::type_of<::GlobalNamespace::SliderController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sliderNoteController);
}
inline void GlobalNamespace::BeatmapObjectManager::SetObstacleEventCallbacks(::GlobalNamespace::ObstacleController* obstacleController) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                                                         { "SetObstacleEventCallbacks", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obstacleController);
}
inline void GlobalNamespace::BeatmapObjectManager::RemoveObstacleEventCallbacks(::GlobalNamespace::ObstacleController* obstacleController) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                                                         { "RemoveObstacleEventCallbacks", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obstacleController);
}
inline void GlobalNamespace::BeatmapObjectManager::Despawn(::GlobalNamespace::NoteController* noteController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), { "Despawn", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::BeatmapObjectManager::Despawn(::GlobalNamespace::ObstacleController* obstacleController) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), { "Despawn", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obstacleController);
}
inline void GlobalNamespace::BeatmapObjectManager::Despawn(::GlobalNamespace::SliderController* sliderNoteController) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), { "Despawn", {}, { ::i2c::type_of<::GlobalNamespace::SliderController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sliderNoteController);
}
inline void GlobalNamespace::BeatmapObjectManager::HandleNoteControllerNoteDidStartJump(::GlobalNamespace::NoteController* noteController) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                                                         { "HandleNoteControllerNoteDidStartJump", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::BeatmapObjectManager::HandleNoteControllerNoteWasMissed(::GlobalNamespace::NoteController* noteController) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                                                         { "HandleNoteControllerNoteWasMissed", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::BeatmapObjectManager::HandleNoteControllerNoteDidFinishJump(::GlobalNamespace::NoteController* noteController) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                                                         { "HandleNoteControllerNoteDidFinishJump", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::BeatmapObjectManager::HandleNoteControllerNoteDidStartDissolving(::GlobalNamespace::NoteControllerBase* noteController, float_t duration) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                              { "HandleNoteControllerNoteDidStartDissolving", {}, { ::i2c::type_of<::GlobalNamespace::NoteControllerBase*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController, duration);
}
inline void GlobalNamespace::BeatmapObjectManager::HandleNoteControllerNoteDidDissolve(::GlobalNamespace::NoteController* noteController) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                                                         { "HandleNoteControllerNoteDidDissolve", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::BeatmapObjectManager::HandleNoteControllerNoteWasCut(::GlobalNamespace::NoteController* noteController, ::by_ref<::GlobalNamespace::NoteCutInfo> noteCutInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                          { "HandleNoteControllerNoteWasCut", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NoteCutInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController, noteCutInfo);
}
inline void GlobalNamespace::BeatmapObjectManager::HandleObstaclePassedThreeQuartersOfJumpDuration(::GlobalNamespace::ObstacleController* obstacleController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                           { "HandleObstaclePassedThreeQuartersOfJumpDuration", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obstacleController);
}
inline void GlobalNamespace::BeatmapObjectManager::HandleObstaclePassedAvoidedMark(::GlobalNamespace::ObstacleController* obstacleController) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                                                         { "HandleObstaclePassedAvoidedMark", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obstacleController);
}
inline void GlobalNamespace::BeatmapObjectManager::HandleObstacleFinishedMovement(::GlobalNamespace::ObstacleController* obstacleController) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                                                         { "HandleObstacleFinishedMovement", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obstacleController);
}
inline void GlobalNamespace::BeatmapObjectManager::HandleObstacleDidDissolve(::GlobalNamespace::ObstacleController* obstacleController) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                                                         { "HandleObstacleDidDissolve", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obstacleController);
}
inline void GlobalNamespace::BeatmapObjectManager::HandleSliderDidFinishJump(::GlobalNamespace::SliderController* sliderController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), { "HandleSliderDidFinishJump", {}, { ::i2c::type_of<::GlobalNamespace::SliderController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sliderController);
}
inline void GlobalNamespace::BeatmapObjectManager::HandleSliderDidDissolve(::GlobalNamespace::SliderController* sliderController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), { "HandleSliderDidDissolve", {}, { ::i2c::type_of<::GlobalNamespace::SliderController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sliderController);
}
inline void GlobalNamespace::BeatmapObjectManager::DissolveAllObjects() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), { "DissolveAllObjects", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapObjectManager::HideAllBeatmapObjects(bool hide) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), { "HideAllBeatmapObjects", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hide);
}
inline void GlobalNamespace::BeatmapObjectManager::PauseAllBeatmapObjects(bool pause) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), { "PauseAllBeatmapObjects", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pause);
}
inline void GlobalNamespace::BeatmapObjectManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapObjectManager::INoteControllerNoteWasCutEvent_HandleNoteControllerNoteWasCut(::GlobalNamespace::NoteController* noteController,
                                                                                                                 ::by_ref<::GlobalNamespace::NoteCutInfo> noteCutInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectManager*>(),
                                                           { "INoteControllerNoteWasCutEvent.HandleNoteControllerNoteWasCut",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::NoteController*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NoteCutInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController, noteCutInfo);
}
inline ::GlobalNamespace::BeatmapObjectManager* GlobalNamespace::BeatmapObjectManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapObjectManager*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBeatmapObjectSpawner"
constexpr GlobalNamespace::BeatmapObjectManager::operator ::GlobalNamespace::IBeatmapObjectSpawner*() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapObjectSpawner*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBeatmapObjectSpawner"
constexpr ::GlobalNamespace::IBeatmapObjectSpawner* GlobalNamespace::BeatmapObjectManager::i___GlobalNamespace__IBeatmapObjectSpawner() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapObjectSpawner*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::INoteControllerNoteDidStartJumpEvent"
constexpr GlobalNamespace::BeatmapObjectManager::operator ::GlobalNamespace::INoteControllerNoteDidStartJumpEvent*() noexcept {
  return static_cast<::GlobalNamespace::INoteControllerNoteDidStartJumpEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INoteControllerNoteDidStartJumpEvent"
constexpr ::GlobalNamespace::INoteControllerNoteDidStartJumpEvent* GlobalNamespace::BeatmapObjectManager::i___GlobalNamespace__INoteControllerNoteDidStartJumpEvent() noexcept {
  return static_cast<::GlobalNamespace::INoteControllerNoteDidStartJumpEvent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent"
constexpr GlobalNamespace::BeatmapObjectManager::operator ::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent*() noexcept {
  return static_cast<::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent"
constexpr ::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent* GlobalNamespace::BeatmapObjectManager::i___GlobalNamespace__INoteControllerNoteDidFinishJumpEvent() noexcept {
  return static_cast<::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::INoteControllerNoteWasCutEvent"
constexpr GlobalNamespace::BeatmapObjectManager::operator ::GlobalNamespace::INoteControllerNoteWasCutEvent*() noexcept {
  return static_cast<::GlobalNamespace::INoteControllerNoteWasCutEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INoteControllerNoteWasCutEvent"
constexpr ::GlobalNamespace::INoteControllerNoteWasCutEvent* GlobalNamespace::BeatmapObjectManager::i___GlobalNamespace__INoteControllerNoteWasCutEvent() noexcept {
  return static_cast<::GlobalNamespace::INoteControllerNoteWasCutEvent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::INoteControllerNoteWasMissedEvent"
constexpr GlobalNamespace::BeatmapObjectManager::operator ::GlobalNamespace::INoteControllerNoteWasMissedEvent*() noexcept {
  return static_cast<::GlobalNamespace::INoteControllerNoteWasMissedEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INoteControllerNoteWasMissedEvent"
constexpr ::GlobalNamespace::INoteControllerNoteWasMissedEvent* GlobalNamespace::BeatmapObjectManager::i___GlobalNamespace__INoteControllerNoteWasMissedEvent() noexcept {
  return static_cast<::GlobalNamespace::INoteControllerNoteWasMissedEvent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent"
constexpr GlobalNamespace::BeatmapObjectManager::operator ::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*() noexcept {
  return static_cast<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent"
constexpr ::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent* GlobalNamespace::BeatmapObjectManager::i___GlobalNamespace__INoteControllerNoteDidStartDissolvingEvent() noexcept {
  return static_cast<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::INoteControllerNoteDidDissolveEvent"
constexpr GlobalNamespace::BeatmapObjectManager::operator ::GlobalNamespace::INoteControllerNoteDidDissolveEvent*() noexcept {
  return static_cast<::GlobalNamespace::INoteControllerNoteDidDissolveEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INoteControllerNoteDidDissolveEvent"
constexpr ::GlobalNamespace::INoteControllerNoteDidDissolveEvent* GlobalNamespace::BeatmapObjectManager::i___GlobalNamespace__INoteControllerNoteDidDissolveEvent() noexcept {
  return static_cast<::GlobalNamespace::INoteControllerNoteDidDissolveEvent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ISliderDidFinishJumpEvent"
constexpr GlobalNamespace::BeatmapObjectManager::operator ::GlobalNamespace::ISliderDidFinishJumpEvent*() noexcept {
  return static_cast<::GlobalNamespace::ISliderDidFinishJumpEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ISliderDidFinishJumpEvent"
constexpr ::GlobalNamespace::ISliderDidFinishJumpEvent* GlobalNamespace::BeatmapObjectManager::i___GlobalNamespace__ISliderDidFinishJumpEvent() noexcept {
  return static_cast<::GlobalNamespace::ISliderDidFinishJumpEvent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ISliderDidDissolveEvent"
constexpr GlobalNamespace::BeatmapObjectManager::operator ::GlobalNamespace::ISliderDidDissolveEvent*() noexcept {
  return static_cast<::GlobalNamespace::ISliderDidDissolveEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ISliderDidDissolveEvent"
constexpr ::GlobalNamespace::ISliderDidDissolveEvent* GlobalNamespace::BeatmapObjectManager::i___GlobalNamespace__ISliderDidDissolveEvent() noexcept {
  return static_cast<::GlobalNamespace::ISliderDidDissolveEvent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapObjectManager::BeatmapObjectManager() {}
