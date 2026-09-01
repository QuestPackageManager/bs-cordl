#pragma once
// IWYU pragma private; include "System\Data\FunctionNode.hpp"
#include "System/Data/zzzz__ExpressionNode_impl.hpp"
#include "System/Data/zzzz__Function_impl.hpp"
#include "System/Data/zzzz__FunctionNode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/Data/zzzz__DataRowVersion_def.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__ExpressionNode_def.hpp"
#include "System/Data/zzzz__FunctionId_def.hpp"
#include "System/Data/zzzz__TypeLimiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Data::FunctionNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::FunctionNode::*)(::System::Data::DataTable*, ::StringW)>(&::System::Data::FunctionNode::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6016114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::FunctionNode*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::FunctionNode.AddArgument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::FunctionNode::*)(::System::Data::ExpressionNode*)>(&::System::Data::FunctionNode::AddArgument)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x6016248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::FunctionNode*>(), { "AddArgument", {}, { ::i2c::type_of<::System::Data::ExpressionNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::FunctionNode.Bind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::FunctionNode::*)(::System::Data::DataTable*, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>*)>(
    &::System::Data::FunctionNode::Bind)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x601642c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::FunctionNode*>(), { ::i2c::class_of<::System::Data::FunctionNode*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::FunctionNode.Eval
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::FunctionNode::*)()>(&::System::Data::FunctionNode::Eval)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x60168ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::FunctionNode*>(), { ::i2c::class_of<::System::Data::FunctionNode*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::FunctionNode.Eval
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::FunctionNode::*)(::System::Data::DataRow*, ::System::Data::DataRowVersion)>(
    &::System::Data::FunctionNode::Eval)> {
  constexpr static std::size_t size = 0x8b4;
  constexpr static std::size_t addrs = 0x6016900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::FunctionNode*>(), { ::i2c::class_of<::System::Data::FunctionNode*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::FunctionNode.Eval
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::FunctionNode::*)(::ArrayW<int32_t>)>(&::System::Data::FunctionNode::Eval)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6018a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::FunctionNode*>(), { ::i2c::class_of<::System::Data::FunctionNode*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::FunctionNode.IsConstant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::FunctionNode::*)()>(&::System::Data::FunctionNode::IsConstant)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6018a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::FunctionNode*>(), { ::i2c::class_of<::System::Data::FunctionNode*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::FunctionNode.IsTableConstant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::FunctionNode::*)()>(&::System::Data::FunctionNode::IsTableConstant)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6018b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::FunctionNode*>(), { ::i2c::class_of<::System::Data::FunctionNode*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::FunctionNode.HasLocalAggregate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::FunctionNode::*)()>(&::System::Data::FunctionNode::HasLocalAggregate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6018b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::FunctionNode*>(), { ::i2c::class_of<::System::Data::FunctionNode*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::FunctionNode.HasRemoteAggregate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::FunctionNode::*)()>(&::System::Data::FunctionNode::HasRemoteAggregate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6018c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::FunctionNode*>(), { ::i2c::class_of<::System::Data::FunctionNode*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::FunctionNode.DependsOn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::FunctionNode::*)(::System::Data::DataColumn*)>(&::System::Data::FunctionNode::DependsOn)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6018c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::FunctionNode*>(), { ::i2c::class_of<::System::Data::FunctionNode*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::FunctionNode.Optimize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::ExpressionNode* (::System::Data::FunctionNode::*)()>(&::System::Data::FunctionNode::Optimize)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6018d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::FunctionNode*>(), { ::i2c::class_of<::System::Data::FunctionNode*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::FunctionNode.GetDataType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Data::FunctionNode::*)(::System::Data::ExpressionNode*)>(&::System::Data::FunctionNode::GetDataType)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x60171b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::FunctionNode*>(), { "GetDataType", {}, { ::i2c::type_of<::System::Data::ExpressionNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::FunctionNode.EvalFunction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::FunctionNode::*)(::System::Data::FunctionId, ::ArrayW<::System::Object*>, ::System::Data::DataRow*,
                                                                                                           ::System::Data::DataRowVersion)>(&::System::Data::FunctionNode::EvalFunction)> {
  constexpr static std::size_t size = 0x1634;
  constexpr static std::size_t addrs = 0x6017418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::FunctionNode*>(), { "EvalFunction",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Data::FunctionId>(), ::i2c::type_of<::ArrayW<::System::Object*>>(),
                                                                                               ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataRowVersion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::FunctionNode.get_Aggregate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::FunctionId (::System::Data::FunctionNode::*)()>(&::System::Data::FunctionNode::get_Aggregate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6018ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::FunctionNode*>(), { "get_Aggregate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::FunctionNode.get_IsAggregate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::FunctionNode::*)()>(&::System::Data::FunctionNode::get_IsAggregate)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x6018f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::FunctionNode*>(), { "get_IsAggregate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::FunctionNode.Check
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::FunctionNode::*)()>(&::System::Data::FunctionNode::Check)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x6016700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::FunctionNode*>(), { "Check", {}, {} })));
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
  this->____name = value;
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
constexpr ::ArrayW<::System::Data::ExpressionNode*>& System::Data::FunctionNode::__cordl_internal_get__arguments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arguments;
}
constexpr ::ArrayW<::System::Data::ExpressionNode*> const& System::Data::FunctionNode::__cordl_internal_get__arguments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arguments;
}
constexpr void System::Data::FunctionNode::__cordl_internal_set__arguments(::ArrayW<::System::Data::ExpressionNode*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arguments = value;
}
constexpr ::System::Data::TypeLimiter*& System::Data::FunctionNode::__cordl_internal_get__capturedLimiter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capturedLimiter;
}
constexpr ::System::Data::TypeLimiter* const& System::Data::FunctionNode::__cordl_internal_get__capturedLimiter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capturedLimiter;
}
constexpr void System::Data::FunctionNode::__cordl_internal_set__capturedLimiter(::System::Data::TypeLimiter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____capturedLimiter = value;
}
inline void System::Data::FunctionNode::setStaticF_s_funcs(::ArrayW<::System::Data::Function*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Data::Function*>, "s_funcs", ::System::Data::FunctionNode*>(std::forward<::ArrayW<::System::Data::Function*>>(value));
}
inline ::ArrayW<::System::Data::Function*> System::Data::FunctionNode::getStaticF_s_funcs() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Data::Function*>, "s_funcs", ::System::Data::FunctionNode*>();
}
inline void System::Data::FunctionNode::_ctor(::System::Data::DataTable* table, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::FunctionNode*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table, name);
}
inline void System::Data::FunctionNode::AddArgument(::System::Data::ExpressionNode* argument) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::FunctionNode*>(), { "AddArgument", {}, { ::i2c::type_of<::System::Data::ExpressionNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, argument);
}
inline void System::Data::FunctionNode::Bind(::System::Data::DataTable* table, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::FunctionNode*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table, list);
}
inline ::System::Object* System::Data::FunctionNode::Eval() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::FunctionNode*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* System::Data::FunctionNode::Eval(::System::Data::DataRow* row, ::System::Data::DataRowVersion version) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::FunctionNode*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, row, version);
}
inline ::System::Object* System::Data::FunctionNode::Eval(::ArrayW<int32_t> recordNos) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::FunctionNode*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, recordNos);
}
inline bool System::Data::FunctionNode::IsConstant() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::FunctionNode*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::FunctionNode::IsTableConstant() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::FunctionNode*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::FunctionNode::HasLocalAggregate() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::FunctionNode*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::FunctionNode::HasRemoteAggregate() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::FunctionNode*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::FunctionNode::DependsOn(::System::Data::DataColumn* column) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::FunctionNode*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, column);
}
inline ::System::Data::ExpressionNode* System::Data::FunctionNode::Optimize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::FunctionNode*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::ExpressionNode*>(this, ___internal_method);
}
inline ::System::Type* System::Data::FunctionNode::GetDataType(::System::Data::ExpressionNode* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::FunctionNode*>(), { "GetDataType", {}, { ::i2c::type_of<::System::Data::ExpressionNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, node);
}
inline ::System::Object* System::Data::FunctionNode::EvalFunction(::System::Data::FunctionId id, ::ArrayW<::System::Object*> argumentValues, ::System::Data::DataRow* row,
                                                                  ::System::Data::DataRowVersion version) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::FunctionNode*>(), { "EvalFunction",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::System::Data::FunctionId>(), ::i2c::type_of<::ArrayW<::System::Object*>>(),
                                                                                                    ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataRowVersion>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, id, argumentValues, row, version);
}
inline ::System::Data::FunctionId System::Data::FunctionNode::get_Aggregate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::FunctionNode*>(), { "get_Aggregate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::FunctionId>(this, ___internal_method);
}
inline bool System::Data::FunctionNode::get_IsAggregate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::FunctionNode*>(), { "get_IsAggregate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::FunctionNode::Check() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::FunctionNode*>(), { "Check", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Data::FunctionNode* System::Data::FunctionNode::New_ctor(::System::Data::DataTable* table, ::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::FunctionNode*>(table, name));
}
// Ctor Parameters []
constexpr ::System::Data::FunctionNode::FunctionNode() {}
