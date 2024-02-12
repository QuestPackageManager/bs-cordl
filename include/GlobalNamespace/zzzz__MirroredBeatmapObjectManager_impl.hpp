#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MirroredBeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__IGameNoteMirrorable_def.hpp"
#include "GlobalNamespace/zzzz__INoteMirrorable_def.hpp"
#include "GlobalNamespace/zzzz__MemoryPoolContainer_1_def.hpp"
#include "GlobalNamespace/zzzz__MirroredBombNoteController_def.hpp"
#include "GlobalNamespace/zzzz__MirroredGameNoteController_def.hpp"
#include "GlobalNamespace/zzzz__MirroredObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__MirroredSliderController_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MirroredBeatmapObjectManager.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirroredBeatmapObjectManager::*)(
    ::GlobalNamespace::BeatmapObjectManager*, ::GlobalNamespace::__MirroredGameNoteController__Pool*, ::GlobalNamespace::__MirroredGameNoteController__Pool*,
    ::GlobalNamespace::__MirroredGameNoteController__Pool*, ::GlobalNamespace::__MirroredGameNoteController__Pool*, ::GlobalNamespace::__MirroredBombNoteController__Pool*,
    ::GlobalNamespace::__MirroredObstacleController__Pool*, ::GlobalNamespace::__MirroredSliderController__Pool*)>(&::GlobalNamespace::MirroredBeatmapObjectManager::Init)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x22c7abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapObjectManager*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MirroredGameNoteController__Pool*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MirroredGameNoteController__Pool*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MirroredGameNoteController__Pool*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MirroredGameNoteController__Pool*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MirroredBombNoteController__Pool*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MirroredObstacleController__Pool*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MirroredSliderController__Pool*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredBeatmapObjectManager.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirroredBeatmapObjectManager::*)()>(
    &::GlobalNamespace::MirroredBeatmapObjectManager::Finalize)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x22c7ef4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredBeatmapObjectManager.HandleNoteWasSpawned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirroredBeatmapObjectManager::*)(::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::MirroredBeatmapObjectManager::HandleNoteWasSpawned)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x22c8254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(), "HandleNoteWasSpawned", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredBeatmapObjectManager.HandleNoteWasDespawned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirroredBeatmapObjectManager::*)(::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::MirroredBeatmapObjectManager::HandleNoteWasDespawned)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x22c8480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(), "HandleNoteWasDespawned", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredBeatmapObjectManager.HandleObstacleWasSpawned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirroredBeatmapObjectManager::*)(::GlobalNamespace::ObstacleController*)>(
    &::GlobalNamespace::MirroredBeatmapObjectManager::HandleObstacleWasSpawned)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x22c85fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(), "HandleObstacleWasSpawned", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredBeatmapObjectManager.HandleObstacleWasDespawned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirroredBeatmapObjectManager::*)(::GlobalNamespace::ObstacleController*)>(
    &::GlobalNamespace::MirroredBeatmapObjectManager::HandleObstacleWasDespawned)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x22c8790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(), "HandleObstacleWasDespawned", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredBeatmapObjectManager.HandleSliderWasSpawned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirroredBeatmapObjectManager::*)(::GlobalNamespace::SliderController*)>(
    &::GlobalNamespace::MirroredBeatmapObjectManager::HandleSliderWasSpawned)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x22c8850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(), "HandleSliderWasSpawned", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredBeatmapObjectManager.HandleSliderWasDespawned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirroredBeatmapObjectManager::*)(::GlobalNamespace::SliderController*)>(
    &::GlobalNamespace::MirroredBeatmapObjectManager::HandleSliderWasDespawned)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x22c8af4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(), "HandleSliderWasDespawned", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredBeatmapObjectManager.HandleDidHideAllBeatmapObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirroredBeatmapObjectManager::*)(bool)>(
    &::GlobalNamespace::MirroredBeatmapObjectManager::HandleDidHideAllBeatmapObjects)> {
  constexpr static std::size_t size = 0x7c4;
  constexpr static std::size_t addrs = 0x22c8bb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(), "HandleDidHideAllBeatmapObjects",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredBeatmapObjectManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirroredBeatmapObjectManager::*)()>(
    &::GlobalNamespace::MirroredBeatmapObjectManager::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x22c93d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapObjectManager*& GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__beatmapObjectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__beatmapObjectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr void GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__mirroredBasicGameNotePoolContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredBasicGameNotePoolContainer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*> const&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__mirroredBasicGameNotePoolContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredBasicGameNotePoolContainer;
}
constexpr void GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_set__mirroredBasicGameNotePoolContainer(
    ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mirroredBasicGameNotePoolContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__mirroredBurstSliderHeadGameNotePoolContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredBurstSliderHeadGameNotePoolContainer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*> const&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__mirroredBurstSliderHeadGameNotePoolContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredBurstSliderHeadGameNotePoolContainer;
}
constexpr void GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_set__mirroredBurstSliderHeadGameNotePoolContainer(
    ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mirroredBurstSliderHeadGameNotePoolContainer)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__mirroredBurstSliderGameNotePoolContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredBurstSliderGameNotePoolContainer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*> const&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__mirroredBurstSliderGameNotePoolContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredBurstSliderGameNotePoolContainer;
}
constexpr void GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_set__mirroredBurstSliderGameNotePoolContainer(
    ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mirroredBurstSliderGameNotePoolContainer)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__mirroredBurstSliderFillPoolContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredBurstSliderFillPoolContainer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*> const&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__mirroredBurstSliderFillPoolContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredBurstSliderFillPoolContainer;
}
constexpr void GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_set__mirroredBurstSliderFillPoolContainer(
    ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mirroredBurstSliderFillPoolContainer)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredBombNoteController>>*&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__mirroredBombNotePoolContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredBombNotePoolContainer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredBombNoteController>>*> const&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__mirroredBombNotePoolContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredBombNotePoolContainer;
}
constexpr void GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_set__mirroredBombNotePoolContainer(
    ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredBombNoteController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mirroredBombNotePoolContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredObstacleController>>*&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__mirroredObstaclePoolContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredObstaclePoolContainer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredObstacleController>>*> const&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__mirroredObstaclePoolContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredObstaclePoolContainer;
}
constexpr void GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_set__mirroredObstaclePoolContainer(
    ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredObstacleController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mirroredObstaclePoolContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredSliderController>>*&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__mirroredSlidersPoolContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredSlidersPoolContainer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredSliderController>>*> const&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__mirroredSlidersPoolContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredSlidersPoolContainer;
}
constexpr void GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_set__mirroredSlidersPoolContainer(
    ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredSliderController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mirroredSlidersPoolContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<
    ::GlobalNamespace::IGameNoteMirrorable*,
    ::System::ValueTuple_2<::UnityW<::GlobalNamespace::MirroredGameNoteController>, ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*>>*&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__gameNoteControllersToMirroredGameNoteControllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameNoteControllersToMirroredGameNoteControllers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<
    ::GlobalNamespace::IGameNoteMirrorable*,
    ::System::ValueTuple_2<::UnityW<::GlobalNamespace::MirroredGameNoteController>, ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*>>*> const&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__gameNoteControllersToMirroredGameNoteControllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameNoteControllersToMirroredGameNoteControllers;
}
constexpr void GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_set__gameNoteControllersToMirroredGameNoteControllers(
    ::System::Collections::Generic::Dictionary_2<
        ::GlobalNamespace::IGameNoteMirrorable*,
        ::System::ValueTuple_2<::UnityW<::GlobalNamespace::MirroredGameNoteController>, ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameNoteControllersToMirroredGameNoteControllers)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INoteMirrorable*, ::UnityW<::GlobalNamespace::MirroredBombNoteController>>*&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__bombNoteControllersToMirroredBombNoteControllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombNoteControllersToMirroredBombNoteControllers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INoteMirrorable*, ::UnityW<::GlobalNamespace::MirroredBombNoteController>>*> const&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__bombNoteControllersToMirroredBombNoteControllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombNoteControllersToMirroredBombNoteControllers;
}
constexpr void GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_set__bombNoteControllersToMirroredBombNoteControllers(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INoteMirrorable*, ::UnityW<::GlobalNamespace::MirroredBombNoteController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bombNoteControllersToMirroredBombNoteControllers)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::ObstacleController>, ::UnityW<::GlobalNamespace::MirroredObstacleController>>*&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__obstacleControllersToMirroredObstacleControllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleControllersToMirroredObstacleControllers;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::ObstacleController>, ::UnityW<::GlobalNamespace::MirroredObstacleController>>*> const&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__obstacleControllersToMirroredObstacleControllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleControllersToMirroredObstacleControllers;
}
constexpr void GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_set__obstacleControllersToMirroredObstacleControllers(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::ObstacleController>, ::UnityW<::GlobalNamespace::MirroredObstacleController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____obstacleControllersToMirroredObstacleControllers)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::SliderController>, ::UnityW<::GlobalNamespace::MirroredSliderController>>*&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__sliderControllersToMirroredSliderControllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderControllersToMirroredSliderControllers;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::SliderController>, ::UnityW<::GlobalNamespace::MirroredSliderController>>*> const&
GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_get__sliderControllersToMirroredSliderControllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderControllersToMirroredSliderControllers;
}
constexpr void GlobalNamespace::MirroredBeatmapObjectManager::__cordl_internal_set__sliderControllersToMirroredSliderControllers(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::SliderController>, ::UnityW<::GlobalNamespace::MirroredSliderController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sliderControllersToMirroredSliderControllers)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MirroredBeatmapObjectManager::Init(
    ::GlobalNamespace::BeatmapObjectManager* beatmapObjectManager, ::GlobalNamespace::__MirroredGameNoteController__Pool* mirroredBasicGameNotePool,
    ::GlobalNamespace::__MirroredGameNoteController__Pool* burstSliderHeadGameNotePool, ::GlobalNamespace::__MirroredGameNoteController__Pool* burstSliderGameNotePool,
    ::GlobalNamespace::__MirroredGameNoteController__Pool* burstSliderFillPool, ::GlobalNamespace::__MirroredBombNoteController__Pool* mirroredBombNotePool,
    ::GlobalNamespace::__MirroredObstacleController__Pool* mirroredObstaclePool, ::GlobalNamespace::__MirroredSliderController__Pool* mirroredSlidersPool) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapObjectManager*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MirroredGameNoteController__Pool*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MirroredGameNoteController__Pool*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MirroredGameNoteController__Pool*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MirroredGameNoteController__Pool*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MirroredBombNoteController__Pool*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MirroredObstacleController__Pool*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MirroredSliderController__Pool*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapObjectManager, mirroredBasicGameNotePool, burstSliderHeadGameNotePool, burstSliderGameNotePool,
                                                          burstSliderFillPool, mirroredBombNotePool, mirroredObstaclePool, mirroredSlidersPool);
}
inline void GlobalNamespace::MirroredBeatmapObjectManager::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MirroredBeatmapObjectManager::HandleNoteWasSpawned(::GlobalNamespace::NoteController* noteController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(), "HandleNoteWasSpawned", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::MirroredBeatmapObjectManager::HandleNoteWasDespawned(::GlobalNamespace::NoteController* noteController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(), "HandleNoteWasDespawned", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::MirroredBeatmapObjectManager::HandleObstacleWasSpawned(::GlobalNamespace::ObstacleController* obstacleController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(), "HandleObstacleWasSpawned", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obstacleController);
}
inline void GlobalNamespace::MirroredBeatmapObjectManager::HandleObstacleWasDespawned(::GlobalNamespace::ObstacleController* obstacleController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(), "HandleObstacleWasDespawned", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obstacleController);
}
inline void GlobalNamespace::MirroredBeatmapObjectManager::HandleSliderWasSpawned(::GlobalNamespace::SliderController* sliderController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(), "HandleSliderWasSpawned", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sliderController);
}
inline void GlobalNamespace::MirroredBeatmapObjectManager::HandleSliderWasDespawned(::GlobalNamespace::SliderController* sliderController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(), "HandleSliderWasDespawned", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sliderController);
}
inline void GlobalNamespace::MirroredBeatmapObjectManager::HandleDidHideAllBeatmapObjects(bool hide) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(), "HandleDidHideAllBeatmapObjects",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hide);
}
inline ::GlobalNamespace::MirroredBeatmapObjectManager* GlobalNamespace::MirroredBeatmapObjectManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MirroredBeatmapObjectManager*>());
}
inline void GlobalNamespace::MirroredBeatmapObjectManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredBeatmapObjectManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MirroredBeatmapObjectManager::MirroredBeatmapObjectManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
