#pragma once
// IWYU pragma private; include "BeatSaber\GameSettings\ControllerProfile.hpp"
#include "BeatSaber/GameSettings/zzzz__Controller_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllerProfile_def.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllerProfileSaveData_def.hpp"
#include "BeatSaber/GameSettings/zzzz__Controller_def.hpp"
#include "GlobalNamespace/zzzz__IXRSystemState_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfile.get_alternativeHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::GameSettings::ControllerProfile::*)()>(&::BeatSaber::GameSettings::ControllerProfile::get_alternativeHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32937b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(), { "get_alternativeHandling", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfile.set_alternativeHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfile::*)(bool)>(&::BeatSaber::GameSettings::ControllerProfile::set_alternativeHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32937bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(), { "set_alternativeHandling", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfile.get_leftController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::GameSettings::Controller (::BeatSaber::GameSettings::ControllerProfile::*)()>(
    &::BeatSaber::GameSettings::ControllerProfile::get_leftController)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x32937c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(), { "get_leftController", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfile.set_leftController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfile::*)(::BeatSaber::GameSettings::Controller)>(
    &::BeatSaber::GameSettings::ControllerProfile::set_leftController)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x32937d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(), { "set_leftController", {}, { ::i2c::type_of<::BeatSaber::GameSettings::Controller>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfile.get_rightController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::GameSettings::Controller (::BeatSaber::GameSettings::ControllerProfile::*)()>(
    &::BeatSaber::GameSettings::ControllerProfile::get_rightController)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x32937ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(), { "get_rightController", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfile.set_rightController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfile::*)(::BeatSaber::GameSettings::Controller)>(
    &::BeatSaber::GameSettings::ControllerProfile::set_rightController)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3293800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(),
                                                                                           { "set_rightController", {}, { ::i2c::type_of<::BeatSaber::GameSettings::Controller>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfile._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfile::*)(
    ::StringW, int32_t, bool, bool, ::BeatSaber::GameSettings::Controller, ::BeatSaber::GameSettings::Controller)>(&::BeatSaber::GameSettings::ControllerProfile::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3292ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::BeatSaber::GameSettings::Controller>(), ::i2c::type_of<::BeatSaber::GameSettings::Controller>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfile.Activate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfile::*)(::GlobalNamespace::IXRSystemState*)>(
    &::BeatSaber::GameSettings::ControllerProfile::Activate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3293814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(), { "Activate", {}, { ::i2c::type_of<::GlobalNamespace::IXRSystemState*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfile.Deactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfile::*)()>(&::BeatSaber::GameSettings::ControllerProfile::Deactivate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3292524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(), { "Deactivate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfile.CopyFromLeftToRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfile::*)()>(&::BeatSaber::GameSettings::ControllerProfile::CopyFromLeftToRight)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x329381c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(), { "CopyFromLeftToRight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfile.CopyFromRightToLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfile::*)()>(&::BeatSaber::GameSettings::ControllerProfile::CopyFromRightToLeft)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x32938e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(), { "CopyFromRightToLeft", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfile.CopyFromOtherControllerProfile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfile::*)(::BeatSaber::GameSettings::ControllerProfile*)>(
    &::BeatSaber::GameSettings::ControllerProfile::CopyFromOtherControllerProfile)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x32938f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(),
                                                             { "CopyFromOtherControllerProfile", {}, { ::i2c::type_of<::BeatSaber::GameSettings::ControllerProfile*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfile.SetRotateThanMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfile::*)(bool)>(&::BeatSaber::GameSettings::ControllerProfile::SetRotateThanMove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x329392c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(), { "SetRotateThanMove", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfile.ToSaveData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::GameSettings::ControllerProfileSaveData* (::BeatSaber::GameSettings::ControllerProfile::*)()>(
    &::BeatSaber::GameSettings::ControllerProfile::ToSaveData)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3292cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(), { "ToSaveData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfile.FromSaveData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::GameSettings::ControllerProfile* (*)(::BeatSaber::GameSettings::ControllerProfileSaveData*, int32_t)>(
    &::BeatSaber::GameSettings::ControllerProfile::FromSaveData)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3293614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(),
                                                             { "FromSaveData", {}, { ::i2c::type_of<::BeatSaber::GameSettings::ControllerProfileSaveData*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfile.HasDefaultValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::GameSettings::ControllerProfile::*)()>(&::BeatSaber::GameSettings::ControllerProfile::HasDefaultValues)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32936f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(), { "HasDefaultValues", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfile.UpdateControllerOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfile::*)(bool, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::BeatSaber::GameSettings::ControllerProfile::UpdateControllerOffset)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3293a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(),
                                                { "UpdateControllerOffset", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfile.UpdateControllerPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfile::*)(bool, ::UnityEngine::Vector3)>(
    &::BeatSaber::GameSettings::ControllerProfile::UpdateControllerPosition)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3293a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(),
                                                                                           { "UpdateControllerPosition", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfile.UpdateControllerRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfile::*)(bool, ::UnityEngine::Vector3)>(
    &::BeatSaber::GameSettings::ControllerProfile::UpdateControllerRotation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3293af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(),
                                                                                           { "UpdateControllerRotation", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfile.RefreshControllers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfile::*)()>(&::BeatSaber::GameSettings::ControllerProfile::RefreshControllers)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3293830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(), { "RefreshControllers", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::GameSettings::ControllerProfile::__cordl_internal_get_localizationKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localizationKey;
}
constexpr ::StringW const& BeatSaber::GameSettings::ControllerProfile::__cordl_internal_get_localizationKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localizationKey;
}
constexpr void BeatSaber::GameSettings::ControllerProfile::__cordl_internal_set_localizationKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___localizationKey = value;
}
constexpr int32_t& BeatSaber::GameSettings::ControllerProfile::__cordl_internal_get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr int32_t const& BeatSaber::GameSettings::ControllerProfile::__cordl_internal_get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr void BeatSaber::GameSettings::ControllerProfile::__cordl_internal_set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___index = value;
}
constexpr bool& BeatSaber::GameSettings::ControllerProfile::__cordl_internal_get_modifiable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifiable;
}
constexpr bool const& BeatSaber::GameSettings::ControllerProfile::__cordl_internal_get_modifiable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifiable;
}
constexpr void BeatSaber::GameSettings::ControllerProfile::__cordl_internal_set_modifiable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___modifiable = value;
}
constexpr bool& BeatSaber::GameSettings::ControllerProfile::__cordl_internal_get__alternativeHandling_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alternativeHandling_k__BackingField;
}
constexpr bool const& BeatSaber::GameSettings::ControllerProfile::__cordl_internal_get__alternativeHandling_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alternativeHandling_k__BackingField;
}
constexpr void BeatSaber::GameSettings::ControllerProfile::__cordl_internal_set__alternativeHandling_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____alternativeHandling_k__BackingField = value;
}
constexpr ::BeatSaber::GameSettings::Controller& BeatSaber::GameSettings::ControllerProfile::__cordl_internal_get__leftController_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftController_k__BackingField;
}
constexpr ::BeatSaber::GameSettings::Controller const& BeatSaber::GameSettings::ControllerProfile::__cordl_internal_get__leftController_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftController_k__BackingField;
}
constexpr void BeatSaber::GameSettings::ControllerProfile::__cordl_internal_set__leftController_k__BackingField(::BeatSaber::GameSettings::Controller value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftController_k__BackingField = value;
}
constexpr ::BeatSaber::GameSettings::Controller& BeatSaber::GameSettings::ControllerProfile::__cordl_internal_get__rightController_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightController_k__BackingField;
}
constexpr ::BeatSaber::GameSettings::Controller const& BeatSaber::GameSettings::ControllerProfile::__cordl_internal_get__rightController_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightController_k__BackingField;
}
constexpr void BeatSaber::GameSettings::ControllerProfile::__cordl_internal_set__rightController_k__BackingField(::BeatSaber::GameSettings::Controller value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightController_k__BackingField = value;
}
constexpr ::GlobalNamespace::IXRSystemState*& BeatSaber::GameSettings::ControllerProfile::__cordl_internal_get__xrSystemState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xrSystemState;
}
constexpr ::GlobalNamespace::IXRSystemState* const& BeatSaber::GameSettings::ControllerProfile::__cordl_internal_get__xrSystemState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xrSystemState;
}
constexpr void BeatSaber::GameSettings::ControllerProfile::__cordl_internal_set__xrSystemState(::GlobalNamespace::IXRSystemState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xrSystemState = value;
}
inline bool BeatSaber::GameSettings::ControllerProfile::get_alternativeHandling() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(), { "get_alternativeHandling", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::ControllerProfile::set_alternativeHandling(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(), { "set_alternativeHandling", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::BeatSaber::GameSettings::Controller BeatSaber::GameSettings::ControllerProfile::get_leftController() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(), { "get_leftController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::GameSettings::Controller>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::ControllerProfile::set_leftController(::BeatSaber::GameSettings::Controller value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(), { "set_leftController", {}, { ::i2c::type_of<::BeatSaber::GameSettings::Controller>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::BeatSaber::GameSettings::Controller BeatSaber::GameSettings::ControllerProfile::get_rightController() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(), { "get_rightController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::GameSettings::Controller>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::ControllerProfile::set_rightController(::BeatSaber::GameSettings::Controller value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(), { "set_rightController", {}, { ::i2c::type_of<::BeatSaber::GameSettings::Controller>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::GameSettings::ControllerProfile::_ctor(::StringW localizationKey, int32_t index, bool modifiable, bool alternativeHandling, ::BeatSaber::GameSettings::Controller leftController,
                                                              ::BeatSaber::GameSettings::Controller rightController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::BeatSaber::GameSettings::Controller>(), ::i2c::type_of<::BeatSaber::GameSettings::Controller>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localizationKey, index, modifiable, alternativeHandling, leftController, rightController);
}
inline void BeatSaber::GameSettings::ControllerProfile::Activate(::GlobalNamespace::IXRSystemState* xrSystemState) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(), { "Activate", {}, { ::i2c::type_of<::GlobalNamespace::IXRSystemState*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrSystemState);
}
inline void BeatSaber::GameSettings::ControllerProfile::Deactivate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(), { "Deactivate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::ControllerProfile::CopyFromLeftToRight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(), { "CopyFromLeftToRight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::ControllerProfile::CopyFromRightToLeft() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(), { "CopyFromRightToLeft", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::ControllerProfile::CopyFromOtherControllerProfile(::BeatSaber::GameSettings::ControllerProfile* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(),
                                                           { "CopyFromOtherControllerProfile", {}, { ::i2c::type_of<::BeatSaber::GameSettings::ControllerProfile*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void BeatSaber::GameSettings::ControllerProfile::SetRotateThanMove(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(), { "SetRotateThanMove", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::BeatSaber::GameSettings::ControllerProfileSaveData* BeatSaber::GameSettings::ControllerProfile::ToSaveData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(), { "ToSaveData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::GameSettings::ControllerProfileSaveData*>(this, ___internal_method);
}
inline ::BeatSaber::GameSettings::ControllerProfile* BeatSaber::GameSettings::ControllerProfile::FromSaveData(::BeatSaber::GameSettings::ControllerProfileSaveData* controllerProfileSaveData,
                                                                                                              int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(),
                                                           { "FromSaveData", {}, { ::i2c::type_of<::BeatSaber::GameSettings::ControllerProfileSaveData*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::GameSettings::ControllerProfile*>(nullptr, ___internal_method, controllerProfileSaveData, index);
}
inline bool BeatSaber::GameSettings::ControllerProfile::HasDefaultValues() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(), { "HasDefaultValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::ControllerProfile::UpdateControllerOffset(bool isLeft, ::UnityEngine::Vector3 position, ::UnityEngine::Vector3 rotation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(),
                                              { "UpdateControllerOffset", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeft, position, rotation);
}
inline void BeatSaber::GameSettings::ControllerProfile::UpdateControllerPosition(bool isLeft, ::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(),
                                                                                         { "UpdateControllerPosition", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeft, value);
}
inline void BeatSaber::GameSettings::ControllerProfile::UpdateControllerRotation(bool isLeft, ::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(),
                                                                                         { "UpdateControllerRotation", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeft, value);
}
inline void BeatSaber::GameSettings::ControllerProfile::RefreshControllers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfile*>(), { "RefreshControllers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::GameSettings::ControllerProfile* BeatSaber::GameSettings::ControllerProfile::New_ctor(::StringW localizationKey, int32_t index, bool modifiable, bool alternativeHandling,
                                                                                                          ::BeatSaber::GameSettings::Controller leftController,
                                                                                                          ::BeatSaber::GameSettings::Controller rightController) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::GameSettings::ControllerProfile*>(localizationKey, index, modifiable, alternativeHandling, leftController, rightController));
}
// Ctor Parameters []
constexpr ::BeatSaber::GameSettings::ControllerProfile::ControllerProfile() {}
