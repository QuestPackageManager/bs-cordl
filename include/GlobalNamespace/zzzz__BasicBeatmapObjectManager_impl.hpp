#pragma once
// IWYU pragma private; include "GlobalNamespace/BasicBeatmapObjectManager.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
#include "GlobalNamespace/zzzz__BombNoteController_def.hpp"
#include "GlobalNamespace/zzzz__BurstSliderGameNoteController_def.hpp"
#include "GlobalNamespace/zzzz__GameNoteController_def.hpp"
#include "GlobalNamespace/zzzz__MemoryPoolContainer_1_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_def.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Random_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BasicBeatmapObjectManager__InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BasicBeatmapObjectManager__InitData::*)(bool, bool, float_t, float_t)>(
    &::GlobalNamespace::__BasicBeatmapObjectManager__InitData::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3a81794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BasicBeatmapObjectManager__InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::__BasicBeatmapObjectManager__InitData::__cordl_internal_get_disappearingArrows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disappearingArrows;
}
constexpr bool const& GlobalNamespace::__BasicBeatmapObjectManager__InitData::__cordl_internal_get_disappearingArrows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disappearingArrows;
}
constexpr void GlobalNamespace::__BasicBeatmapObjectManager__InitData::__cordl_internal_set_disappearingArrows(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disappearingArrows = value;
}
constexpr bool& GlobalNamespace::__BasicBeatmapObjectManager__InitData::__cordl_internal_get_ghostNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ghostNotes;
}
constexpr bool const& GlobalNamespace::__BasicBeatmapObjectManager__InitData::__cordl_internal_get_ghostNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ghostNotes;
}
constexpr void GlobalNamespace::__BasicBeatmapObjectManager__InitData::__cordl_internal_set_ghostNotes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ghostNotes = value;
}
constexpr float_t& GlobalNamespace::__BasicBeatmapObjectManager__InitData::__cordl_internal_get_cutAngleTolerance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cutAngleTolerance;
}
constexpr float_t const& GlobalNamespace::__BasicBeatmapObjectManager__InitData::__cordl_internal_get_cutAngleTolerance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cutAngleTolerance;
}
constexpr void GlobalNamespace::__BasicBeatmapObjectManager__InitData::__cordl_internal_set_cutAngleTolerance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cutAngleTolerance = value;
}
constexpr float_t& GlobalNamespace::__BasicBeatmapObjectManager__InitData::__cordl_internal_get_notesUniformScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notesUniformScale;
}
constexpr float_t const& GlobalNamespace::__BasicBeatmapObjectManager__InitData::__cordl_internal_get_notesUniformScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notesUniformScale;
}
constexpr void GlobalNamespace::__BasicBeatmapObjectManager__InitData::__cordl_internal_set_notesUniformScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___notesUniformScale = value;
}
inline ::GlobalNamespace::__BasicBeatmapObjectManager__InitData* GlobalNamespace::__BasicBeatmapObjectManager__InitData::New_ctor(bool disappearingArrows, bool ghostNotes, float_t cutAngleTolerance,
                                                                                                                                  float_t notesUniformScale) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__BasicBeatmapObjectManager__InitData*>(disappearingArrows, ghostNotes, cutAngleTolerance, notesUniformScale));
}
inline void GlobalNamespace::__BasicBeatmapObjectManager__InitData::_ctor(bool disappearingArrows, bool ghostNotes, float_t cutAngleTolerance, float_t notesUniformScale) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BasicBeatmapObjectManager__InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disappearingArrows, ghostNotes, cutAngleTolerance, notesUniformScale);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BasicBeatmapObjectManager__InitData::__BasicBeatmapObjectManager__InitData() {}
//  Writing Method size for method: ::GlobalNamespace::BasicBeatmapObjectManager.get_activeObstacleControllers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>* (
    ::GlobalNamespace::BasicBeatmapObjectManager::*)()>(&::GlobalNamespace::BasicBeatmapObjectManager::get_activeObstacleControllers)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3a8010c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicBeatmapObjectManager.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicBeatmapObjectManager::*)(
    ::GlobalNamespace::__BasicBeatmapObjectManager__InitData*, ::GlobalNamespace::__GameNoteController__Pool*, ::GlobalNamespace::__GameNoteController__Pool*,
    ::GlobalNamespace::__BurstSliderGameNoteController__Pool*, ::GlobalNamespace::__BombNoteController__Pool*, ::GlobalNamespace::__ObstacleController__Pool*,
    ::GlobalNamespace::__SliderController__Pool*)>(&::GlobalNamespace::BasicBeatmapObjectManager::Init)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x3a8015c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BasicBeatmapObjectManager__InitData*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameNoteController__Pool*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameNoteController__Pool*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BurstSliderGameNoteController__Pool*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BombNoteController__Pool*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ObstacleController__Pool*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SliderController__Pool*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicBeatmapObjectManager.ProcessObstacleData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicBeatmapObjectManager::*)(
    ::GlobalNamespace::ObstacleData*, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData>)>(&::GlobalNamespace::BasicBeatmapObjectManager::ProcessObstacleData)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3a806e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicBeatmapObjectManager.DespawnInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicBeatmapObjectManager::*)(::GlobalNamespace::ObstacleController*)>(
    &::GlobalNamespace::BasicBeatmapObjectManager::DespawnInternal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3a8095c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicBeatmapObjectManager.ProcessNoteData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicBeatmapObjectManager::*)(
    ::GlobalNamespace::NoteData*, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData>, bool)>(&::GlobalNamespace::BasicBeatmapObjectManager::ProcessNoteData)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x3a809b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicBeatmapObjectManager.DespawnInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicBeatmapObjectManager::*)(::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::BasicBeatmapObjectManager::DespawnInternal)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x3a80ec0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicBeatmapObjectManager.ProcessSliderData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicBeatmapObjectManager::*)(
    ::GlobalNamespace::SliderData*, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData>)>(&::GlobalNamespace::BasicBeatmapObjectManager::ProcessSliderData)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x3a8109c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicBeatmapObjectManager.DespawnInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicBeatmapObjectManager::*)(::GlobalNamespace::SliderController*)>(
    &::GlobalNamespace::BasicBeatmapObjectManager::DespawnInternal)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3a814c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicBeatmapObjectManager.__InvalidateGameNotePools
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicBeatmapObjectManager::*)()>(
    &::GlobalNamespace::BasicBeatmapObjectManager::__InvalidateGameNotePools)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3a8155c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(),
                                                                               "__InvalidateGameNotePools", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicBeatmapObjectManager.__InvalidateBombNotePool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicBeatmapObjectManager::*)()>(
    &::GlobalNamespace::BasicBeatmapObjectManager::__InvalidateBombNotePool)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3a81624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(),
                                                                               "__InvalidateBombNotePool", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicBeatmapObjectManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicBeatmapObjectManager::*)()>(&::GlobalNamespace::BasicBeatmapObjectManager::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3a816b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Random*& GlobalNamespace::BasicBeatmapObjectManager::__cordl_internal_get__random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
constexpr ::cordl_internals::to_const_pointer<::System::Random*> const& GlobalNamespace::BasicBeatmapObjectManager::__cordl_internal_get__random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
constexpr void GlobalNamespace::BasicBeatmapObjectManager::__cordl_internal_set__random(::System::Random* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____random)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<float_t>& GlobalNamespace::BasicBeatmapObjectManager::__cordl_internal_get__firstBasicNoteTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstBasicNoteTime;
}
constexpr ::System::Nullable_1<float_t> const& GlobalNamespace::BasicBeatmapObjectManager::__cordl_internal_get__firstBasicNoteTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstBasicNoteTime;
}
constexpr void GlobalNamespace::BasicBeatmapObjectManager::__cordl_internal_set__firstBasicNoteTime(::System::Nullable_1<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____firstBasicNoteTime = value;
}
constexpr ::GlobalNamespace::__BasicBeatmapObjectManager__InitData*& GlobalNamespace::BasicBeatmapObjectManager::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BasicBeatmapObjectManager__InitData*> const& GlobalNamespace::BasicBeatmapObjectManager::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::BasicBeatmapObjectManager::__cordl_internal_set__initData(::GlobalNamespace::__BasicBeatmapObjectManager__InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::GameNoteController>>*& GlobalNamespace::BasicBeatmapObjectManager::__cordl_internal_get__basicGameNotePoolContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____basicGameNotePoolContainer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::GameNoteController>>*> const&
GlobalNamespace::BasicBeatmapObjectManager::__cordl_internal_get__basicGameNotePoolContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____basicGameNotePoolContainer;
}
constexpr void
GlobalNamespace::BasicBeatmapObjectManager::__cordl_internal_set__basicGameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::GameNoteController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____basicGameNotePoolContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::GameNoteController>>*&
GlobalNamespace::BasicBeatmapObjectManager::__cordl_internal_get__burstSliderHeadGameNotePoolContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burstSliderHeadGameNotePoolContainer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::GameNoteController>>*> const&
GlobalNamespace::BasicBeatmapObjectManager::__cordl_internal_get__burstSliderHeadGameNotePoolContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burstSliderHeadGameNotePoolContainer;
}
constexpr void GlobalNamespace::BasicBeatmapObjectManager::__cordl_internal_set__burstSliderHeadGameNotePoolContainer(
    ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::GameNoteController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____burstSliderHeadGameNotePoolContainer)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>*&
GlobalNamespace::BasicBeatmapObjectManager::__cordl_internal_get__burstSliderGameNotePoolContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burstSliderGameNotePoolContainer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>*> const&
GlobalNamespace::BasicBeatmapObjectManager::__cordl_internal_get__burstSliderGameNotePoolContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burstSliderGameNotePoolContainer;
}
constexpr void GlobalNamespace::BasicBeatmapObjectManager::__cordl_internal_set__burstSliderGameNotePoolContainer(
    ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____burstSliderGameNotePoolContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BombNoteController>>*& GlobalNamespace::BasicBeatmapObjectManager::__cordl_internal_get__bombNotePoolContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombNotePoolContainer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BombNoteController>>*> const&
GlobalNamespace::BasicBeatmapObjectManager::__cordl_internal_get__bombNotePoolContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombNotePoolContainer;
}
constexpr void
GlobalNamespace::BasicBeatmapObjectManager::__cordl_internal_set__bombNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BombNoteController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bombNotePoolContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ObstacleController>>*& GlobalNamespace::BasicBeatmapObjectManager::__cordl_internal_get__obstaclePoolContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstaclePoolContainer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ObstacleController>>*> const&
GlobalNamespace::BasicBeatmapObjectManager::__cordl_internal_get__obstaclePoolContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstaclePoolContainer;
}
constexpr void
GlobalNamespace::BasicBeatmapObjectManager::__cordl_internal_set__obstaclePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____obstaclePoolContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__SliderController__LengthType, ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::SliderController>>*>*&
GlobalNamespace::BasicBeatmapObjectManager::__cordl_internal_get__sliderNotePoolContainersDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderNotePoolContainersDictionary;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__SliderController__LengthType, ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::SliderController>>*>*> const&
GlobalNamespace::BasicBeatmapObjectManager::__cordl_internal_get__sliderNotePoolContainersDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderNotePoolContainersDictionary;
}
constexpr void GlobalNamespace::BasicBeatmapObjectManager::__cordl_internal_set__sliderNotePoolContainersDictionary(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__SliderController__LengthType, ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::SliderController>>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sliderNotePoolContainersDictionary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>* GlobalNamespace::BasicBeatmapObjectManager::get_activeObstacleControllers() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::BasicBeatmapObjectManager::Init(::GlobalNamespace::__BasicBeatmapObjectManager__InitData* initData, ::GlobalNamespace::__GameNoteController__Pool* basicGameNotePool,
                                                             ::GlobalNamespace::__GameNoteController__Pool* burstSliderHeadGameNotePool,
                                                             ::GlobalNamespace::__BurstSliderGameNoteController__Pool* burstSliderGameNotePool,
                                                             ::GlobalNamespace::__BombNoteController__Pool* bombNotePool, ::GlobalNamespace::__ObstacleController__Pool* obstaclePool,
                                                             ::GlobalNamespace::__SliderController__Pool* sliderPools) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BasicBeatmapObjectManager__InitData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameNoteController__Pool*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameNoteController__Pool*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BurstSliderGameNoteController__Pool*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BombNoteController__Pool*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ObstacleController__Pool*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SliderController__Pool*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initData, basicGameNotePool, burstSliderHeadGameNotePool, burstSliderGameNotePool, bombNotePool, obstaclePool,
                                                          sliderPools);
}
inline void GlobalNamespace::BasicBeatmapObjectManager::ProcessObstacleData(::GlobalNamespace::ObstacleData* obstacleData,
                                                                            ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData> obstacleSpawnData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obstacleData, obstacleSpawnData);
}
inline void GlobalNamespace::BasicBeatmapObjectManager::DespawnInternal(::GlobalNamespace::ObstacleController* obstacleController) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obstacleController);
}
inline void GlobalNamespace::BasicBeatmapObjectManager::ProcessNoteData(::GlobalNamespace::NoteData* noteData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData> noteSpawnData,
                                                                        bool forceIsFirstNoteBehaviour) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteData, noteSpawnData, forceIsFirstNoteBehaviour);
}
inline void GlobalNamespace::BasicBeatmapObjectManager::DespawnInternal(::GlobalNamespace::NoteController* noteController) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::BasicBeatmapObjectManager::ProcessSliderData(::GlobalNamespace::SliderData* sliderData,
                                                                          ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData> sliderSpawnData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sliderData, sliderSpawnData);
}
inline void GlobalNamespace::BasicBeatmapObjectManager::DespawnInternal(::GlobalNamespace::SliderController* sliderNoteController) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sliderNoteController);
}
inline void GlobalNamespace::BasicBeatmapObjectManager::__InvalidateGameNotePools() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(),
                                                                             "__InvalidateGameNotePools", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BasicBeatmapObjectManager::__InvalidateBombNotePool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(),
                                                                             "__InvalidateBombNotePool", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BasicBeatmapObjectManager* GlobalNamespace::BasicBeatmapObjectManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BasicBeatmapObjectManager*>());
}
inline void GlobalNamespace::BasicBeatmapObjectManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicBeatmapObjectManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BasicBeatmapObjectManager::BasicBeatmapObjectManager() {}
