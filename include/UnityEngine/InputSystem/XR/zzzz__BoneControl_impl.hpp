#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\XR\BoneControl.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__Bone_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_impl.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__BoneControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__IntegerControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__QuaternionControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector3Control_def.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__Bone_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::BoneControl.get_parentBoneIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (::UnityEngine::InputSystem::XR::BoneControl::*)()>(
    &::UnityEngine::InputSystem::XR::BoneControl::get_parentBoneIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x658ac10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::BoneControl*>(), { "get_parentBoneIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::BoneControl.set_parentBoneIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::BoneControl::*)(::UnityEngine::InputSystem::Controls::IntegerControl*)>(
    &::UnityEngine::InputSystem::XR::BoneControl::set_parentBoneIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x658ac18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::BoneControl*>(),
                                                             { "set_parentBoneIndex", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::IntegerControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::BoneControl.get_position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::UnityEngine::InputSystem::XR::BoneControl::*)()>(
    &::UnityEngine::InputSystem::XR::BoneControl::get_position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x658ac20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::BoneControl*>(), { "get_position", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::BoneControl.set_position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::BoneControl::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(
    &::UnityEngine::InputSystem::XR::BoneControl::set_position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x658ac28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::BoneControl*>(),
                                                                                           { "set_position", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::BoneControl.get_rotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::QuaternionControl* (::UnityEngine::InputSystem::XR::BoneControl::*)()>(
    &::UnityEngine::InputSystem::XR::BoneControl::get_rotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x658ac30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::BoneControl*>(), { "get_rotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::BoneControl.set_rotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::BoneControl::*)(::UnityEngine::InputSystem::Controls::QuaternionControl*)>(
    &::UnityEngine::InputSystem::XR::BoneControl::set_rotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x658ac38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::BoneControl*>(),
                                                                                           { "set_rotation", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::QuaternionControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::BoneControl.FinishSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::BoneControl::*)()>(&::UnityEngine::InputSystem::XR::BoneControl::FinishSetup)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x658ac40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::BoneControl*>(), { ::i2c::class_of<::UnityEngine::InputSystem::XR::BoneControl*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::BoneControl.ReadUnprocessedValueFromState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::XR::Bone (::UnityEngine::InputSystem::XR::BoneControl::*)(void*)>(
    &::UnityEngine::InputSystem::XR::BoneControl::ReadUnprocessedValueFromState)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x658ad5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::BoneControl*>(), { ::i2c::class_of<::UnityEngine::InputSystem::XR::BoneControl*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::BoneControl.WriteValueIntoState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::BoneControl::*)(::UnityEngine::InputSystem::XR::Bone, void*)>(
    &::UnityEngine::InputSystem::XR::BoneControl::WriteValueIntoState)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x658ae58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::BoneControl*>(), { ::i2c::class_of<::UnityEngine::InputSystem::XR::BoneControl*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::BoneControl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::BoneControl::*)()>(&::UnityEngine::InputSystem::XR::BoneControl::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x658aedc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::BoneControl*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*& UnityEngine::InputSystem::XR::BoneControl::__cordl_internal_get__parentBoneIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentBoneIndex_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::IntegerControl* const& UnityEngine::InputSystem::XR::BoneControl::__cordl_internal_get__parentBoneIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentBoneIndex_k__BackingField;
}
constexpr void UnityEngine::InputSystem::XR::BoneControl::__cordl_internal_set__parentBoneIndex_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parentBoneIndex_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& UnityEngine::InputSystem::XR::BoneControl::__cordl_internal_get__position_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& UnityEngine::InputSystem::XR::BoneControl::__cordl_internal_get__position_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position_k__BackingField;
}
constexpr void UnityEngine::InputSystem::XR::BoneControl::__cordl_internal_set__position_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____position_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& UnityEngine::InputSystem::XR::BoneControl::__cordl_internal_get__rotation_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotation_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const& UnityEngine::InputSystem::XR::BoneControl::__cordl_internal_get__rotation_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotation_k__BackingField;
}
constexpr void UnityEngine::InputSystem::XR::BoneControl::__cordl_internal_set__rotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotation_k__BackingField = value;
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl* UnityEngine::InputSystem::XR::BoneControl::get_parentBoneIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::BoneControl*>(), { "get_parentBoneIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::BoneControl::set_parentBoneIndex(::UnityEngine::InputSystem::Controls::IntegerControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::BoneControl*>(),
                                                                                         { "set_parentBoneIndex", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::IntegerControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* UnityEngine::InputSystem::XR::BoneControl::get_position() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::BoneControl*>(), { "get_position", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::BoneControl::set_position(::UnityEngine::InputSystem::Controls::Vector3Control* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::BoneControl*>(),
                                                                                         { "set_position", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::QuaternionControl* UnityEngine::InputSystem::XR::BoneControl::get_rotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::BoneControl*>(), { "get_rotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::QuaternionControl*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::BoneControl::set_rotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::BoneControl*>(),
                                                                                         { "set_rotation", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Controls::QuaternionControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::XR::BoneControl::FinishSetup() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::XR::BoneControl*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::XR::Bone UnityEngine::InputSystem::XR::BoneControl::ReadUnprocessedValueFromState(void* statePtr) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::XR::BoneControl*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XR::Bone>(this, ___internal_method, statePtr);
}
inline void UnityEngine::InputSystem::XR::BoneControl::WriteValueIntoState(::UnityEngine::InputSystem::XR::Bone value, void* statePtr) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::XR::BoneControl*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, statePtr);
}
inline void UnityEngine::InputSystem::XR::BoneControl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::BoneControl*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::XR::BoneControl* UnityEngine::InputSystem::XR::BoneControl::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::XR::BoneControl*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XR::BoneControl::BoneControl() {}
