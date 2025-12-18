#pragma once
// IWYU pragma private; include "System/Xml/Schema/IdRefNode.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__IdRefNode_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::IdRefNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::IdRefNode::*)(::System::Xml::Schema::IdRefNode*, ::StringW, int32_t, int32_t)>(
    &::System::Xml::Schema::IdRefNode::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6088328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::IdRefNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::IdRefNode*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Schema::IdRefNode::__cordl_internal_get_Id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Id;
}
constexpr ::StringW const& System::Xml::Schema::IdRefNode::__cordl_internal_get_Id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Id;
}
constexpr void System::Xml::Schema::IdRefNode::__cordl_internal_set_Id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::Schema::IdRefNode::__cordl_internal_get_LineNo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LineNo;
}
constexpr int32_t const& System::Xml::Schema::IdRefNode::__cordl_internal_get_LineNo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LineNo;
}
constexpr void System::Xml::Schema::IdRefNode::__cordl_internal_set_LineNo(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LineNo = value;
}
constexpr int32_t& System::Xml::Schema::IdRefNode::__cordl_internal_get_LinePos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LinePos;
}
constexpr int32_t const& System::Xml::Schema::IdRefNode::__cordl_internal_get_LinePos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LinePos;
}
constexpr void System::Xml::Schema::IdRefNode::__cordl_internal_set_LinePos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LinePos = value;
}
constexpr ::System::Xml::Schema::IdRefNode*& System::Xml::Schema::IdRefNode::__cordl_internal_get_Next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Next;
}
constexpr ::System::Xml::Schema::IdRefNode* const& System::Xml::Schema::IdRefNode::__cordl_internal_get_Next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Next;
}
constexpr void System::Xml::Schema::IdRefNode::__cordl_internal_set_Next(::System::Xml::Schema::IdRefNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::Schema::IdRefNode::_ctor(::System::Xml::Schema::IdRefNode* next, ::StringW id, int32_t lineNo, int32_t linePos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::IdRefNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::IdRefNode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, next, id, lineNo, linePos);
}
inline ::System::Xml::Schema::IdRefNode* System::Xml::Schema::IdRefNode::New_ctor(::System::Xml::Schema::IdRefNode* next, ::StringW id, int32_t lineNo, int32_t linePos) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::IdRefNode*>(next, id, lineNo, linePos));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::IdRefNode::IdRefNode() {}
