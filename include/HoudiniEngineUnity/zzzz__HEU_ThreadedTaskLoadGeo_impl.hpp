#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_GenerateOptions_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ThreadedTaskLoadGeo_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ThreadedTask_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ThreadedTaskLoadGeo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ObjectInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_PartInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_BaseSync_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferBase_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferInstancer_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferMesh_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferVolume_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ThreadedTaskLoadGeo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__LoadType::__HEU_ThreadedTaskLoadGeo__LoadType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__LoadType::__HEU_ThreadedTaskLoadGeo__LoadType() {}
constexpr ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__LoadType HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__LoadType::FILE{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__LoadType HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__LoadType::NODE{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__LoadType HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__LoadType::ASSET{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus() {}
constexpr ::GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus::NONE{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus::STARTED{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus::SUCCESS{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus::ERROR{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData::*)()>(
    &::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2493090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData::__cordl_internal_get__cookNodeID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cookNodeID;
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData::__cordl_internal_get__cookNodeID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cookNodeID;
}
constexpr void HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData::__cordl_internal_set__cookNodeID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cookNodeID = value;
}
constexpr ::GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus& HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData::__cordl_internal_get__loadStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadStatus;
}
constexpr ::GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus const& HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData::__cordl_internal_get__loadStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadStatus;
}
constexpr void HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData::__cordl_internal_set__loadStatus(::GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loadStatus = value;
}
constexpr ::System::Text::StringBuilder*& HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData::__cordl_internal_get__logStr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logStr;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData::__cordl_internal_get__logStr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logStr;
}
constexpr void HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData::__cordl_internal_set__logStr(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____logStr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HEU_SessionBase*& HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData::__cordl_internal_get__session() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____session;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_SessionBase*> const& HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData::__cordl_internal_get__session() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____session;
}
constexpr void HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData::__cordl_internal_set__session(::HoudiniEngineUnity::HEU_SessionBase* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____session)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject*>*&
HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData::__cordl_internal_get__loadedObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadedObjects;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject*>*> const&
HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData::__cordl_internal_get__loadedObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadedObjects;
}
constexpr void HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData::__cordl_internal_set__loadedObjects(
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loadedObjects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_LoadBufferBase*>*&
HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData::__cordl_internal_get__idBuffersMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____idBuffersMap;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_LoadBufferBase*>*> const&
HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData::__cordl_internal_get__idBuffersMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____idBuffersMap;
}
constexpr void HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData::__cordl_internal_set__idBuffersMap(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_LoadBufferBase*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____idBuffersMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData* HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData*>());
}
inline void HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData::__HEU_ThreadedTaskLoadGeo__HEU_LoadData() {}
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject::*)()>(
    &::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2493098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject::__cordl_internal_get__objectNodeID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectNodeID;
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject::__cordl_internal_get__objectNodeID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectNodeID;
}
constexpr void HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject::__cordl_internal_set__objectNodeID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objectNodeID = value;
}
constexpr int32_t& HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject::__cordl_internal_get__displayNodeID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayNodeID;
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject::__cordl_internal_get__displayNodeID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayNodeID;
}
constexpr void HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject::__cordl_internal_set__displayNodeID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____displayNodeID = value;
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>*& HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject::__cordl_internal_get__terrainBuffers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____terrainBuffers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>*> const&
HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject::__cordl_internal_get__terrainBuffers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____terrainBuffers;
}
constexpr void
HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject::__cordl_internal_set__terrainBuffers(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____terrainBuffers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh*>*& HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject::__cordl_internal_get__meshBuffers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshBuffers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh*>*> const&
HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject::__cordl_internal_get__meshBuffers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshBuffers;
}
constexpr void
HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject::__cordl_internal_set__meshBuffers(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____meshBuffers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>*&
HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject::__cordl_internal_get__instancerBuffers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instancerBuffers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>*> const&
HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject::__cordl_internal_get__instancerBuffers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instancerBuffers;
}
constexpr void
HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject::__cordl_internal_set__instancerBuffers(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____instancerBuffers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject* HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject*>());
}
inline void HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType() {}
constexpr ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType::PRECOOK{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType::POSTCOOK{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback::*)(::System::Object*, void*)>(
    &::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x24930a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData*, ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType)>(
    &::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x24931d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback::*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData*,
                                                                          ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType, ::System::AsyncCallback*, ::System::Object*)>(
    &::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x24931e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback::*)(::System::IAsyncResult*)>(
    &::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x249327c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback*>::get(), 15));
    return ___internal_method;
  }
};
inline ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback* HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback*>(object, method));
}
inline void HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback::Invoke(::HoudiniEngineUnity::HEU_SessionBase* session,
                                                                                    ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData* loadData,
                                                                                    ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType callbackType) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, loadData, callbackType);
}
inline ::System::IAsyncResult* HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback::BeginInvoke(::HoudiniEngineUnity::HEU_SessionBase* session,
                                                                                                            ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData* loadData,
                                                                                                            ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType callbackType,
                                                                                                            ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, session, loadData, callbackType, callback, object);
}
inline void HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback() {}
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.SetupLoad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_BaseSync*, ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__LoadType, int32_t, ::StringW, ::StringW)>(
    &::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::SetupLoad)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x248e800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "SetupLoad", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__LoadType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.SetupLoadNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_BaseSync*, int32_t, ::StringW)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::SetupLoadNode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x248c424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "SetupLoadNode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.SetupLoadFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_BaseSync*, int32_t, ::StringW)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::SetupLoadFile)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x248c270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "SetupLoadFile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.SetupLoadAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_BaseSync*, ::StringW, ::StringW)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::SetupLoadAsset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x248786c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "SetupLoadAsset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.SetLoadCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(
    ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback*)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::SetLoadCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x248e8e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "SetLoadCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.DoWork
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)()>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::DoWork)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x248e8f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.CookNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(::HoudiniEngineUnity::HEU_SessionBase*, int32_t)>(
    &::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::CookNode)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x248ed40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.LoadObjectBuffers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, ByRef<::HoudiniEngineUnity::HAPI_ObjectInfo>)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::LoadObjectBuffers)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x248eedc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.LoadNodeBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject*)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::LoadNodeBuffer)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x248f0a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.BuildBufferIDsMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(
    ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData*)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::BuildBufferIDsMap)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x24915ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.DoFileLoad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)()>(
    &::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::DoFileLoad)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2491a74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.DoAssetLoad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)()>(
    &::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::DoAssetLoad)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x2491e14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.QueryParts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(
    int32_t, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*>, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*>,
    ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*>, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*>,
    ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*>)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::QueryParts)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x248f348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "QueryParts", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.OnComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)()>(
    &::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::OnComplete)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2492140;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.OnStopped
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)()>(
    &::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::OnStopped)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x24921d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.CleanUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)()>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::CleanUp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2492254;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.CreateLogString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(
    ::GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus, ::StringW)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::CreateLogString)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x249225c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "CreateLogString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.AppendLog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(
    ::GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus, ::StringW)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::AppendLog)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x248ec28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "AppendLog", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.SetLog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(
    ::GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus, ::StringW)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::SetLog)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2492300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "SetLog", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.CreateFileNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(ByRef<int32_t>)>(
    &::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::CreateFileNode)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2491c80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "CreateFileNode",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.GetCookNodeID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)()>(
    &::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::GetCookNodeID)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2492450;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.GetDisplayNodeID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(int32_t)>(
    &::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::GetDisplayNodeID)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2491d0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "GetDisplayNodeID",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.SetFileParm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(int32_t, ::StringW)>(
    &::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::SetFileParm)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2491d5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "SetFileParm", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.Sleep
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)()>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::Sleep)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x248eed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "Sleep",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.GenerateTerrainBuffers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*,
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>*>)>(
    &::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::GenerateTerrainBuffers)> {
  constexpr static std::size_t size = 0x14a0;
  constexpr static std::size_t addrs = 0x248fce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "GenerateTerrainBuffers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.LoadStringFromAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, ::StringW, ByRef<::StringW>)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::LoadStringFromAttribute)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x249246c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "LoadStringFromAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.LoadFloatFromAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, ::StringW, ByRef<float_t>)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::LoadFloatFromAttribute)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x24924f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "LoadFloatFromAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.LoadLayerColorFromAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, ::StringW, ByRef<::UnityEngine::Color>)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::LoadLayerColorFromAttribute)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2492618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "LoadLayerColorFromAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Color>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.LoadLayerVector2FromAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, ::StringW, ByRef<::UnityEngine::Vector2>)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::LoadLayerVector2FromAttribute)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2492778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "LoadLayerVector2FromAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.GenerateMeshBuffers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*, bool, bool, bool, bool, bool,
    ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh*>*>)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::GenerateMeshBuffers)> {
  constexpr static std::size_t size = 0x514;
  constexpr static std::size_t addrs = 0x248f7cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "GenerateMeshBuffers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.GenerateInstancerBuffers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*,
    ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>*>)>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::GenerateInstancerBuffers)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x2491180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "GenerateInstancerBuffers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.GeneratePartsInstancerBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_LoadBufferInstancer* (
    ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, ::StringW, ::HoudiniEngineUnity::HAPI_PartInfo)>(
    &::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::GeneratePartsInstancerBuffer)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x2492a14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "GeneratePartsInstancerBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_PartInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.GeneratePointAttributeInstancerBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_LoadBufferInstancer* (
    ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)(::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, ::StringW, ::HoudiniEngineUnity::HAPI_PartInfo)>(
    &::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::GeneratePointAttributeInstancerBuffer)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x2492cd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "GeneratePointAttributeInstancerBuffer",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_PartInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo.GetLoadBufferVolumeFromTileIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::HoudiniEngineUnity::HEU_LoadBufferVolume* (*)(int32_t, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>*)>(
        &::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::GetLoadBufferVolumeFromTileIndex)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x24928b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "GetLoadBufferVolumeFromTileIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::*)()>(&::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24877d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HoudiniEngineUnity::HEU_BaseSync>& HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::__cordl_internal_get__ownerSync() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ownerSync;
}
constexpr ::UnityW<::HoudiniEngineUnity::HEU_BaseSync> const& HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::__cordl_internal_get__ownerSync() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ownerSync;
}
constexpr void HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::__cordl_internal_set__ownerSync(::UnityW<::HoudiniEngineUnity::HEU_BaseSync> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ownerSync)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HEU_SessionBase*& HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::__cordl_internal_get__session() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____session;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_SessionBase*> const& HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::__cordl_internal_get__session() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____session;
}
constexpr void HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::__cordl_internal_set__session(::HoudiniEngineUnity::HEU_SessionBase* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____session)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HEU_GenerateOptions& HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::__cordl_internal_get__generateOptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____generateOptions;
}
constexpr ::HoudiniEngineUnity::HEU_GenerateOptions const& HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::__cordl_internal_get__generateOptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____generateOptions;
}
constexpr void HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::__cordl_internal_set__generateOptions(::HoudiniEngineUnity::HEU_GenerateOptions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____generateOptions = value;
}
constexpr ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__LoadType& HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::__cordl_internal_get__loadType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadType;
}
constexpr ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__LoadType const& HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::__cordl_internal_get__loadType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadType;
}
constexpr void HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::__cordl_internal_set__loadType(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__LoadType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loadType = value;
}
constexpr ::StringW& HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::__cordl_internal_get__filePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filePath;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::__cordl_internal_get__filePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filePath;
}
constexpr void HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::__cordl_internal_set__filePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____filePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData*& HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::__cordl_internal_get__loadData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadData;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData*> const&
HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::__cordl_internal_get__loadData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadData;
}
constexpr void HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::__cordl_internal_set__loadData(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loadData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback*& HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::__cordl_internal_get__loadCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadCallback;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback*> const&
HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::__cordl_internal_get__loadCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadCallback;
}
constexpr void HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::__cordl_internal_set__loadCallback(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loadCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::SetupLoad(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_BaseSync* ownerSync,
                                                                   ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__LoadType loadType, int32_t cookNodeID, ::StringW name, ::StringW filePath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "SetupLoad", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__LoadType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, ownerSync, loadType, cookNodeID, name, filePath);
}
inline void HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::SetupLoadNode(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_BaseSync* ownerSync, int32_t cookNodeID,
                                                                       ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "SetupLoadNode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, ownerSync, cookNodeID, name);
}
inline void HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::SetupLoadFile(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_BaseSync* ownerSync, int32_t cookNodeID,
                                                                       ::StringW filePath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "SetupLoadFile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, ownerSync, cookNodeID, filePath);
}
inline void HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::SetupLoadAsset(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_BaseSync* ownerSync, ::StringW assetPath,
                                                                        ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "SetupLoadAsset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, ownerSync, assetPath, name);
}
inline void HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::SetLoadCallback(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback* loadCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "SetLoadCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loadCallback);
}
inline void HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::DoWork() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::CookNode(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t cookNodeID) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, cookNodeID);
}
inline bool HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::LoadObjectBuffers(::HoudiniEngineUnity::HEU_SessionBase* session, ByRef<::HoudiniEngineUnity::HAPI_ObjectInfo> objectInfo) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, objectInfo);
}
inline bool HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::LoadNodeBuffer(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t nodeID,
                                                                        ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject* loadObject) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, nodeID, loadObject);
}
inline void HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::BuildBufferIDsMap(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData* loadData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loadData);
}
inline bool HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::DoFileLoad() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::DoAssetLoad() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::QueryParts(int32_t nodeID, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*> meshParts,
                                                                    ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*> volumeParts,
                                                                    ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*> instancerParts,
                                                                    ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*> curveParts,
                                                                    ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*> scatterInstancerParts) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "QueryParts", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, meshParts, volumeParts, instancerParts, curveParts, scatterInstancerParts);
}
inline void HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::OnComplete() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::OnStopped() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::CleanUp() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::CreateLogString(::GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus status, ::StringW logStr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "CreateLogString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, status, logStr);
}
inline void HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::AppendLog(::GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus status, ::StringW logStr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "AppendLog", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, status, logStr);
}
inline void HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::SetLog(::GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus status, ::StringW logStr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "SetLog", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, status, logStr);
}
inline bool HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::CreateFileNode(ByRef<int32_t> fileNodeID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "CreateFileNode",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, fileNodeID);
}
inline int32_t HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::GetCookNodeID() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::GetDisplayNodeID(int32_t objNodeID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "GetDisplayNodeID",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, objNodeID);
}
inline bool HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::SetFileParm(int32_t fileNodeID, ::StringW filePath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "SetFileParm", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, fileNodeID, filePath);
}
inline void HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::Sleep() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "Sleep",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::GenerateTerrainBuffers(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t nodeID,
                                                                                ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>* volumeParts,
                                                                                ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>* scatterInstancerParts,
                                                                                ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>*> volumeBuffers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "GenerateTerrainBuffers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, nodeID, volumeParts, scatterInstancerParts, volumeBuffers);
}
inline void HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::LoadStringFromAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName,
                                                                                 ByRef<::StringW> strValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "LoadStringFromAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, geoID, partID, attrName, strValue);
}
inline void HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::LoadFloatFromAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName,
                                                                                ByRef<float_t> floatValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "LoadFloatFromAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, geoID, partID, attrName, floatValue);
}
inline void HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::LoadLayerColorFromAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName,
                                                                                     ByRef<::UnityEngine::Color> colorValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "LoadLayerColorFromAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Color>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, geoID, partID, attrName, colorValue);
}
inline void HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::LoadLayerVector2FromAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName,
                                                                                       ByRef<::UnityEngine::Vector2> vectorValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "LoadLayerVector2FromAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, geoID, partID, attrName, vectorValue);
}
inline bool HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::GenerateMeshBuffers(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t nodeID,
                                                                             ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>* meshParts, bool bSplitPoints,
                                                                             bool bUseLODGroups, bool bGenerateUVs, bool bGenerateTangents, bool bGenerateNormals,
                                                                             ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh*>*> meshBuffers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "GenerateMeshBuffers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, nodeID, meshParts, bSplitPoints, bUseLODGroups, bGenerateUVs, bGenerateTangents, bGenerateNormals,
                                                          meshBuffers);
}
inline bool HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::GenerateInstancerBuffers(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t nodeID,
                                                                                  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>* instancerParts,
                                                                                  ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>*> instancerBuffers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "GenerateInstancerBuffers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, nodeID, instancerParts, instancerBuffers);
}
inline ::HoudiniEngineUnity::HEU_LoadBufferInstancer* HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::GeneratePartsInstancerBuffer(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID,
                                                                                                                                int32_t partID, ::StringW partName,
                                                                                                                                ::HoudiniEngineUnity::HAPI_PartInfo partInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "GeneratePartsInstancerBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_PartInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_LoadBufferInstancer*, false>(this, ___internal_method, session, geoID, partID, partName, partInfo);
}
inline ::HoudiniEngineUnity::HEU_LoadBufferInstancer* HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::GeneratePointAttributeInstancerBuffer(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID,
                                                                                                                                         int32_t partID, ::StringW partName,
                                                                                                                                         ::HoudiniEngineUnity::HAPI_PartInfo partInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "GeneratePointAttributeInstancerBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_PartInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_LoadBufferInstancer*, false>(this, ___internal_method, session, geoID, partID, partName, partInfo);
}
inline ::HoudiniEngineUnity::HEU_LoadBufferVolume*
HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::GetLoadBufferVolumeFromTileIndex(int32_t tileIndex, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>* buffers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), "GetLoadBufferVolumeFromTileIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_LoadBufferVolume*, false>(nullptr, ___internal_method, tileIndex, buffers);
}
inline ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo* HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>());
}
inline void HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::HEU_ThreadedTaskLoadGeo() {}
