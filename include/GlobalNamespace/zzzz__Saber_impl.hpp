#pragma once
// IWYU pragma private; include "GlobalNamespace/Saber.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "GlobalNamespace/zzzz__SaberMovementData_def.hpp"
#include "GlobalNamespace/zzzz__SaberTypeObject_def.hpp"
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
#include "GlobalNamespace/zzzz__TimeHelper_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Saber.get_saberType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SaberType (::GlobalNamespace::Saber::*)()>(&::GlobalNamespace::Saber::get_saberType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59e8ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Saber*>(), { "get_saberType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Saber.get_handlePos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::Saber::*)()>(&::GlobalNamespace::Saber::get_handlePos)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59e8bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Saber*>(), { "get_handlePos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Saber.get_saberBladeTopPos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::Saber::*)()>(&::GlobalNamespace::Saber::get_saberBladeTopPos)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59e8bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Saber*>(), { "get_saberBladeTopPos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Saber.get_saberBladeBottomPos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::Saber::*)()>(&::GlobalNamespace::Saber::get_saberBladeBottomPos)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59e8bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Saber*>(), { "get_saberBladeBottomPos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Saber.get_saberBladeTopPosForLogic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::Saber::*)()>(&::GlobalNamespace::Saber::get_saberBladeTopPosForLogic)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59e8bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Saber*>(), { "get_saberBladeTopPosForLogic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Saber.get_saberBladeBottomPosForLogic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::Saber::*)()>(&::GlobalNamespace::Saber::get_saberBladeBottomPosForLogic)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59e8be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Saber*>(), { "get_saberBladeBottomPosForLogic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Saber.get_saberBladeTopPosForVisualEffects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::Saber::*)()>(&::GlobalNamespace::Saber::get_saberBladeTopPosForVisualEffects)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59e8bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Saber*>(), { "get_saberBladeTopPosForVisualEffects", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Saber.get_saberBladeBottomPosForVisualEffects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::Saber::*)()>(&::GlobalNamespace::Saber::get_saberBladeBottomPosForVisualEffects)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59e8c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Saber*>(), { "get_saberBladeBottomPosForVisualEffects", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Saber.get_bladeSpeedForLogic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::Saber::*)()>(&::GlobalNamespace::Saber::get_bladeSpeedForLogic)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59e8c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Saber*>(), { "get_bladeSpeedForLogic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Saber.get_bladeSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::Saber::*)()>(&::GlobalNamespace::Saber::get_bladeSpeed)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59e8c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Saber*>(), { "get_bladeSpeed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Saber.get_movementDataForLogic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SaberMovementData* (::GlobalNamespace::Saber::*)()>(&::GlobalNamespace::Saber::get_movementDataForLogic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59e8c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Saber*>(), { "get_movementDataForLogic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Saber.get_movementDataForVisualEffects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SaberMovementData* (::GlobalNamespace::Saber::*)()>(&::GlobalNamespace::Saber::get_movementDataForVisualEffects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59e8c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Saber*>(), { "get_movementDataForVisualEffects", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Saber.ManualUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Saber::*)()>(&::GlobalNamespace::Saber::ManualUpdate)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59e8c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Saber*>(), { "ManualUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Saber.OverridePositionAndRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Saber::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::Saber::OverridePositionAndRotation)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x59e8cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Saber*>(),
                                                             { "OverridePositionAndRotation", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Saber._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Saber::*)()>(&::GlobalNamespace::Saber::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x59e8d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Saber*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TimeHelper>& GlobalNamespace::Saber::__cordl_internal_get__timeHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeHelper;
}
constexpr ::UnityW<::GlobalNamespace::TimeHelper> const& GlobalNamespace::Saber::__cordl_internal_get__timeHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeHelper;
}
constexpr void GlobalNamespace::Saber::__cordl_internal_set__timeHelper(::UnityW<::GlobalNamespace::TimeHelper> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeHelper = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Saber::__cordl_internal_get__saberBladeTopTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberBladeTopTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Saber::__cordl_internal_get__saberBladeTopTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberBladeTopTransform;
}
constexpr void GlobalNamespace::Saber::__cordl_internal_set__saberBladeTopTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberBladeTopTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Saber::__cordl_internal_get__saberBladeBottomTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberBladeBottomTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Saber::__cordl_internal_get__saberBladeBottomTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberBladeBottomTransform;
}
constexpr void GlobalNamespace::Saber::__cordl_internal_set__saberBladeBottomTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberBladeBottomTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Saber::__cordl_internal_get__handleTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handleTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Saber::__cordl_internal_get__handleTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handleTransform;
}
constexpr void GlobalNamespace::Saber::__cordl_internal_set__handleTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handleTransform = value;
}
constexpr ::UnityW<::GlobalNamespace::SaberTypeObject>& GlobalNamespace::Saber::__cordl_internal_get__saberType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberType;
}
constexpr ::UnityW<::GlobalNamespace::SaberTypeObject> const& GlobalNamespace::Saber::__cordl_internal_get__saberType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberType;
}
constexpr void GlobalNamespace::Saber::__cordl_internal_set__saberType(::UnityW<::GlobalNamespace::SaberTypeObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberType = value;
}
constexpr ::GlobalNamespace::SaberMovementData*& GlobalNamespace::Saber::__cordl_internal_get__movementData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____movementData;
}
constexpr ::GlobalNamespace::SaberMovementData* const& GlobalNamespace::Saber::__cordl_internal_get__movementData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____movementData;
}
constexpr void GlobalNamespace::Saber::__cordl_internal_set__movementData(::GlobalNamespace::SaberMovementData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____movementData = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Saber::__cordl_internal_get__saberBladeTopPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberBladeTopPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Saber::__cordl_internal_get__saberBladeTopPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberBladeTopPos;
}
constexpr void GlobalNamespace::Saber::__cordl_internal_set__saberBladeTopPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberBladeTopPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Saber::__cordl_internal_get__saberBladeBottomPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberBladeBottomPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Saber::__cordl_internal_get__saberBladeBottomPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberBladeBottomPos;
}
constexpr void GlobalNamespace::Saber::__cordl_internal_set__saberBladeBottomPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberBladeBottomPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Saber::__cordl_internal_get__handlePos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handlePos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Saber::__cordl_internal_get__handlePos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handlePos;
}
constexpr void GlobalNamespace::Saber::__cordl_internal_set__handlePos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handlePos = value;
}
inline ::GlobalNamespace::SaberType GlobalNamespace::Saber::get_saberType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Saber*>(), { "get_saberType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SaberType>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::Saber::get_handlePos() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Saber*>(), { "get_handlePos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::Saber::get_saberBladeTopPos() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Saber*>(), { "get_saberBladeTopPos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::Saber::get_saberBladeBottomPos() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Saber*>(), { "get_saberBladeBottomPos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::Saber::get_saberBladeTopPosForLogic() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Saber*>(), { "get_saberBladeTopPosForLogic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::Saber::get_saberBladeBottomPosForLogic() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Saber*>(), { "get_saberBladeBottomPosForLogic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::Saber::get_saberBladeTopPosForVisualEffects() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Saber*>(), { "get_saberBladeTopPosForVisualEffects", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::Saber::get_saberBladeBottomPosForVisualEffects() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Saber*>(), { "get_saberBladeBottomPosForVisualEffects", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline float_t GlobalNamespace::Saber::get_bladeSpeedForLogic() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Saber*>(), { "get_bladeSpeedForLogic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::Saber::get_bladeSpeed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Saber*>(), { "get_bladeSpeed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::GlobalNamespace::SaberMovementData* GlobalNamespace::Saber::get_movementDataForLogic() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Saber*>(), { "get_movementDataForLogic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SaberMovementData*>(this, ___internal_method);
}
inline ::GlobalNamespace::SaberMovementData* GlobalNamespace::Saber::get_movementDataForVisualEffects() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Saber*>(), { "get_movementDataForVisualEffects", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SaberMovementData*>(this, ___internal_method);
}
inline void GlobalNamespace::Saber::ManualUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Saber*>(), { "ManualUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Saber::OverridePositionAndRotation(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Saber*>(),
                                                           { "OverridePositionAndRotation", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos, rot);
}
inline void GlobalNamespace::Saber::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Saber*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Saber* GlobalNamespace::Saber::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Saber*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Saber::Saber() {}
