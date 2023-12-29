#pragma once
#include "GlobalNamespace/zzzz__VRControllersRecorder_impl.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationBinder_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__VRControllersRecorder_def.hpp"
#include "GlobalNamespace/zzzz__VRControllersRecorder_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
#include "GlobalNamespace/zzzz__VRController_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__VRControllersRecorder__TypeSerializationBinder.BindToType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::GlobalNamespace::__VRControllersRecorder__TypeSerializationBinder::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::__VRControllersRecorder__TypeSerializationBinder::BindToType)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x21ab31c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VRControllersRecorder__TypeSerializationBinder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VRControllersRecorder__TypeSerializationBinder*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__VRControllersRecorder__TypeSerializationBinder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__VRControllersRecorder__TypeSerializationBinder::*)()>(
    &::GlobalNamespace::__VRControllersRecorder__TypeSerializationBinder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21aa6a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VRControllersRecorder__TypeSerializationBinder*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Type* GlobalNamespace::__VRControllersRecorder__TypeSerializationBinder::BindToType(::StringW assemblyName, ::StringW typeName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VRControllersRecorder__TypeSerializationBinder*>::get(), "BindToType", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, assemblyName, typeName);
}
inline ::GlobalNamespace::__VRControllersRecorder__TypeSerializationBinder* GlobalNamespace::__VRControllersRecorder__TypeSerializationBinder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__VRControllersRecorder__TypeSerializationBinder*>());
}
inline void GlobalNamespace::__VRControllersRecorder__TypeSerializationBinder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VRControllersRecorder__TypeSerializationBinder*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__VRControllersRecorder__TypeSerializationBinder::__VRControllersRecorder__TypeSerializationBinder() {}
//  Writing Method size for method: ::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::*)()>(
    &::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21aa6b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__xPos1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xPos1;
}
constexpr float_t const& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__xPos1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xPos1;
}
constexpr void GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__set__xPos1(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xPos1 = value;
}
constexpr float_t& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__yPos1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yPos1;
}
constexpr float_t const& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__yPos1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yPos1;
}
constexpr void GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__set__yPos1(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____yPos1 = value;
}
constexpr float_t& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__zPos1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zPos1;
}
constexpr float_t const& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__zPos1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zPos1;
}
constexpr void GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__set__zPos1(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____zPos1 = value;
}
constexpr float_t& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__xPos2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xPos2;
}
constexpr float_t const& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__xPos2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xPos2;
}
constexpr void GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__set__xPos2(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xPos2 = value;
}
constexpr float_t& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__yPos2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yPos2;
}
constexpr float_t const& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__yPos2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yPos2;
}
constexpr void GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__set__yPos2(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____yPos2 = value;
}
constexpr float_t& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__zPos2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zPos2;
}
constexpr float_t const& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__zPos2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zPos2;
}
constexpr void GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__set__zPos2(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____zPos2 = value;
}
constexpr float_t& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__xPos3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xPos3;
}
constexpr float_t const& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__xPos3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xPos3;
}
constexpr void GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__set__xPos3(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xPos3 = value;
}
constexpr float_t& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__yPos3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yPos3;
}
constexpr float_t const& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__yPos3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yPos3;
}
constexpr void GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__set__yPos3(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____yPos3 = value;
}
constexpr float_t& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__zPos3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zPos3;
}
constexpr float_t const& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__zPos3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zPos3;
}
constexpr void GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__set__zPos3(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____zPos3 = value;
}
constexpr float_t& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__xRot1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xRot1;
}
constexpr float_t const& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__xRot1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xRot1;
}
constexpr void GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__set__xRot1(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xRot1 = value;
}
constexpr float_t& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__yRot1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yRot1;
}
constexpr float_t const& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__yRot1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yRot1;
}
constexpr void GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__set__yRot1(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____yRot1 = value;
}
constexpr float_t& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__zRot1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zRot1;
}
constexpr float_t const& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__zRot1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zRot1;
}
constexpr void GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__set__zRot1(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____zRot1 = value;
}
constexpr float_t& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__wRot1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wRot1;
}
constexpr float_t const& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__wRot1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wRot1;
}
constexpr void GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__set__wRot1(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____wRot1 = value;
}
constexpr float_t& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__xRot2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xRot2;
}
constexpr float_t const& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__xRot2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xRot2;
}
constexpr void GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__set__xRot2(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xRot2 = value;
}
constexpr float_t& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__yRot2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yRot2;
}
constexpr float_t const& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__yRot2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yRot2;
}
constexpr void GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__set__yRot2(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____yRot2 = value;
}
constexpr float_t& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__zRot2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zRot2;
}
constexpr float_t const& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__zRot2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zRot2;
}
constexpr void GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__set__zRot2(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____zRot2 = value;
}
constexpr float_t& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__wRot2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wRot2;
}
constexpr float_t const& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__wRot2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wRot2;
}
constexpr void GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__set__wRot2(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____wRot2 = value;
}
constexpr float_t& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__xRot3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xRot3;
}
constexpr float_t const& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__xRot3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xRot3;
}
constexpr void GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__set__xRot3(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xRot3 = value;
}
constexpr float_t& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__yRot3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yRot3;
}
constexpr float_t const& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__yRot3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yRot3;
}
constexpr void GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__set__yRot3(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____yRot3 = value;
}
constexpr float_t& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__zRot3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zRot3;
}
constexpr float_t const& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__zRot3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zRot3;
}
constexpr void GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__set__zRot3(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____zRot3 = value;
}
constexpr float_t& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__wRot3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wRot3;
}
constexpr float_t const& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__wRot3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wRot3;
}
constexpr void GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__set__wRot3(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____wRot3 = value;
}
constexpr float_t& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____time;
}
constexpr float_t const& GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__get__time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____time;
}
constexpr void GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__set__time(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____time = value;
}
inline ::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable* GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable*>());
}
inline void GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable::__VRControllersRecorder__SavedData__KeyframeSerializable() {}
//  Writing Method size for method: ::GlobalNamespace::__VRControllersRecorder__SavedData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__VRControllersRecorder__SavedData::*)()>(
    &::GlobalNamespace::__VRControllersRecorder__SavedData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21aa6a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VRControllersRecorder__SavedData*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable*, ::Array<::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable*>*>&
GlobalNamespace::__VRControllersRecorder__SavedData::__get__keyframes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyframes;
}
constexpr ::ArrayW<::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable*, ::Array<::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable*>*> const&
GlobalNamespace::__VRControllersRecorder__SavedData::__get__keyframes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyframes;
}
constexpr void GlobalNamespace::__VRControllersRecorder__SavedData::__set__keyframes(
    ::ArrayW<::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable*, ::Array<::GlobalNamespace::__VRControllersRecorder__SavedData__KeyframeSerializable*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____keyframes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__VRControllersRecorder__SavedData* GlobalNamespace::__VRControllersRecorder__SavedData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__VRControllersRecorder__SavedData*>());
}
inline void GlobalNamespace::__VRControllersRecorder__SavedData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VRControllersRecorder__SavedData*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__VRControllersRecorder__SavedData::__VRControllersRecorder__SavedData() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__VRControllersRecorder__Mode::__VRControllersRecorder__Mode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__VRControllersRecorder__Mode::__VRControllersRecorder__Mode() {}
constexpr ::GlobalNamespace::__VRControllersRecorder__Mode GlobalNamespace::__VRControllersRecorder__Mode::Record{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__VRControllersRecorder__Mode GlobalNamespace::__VRControllersRecorder__Mode::Playback{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__VRControllersRecorder__Mode GlobalNamespace::__VRControllersRecorder__Mode::Off{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::__VRControllersRecorder__Keyframe._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__VRControllersRecorder__Keyframe::*)()>(
    &::GlobalNamespace::__VRControllersRecorder__Keyframe::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21aa608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VRControllersRecorder__Keyframe*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::__VRControllersRecorder__Keyframe::__get__pos1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pos1;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::__VRControllersRecorder__Keyframe::__get__pos1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pos1;
}
constexpr void GlobalNamespace::__VRControllersRecorder__Keyframe::__set__pos1(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pos1 = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::__VRControllersRecorder__Keyframe::__get__pos2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pos2;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::__VRControllersRecorder__Keyframe::__get__pos2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pos2;
}
constexpr void GlobalNamespace::__VRControllersRecorder__Keyframe::__set__pos2(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pos2 = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::__VRControllersRecorder__Keyframe::__get__pos3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pos3;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::__VRControllersRecorder__Keyframe::__get__pos3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pos3;
}
constexpr void GlobalNamespace::__VRControllersRecorder__Keyframe::__set__pos3(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pos3 = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::__VRControllersRecorder__Keyframe::__get__rot1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rot1;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::__VRControllersRecorder__Keyframe::__get__rot1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rot1;
}
constexpr void GlobalNamespace::__VRControllersRecorder__Keyframe::__set__rot1(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rot1 = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::__VRControllersRecorder__Keyframe::__get__rot2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rot2;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::__VRControllersRecorder__Keyframe::__get__rot2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rot2;
}
constexpr void GlobalNamespace::__VRControllersRecorder__Keyframe::__set__rot2(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rot2 = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::__VRControllersRecorder__Keyframe::__get__rot3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rot3;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::__VRControllersRecorder__Keyframe::__get__rot3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rot3;
}
constexpr void GlobalNamespace::__VRControllersRecorder__Keyframe::__set__rot3(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rot3 = value;
}
constexpr float_t& GlobalNamespace::__VRControllersRecorder__Keyframe::__get__time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____time;
}
constexpr float_t const& GlobalNamespace::__VRControllersRecorder__Keyframe::__get__time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____time;
}
constexpr void GlobalNamespace::__VRControllersRecorder__Keyframe::__set__time(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____time = value;
}
inline ::GlobalNamespace::__VRControllersRecorder__Keyframe* GlobalNamespace::__VRControllersRecorder__Keyframe::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__VRControllersRecorder__Keyframe*>());
}
inline void GlobalNamespace::__VRControllersRecorder__Keyframe::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VRControllersRecorder__Keyframe*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__VRControllersRecorder__Keyframe::__VRControllersRecorder__Keyframe() {}
//  Writing Method size for method: ::GlobalNamespace::VRControllersRecorder.set_mode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRControllersRecorder::*)(::GlobalNamespace::__VRControllersRecorder__Mode)>(
    &::GlobalNamespace::VRControllersRecorder::set_mode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a8d90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(), "set_mode", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__VRControllersRecorder__Mode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRControllersRecorder.get_mode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__VRControllersRecorder__Mode (::GlobalNamespace::VRControllersRecorder::*)()>(
    &::GlobalNamespace::VRControllersRecorder::get_mode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a8d98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(), "get_mode",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRControllersRecorder.set_recordingTextAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRControllersRecorder::*)(::UnityEngine::TextAsset*)>(
    &::GlobalNamespace::VRControllersRecorder::set_recordingTextAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a8da0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(), "set_recordingTextAsset", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRControllersRecorder.get_recordingTextAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextAsset* (::GlobalNamespace::VRControllersRecorder::*)()>(
    &::GlobalNamespace::VRControllersRecorder::get_recordingTextAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a8da8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(),
                                                                               "get_recordingTextAsset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRControllersRecorder.set_recordingFileName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRControllersRecorder::*)(::StringW)>(
    &::GlobalNamespace::VRControllersRecorder::set_recordingFileName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a8db0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(), "set_recordingFileName",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRControllersRecorder.get_recordingFileName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::VRControllersRecorder::*)()>(
    &::GlobalNamespace::VRControllersRecorder::get_recordingFileName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a8db8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(),
                                                                               "get_recordingFileName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRControllersRecorder.set_changeToNonVRCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRControllersRecorder::*)(bool)>(
    &::GlobalNamespace::VRControllersRecorder::set_changeToNonVRCamera)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21a8dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(), "set_changeToNonVRCamera",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRControllersRecorder.get_changeToNonVRCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::VRControllersRecorder::*)()>(
    &::GlobalNamespace::VRControllersRecorder::get_changeToNonVRCamera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a8dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(),
                                                                               "get_changeToNonVRCamera", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRControllersRecorder.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRControllersRecorder::*)()>(&::GlobalNamespace::VRControllersRecorder::Start)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x21a8dd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRControllersRecorder.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRControllersRecorder::*)()>(&::GlobalNamespace::VRControllersRecorder::OnDestroy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x21a9780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(), "OnDestroy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRControllersRecorder.SetDefaultSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRControllersRecorder::*)()>(
    &::GlobalNamespace::VRControllersRecorder::SetDefaultSettings)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x21a9a5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(),
                                                                               "SetDefaultSettings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRControllersRecorder.SetInGamePlaybackDefaultSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRControllersRecorder::*)()>(
    &::GlobalNamespace::VRControllersRecorder::SetInGamePlaybackDefaultSettings)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x21a9ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(),
                                                                               "SetInGamePlaybackDefaultSettings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRControllersRecorder.PlaybackTick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRControllersRecorder::*)()>(&::GlobalNamespace::VRControllersRecorder::PlaybackTick)> {
  constexpr static std::size_t size = 0x72c;
  constexpr static std::size_t addrs = 0x21a9b64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(), "PlaybackTick",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRControllersRecorder.SetPositionAndRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRControllersRecorder::*)(
    ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t)>(&::GlobalNamespace::VRControllersRecorder::SetPositionAndRotation)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x21aa290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(), "SetPositionAndRotation", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRControllersRecorder.RecordTick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRControllersRecorder::*)()>(&::GlobalNamespace::VRControllersRecorder::RecordTick)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x21aa394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(), "RecordTick",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRControllersRecorder.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRControllersRecorder::*)()>(&::GlobalNamespace::VRControllersRecorder::Update)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x21aa610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRControllersRecorder.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRControllersRecorder::*)()>(&::GlobalNamespace::VRControllersRecorder::LateUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x21aa690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(), "LateUpdate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRControllersRecorder.Save
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRControllersRecorder::*)()>(&::GlobalNamespace::VRControllersRecorder::Save)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x21a9790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(), "Save",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRControllersRecorder.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRControllersRecorder::*)()>(&::GlobalNamespace::VRControllersRecorder::Load)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x21a91e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(), "Load",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRControllersRecorder.CreateAnimationClipFromRecording
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationClip* (*)(::StringW)>(
    &::GlobalNamespace::VRControllersRecorder::CreateAnimationClipFromRecording)> {
  constexpr static std::size_t size = 0xbf8;
  constexpr static std::size_t addrs = 0x21aa6b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(), "CreateAnimationClipFromRecording",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRControllersRecorder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRControllersRecorder::*)()>(&::GlobalNamespace::VRControllersRecorder::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x21ab2b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::TextAsset*& GlobalNamespace::VRControllersRecorder::__get__recordingTextAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingTextAsset;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextAsset*> const& GlobalNamespace::VRControllersRecorder::__get__recordingTextAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingTextAsset;
}
constexpr void GlobalNamespace::VRControllersRecorder::__set__recordingTextAsset(::UnityEngine::TextAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____recordingTextAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::VRControllersRecorder::__get__recordingFileName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingFileName;
}
constexpr ::StringW const& GlobalNamespace::VRControllersRecorder::__get__recordingFileName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recordingFileName;
}
constexpr void GlobalNamespace::VRControllersRecorder::__set__recordingFileName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____recordingFileName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__VRControllersRecorder__Mode& GlobalNamespace::VRControllersRecorder::__get__mode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mode;
}
constexpr ::GlobalNamespace::__VRControllersRecorder__Mode const& GlobalNamespace::VRControllersRecorder::__get__mode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mode;
}
constexpr void GlobalNamespace::VRControllersRecorder::__set__mode(::GlobalNamespace::__VRControllersRecorder__Mode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mode = value;
}
constexpr bool& GlobalNamespace::VRControllersRecorder::__get__dontMoveHead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dontMoveHead;
}
constexpr bool const& GlobalNamespace::VRControllersRecorder::__get__dontMoveHead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dontMoveHead;
}
constexpr void GlobalNamespace::VRControllersRecorder::__set__dontMoveHead(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dontMoveHead = value;
}
constexpr bool& GlobalNamespace::VRControllersRecorder::__get__changeToNonVRCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____changeToNonVRCamera;
}
constexpr bool const& GlobalNamespace::VRControllersRecorder::__get__changeToNonVRCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____changeToNonVRCamera;
}
constexpr void GlobalNamespace::VRControllersRecorder::__set__changeToNonVRCamera(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____changeToNonVRCamera = value;
}
constexpr bool& GlobalNamespace::VRControllersRecorder::__get__adjustSabersPositionBasedOnHeadPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____adjustSabersPositionBasedOnHeadPosition;
}
constexpr bool const& GlobalNamespace::VRControllersRecorder::__get__adjustSabersPositionBasedOnHeadPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____adjustSabersPositionBasedOnHeadPosition;
}
constexpr void GlobalNamespace::VRControllersRecorder::__set__adjustSabersPositionBasedOnHeadPosition(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____adjustSabersPositionBasedOnHeadPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VRControllersRecorder::__get__headRotationOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headRotationOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VRControllersRecorder::__get__headRotationOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headRotationOffset;
}
constexpr void GlobalNamespace::VRControllersRecorder::__set__headRotationOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headRotationOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VRControllersRecorder::__get__headPositionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headPositionOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VRControllersRecorder::__get__headPositionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headPositionOffset;
}
constexpr void GlobalNamespace::VRControllersRecorder::__set__headPositionOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headPositionOffset = value;
}
constexpr float_t& GlobalNamespace::VRControllersRecorder::__get__headSmooth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headSmooth;
}
constexpr float_t const& GlobalNamespace::VRControllersRecorder::__get__headSmooth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headSmooth;
}
constexpr void GlobalNamespace::VRControllersRecorder::__set__headSmooth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headSmooth = value;
}
constexpr float_t& GlobalNamespace::VRControllersRecorder::__get__cameraFOV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraFOV;
}
constexpr float_t const& GlobalNamespace::VRControllersRecorder::__get__cameraFOV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraFOV;
}
constexpr void GlobalNamespace::VRControllersRecorder::__set__cameraFOV(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cameraFOV = value;
}
constexpr float_t& GlobalNamespace::VRControllersRecorder::__get__controllersTimeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controllersTimeOffset;
}
constexpr float_t const& GlobalNamespace::VRControllersRecorder::__get__controllersTimeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controllersTimeOffset;
}
constexpr void GlobalNamespace::VRControllersRecorder::__set__controllersTimeOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____controllersTimeOffset = value;
}
constexpr float_t& GlobalNamespace::VRControllersRecorder::__get__controllersSmooth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controllersSmooth;
}
constexpr float_t const& GlobalNamespace::VRControllersRecorder::__get__controllersSmooth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controllersSmooth;
}
constexpr void GlobalNamespace::VRControllersRecorder::__set__controllersSmooth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____controllersSmooth = value;
}
constexpr ::GlobalNamespace::VRController*& GlobalNamespace::VRControllersRecorder::__get__controller0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controller0;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VRController*> const& GlobalNamespace::VRControllersRecorder::__get__controller0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controller0;
}
constexpr void GlobalNamespace::VRControllersRecorder::__set__controller0(::GlobalNamespace::VRController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____controller0)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::VRController*& GlobalNamespace::VRControllersRecorder::__get__controller1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controller1;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VRController*> const& GlobalNamespace::VRControllersRecorder::__get__controller1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controller1;
}
constexpr void GlobalNamespace::VRControllersRecorder::__set__controller1(::GlobalNamespace::VRController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____controller1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::VRControllersRecorder::__get__headTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::VRControllersRecorder::__get__headTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headTransform;
}
constexpr void GlobalNamespace::VRControllersRecorder::__set__headTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____headTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Camera*& GlobalNamespace::VRControllersRecorder::__get__camera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____camera;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& GlobalNamespace::VRControllersRecorder::__get__camera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____camera;
}
constexpr void GlobalNamespace::VRControllersRecorder::__set__camera(::UnityEngine::Camera* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____camera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Camera*& GlobalNamespace::VRControllersRecorder::__get__recorderCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recorderCamera;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& GlobalNamespace::VRControllersRecorder::__get__recorderCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recorderCamera;
}
constexpr void GlobalNamespace::VRControllersRecorder::__set__recorderCamera(::UnityEngine::Camera* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____recorderCamera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::VRControllersRecorder::__get__spawnRotationTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnRotationTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::VRControllersRecorder::__get__spawnRotationTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnRotationTransform;
}
constexpr void GlobalNamespace::VRControllersRecorder::__set__spawnRotationTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spawnRotationTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::VRControllersRecorder::__get__originTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::VRControllersRecorder::__get__originTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originTransform;
}
constexpr void GlobalNamespace::VRControllersRecorder::__set__originTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____originTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AudioTimeSyncController*& GlobalNamespace::VRControllersRecorder::__get__audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> const& GlobalNamespace::VRControllersRecorder::__get__audioTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr void GlobalNamespace::VRControllersRecorder::__set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSyncController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>*& GlobalNamespace::VRControllersRecorder::__get__keyframes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyframes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>*> const&
GlobalNamespace::VRControllersRecorder::__get__keyframes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyframes;
}
constexpr void GlobalNamespace::VRControllersRecorder::__set__keyframes(::System::Collections::Generic::List_1<::GlobalNamespace::__VRControllersRecorder__Keyframe*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____keyframes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::VRControllersRecorder::__get__keyframeIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyframeIndex;
}
constexpr int32_t const& GlobalNamespace::VRControllersRecorder::__get__keyframeIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyframeIndex;
}
constexpr void GlobalNamespace::VRControllersRecorder::__set__keyframeIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____keyframeIndex = value;
}
inline void GlobalNamespace::VRControllersRecorder::set_mode(::GlobalNamespace::__VRControllersRecorder__Mode value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(), "set_mode", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__VRControllersRecorder__Mode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__VRControllersRecorder__Mode GlobalNamespace::VRControllersRecorder::get_mode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(), "get_mode",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__VRControllersRecorder__Mode, false>(this, ___internal_method);
}
inline void GlobalNamespace::VRControllersRecorder::set_recordingTextAsset(::UnityEngine::TextAsset* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(), "set_recordingTextAsset", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::TextAsset* GlobalNamespace::VRControllersRecorder::get_recordingTextAsset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(),
                                                                             "get_recordingTextAsset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextAsset*, false>(this, ___internal_method);
}
inline void GlobalNamespace::VRControllersRecorder::set_recordingFileName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(), "set_recordingFileName",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::VRControllersRecorder::get_recordingFileName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(),
                                                                             "get_recordingFileName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::VRControllersRecorder::set_changeToNonVRCamera(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(), "set_changeToNonVRCamera",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::VRControllersRecorder::get_changeToNonVRCamera() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(),
                                                                             "get_changeToNonVRCamera", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::VRControllersRecorder::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::VRControllersRecorder::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::VRControllersRecorder::SetDefaultSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(),
                                                                             "SetDefaultSettings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::VRControllersRecorder::SetInGamePlaybackDefaultSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(),
                                                                             "SetInGamePlaybackDefaultSettings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::VRControllersRecorder::PlaybackTick() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(), "PlaybackTick",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::VRControllersRecorder::SetPositionAndRotation(::UnityEngine::Transform* transf, ::UnityEngine::Vector3 targetPos, ::UnityEngine::Quaternion targetRot, float_t t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(), "SetPositionAndRotation", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transf, targetPos, targetRot, t);
}
inline void GlobalNamespace::VRControllersRecorder::RecordTick() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(), "RecordTick",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::VRControllersRecorder::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::VRControllersRecorder::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(), "LateUpdate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::VRControllersRecorder::Save() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(), "Save",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::VRControllersRecorder::Load() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(), "Load",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::AnimationClip* GlobalNamespace::VRControllersRecorder::CreateAnimationClipFromRecording(::StringW recordingfilePath) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(), "CreateAnimationClipFromRecording",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationClip*, false>(nullptr, ___internal_method, recordingfilePath);
}
inline ::GlobalNamespace::VRControllersRecorder* GlobalNamespace::VRControllersRecorder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::VRControllersRecorder*>());
}
inline void GlobalNamespace::VRControllersRecorder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorder*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VRControllersRecorder::VRControllersRecorder() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
