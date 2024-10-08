#pragma once
// IWYU pragma private; include "System/Data/FunctionNode.hpp"
#include "System/Data/zzzz__ExpressionNode_impl.hpp"
#include "System/Data/zzzz__FunctionNode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/Data/zzzz__DataRowVersion_def.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__ExpressionNode_def.hpp"
#include "System/Data/zzzz__FunctionId_def.hpp"
#include "System/Data/zzzz__Function_def.hpp"
#include "System/Data/zzzz__TypeLimiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Data::FunctionNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::FunctionNode::*)(::System::Data::DataTable*, ::StringW)>(
    &::System::Data::FunctionNode::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x40d7ce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::FunctionNode.AddArgument
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::FunctionNode::*)(::System::Data::ExpressionNode*)>(
    &::System::Data::FunctionNode::AddArgument)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x40d7e1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(), "AddArgument", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::ExpressionNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::FunctionNode.Bind
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Data::FunctionNode::*)(::System::Data::DataTable*, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>*)>(&::System::Data::FunctionNode::Bind)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x40d8004;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::FunctionNode.Eval
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::FunctionNode::*)()>(&::System::Data::FunctionNode::Eval)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40d848c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::FunctionNode.Eval
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::FunctionNode::*)(::System::Data::DataRow*, ::System::Data::DataRowVersion)>(
    &::System::Data::FunctionNode::Eval)> {
  constexpr static std::size_t size = 0x94c;
  constexpr static std::size_t addrs = 0x40d84a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::FunctionNode.Eval
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::FunctionNode::*)(::ArrayW<int32_t, ::Array<int32_t>*>)>(
    &::System::Data::FunctionNode::Eval)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x40da830;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::FunctionNode.IsConstant
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::FunctionNode::*)()>(&::System::Data::FunctionNode::IsConstant)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x40da864;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::FunctionNode.IsTableConstant
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::FunctionNode::*)()>(&::System::Data::FunctionNode::IsTableConstant)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x40da8f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::FunctionNode.HasLocalAggregate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::FunctionNode::*)()>(&::System::Data::FunctionNode::HasLocalAggregate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x40da970;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::FunctionNode.HasRemoteAggregate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::FunctionNode::*)()>(&::System::Data::FunctionNode::HasRemoteAggregate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x40da9ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::FunctionNode.DependsOn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::FunctionNode::*)(::System::Data::DataColumn*)>(&::System::Data::FunctionNode::DependsOn)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x40daa68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::FunctionNode.Optimize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::ExpressionNode* (::System::Data::FunctionNode::*)()>(&::System::Data::FunctionNode::Optimize)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x40daaf0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::FunctionNode.GetDataType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Data::FunctionNode::*)(::System::Data::ExpressionNode*)>(
    &::System::Data::FunctionNode::GetDataType)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x40d8dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(), "GetDataType", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::ExpressionNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::FunctionNode.EvalFunction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Data::FunctionNode::*)(::System::Data::FunctionId, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>, ::System::Data::DataRow*, ::System::Data::DataRowVersion)>(
    &::System::Data::FunctionNode::EvalFunction)> {
  constexpr static std::size_t size = 0x17a4;
  constexpr static std::size_t addrs = 0x40d908c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(), "EvalFunction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::FunctionId>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::FunctionNode.get_Aggregate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::FunctionId (::System::Data::FunctionNode::*)()>(&::System::Data::FunctionNode::get_Aggregate)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x40daca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(), "get_Aggregate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::FunctionNode.get_IsAggregate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::FunctionNode::*)()>(&::System::Data::FunctionNode::get_IsAggregate)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x40dad40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(), "get_IsAggregate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::FunctionNode.Check
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::FunctionNode::*)()>(&::System::Data::FunctionNode::Check)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x40d82e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(), "Check",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Data::FunctionNode::__cordl_internal_get__name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr ::StringW const& System::Data::FunctionNode::__cordl_internal_get__name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr void System::Data::FunctionNode::__cordl_internal_set__name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Data::FunctionNode::__cordl_internal_get__info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____info;
}
constexpr int32_t const& System::Data::FunctionNode::__cordl_internal_get__info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____info;
}
constexpr void System::Data::FunctionNode::__cordl_internal_set__info(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____info = value;
}
constexpr int32_t& System::Data::FunctionNode::__cordl_internal_get__argumentCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____argumentCount;
}
constexpr int32_t const& System::Data::FunctionNode::__cordl_internal_get__argumentCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____argumentCount;
}
constexpr void System::Data::FunctionNode::__cordl_internal_set__argumentCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____argumentCount = value;
}
constexpr ::ArrayW<::System::Data::ExpressionNode*, ::Array<::System::Data::ExpressionNode*>*>& System::Data::FunctionNode::__cordl_internal_get__arguments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arguments;
}
constexpr ::ArrayW<::System::Data::ExpressionNode*, ::Array<::System::Data::ExpressionNode*>*> const& System::Data::FunctionNode::__cordl_internal_get__arguments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arguments;
}
constexpr void System::Data::FunctionNode::__cordl_internal_set__arguments(::ArrayW<::System::Data::ExpressionNode*, ::Array<::System::Data::ExpressionNode*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arguments)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::TypeLimiter*& System::Data::FunctionNode::__cordl_internal_get__capturedLimiter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capturedLimiter;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::TypeLimiter*> const& System::Data::FunctionNode::__cordl_internal_get__capturedLimiter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capturedLimiter;
}
constexpr void System::Data::FunctionNode::__cordl_internal_set__capturedLimiter(::System::Data::TypeLimiter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____capturedLimiter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Data::FunctionNode::setStaticF_s_funcs(::ArrayW<::System::Data::Function*, ::Array<::System::Data::Function*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Data::Function*, ::Array<::System::Data::Function*>*>, "s_funcs",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get>(
      std::forward<::ArrayW<::System::Data::Function*, ::Array<::System::Data::Function*>*>>(value));
}
inline ::ArrayW<::System::Data::Function*, ::Array<::System::Data::Function*>*> System::Data::FunctionNode::getStaticF_s_funcs() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Data::Function*, ::Array<::System::Data::Function*>*>, "s_funcs",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get>();
}
inline ::System::Data::FunctionNode* System::Data::FunctionNode::New_ctor(::System::Data::DataTable* table, ::StringW name) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::FunctionNode*>(table, name));
}
inline void System::Data::FunctionNode::_ctor(::System::Data::DataTable* table, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, table, name);
}
inline void System::Data::FunctionNode::AddArgument(::System::Data::ExpressionNode* argument) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(), "AddArgument", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::ExpressionNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, argument);
}
inline void System::Data::FunctionNode::Bind(::System::Data::DataTable* table, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, table, list);
}
inline ::System::Object* System::Data::FunctionNode::Eval() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Object* System::Data::FunctionNode::Eval(::System::Data::DataRow* row, ::System::Data::DataRowVersion version) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, row, version);
}
inline ::System::Object* System::Data::FunctionNode::Eval(::ArrayW<int32_t, ::Array<int32_t>*> recordNos) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, recordNos);
}
inline bool System::Data::FunctionNode::IsConstant() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Data::FunctionNode::IsTableConstant() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Data::FunctionNode::HasLocalAggregate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Data::FunctionNode::HasRemoteAggregate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Data::FunctionNode::DependsOn(::System::Data::DataColumn* column) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, column);
}
inline ::System::Data::ExpressionNode* System::Data::FunctionNode::Optimize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Data::ExpressionNode*, false>(this, ___internal_method);
}
inline ::System::Type* System::Data::FunctionNode::GetDataType(::System::Data::ExpressionNode* node) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(), "GetDataType", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::ExpressionNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, node);
}
inline ::System::Object* System::Data::FunctionNode::EvalFunction(::System::Data::FunctionId id, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> argumentValues, ::System::Data::DataRow* row,
                                                                  ::System::Data::DataRowVersion version) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(), "EvalFunction", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::FunctionId>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRowVersion>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, id, argumentValues, row, version);
}
inline ::System::Data::FunctionId System::Data::FunctionNode::get_Aggregate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(), "get_Aggregate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Data::FunctionId, false>(this, ___internal_method);
}
inline bool System::Data::FunctionNode::get_IsAggregate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(), "get_IsAggregate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Data::FunctionNode::Check() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::FunctionNode*>::get(), "Check",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Data::FunctionNode::FunctionNode() {}
