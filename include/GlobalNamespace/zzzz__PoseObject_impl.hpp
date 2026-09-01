#pragma once
// IWYU pragma private; include "GlobalNamespace\PoseObject.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PoseObject_def.hpp"
#include "GlobalNamespace/zzzz__PoseObjectIdSO_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PoseObject.get_objectTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::PoseObject::*)()>(&::GlobalNamespace::PoseObject::get_objectTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e9c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoseObject*>(), { "get_objectTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoseObject.get_id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PoseObject::*)()>(&::GlobalNamespace::PoseObject::get_id)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58e9c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoseObject*>(), { "get_id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoseObject._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PoseObject::*)(::UnityEngine::Transform*, ::GlobalNamespace::PoseObjectIdSO*)>(&::GlobalNamespace::PoseObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e7c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoseObject*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::GlobalNamespace::PoseObjectIdSO*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PoseObject::__cordl_internal_get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PoseObject::__cordl_internal_get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr void GlobalNamespace::PoseObject::__cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transform = value;
}
constexpr ::UnityW<::GlobalNamespace::PoseObjectIdSO>& GlobalNamespace::PoseObject::__cordl_internal_get__poseObjectId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____poseObjectId;
}
constexpr ::UnityW<::GlobalNamespace::PoseObjectIdSO> const& GlobalNamespace::PoseObject::__cordl_internal_get__poseObjectId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____poseObjectId;
}
constexpr void GlobalNamespace::PoseObject::__cordl_internal_set__poseObjectId(::UnityW<::GlobalNamespace::PoseObjectIdSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____poseObjectId = value;
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::PoseObject::get_objectTransform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoseObject*>(), { "get_objectTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PoseObject::get_id() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoseObject*>(), { "get_id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::PoseObject::_ctor(::UnityEngine::Transform* transform, ::GlobalNamespace::PoseObjectIdSO* poseObjectId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoseObject*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::GlobalNamespace::PoseObjectIdSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transform, poseObjectId);
}
inline ::GlobalNamespace::PoseObject* GlobalNamespace::PoseObject::New_ctor(::UnityEngine::Transform* transform, ::GlobalNamespace::PoseObjectIdSO* poseObjectId) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PoseObject*>(transform, poseObjectId));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PoseObject::PoseObject() {}
