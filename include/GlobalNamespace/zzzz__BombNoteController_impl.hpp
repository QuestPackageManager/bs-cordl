#pragma once
// IWYU pragma private; include "GlobalNamespace\BombNoteController.hpp"
#include "GlobalNamespace/zzzz__NoteController_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__BombNoteController_def.hpp"
#include "GlobalNamespace/zzzz__BombNoteController_def.hpp"
#include "GlobalNamespace/zzzz__CuttableBySaber_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteSpawnData_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BombNoteController_Pool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BombNoteController_Pool::*)()>(&::GlobalNamespace::BombNoteController_Pool::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x58cfca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombNoteController_Pool*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BombNoteController_Pool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombNoteController_Pool*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BombNoteController_Pool* GlobalNamespace::BombNoteController_Pool::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BombNoteController_Pool*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BombNoteController_Pool::BombNoteController_Pool() {}
//  Writing Method size for method: ::GlobalNamespace::BombNoteController.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BombNoteController::*)(::GlobalNamespace::NoteData*, ::by_ref<::GlobalNamespace::NoteSpawnData>)>(
    &::GlobalNamespace::BombNoteController::Init)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x58ce960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombNoteController*>(),
                                                             { "Init", {}, { ::i2c::type_of<::GlobalNamespace::NoteData*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NoteSpawnData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombNoteController.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BombNoteController::*)()>(&::GlobalNamespace::BombNoteController::Awake)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x58cec24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombNoteController*>(), { ::i2c::class_of<::GlobalNamespace::BombNoteController*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombNoteController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BombNoteController::*)()>(&::GlobalNamespace::BombNoteController::OnDestroy)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x58cefe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombNoteController*>(), { ::i2c::class_of<::GlobalNamespace::BombNoteController*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombNoteController.NoteDidPassMissedMarker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BombNoteController::*)()>(&::GlobalNamespace::BombNoteController::NoteDidPassMissedMarker)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x58cf324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombNoteController*>(), { ::i2c::class_of<::GlobalNamespace::BombNoteController*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombNoteController.HandleDidPassHalfJump
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BombNoteController::*)()>(&::GlobalNamespace::BombNoteController::HandleDidPassHalfJump)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58cf4f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombNoteController*>(), { "HandleDidPassHalfJump", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombNoteController.HandleWasCutBySaber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BombNoteController::*)(::GlobalNamespace::Saber*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion,
                                                                                                       ::UnityEngine::Vector3)>(&::GlobalNamespace::BombNoteController::HandleWasCutBySaber)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x58cf514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombNoteController*>(), { "HandleWasCutBySaber",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::GlobalNamespace::Saber*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                        ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombNoteController.NoteDidStartDissolving
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BombNoteController::*)()>(&::GlobalNamespace::BombNoteController::NoteDidStartDissolving)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58cf964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombNoteController*>(), { ::i2c::class_of<::GlobalNamespace::BombNoteController*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombNoteController.HiddenStateDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BombNoteController::*)(bool)>(&::GlobalNamespace::BombNoteController::HiddenStateDidChange)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58cf984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombNoteController*>(), { ::i2c::class_of<::GlobalNamespace::BombNoteController*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombNoteController.Pause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BombNoteController::*)(bool)>(&::GlobalNamespace::BombNoteController::Pause)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58cf9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombNoteController*>(), { ::i2c::class_of<::GlobalNamespace::BombNoteController*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombNoteController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BombNoteController::*)()>(&::GlobalNamespace::BombNoteController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58cf9b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombNoteController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::CuttableBySaber>& GlobalNamespace::BombNoteController::__cordl_internal_get__cuttableBySaber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cuttableBySaber;
}
constexpr ::UnityW<::GlobalNamespace::CuttableBySaber> const& GlobalNamespace::BombNoteController::__cordl_internal_get__cuttableBySaber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cuttableBySaber;
}
constexpr void GlobalNamespace::BombNoteController::__cordl_internal_set__cuttableBySaber(::UnityW<::GlobalNamespace::CuttableBySaber> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cuttableBySaber = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::BombNoteController::__cordl_internal_get__wrapperGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wrapperGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::BombNoteController::__cordl_internal_get__wrapperGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wrapperGO;
}
constexpr void GlobalNamespace::BombNoteController::__cordl_internal_set__wrapperGO(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____wrapperGO = value;
}
inline void GlobalNamespace::BombNoteController::Init(::GlobalNamespace::NoteData* noteData, ::by_ref<::GlobalNamespace::NoteSpawnData> noteSpawnData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombNoteController*>(),
                                                           { "Init", {}, { ::i2c::type_of<::GlobalNamespace::NoteData*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NoteSpawnData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteData, noteSpawnData);
}
inline void GlobalNamespace::BombNoteController::Awake() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BombNoteController*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BombNoteController::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BombNoteController*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BombNoteController::NoteDidPassMissedMarker() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BombNoteController*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BombNoteController::HandleDidPassHalfJump() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombNoteController*>(), { "HandleDidPassHalfJump", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BombNoteController::HandleWasCutBySaber(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation,
                                                                     ::UnityEngine::Vector3 cutDirVec) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombNoteController*>(), { "HandleWasCutBySaber",
                                                                                                    {},
                                                                                                    { ::i2c::type_of<::GlobalNamespace::Saber*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                      ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, saber, cutPoint, orientation, cutDirVec);
}
inline void GlobalNamespace::BombNoteController::NoteDidStartDissolving() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BombNoteController*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BombNoteController::HiddenStateDidChange(bool hide) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BombNoteController*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hide);
}
inline void GlobalNamespace::BombNoteController::Pause(bool pause) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BombNoteController*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pause);
}
inline void GlobalNamespace::BombNoteController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombNoteController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BombNoteController* GlobalNamespace::BombNoteController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BombNoteController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BombNoteController::BombNoteController() {}
