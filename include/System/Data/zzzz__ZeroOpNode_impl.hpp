#pragma once
// IWYU pragma private; include "System/Data/ZeroOpNode.hpp"
#include "System/Data/zzzz__ExpressionNode_impl.hpp"
#include "System/Data/zzzz__ZeroOpNode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/Data/zzzz__DataRowVersion_def.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__ExpressionNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::ZeroOpNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ZeroOpNode::*)(int32_t)>(&::System::Data::ZeroOpNode::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x603f774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ZeroOpNode*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ZeroOpNode.Bind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ZeroOpNode::*)(::System::Data::DataTable*, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>*)>(
    &::System::Data::ZeroOpNode::Bind)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x603f780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ZeroOpNode*>(), { ::i2c::class_of<::System::Data::ZeroOpNode*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ZeroOpNode.Eval
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::ZeroOpNode::*)()>(&::System::Data::ZeroOpNode::Eval)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x603f784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ZeroOpNode*>(), { ::i2c::class_of<::System::Data::ZeroOpNode*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ZeroOpNode.Eval
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::ZeroOpNode::*)(::System::Data::DataRow*, ::System::Data::DataRowVersion)>(
    &::System::Data::ZeroOpNode::Eval)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x603f838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ZeroOpNode*>(), { ::i2c::class_of<::System::Data::ZeroOpNode*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ZeroOpNode.Eval
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::ZeroOpNode::*)(::ArrayW<int32_t>)>(&::System::Data::ZeroOpNode::Eval)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x603f844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ZeroOpNode*>(), { ::i2c::class_of<::System::Data::ZeroOpNode*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ZeroOpNode.IsConstant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::ZeroOpNode::*)()>(&::System::Data::ZeroOpNode::IsConstant)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x603f850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ZeroOpNode*>(), { ::i2c::class_of<::System::Data::ZeroOpNode*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ZeroOpNode.IsTableConstant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::ZeroOpNode::*)()>(&::System::Data::ZeroOpNode::IsTableConstant)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x603f858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ZeroOpNode*>(), { ::i2c::class_of<::System::Data::ZeroOpNode*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ZeroOpNode.HasLocalAggregate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::ZeroOpNode::*)()>(&::System::Data::ZeroOpNode::HasLocalAggregate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x603f860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ZeroOpNode*>(), { ::i2c::class_of<::System::Data::ZeroOpNode*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ZeroOpNode.HasRemoteAggregate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::ZeroOpNode::*)()>(&::System::Data::ZeroOpNode::HasRemoteAggregate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x603f868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ZeroOpNode*>(), { ::i2c::class_of<::System::Data::ZeroOpNode*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ZeroOpNode.Optimize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::ExpressionNode* (::System::Data::ZeroOpNode::*)()>(&::System::Data::ZeroOpNode::Optimize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x603f870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ZeroOpNode*>(), { ::i2c::class_of<::System::Data::ZeroOpNode*>(), 13 }));
    return ___internal_method;
  }
};
constexpr int32_t& System::Data::ZeroOpNode::__cordl_internal_get__op() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____op;
}
constexpr int32_t const& System::Data::ZeroOpNode::__cordl_internal_get__op() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____op;
}
constexpr void System::Data::ZeroOpNode::__cordl_internal_set__op(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____op = value;
}
inline void System::Data::ZeroOpNode::_ctor(int32_t op) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ZeroOpNode*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op);
}
inline void System::Data::ZeroOpNode::Bind(::System::Data::DataTable* table, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ZeroOpNode*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table, list);
}
inline ::System::Object* System::Data::ZeroOpNode::Eval() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ZeroOpNode*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* System::Data::ZeroOpNode::Eval(::System::Data::DataRow* row, ::System::Data::DataRowVersion version) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ZeroOpNode*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, row, version);
}
inline ::System::Object* System::Data::ZeroOpNode::Eval(::ArrayW<int32_t> recordNos) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ZeroOpNode*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, recordNos);
}
inline bool System::Data::ZeroOpNode::IsConstant() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ZeroOpNode*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::ZeroOpNode::IsTableConstant() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ZeroOpNode*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::ZeroOpNode::HasLocalAggregate() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ZeroOpNode*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::ZeroOpNode::HasRemoteAggregate() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ZeroOpNode*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Data::ExpressionNode* System::Data::ZeroOpNode::Optimize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ZeroOpNode*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::ExpressionNode*>(this, ___internal_method);
}
inline ::System::Data::ZeroOpNode* System::Data::ZeroOpNode::New_ctor(int32_t op) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::ZeroOpNode*>(op));
}
// Ctor Parameters []
constexpr ::System::Data::ZeroOpNode::ZeroOpNode() {}
