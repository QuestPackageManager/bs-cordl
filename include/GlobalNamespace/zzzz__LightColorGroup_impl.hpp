#pragma once
#include "GlobalNamespace/zzzz__LightColorGroup_impl.hpp"
#include "GlobalNamespace/zzzz__LightGroupSubsystem_impl.hpp"
#include "GlobalNamespace/zzzz__LightColorGroup_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIds_def.hpp"
#include "GlobalNamespace/zzzz__LightColorGroup_def.hpp"
#include "GlobalNamespace/zzzz__LightColorGroupParent_def.hpp"
#include "GlobalNamespace/zzzz__IEditTimeValidated_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__LightColorGroup__LightColorGroupControlType::__LightColorGroup__LightColorGroupControlType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LightColorGroup__LightColorGroupControlType::__LightColorGroup__LightColorGroupControlType() {}
constexpr ::GlobalNamespace::__LightColorGroup__LightColorGroupControlType GlobalNamespace::__LightColorGroup__LightColorGroupControlType::LightWithIdsFromHierarchy{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__LightColorGroup__LightColorGroupControlType GlobalNamespace::__LightColorGroup__LightColorGroupControlType::LightWithIdsCollection{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::LightColorGroup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightColorGroup::*)()>(&::GlobalNamespace::LightColorGroup::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x226fdb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorGroup*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IEditTimeValidated"
constexpr GlobalNamespace::LightColorGroup::operator ::GlobalNamespace::IEditTimeValidated*() noexcept {
  return static_cast<::GlobalNamespace::IEditTimeValidated*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::__LightColorGroup__LightColorGroupControlType& GlobalNamespace::LightColorGroup::__get__lightColorGroupControlType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColorGroupControlType;
}
constexpr ::GlobalNamespace::__LightColorGroup__LightColorGroupControlType const& GlobalNamespace::LightColorGroup::__get__lightColorGroupControlType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColorGroupControlType;
}
constexpr void GlobalNamespace::LightColorGroup::__set__lightColorGroupControlType(::GlobalNamespace::__LightColorGroup__LightColorGroupControlType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightColorGroupControlType = value;
}
constexpr bool& GlobalNamespace::LightColorGroup::__get__disableAutomaticIdAssignment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disableAutomaticIdAssignment;
}
constexpr bool const& GlobalNamespace::LightColorGroup::__get__disableAutomaticIdAssignment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disableAutomaticIdAssignment;
}
constexpr void GlobalNamespace::LightColorGroup::__set__disableAutomaticIdAssignment(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disableAutomaticIdAssignment = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LightColorGroupParent*>*& GlobalNamespace::LightColorGroup::__get__lightColorGroupParents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColorGroupParents;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::LightColorGroupParent*>*> const&
GlobalNamespace::LightColorGroup::__get__lightColorGroupParents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColorGroupParents;
}
constexpr void GlobalNamespace::LightColorGroup::__set__lightColorGroupParents(::System::Collections::Generic::List_1<::GlobalNamespace::LightColorGroupParent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightColorGroupParents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LightWithIds*& GlobalNamespace::LightColorGroup::__get__lightWithIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightWithIds;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightWithIds*> const& GlobalNamespace::LightColorGroup::__get__lightWithIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightWithIds;
}
constexpr void GlobalNamespace::LightColorGroup::__set__lightWithIds(::GlobalNamespace::LightWithIds* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightWithIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::LightColorGroup* GlobalNamespace::LightColorGroup::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LightColorGroup*>());
}
inline void GlobalNamespace::LightColorGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorGroup*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightColorGroup::LightColorGroup() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
