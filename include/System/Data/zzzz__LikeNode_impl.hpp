#pragma once
// IWYU pragma private; include "System/Data/LikeNode.hpp"
#include "System/Data/zzzz__BinaryNode_impl.hpp"
#include "System/Data/zzzz__LikeNode_def.hpp"
#include "System/Data/zzzz__DataRowVersion_def.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__ExpressionNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::LikeNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Data::LikeNode::*)(::System::Data::DataTable*, int32_t, ::System::Data::ExpressionNode*, ::System::Data::ExpressionNode*)>(&::System::Data::LikeNode::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x41776f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::LikeNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::ExpressionNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::ExpressionNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::LikeNode.Eval
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::LikeNode::*)(::System::Data::DataRow*, ::System::Data::DataRowVersion)>(
    &::System::Data::LikeNode::Eval)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0x4177734;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::LikeNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::LikeNode*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::LikeNode.AnalyzePattern
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Data::LikeNode::*)(::StringW)>(&::System::Data::LikeNode::AnalyzePattern)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x4177c88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::LikeNode*>::get(), "AnalyzePattern", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pattern)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Data::LikeNode::_ctor(::System::Data::DataTable* table, int32_t op, ::System::Data::ExpressionNode* left, ::System::Data::ExpressionNode* right) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::LikeNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::ExpressionNode*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::ExpressionNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, table, op, left, right);
}
inline ::System::Object* System::Data::LikeNode::Eval(::System::Data::DataRow* row, ::System::Data::DataRowVersion version) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::LikeNode*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, row, version);
}
inline ::StringW System::Data::LikeNode::AnalyzePattern(::StringW pat) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::LikeNode*>::get(), "AnalyzePattern", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, pat);
}
inline ::System::Data::LikeNode* System::Data::LikeNode::New_ctor(::System::Data::DataTable* table, int32_t op, ::System::Data::ExpressionNode* left, ::System::Data::ExpressionNode* right) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::LikeNode*>(table, op, left, right));
}
// Ctor Parameters []
constexpr ::System::Data::LikeNode::LikeNode() {}
