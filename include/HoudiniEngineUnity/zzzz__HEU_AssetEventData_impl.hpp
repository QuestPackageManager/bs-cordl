#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_AssetEventType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AssetEventData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AssetEventData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AssetEventData::*)(
    ::HoudiniEngineUnity::HEU_HoudiniAsset*, bool, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*)>(&::HoudiniEngineUnity::HEU_AssetEventData::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x24384b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetEventData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>& HoudiniEngineUnity::HEU_AssetEventData::__cordl_internal_get_Asset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Asset;
}
constexpr ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> const& HoudiniEngineUnity::HEU_AssetEventData::__cordl_internal_get_Asset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Asset;
}
constexpr void HoudiniEngineUnity::HEU_AssetEventData::__cordl_internal_set_Asset(::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Asset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_AssetEventData::__cordl_internal_get_CookSuccess() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CookSuccess;
}
constexpr bool const& HoudiniEngineUnity::HEU_AssetEventData::__cordl_internal_get_CookSuccess() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CookSuccess;
}
constexpr void HoudiniEngineUnity::HEU_AssetEventData::__cordl_internal_set_CookSuccess(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CookSuccess = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& HoudiniEngineUnity::HEU_AssetEventData::__cordl_internal_get_OutputObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OutputObjects;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*> const&
HoudiniEngineUnity::HEU_AssetEventData::__cordl_internal_get_OutputObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OutputObjects;
}
constexpr void HoudiniEngineUnity::HEU_AssetEventData::__cordl_internal_set_OutputObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OutputObjects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HEU_AssetEventType& HoudiniEngineUnity::HEU_AssetEventData::__cordl_internal_get_EventType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EventType;
}
constexpr ::HoudiniEngineUnity::HEU_AssetEventType const& HoudiniEngineUnity::HEU_AssetEventData::__cordl_internal_get_EventType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EventType;
}
constexpr void HoudiniEngineUnity::HEU_AssetEventData::__cordl_internal_set_EventType(::HoudiniEngineUnity::HEU_AssetEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___EventType = value;
}
inline ::HoudiniEngineUnity::HEU_AssetEventData* HoudiniEngineUnity::HEU_AssetEventData::New_ctor(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, bool successful,
                                                                                                  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* outputObjects) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_AssetEventData*>(asset, successful, outputObjects));
}
inline void HoudiniEngineUnity::HEU_AssetEventData::_ctor(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, bool successful,
                                                          ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* outputObjects) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetEventData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asset, successful, outputObjects);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_AssetEventData::HEU_AssetEventData() {}
