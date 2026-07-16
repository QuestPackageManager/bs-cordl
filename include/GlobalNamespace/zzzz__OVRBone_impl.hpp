#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRBone.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRBone_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRBone.get_Id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSkeleton_BoneId (::GlobalNamespace::OVRBone::*)()>(&::GlobalNamespace::OVRBone::get_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0fb44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBone*>(), { "get_Id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBone.set_Id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRBone::*)(::GlobalNamespace::OVRSkeleton_BoneId)>(&::GlobalNamespace::OVRBone::set_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0fb4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBone*>(), { "set_Id", {}, { ::i2c::type_of<::GlobalNamespace::OVRSkeleton_BoneId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBone.get_ParentBoneIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::GlobalNamespace::OVRBone::*)()>(&::GlobalNamespace::OVRBone::get_ParentBoneIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0fb54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBone*>(), { "get_ParentBoneIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBone.set_ParentBoneIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRBone::*)(int16_t)>(&::GlobalNamespace::OVRBone::set_ParentBoneIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0fb5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBone*>(), { "set_ParentBoneIndex", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBone.get_Transform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::OVRBone::*)()>(&::GlobalNamespace::OVRBone::get_Transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0fb64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBone*>(), { "get_Transform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBone.set_Transform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRBone::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::OVRBone::set_Transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0fb6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBone*>(), { "set_Transform", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBone._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRBone::*)()>(&::GlobalNamespace::OVRBone::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f0d79c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBone*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBone._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRBone::*)(::GlobalNamespace::OVRSkeleton_BoneId, int16_t, ::UnityEngine::Transform*)>(
    &::GlobalNamespace::OVRBone::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f0fb74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBone*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::OVRSkeleton_BoneId>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBone.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRBone::*)()>(&::GlobalNamespace::OVRBone::Dispose)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f0d6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBone*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRSkeleton_BoneId& GlobalNamespace::OVRBone::__cordl_internal_get__Id_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Id_k__BackingField;
}
constexpr ::GlobalNamespace::OVRSkeleton_BoneId const& GlobalNamespace::OVRBone::__cordl_internal_get__Id_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Id_k__BackingField;
}
constexpr void GlobalNamespace::OVRBone::__cordl_internal_set__Id_k__BackingField(::GlobalNamespace::OVRSkeleton_BoneId value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Id_k__BackingField = value;
}
constexpr int16_t& GlobalNamespace::OVRBone::__cordl_internal_get__ParentBoneIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ParentBoneIndex_k__BackingField;
}
constexpr int16_t const& GlobalNamespace::OVRBone::__cordl_internal_get__ParentBoneIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ParentBoneIndex_k__BackingField;
}
constexpr void GlobalNamespace::OVRBone::__cordl_internal_set__ParentBoneIndex_k__BackingField(int16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ParentBoneIndex_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::OVRBone::__cordl_internal_get__Transform_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Transform_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::OVRBone::__cordl_internal_get__Transform_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Transform_k__BackingField;
}
constexpr void GlobalNamespace::OVRBone::__cordl_internal_set__Transform_k__BackingField(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Transform_k__BackingField = value;
}
inline ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRBone::get_Id() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBone*>(), { "get_Id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSkeleton_BoneId>(this, ___internal_method);
}
inline void GlobalNamespace::OVRBone::set_Id(::GlobalNamespace::OVRSkeleton_BoneId value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBone*>(), { "set_Id", {}, { ::i2c::type_of<::GlobalNamespace::OVRSkeleton_BoneId>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int16_t GlobalNamespace::OVRBone::get_ParentBoneIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBone*>(), { "get_ParentBoneIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRBone::set_ParentBoneIndex(int16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBone*>(), { "set_ParentBoneIndex", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::OVRBone::get_Transform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBone*>(), { "get_Transform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void GlobalNamespace::OVRBone::set_Transform(::UnityEngine::Transform* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBone*>(), { "set_Transform", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRBone::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBone*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRBone::_ctor(::GlobalNamespace::OVRSkeleton_BoneId id, int16_t parentBoneIndex, ::UnityEngine::Transform* trans) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBone*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::OVRSkeleton_BoneId>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, parentBoneIndex, trans);
}
inline void GlobalNamespace::OVRBone::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRBone*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRBone* GlobalNamespace::OVRBone::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRBone*>());
}
inline ::GlobalNamespace::OVRBone* GlobalNamespace::OVRBone::New_ctor(::GlobalNamespace::OVRSkeleton_BoneId id, int16_t parentBoneIndex, ::UnityEngine::Transform* trans) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRBone*>(id, parentBoneIndex, trans));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::OVRBone::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OVRBone::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRBone::OVRBone() {}
