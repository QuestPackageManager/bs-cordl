#pragma once
// IWYU pragma private; include "GlobalNamespace\TutorialNoteController.hpp"
#include "GlobalNamespace/zzzz__NoteController_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__TutorialNoteController_def.hpp"
#include "GlobalNamespace/zzzz__BoxCuttableBySaber_def.hpp"
#include "GlobalNamespace/zzzz__IGameNoteMirrorable_def.hpp"
#include "GlobalNamespace/zzzz__INoteMirrorable_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteMovement_def.hpp"
#include "GlobalNamespace/zzzz__NoteSpawnData_def.hpp"
#include "GlobalNamespace/zzzz__NoteVisualModifierType_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "GlobalNamespace/zzzz__TutorialNoteController_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TutorialNoteController_Pool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialNoteController_Pool::*)()>(&::GlobalNamespace::TutorialNoteController_Pool::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x58d9654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialNoteController_Pool*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TutorialNoteController_Pool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialNoteController_Pool*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TutorialNoteController_Pool* GlobalNamespace::TutorialNoteController_Pool::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TutorialNoteController_Pool*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialNoteController_Pool::TutorialNoteController_Pool() {}
//  Writing Method size for method: ::GlobalNamespace::TutorialNoteController.get_noteMovement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::NoteMovement> (::GlobalNamespace::TutorialNoteController::*)()>(
    &::GlobalNamespace::TutorialNoteController::get_noteMovement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d8d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialNoteController*>(), { "get_noteMovement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialNoteController.get_noteVisualModifierType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteVisualModifierType (::GlobalNamespace::TutorialNoteController::*)()>(
    &::GlobalNamespace::TutorialNoteController::get_noteVisualModifierType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d8d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialNoteController*>(), { "get_noteVisualModifierType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialNoteController.get_gameplayType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteData_GameplayType (::GlobalNamespace::TutorialNoteController::*)()>(
    &::GlobalNamespace::TutorialNoteController::get_gameplayType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d8d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialNoteController*>(), { "get_gameplayType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialNoteController.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialNoteController::*)(::GlobalNamespace::NoteData*, ::by_ref<::GlobalNamespace::NoteSpawnData>, float_t, float_t)>(
    &::GlobalNamespace::TutorialNoteController::Init)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x58d8d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::TutorialNoteController*>(),
            { "Init", {}, { ::i2c::type_of<::GlobalNamespace::NoteData*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NoteSpawnData>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialNoteController.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialNoteController::*)()>(&::GlobalNamespace::TutorialNoteController::Awake)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x58d8e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialNoteController*>(), { ::i2c::class_of<::GlobalNamespace::TutorialNoteController*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialNoteController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialNoteController::*)()>(&::GlobalNamespace::TutorialNoteController::OnDestroy)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x58d8f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialNoteController*>(), { ::i2c::class_of<::GlobalNamespace::TutorialNoteController*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialNoteController.NoteDidPassMissedMarker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialNoteController::*)()>(&::GlobalNamespace::TutorialNoteController::NoteDidPassMissedMarker)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x58d9088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialNoteController*>(), { ::i2c::class_of<::GlobalNamespace::TutorialNoteController*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialNoteController.HandleBeforeNoteWasCutBySaber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialNoteController::*)(
    ::GlobalNamespace::Saber*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::GlobalNamespace::TutorialNoteController::HandleBeforeNoteWasCutBySaber)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x58d90d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialNoteController*>(),
                                                                                           { "HandleBeforeNoteWasCutBySaber",
                                                                                             {},
                                                                                             { ::i2c::type_of<::GlobalNamespace::Saber*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                               ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialNoteController.HandleCoreWasCutBySaber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialNoteController::*)(
    ::GlobalNamespace::Saber*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::GlobalNamespace::TutorialNoteController::HandleCoreWasCutBySaber)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x58d91ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialNoteController*>(),
                                                                                           { "HandleCoreWasCutBySaber",
                                                                                             {},
                                                                                             { ::i2c::type_of<::GlobalNamespace::Saber*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                               ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialNoteController.HiddenStateDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialNoteController::*)(bool)>(&::GlobalNamespace::TutorialNoteController::HiddenStateDidChange)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58d9620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialNoteController*>(), { ::i2c::class_of<::GlobalNamespace::TutorialNoteController*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialNoteController.Pause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialNoteController::*)(bool)>(&::GlobalNamespace::TutorialNoteController::Pause)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58d9640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialNoteController*>(), { ::i2c::class_of<::GlobalNamespace::TutorialNoteController*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialNoteController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialNoteController::*)()>(&::GlobalNamespace::TutorialNoteController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58d9650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialNoteController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BoxCuttableBySaber>& GlobalNamespace::TutorialNoteController::__cordl_internal_get__cuttableBySaberCore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cuttableBySaberCore;
}
constexpr ::UnityW<::GlobalNamespace::BoxCuttableBySaber> const& GlobalNamespace::TutorialNoteController::__cordl_internal_get__cuttableBySaberCore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cuttableBySaberCore;
}
constexpr void GlobalNamespace::TutorialNoteController::__cordl_internal_set__cuttableBySaberCore(::UnityW<::GlobalNamespace::BoxCuttableBySaber> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cuttableBySaberCore = value;
}
constexpr ::UnityW<::GlobalNamespace::BoxCuttableBySaber>& GlobalNamespace::TutorialNoteController::__cordl_internal_get__cuttableBySaberBeforeNote() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cuttableBySaberBeforeNote;
}
constexpr ::UnityW<::GlobalNamespace::BoxCuttableBySaber> const& GlobalNamespace::TutorialNoteController::__cordl_internal_get__cuttableBySaberBeforeNote() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cuttableBySaberBeforeNote;
}
constexpr void GlobalNamespace::TutorialNoteController::__cordl_internal_set__cuttableBySaberBeforeNote(::UnityW<::GlobalNamespace::BoxCuttableBySaber> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cuttableBySaberBeforeNote = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::TutorialNoteController::__cordl_internal_get__wrapperGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wrapperGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::TutorialNoteController::__cordl_internal_get__wrapperGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wrapperGO;
}
constexpr void GlobalNamespace::TutorialNoteController::__cordl_internal_set__wrapperGO(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____wrapperGO = value;
}
constexpr bool& GlobalNamespace::TutorialNoteController::__cordl_internal_get__beforeNoteCutWasOk() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beforeNoteCutWasOk;
}
constexpr bool const& GlobalNamespace::TutorialNoteController::__cordl_internal_get__beforeNoteCutWasOk() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beforeNoteCutWasOk;
}
constexpr void GlobalNamespace::TutorialNoteController::__cordl_internal_set__beforeNoteCutWasOk(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beforeNoteCutWasOk = value;
}
constexpr float_t& GlobalNamespace::TutorialNoteController::__cordl_internal_get__cutAngleTolerance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cutAngleTolerance;
}
constexpr float_t const& GlobalNamespace::TutorialNoteController::__cordl_internal_get__cutAngleTolerance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cutAngleTolerance;
}
constexpr void GlobalNamespace::TutorialNoteController::__cordl_internal_set__cutAngleTolerance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cutAngleTolerance = value;
}
inline ::UnityW<::GlobalNamespace::NoteMovement> GlobalNamespace::TutorialNoteController::get_noteMovement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialNoteController*>(), { "get_noteMovement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::NoteMovement>>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteVisualModifierType GlobalNamespace::TutorialNoteController::get_noteVisualModifierType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialNoteController*>(), { "get_noteVisualModifierType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteVisualModifierType>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteData_GameplayType GlobalNamespace::TutorialNoteController::get_gameplayType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialNoteController*>(), { "get_gameplayType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteData_GameplayType>(this, ___internal_method);
}
inline void GlobalNamespace::TutorialNoteController::Init(::GlobalNamespace::NoteData* noteData, ::by_ref<::GlobalNamespace::NoteSpawnData> noteSpawnData, float_t cutAngleTolerance,
                                                          float_t uniformScale) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::TutorialNoteController*>(),
          { "Init", {}, { ::i2c::type_of<::GlobalNamespace::NoteData*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NoteSpawnData>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteData, noteSpawnData, cutAngleTolerance, uniformScale);
}
inline void GlobalNamespace::TutorialNoteController::Awake() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TutorialNoteController*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TutorialNoteController::OnDestroy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TutorialNoteController*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TutorialNoteController::NoteDidPassMissedMarker() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TutorialNoteController*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TutorialNoteController::HandleBeforeNoteWasCutBySaber(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation,
                                                                                   ::UnityEngine::Vector3 cutDirVec) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialNoteController*>(), { "HandleBeforeNoteWasCutBySaber",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::GlobalNamespace::Saber*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                          ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, saber, cutPoint, orientation, cutDirVec);
}
inline void GlobalNamespace::TutorialNoteController::HandleCoreWasCutBySaber(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation,
                                                                             ::UnityEngine::Vector3 cutDirVec) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialNoteController*>(), { "HandleCoreWasCutBySaber",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::GlobalNamespace::Saber*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                          ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, saber, cutPoint, orientation, cutDirVec);
}
inline void GlobalNamespace::TutorialNoteController::HiddenStateDidChange(bool hide) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TutorialNoteController*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hide);
}
inline void GlobalNamespace::TutorialNoteController::Pause(bool pause) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TutorialNoteController*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pause);
}
inline void GlobalNamespace::TutorialNoteController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialNoteController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TutorialNoteController* GlobalNamespace::TutorialNoteController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TutorialNoteController*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGameNoteMirrorable"
constexpr GlobalNamespace::TutorialNoteController::operator ::GlobalNamespace::IGameNoteMirrorable*() noexcept {
  return static_cast<::GlobalNamespace::IGameNoteMirrorable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameNoteMirrorable"
constexpr ::GlobalNamespace::IGameNoteMirrorable* GlobalNamespace::TutorialNoteController::i___GlobalNamespace__IGameNoteMirrorable() noexcept {
  return static_cast<::GlobalNamespace::IGameNoteMirrorable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::INoteMirrorable"
constexpr GlobalNamespace::TutorialNoteController::operator ::GlobalNamespace::INoteMirrorable*() noexcept {
  return static_cast<::GlobalNamespace::INoteMirrorable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INoteMirrorable"
constexpr ::GlobalNamespace::INoteMirrorable* GlobalNamespace::TutorialNoteController::i___GlobalNamespace__INoteMirrorable() noexcept {
  return static_cast<::GlobalNamespace::INoteMirrorable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialNoteController::TutorialNoteController() {}
