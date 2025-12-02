#pragma once
// IWYU pragma private; include "System/Xml/Schema/ValidationState.hpp"
#include "System/Xml/Schema/zzzz__StateUnion_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentProcessing_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaValidity_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__ValidationState_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Xml/Schema/zzzz__BitSet_def.hpp"
#include "System/Xml/Schema/zzzz__ConstraintStruct_def.hpp"
#include "System/Xml/Schema/zzzz__RangePositionInfo_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaElementDecl_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::ValidationState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::ValidationState::*)()>(&::System::Xml::Schema::ValidationState::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6002a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ValidationState*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& System::Xml::Schema::ValidationState::__cordl_internal_get_IsNill() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsNill;
}
constexpr bool const& System::Xml::Schema::ValidationState::__cordl_internal_get_IsNill() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsNill;
}
constexpr void System::Xml::Schema::ValidationState::__cordl_internal_set_IsNill(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsNill = value;
}
constexpr bool& System::Xml::Schema::ValidationState::__cordl_internal_get_IsDefault() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsDefault;
}
constexpr bool const& System::Xml::Schema::ValidationState::__cordl_internal_get_IsDefault() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsDefault;
}
constexpr void System::Xml::Schema::ValidationState::__cordl_internal_set_IsDefault(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsDefault = value;
}
constexpr bool& System::Xml::Schema::ValidationState::__cordl_internal_get_NeedValidateChildren() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NeedValidateChildren;
}
constexpr bool const& System::Xml::Schema::ValidationState::__cordl_internal_get_NeedValidateChildren() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NeedValidateChildren;
}
constexpr void System::Xml::Schema::ValidationState::__cordl_internal_set_NeedValidateChildren(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NeedValidateChildren = value;
}
constexpr bool& System::Xml::Schema::ValidationState::__cordl_internal_get_CheckRequiredAttribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CheckRequiredAttribute;
}
constexpr bool const& System::Xml::Schema::ValidationState::__cordl_internal_get_CheckRequiredAttribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CheckRequiredAttribute;
}
constexpr void System::Xml::Schema::ValidationState::__cordl_internal_set_CheckRequiredAttribute(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CheckRequiredAttribute = value;
}
constexpr bool& System::Xml::Schema::ValidationState::__cordl_internal_get_ValidationSkipped() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ValidationSkipped;
}
constexpr bool const& System::Xml::Schema::ValidationState::__cordl_internal_get_ValidationSkipped() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ValidationSkipped;
}
constexpr void System::Xml::Schema::ValidationState::__cordl_internal_set_ValidationSkipped(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ValidationSkipped = value;
}
constexpr ::System::Xml::Schema::XmlSchemaContentProcessing& System::Xml::Schema::ValidationState::__cordl_internal_get_ProcessContents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ProcessContents;
}
constexpr ::System::Xml::Schema::XmlSchemaContentProcessing const& System::Xml::Schema::ValidationState::__cordl_internal_get_ProcessContents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ProcessContents;
}
constexpr void System::Xml::Schema::ValidationState::__cordl_internal_set_ProcessContents(::System::Xml::Schema::XmlSchemaContentProcessing value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ProcessContents = value;
}
constexpr ::System::Xml::Schema::XmlSchemaValidity& System::Xml::Schema::ValidationState::__cordl_internal_get_Validity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Validity;
}
constexpr ::System::Xml::Schema::XmlSchemaValidity const& System::Xml::Schema::ValidationState::__cordl_internal_get_Validity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Validity;
}
constexpr void System::Xml::Schema::ValidationState::__cordl_internal_set_Validity(::System::Xml::Schema::XmlSchemaValidity value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Validity = value;
}
constexpr ::System::Xml::Schema::SchemaElementDecl*& System::Xml::Schema::ValidationState::__cordl_internal_get_ElementDecl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ElementDecl;
}
constexpr ::System::Xml::Schema::SchemaElementDecl* const& System::Xml::Schema::ValidationState::__cordl_internal_get_ElementDecl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ElementDecl;
}
constexpr void System::Xml::Schema::ValidationState::__cordl_internal_set_ElementDecl(::System::Xml::Schema::SchemaElementDecl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ElementDecl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::SchemaElementDecl*& System::Xml::Schema::ValidationState::__cordl_internal_get_ElementDeclBeforeXsi() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ElementDeclBeforeXsi;
}
constexpr ::System::Xml::Schema::SchemaElementDecl* const& System::Xml::Schema::ValidationState::__cordl_internal_get_ElementDeclBeforeXsi() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ElementDeclBeforeXsi;
}
constexpr void System::Xml::Schema::ValidationState::__cordl_internal_set_ElementDeclBeforeXsi(::System::Xml::Schema::SchemaElementDecl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ElementDeclBeforeXsi)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Schema::ValidationState::__cordl_internal_get_LocalName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LocalName;
}
constexpr ::StringW const& System::Xml::Schema::ValidationState::__cordl_internal_get_LocalName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LocalName;
}
constexpr void System::Xml::Schema::ValidationState::__cordl_internal_set_LocalName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___LocalName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Schema::ValidationState::__cordl_internal_get_Namespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Namespace;
}
constexpr ::StringW const& System::Xml::Schema::ValidationState::__cordl_internal_get_Namespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Namespace;
}
constexpr void System::Xml::Schema::ValidationState::__cordl_internal_set_Namespace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Namespace)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Xml::Schema::ConstraintStruct*, ::Array<::System::Xml::Schema::ConstraintStruct*>*>& System::Xml::Schema::ValidationState::__cordl_internal_get_Constr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Constr;
}
constexpr ::ArrayW<::System::Xml::Schema::ConstraintStruct*, ::Array<::System::Xml::Schema::ConstraintStruct*>*> const& System::Xml::Schema::ValidationState::__cordl_internal_get_Constr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Constr;
}
constexpr void System::Xml::Schema::ValidationState::__cordl_internal_set_Constr(::ArrayW<::System::Xml::Schema::ConstraintStruct*, ::Array<::System::Xml::Schema::ConstraintStruct*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Constr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::StateUnion& System::Xml::Schema::ValidationState::__cordl_internal_get_CurrentState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CurrentState;
}
constexpr ::System::Xml::Schema::StateUnion const& System::Xml::Schema::ValidationState::__cordl_internal_get_CurrentState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CurrentState;
}
constexpr void System::Xml::Schema::ValidationState::__cordl_internal_set_CurrentState(::System::Xml::Schema::StateUnion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CurrentState = value;
}
constexpr bool& System::Xml::Schema::ValidationState::__cordl_internal_get_HasMatched() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HasMatched;
}
constexpr bool const& System::Xml::Schema::ValidationState::__cordl_internal_get_HasMatched() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HasMatched;
}
constexpr void System::Xml::Schema::ValidationState::__cordl_internal_set_HasMatched(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___HasMatched = value;
}
constexpr ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*>& System::Xml::Schema::ValidationState::__cordl_internal_get_CurPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CurPos;
}
constexpr ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> const& System::Xml::Schema::ValidationState::__cordl_internal_get_CurPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CurPos;
}
constexpr void System::Xml::Schema::ValidationState::__cordl_internal_set_CurPos(::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CurPos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::BitSet*& System::Xml::Schema::ValidationState::__cordl_internal_get_AllElementsSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AllElementsSet;
}
constexpr ::System::Xml::Schema::BitSet* const& System::Xml::Schema::ValidationState::__cordl_internal_get_AllElementsSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AllElementsSet;
}
constexpr void System::Xml::Schema::ValidationState::__cordl_internal_set_AllElementsSet(::System::Xml::Schema::BitSet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___AllElementsSet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Xml::Schema::RangePositionInfo>*& System::Xml::Schema::ValidationState::__cordl_internal_get_RunningPositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RunningPositions;
}
constexpr ::System::Collections::Generic::List_1<::System::Xml::Schema::RangePositionInfo>* const& System::Xml::Schema::ValidationState::__cordl_internal_get_RunningPositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RunningPositions;
}
constexpr void System::Xml::Schema::ValidationState::__cordl_internal_set_RunningPositions(::System::Collections::Generic::List_1<::System::Xml::Schema::RangePositionInfo>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___RunningPositions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::Schema::ValidationState::__cordl_internal_get_TooComplex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TooComplex;
}
constexpr bool const& System::Xml::Schema::ValidationState::__cordl_internal_get_TooComplex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TooComplex;
}
constexpr void System::Xml::Schema::ValidationState::__cordl_internal_set_TooComplex(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TooComplex = value;
}
inline void System::Xml::Schema::ValidationState::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ValidationState*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::ValidationState* System::Xml::Schema::ValidationState::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::ValidationState*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::ValidationState::ValidationState() {}
