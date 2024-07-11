#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_TOPNetworkData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_TOPNetworkData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_TOPNodeData_def.hpp"
#include "HoudiniEngineUnity/zzzz__TOPNodeTags_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TOPNetworkData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_TOPNetworkData::*)()>(&::HoudiniEngineUnity::HEU_TOPNetworkData::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x25aba6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TOPNetworkData*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& HoudiniEngineUnity::HEU_TOPNetworkData::__cordl_internal_get__nodeID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeID;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_TOPNetworkData::__cordl_internal_get__nodeID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeID;
}
constexpr void HoudiniEngineUnity::HEU_TOPNetworkData::__cordl_internal_set__nodeID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nodeID = value;
}
constexpr ::StringW& HoudiniEngineUnity::HEU_TOPNetworkData::__cordl_internal_get__nodeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_TOPNetworkData::__cordl_internal_get__nodeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeName;
}
constexpr void HoudiniEngineUnity::HEU_TOPNetworkData::__cordl_internal_set__nodeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nodeName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNodeData*>*& HoudiniEngineUnity::HEU_TOPNetworkData::__cordl_internal_get__topNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____topNodes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNodeData*>*> const&
HoudiniEngineUnity::HEU_TOPNetworkData::__cordl_internal_get__topNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____topNodes;
}
constexpr void HoudiniEngineUnity::HEU_TOPNetworkData::__cordl_internal_set__topNodes(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNodeData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____topNodes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& HoudiniEngineUnity::HEU_TOPNetworkData::__cordl_internal_get__topNodeNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____topNodeNames;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& HoudiniEngineUnity::HEU_TOPNetworkData::__cordl_internal_get__topNodeNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____topNodeNames;
}
constexpr void HoudiniEngineUnity::HEU_TOPNetworkData::__cordl_internal_set__topNodeNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____topNodeNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::HEU_TOPNetworkData::__cordl_internal_get__selectedTOPIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedTOPIndex;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_TOPNetworkData::__cordl_internal_get__selectedTOPIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedTOPIndex;
}
constexpr void HoudiniEngineUnity::HEU_TOPNetworkData::__cordl_internal_set__selectedTOPIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedTOPIndex = value;
}
constexpr ::StringW& HoudiniEngineUnity::HEU_TOPNetworkData::__cordl_internal_get__parentName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_TOPNetworkData::__cordl_internal_get__parentName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentName;
}
constexpr void HoudiniEngineUnity::HEU_TOPNetworkData::__cordl_internal_set__parentName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parentName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::TOPNodeTags*& HoudiniEngineUnity::HEU_TOPNetworkData::__cordl_internal_get__tags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tags;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::TOPNodeTags*> const& HoudiniEngineUnity::HEU_TOPNetworkData::__cordl_internal_get__tags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tags;
}
constexpr void HoudiniEngineUnity::HEU_TOPNetworkData::__cordl_internal_set__tags(::HoudiniEngineUnity::TOPNodeTags* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tags)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HoudiniEngineUnity::HEU_TOPNetworkData* HoudiniEngineUnity::HEU_TOPNetworkData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_TOPNetworkData*>());
}
inline void HoudiniEngineUnity::HEU_TOPNetworkData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TOPNetworkData*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_TOPNetworkData::HEU_TOPNetworkData() {}
