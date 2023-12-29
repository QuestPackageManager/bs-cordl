#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_TOPNodeData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_TOPNodeData_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_TOPNodeData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_TOPWorkResult_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_WorkItemTally_def.hpp"
#include "HoudiniEngineUnity/zzzz__TOPNodeTags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_TOPNodeData__PDGState::__HEU_TOPNodeData__PDGState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_TOPNodeData__PDGState::__HEU_TOPNodeData__PDGState() {}
constexpr ::HoudiniEngineUnity::__HEU_TOPNodeData__PDGState HoudiniEngineUnity::__HEU_TOPNodeData__PDGState::NONE{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::__HEU_TOPNodeData__PDGState HoudiniEngineUnity::__HEU_TOPNodeData__PDGState::DIRTIED{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::__HEU_TOPNodeData__PDGState HoudiniEngineUnity::__HEU_TOPNodeData__PDGState::DIRTYING{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::__HEU_TOPNodeData__PDGState HoudiniEngineUnity::__HEU_TOPNodeData__PDGState::COOKING{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::__HEU_TOPNodeData__PDGState HoudiniEngineUnity::__HEU_TOPNodeData__PDGState::COOK_COMPLETE{ static_cast<int32_t>(0x4) };
constexpr ::HoudiniEngineUnity::__HEU_TOPNodeData__PDGState HoudiniEngineUnity::__HEU_TOPNodeData__PDGState::COOK_FAILED{ static_cast<int32_t>(0x5) };
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TOPNodeData.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_TOPNodeData::*)()>(&::HoudiniEngineUnity::HEU_TOPNodeData::Reset)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2045f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(), "Reset",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TOPNodeData.AreAllWorkItemsComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_TOPNodeData::*)()>(&::HoudiniEngineUnity::HEU_TOPNodeData::AreAllWorkItemsComplete)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2045fc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(),
                                                                               "AreAllWorkItemsComplete", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TOPNodeData.AnyWorkItemsFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_TOPNodeData::*)()>(&::HoudiniEngineUnity::HEU_TOPNodeData::AnyWorkItemsFailed)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2045d7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(),
                                                                               "AnyWorkItemsFailed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TOPNodeData.AnyWorkItemsPending
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_TOPNodeData::*)()>(&::HoudiniEngineUnity::HEU_TOPNodeData::AnyWorkItemsPending)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2046054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(),
                                                                               "AnyWorkItemsPending", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TOPNodeData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_TOPNodeData::*)()>(&::HoudiniEngineUnity::HEU_TOPNodeData::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x204456c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& HoudiniEngineUnity::HEU_TOPNodeData::__get__nodeID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeID;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_TOPNodeData::__get__nodeID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeID;
}
constexpr void HoudiniEngineUnity::HEU_TOPNodeData::__set__nodeID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nodeID = value;
}
constexpr ::StringW& HoudiniEngineUnity::HEU_TOPNodeData::__get__nodeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_TOPNodeData::__get__nodeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeName;
}
constexpr void HoudiniEngineUnity::HEU_TOPNodeData::__set__nodeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nodeName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_TOPNodeData::__get__parentName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_TOPNodeData::__get__parentName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentName;
}
constexpr void HoudiniEngineUnity::HEU_TOPNodeData::__set__parentName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parentName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::GameObject*& HoudiniEngineUnity::HEU_TOPNodeData::__get__workResultParentGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____workResultParentGO;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& HoudiniEngineUnity::HEU_TOPNodeData::__get__workResultParentGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____workResultParentGO;
}
constexpr void HoudiniEngineUnity::HEU_TOPNodeData::__set__workResultParentGO(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____workResultParentGO)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPWorkResult*>*& HoudiniEngineUnity::HEU_TOPNodeData::__get__workResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____workResults;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPWorkResult*>*> const&
HoudiniEngineUnity::HEU_TOPNodeData::__get__workResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____workResults;
}
constexpr void HoudiniEngineUnity::HEU_TOPNodeData::__set__workResults(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPWorkResult*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____workResults)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::TOPNodeTags*& HoudiniEngineUnity::HEU_TOPNodeData::__get__tags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tags;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::TOPNodeTags*> const& HoudiniEngineUnity::HEU_TOPNodeData::__get__tags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tags;
}
constexpr void HoudiniEngineUnity::HEU_TOPNodeData::__set__tags(::HoudiniEngineUnity::TOPNodeTags* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tags)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_TOPNodeData::__get__showResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showResults;
}
constexpr bool const& HoudiniEngineUnity::HEU_TOPNodeData::__get__showResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showResults;
}
constexpr void HoudiniEngineUnity::HEU_TOPNodeData::__set__showResults(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showResults = value;
}
constexpr ::HoudiniEngineUnity::__HEU_TOPNodeData__PDGState& HoudiniEngineUnity::HEU_TOPNodeData::__get__pdgState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pdgState;
}
constexpr ::HoudiniEngineUnity::__HEU_TOPNodeData__PDGState const& HoudiniEngineUnity::HEU_TOPNodeData::__get__pdgState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pdgState;
}
constexpr void HoudiniEngineUnity::HEU_TOPNodeData::__set__pdgState(::HoudiniEngineUnity::__HEU_TOPNodeData__PDGState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pdgState = value;
}
constexpr ::HoudiniEngineUnity::HEU_WorkItemTally*& HoudiniEngineUnity::HEU_TOPNodeData::__get__workItemTally() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____workItemTally;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_WorkItemTally*> const& HoudiniEngineUnity::HEU_TOPNodeData::__get__workItemTally() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____workItemTally;
}
constexpr void HoudiniEngineUnity::HEU_TOPNodeData::__set__workItemTally(::HoudiniEngineUnity::HEU_WorkItemTally* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____workItemTally)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HoudiniEngineUnity::HEU_TOPNodeData::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(), "Reset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_TOPNodeData::AreAllWorkItemsComplete() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(),
                                                                             "AreAllWorkItemsComplete", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_TOPNodeData::AnyWorkItemsFailed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(),
                                                                             "AnyWorkItemsFailed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_TOPNodeData::AnyWorkItemsPending() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(),
                                                                             "AnyWorkItemsPending", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_TOPNodeData* HoudiniEngineUnity::HEU_TOPNodeData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_TOPNodeData*>());
}
inline void HoudiniEngineUnity::HEU_TOPNodeData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_TOPNodeData::HEU_TOPNodeData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
