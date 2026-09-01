#pragma once
// IWYU pragma private; include "System\Data\LikeNode.hpp"
#include "System/Data/zzzz__BinaryNode_impl.hpp"
#include "System/Data/zzzz__LikeNode_def.hpp"
#include "System/Data/zzzz__DataRowVersion_def.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__ExpressionNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::LikeNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::LikeNode::*)(::System::Data::DataTable*, int32_t, ::System::Data::ExpressionNode*, ::System::Data::ExpressionNode*)>(
    &::System::Data::LikeNode::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x603e868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::LikeNode*>(), { ".ctor",
                                                                                         {},
                                                                                         { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<int32_t>(),
                                                                                           ::i2c::type_of<::System::Data::ExpressionNode*>(), ::i2c::type_of<::System::Data::ExpressionNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::LikeNode.Eval
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::LikeNode::*)(::System::Data::DataRow*, ::System::Data::DataRowVersion)>(&::System::Data::LikeNode::Eval)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x603e878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::LikeNode*>(), { ::i2c::class_of<::System::Data::LikeNode*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::LikeNode.AnalyzePattern
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::LikeNode::*)(::StringW)>(&::System::Data::LikeNode::AnalyzePattern)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x603ed7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::LikeNode*>(), { "AnalyzePattern", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Data::LikeNode::__cordl_internal_get__kind() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kind;
}
constexpr int32_t const& System::Data::LikeNode::__cordl_internal_get__kind() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kind;
}
constexpr void System::Data::LikeNode::__cordl_internal_set__kind(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____kind = value;
}
constexpr ::StringW& System::Data::LikeNode::__cordl_internal_get__pattern() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pattern;
}
constexpr ::StringW const& System::Data::LikeNode::__cordl_internal_get__pattern() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pattern;
}
constexpr void System::Data::LikeNode::__cordl_internal_set__pattern(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pattern = value;
}
inline void System::Data::LikeNode::_ctor(::System::Data::DataTable* table, int32_t op, ::System::Data::ExpressionNode* left, ::System::Data::ExpressionNode* right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::LikeNode*>(), { ".ctor",
                                                                                       {},
                                                                                       { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<int32_t>(),
                                                                                         ::i2c::type_of<::System::Data::ExpressionNode*>(), ::i2c::type_of<::System::Data::ExpressionNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table, op, left, right);
}
inline ::System::Object* System::Data::LikeNode::Eval(::System::Data::DataRow* row, ::System::Data::DataRowVersion version) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::LikeNode*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, row, version);
}
inline ::StringW System::Data::LikeNode::AnalyzePattern(::StringW pat) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::LikeNode*>(), { "AnalyzePattern", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, pat);
}
inline ::System::Data::LikeNode* System::Data::LikeNode::New_ctor(::System::Data::DataTable* table, int32_t op, ::System::Data::ExpressionNode* left, ::System::Data::ExpressionNode* right) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::LikeNode*>(table, op, left, right));
}
// Ctor Parameters []
constexpr ::System::Data::LikeNode::LikeNode() {}
