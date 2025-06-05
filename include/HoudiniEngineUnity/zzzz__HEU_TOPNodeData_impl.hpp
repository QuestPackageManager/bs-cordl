#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_TOPNodeData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_TOPNodeData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_TOPNodeData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_TOPWorkResult_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_WorkItemTally_def.hpp"
#include "HoudiniEngineUnity/zzzz__TOPNodeTags_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HEU_TOPNodeData_PDGState::HEU_TOPNodeData_PDGState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_TOPNodeData_PDGState::HEU_TOPNodeData_PDGState() {}
constexpr ::HoudiniEngineUnity::HEU_TOPNodeData_PDGState HoudiniEngineUnity::HEU_TOPNodeData_PDGState::NONE{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HEU_TOPNodeData_PDGState HoudiniEngineUnity::HEU_TOPNodeData_PDGState::DIRTIED{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HEU_TOPNodeData_PDGState HoudiniEngineUnity::HEU_TOPNodeData_PDGState::DIRTYING{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HEU_TOPNodeData_PDGState HoudiniEngineUnity::HEU_TOPNodeData_PDGState::COOKING{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::HEU_TOPNodeData_PDGState HoudiniEngineUnity::HEU_TOPNodeData_PDGState::COOK_COMPLETE{ static_cast<int32_t>(0x4) };
constexpr ::HoudiniEngineUnity::HEU_TOPNodeData_PDGState HoudiniEngineUnity::HEU_TOPNodeData_PDGState::COOK_FAILED{ static_cast<int32_t>(0x5) };
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TOPNodeData.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_TOPNodeData::*)()>(&::HoudiniEngineUnity::HEU_TOPNodeData::Reset)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3a530b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(), "Reset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TOPNodeData.AreAllWorkItemsComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_TOPNodeData::*)()>(&::HoudiniEngineUnity::HEU_TOPNodeData::AreAllWorkItemsComplete)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3a530dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(),
                                                                               "AreAllWorkItemsComplete", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TOPNodeData.AnyWorkItemsFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_TOPNodeData::*)()>(&::HoudiniEngineUnity::HEU_TOPNodeData::AnyWorkItemsFailed)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3a52ed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(),
                                                                               "AnyWorkItemsFailed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TOPNodeData.AnyWorkItemsPending
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_TOPNodeData::*)()>(&::HoudiniEngineUnity::HEU_TOPNodeData::AnyWorkItemsPending)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3a53170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(),
                                                                               "AnyWorkItemsPending", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TOPNodeData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_TOPNodeData::*)()>(&::HoudiniEngineUnity::HEU_TOPNodeData::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x3a516d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& HoudiniEngineUnity::HEU_TOPNodeData::__cordl_internal_get__nodeID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeID;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_TOPNodeData::__cordl_internal_get__nodeID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeID;
}
constexpr void HoudiniEngineUnity::HEU_TOPNodeData::__cordl_internal_set__nodeID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nodeID = value;
}
constexpr ::StringW& HoudiniEngineUnity::HEU_TOPNodeData::__cordl_internal_get__nodeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_TOPNodeData::__cordl_internal_get__nodeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeName;
}
constexpr void HoudiniEngineUnity::HEU_TOPNodeData::__cordl_internal_set__nodeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nodeName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_TOPNodeData::__cordl_internal_get__parentName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_TOPNodeData::__cordl_internal_get__parentName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentName;
}
constexpr void HoudiniEngineUnity::HEU_TOPNodeData::__cordl_internal_set__parentName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parentName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& HoudiniEngineUnity::HEU_TOPNodeData::__cordl_internal_get__workResultParentGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____workResultParentGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& HoudiniEngineUnity::HEU_TOPNodeData::__cordl_internal_get__workResultParentGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____workResultParentGO;
}
constexpr void HoudiniEngineUnity::HEU_TOPNodeData::__cordl_internal_set__workResultParentGO(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____workResultParentGO)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPWorkResult*>*& HoudiniEngineUnity::HEU_TOPNodeData::__cordl_internal_get__workResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____workResults;
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPWorkResult*>* const& HoudiniEngineUnity::HEU_TOPNodeData::__cordl_internal_get__workResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____workResults;
}
constexpr void HoudiniEngineUnity::HEU_TOPNodeData::__cordl_internal_set__workResults(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPWorkResult*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____workResults)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::TOPNodeTags*& HoudiniEngineUnity::HEU_TOPNodeData::__cordl_internal_get__tags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tags;
}
constexpr ::HoudiniEngineUnity::TOPNodeTags* const& HoudiniEngineUnity::HEU_TOPNodeData::__cordl_internal_get__tags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tags;
}
constexpr void HoudiniEngineUnity::HEU_TOPNodeData::__cordl_internal_set__tags(::HoudiniEngineUnity::TOPNodeTags* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tags)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_TOPNodeData::__cordl_internal_get__showResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showResults;
}
constexpr bool const& HoudiniEngineUnity::HEU_TOPNodeData::__cordl_internal_get__showResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showResults;
}
constexpr void HoudiniEngineUnity::HEU_TOPNodeData::__cordl_internal_set__showResults(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showResults = value;
}
constexpr ::HoudiniEngineUnity::HEU_TOPNodeData_PDGState& HoudiniEngineUnity::HEU_TOPNodeData::__cordl_internal_get__pdgState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pdgState;
}
constexpr ::HoudiniEngineUnity::HEU_TOPNodeData_PDGState const& HoudiniEngineUnity::HEU_TOPNodeData::__cordl_internal_get__pdgState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pdgState;
}
constexpr void HoudiniEngineUnity::HEU_TOPNodeData::__cordl_internal_set__pdgState(::HoudiniEngineUnity::HEU_TOPNodeData_PDGState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pdgState = value;
}
constexpr ::HoudiniEngineUnity::HEU_WorkItemTally*& HoudiniEngineUnity::HEU_TOPNodeData::__cordl_internal_get__workItemTally() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____workItemTally;
}
constexpr ::HoudiniEngineUnity::HEU_WorkItemTally* const& HoudiniEngineUnity::HEU_TOPNodeData::__cordl_internal_get__workItemTally() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____workItemTally;
}
constexpr void HoudiniEngineUnity::HEU_TOPNodeData::__cordl_internal_set__workItemTally(::HoudiniEngineUnity::HEU_WorkItemTally* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____workItemTally)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HoudiniEngineUnity::HEU_TOPNodeData::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_TOPNodeData::AreAllWorkItemsComplete() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(),
                                                                             "AreAllWorkItemsComplete", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_TOPNodeData::AnyWorkItemsFailed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(),
                                                                             "AnyWorkItemsFailed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_TOPNodeData::AnyWorkItemsPending() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(),
                                                                             "AnyWorkItemsPending", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_TOPNodeData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_TOPNodeData* HoudiniEngineUnity::HEU_TOPNodeData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_TOPNodeData*>());
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_TOPNodeData::HEU_TOPNodeData() {}
