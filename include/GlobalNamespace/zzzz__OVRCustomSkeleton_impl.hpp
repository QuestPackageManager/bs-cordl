#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRCustomSkeleton.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_impl.hpp"
#include "GlobalNamespace/zzzz__OVRCustomSkeleton_def.hpp"
#include "GlobalNamespace/zzzz__OVRCustomSkeleton_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRCustomSkeleton_RetargetingType::OVRCustomSkeleton_RetargetingType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRCustomSkeleton_RetargetingType::OVRCustomSkeleton_RetargetingType() {}
constexpr ::GlobalNamespace::OVRCustomSkeleton_RetargetingType GlobalNamespace::OVRCustomSkeleton_RetargetingType::OculusSkeleton{ static_cast<int32_t>(0x0) };
//  Writing Method size for method: ::GlobalNamespace::OVRCustomSkeleton.get_CustomBones
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* (::GlobalNamespace::OVRCustomSkeleton::*)()>(
    &::GlobalNamespace::OVRCustomSkeleton::get_CustomBones)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ef9438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomSkeleton*>(), { "get_CustomBones", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomSkeleton.GetBoneTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::OVRCustomSkeleton::*)(::GlobalNamespace::OVRSkeleton_BoneId)>(
    &::GlobalNamespace::OVRCustomSkeleton::GetBoneTransform)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5ef9440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomSkeleton*>(), { ::i2c::class_of<::GlobalNamespace::OVRCustomSkeleton*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomSkeleton.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRCustomSkeleton::*)()>(
    &::GlobalNamespace::OVRCustomSkeleton::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ef94a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomSkeleton*>(), { "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomSkeleton.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRCustomSkeleton::*)()>(
    &::GlobalNamespace::OVRCustomSkeleton::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ef94a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomSkeleton*>(), { "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomSkeleton.AllocateBones
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRCustomSkeleton::*)()>(&::GlobalNamespace::OVRCustomSkeleton::AllocateBones)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5ef94ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomSkeleton*>(), { "AllocateBones", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomSkeleton.SetSkeletonType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRCustomSkeleton::*)(::GlobalNamespace::OVRSkeleton_SkeletonType)>(
    &::GlobalNamespace::OVRCustomSkeleton::SetSkeletonType)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ef957c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomSkeleton*>(), { ::i2c::class_of<::GlobalNamespace::OVRCustomSkeleton*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomSkeleton._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRCustomSkeleton::*)()>(&::GlobalNamespace::OVRCustomSkeleton::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ef9618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomSkeleton*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& GlobalNamespace::OVRCustomSkeleton::__cordl_internal_get__customBones_V2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customBones_V2;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& GlobalNamespace::OVRCustomSkeleton::__cordl_internal_get__customBones_V2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customBones_V2;
}
constexpr void GlobalNamespace::OVRCustomSkeleton::__cordl_internal_set__customBones_V2(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____customBones_V2 = value;
}
constexpr ::GlobalNamespace::OVRCustomSkeleton_RetargetingType& GlobalNamespace::OVRCustomSkeleton::__cordl_internal_get_retargetingType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___retargetingType;
}
constexpr ::GlobalNamespace::OVRCustomSkeleton_RetargetingType const& GlobalNamespace::OVRCustomSkeleton::__cordl_internal_get_retargetingType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___retargetingType;
}
constexpr void GlobalNamespace::OVRCustomSkeleton::__cordl_internal_set_retargetingType(::GlobalNamespace::OVRCustomSkeleton_RetargetingType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___retargetingType = value;
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* GlobalNamespace::OVRCustomSkeleton::get_CustomBones() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomSkeleton*>(), { "get_CustomBones", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::OVRCustomSkeleton::GetBoneTransform(::GlobalNamespace::OVRSkeleton_BoneId boneId) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRCustomSkeleton*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, boneId);
}
inline void GlobalNamespace::OVRCustomSkeleton::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomSkeleton*>(), { "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRCustomSkeleton::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomSkeleton*>(), { "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRCustomSkeleton::AllocateBones() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomSkeleton*>(), { "AllocateBones", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRCustomSkeleton::SetSkeletonType(::GlobalNamespace::OVRSkeleton_SkeletonType skeletonType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRCustomSkeleton*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, skeletonType);
}
inline void GlobalNamespace::OVRCustomSkeleton::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRCustomSkeleton*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRCustomSkeleton* GlobalNamespace::OVRCustomSkeleton::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRCustomSkeleton*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr GlobalNamespace::OVRCustomSkeleton::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* GlobalNamespace::OVRCustomSkeleton::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRCustomSkeleton::OVRCustomSkeleton() {}
