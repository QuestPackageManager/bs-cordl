#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_TOPWorkResult_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TOPWorkResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_TOPWorkResult::*)()>(&::HoudiniEngineUnity::HEU_TOPWorkResult::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x219c068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TOPWorkResult*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& HoudiniEngineUnity::HEU_TOPWorkResult::__get__workItemIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____workItemIndex;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_TOPWorkResult::__get__workItemIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____workItemIndex;
}
constexpr void HoudiniEngineUnity::HEU_TOPWorkResult::__set__workItemIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____workItemIndex = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_TOPWorkResult::__get__workItemID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____workItemID;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_TOPWorkResult::__get__workItemID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____workItemID;
}
constexpr void HoudiniEngineUnity::HEU_TOPWorkResult::__set__workItemID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____workItemID = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*& HoudiniEngineUnity::HEU_TOPWorkResult::__get__generatedGOs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____generatedGOs;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*> const& HoudiniEngineUnity::HEU_TOPWorkResult::__get__generatedGOs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____generatedGOs;
}
constexpr void HoudiniEngineUnity::HEU_TOPWorkResult::__set__generatedGOs(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____generatedGOs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HoudiniEngineUnity::HEU_TOPWorkResult* HoudiniEngineUnity::HEU_TOPWorkResult::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_TOPWorkResult*>());
}
inline void HoudiniEngineUnity::HEU_TOPWorkResult::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TOPWorkResult*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_TOPWorkResult::HEU_TOPWorkResult() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
