#pragma once
// IWYU pragma private; include "System\Xml\Schema\IdRefNode.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__IdRefNode_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::IdRefNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::IdRefNode::*)(::System::Xml::Schema::IdRefNode*, ::StringW, int32_t, int32_t)>(
    &::System::Xml::Schema::IdRefNode::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x623ce80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::IdRefNode*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::IdRefNode*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
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
  this->___Id = value;
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
  this->___Next = value;
}
inline void System::Xml::Schema::IdRefNode::_ctor(::System::Xml::Schema::IdRefNode* next, ::StringW id, int32_t lineNo, int32_t linePos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::IdRefNode*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::IdRefNode*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, next, id, lineNo, linePos);
}
inline ::System::Xml::Schema::IdRefNode* System::Xml::Schema::IdRefNode::New_ctor(::System::Xml::Schema::IdRefNode* next, ::StringW id, int32_t lineNo, int32_t linePos) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::IdRefNode*>(next, id, lineNo, linePos));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::IdRefNode::IdRefNode() {}
