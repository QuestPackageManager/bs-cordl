#pragma once
// IWYU pragma private; include "System/Data/ExpressionNode.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__ExpressionNode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Data/Common/zzzz__StorageType_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/Data/zzzz__DataRowVersion_def.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::ExpressionNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ExpressionNode::*)(::System::Data::DataTable*)>(&::System::Data::ExpressionNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60308ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionNode.get_FormatProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IFormatProvider* (::System::Data::ExpressionNode::*)()>(&::System::Data::ExpressionNode::get_FormatProvider)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6038224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { "get_FormatProvider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionNode.get_IsSqlColumn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::ExpressionNode::*)()>(&::System::Data::ExpressionNode::get_IsSqlColumn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x603b7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { ::i2c::class_of<::System::Data::ExpressionNode*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionNode.get_table
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataTable* (::System::Data::ExpressionNode::*)()>(&::System::Data::ExpressionNode::get_table)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x603b800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { "get_table", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionNode.BindTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ExpressionNode::*)(::System::Data::DataTable*)>(&::System::Data::ExpressionNode::BindTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x603b808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { "BindTable", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionNode.Bind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ExpressionNode::*)(::System::Data::DataTable*, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>*)>(
    &::System::Data::ExpressionNode::Bind)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { ::i2c::class_of<::System::Data::ExpressionNode*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionNode.Eval
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::ExpressionNode::*)()>(&::System::Data::ExpressionNode::Eval)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { ::i2c::class_of<::System::Data::ExpressionNode*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionNode.Eval
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::ExpressionNode::*)(::System::Data::DataRow*, ::System::Data::DataRowVersion)>(
    &::System::Data::ExpressionNode::Eval)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { ::i2c::class_of<::System::Data::ExpressionNode*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionNode.Eval
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::ExpressionNode::*)(::ArrayW<int32_t>)>(&::System::Data::ExpressionNode::Eval)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { ::i2c::class_of<::System::Data::ExpressionNode*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionNode.IsConstant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::ExpressionNode::*)()>(&::System::Data::ExpressionNode::IsConstant)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { ::i2c::class_of<::System::Data::ExpressionNode*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionNode.IsTableConstant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::ExpressionNode::*)()>(&::System::Data::ExpressionNode::IsTableConstant)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { ::i2c::class_of<::System::Data::ExpressionNode*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionNode.HasLocalAggregate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::ExpressionNode::*)()>(&::System::Data::ExpressionNode::HasLocalAggregate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { ::i2c::class_of<::System::Data::ExpressionNode*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionNode.HasRemoteAggregate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::ExpressionNode::*)()>(&::System::Data::ExpressionNode::HasRemoteAggregate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { ::i2c::class_of<::System::Data::ExpressionNode*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionNode.Optimize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::ExpressionNode* (::System::Data::ExpressionNode::*)()>(&::System::Data::ExpressionNode::Optimize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { ::i2c::class_of<::System::Data::ExpressionNode*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionNode.DependsOn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::ExpressionNode::*)(::System::Data::DataColumn*)>(&::System::Data::ExpressionNode::DependsOn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x603b810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { ::i2c::class_of<::System::Data::ExpressionNode*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionNode.IsInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Data::Common::StorageType)>(&::System::Data::ExpressionNode::IsInteger)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6038f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { "IsInteger", {}, { ::i2c::type_of<::System::Data::Common::StorageType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionNode.IsIntegerSql
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Data::Common::StorageType)>(&::System::Data::ExpressionNode::IsIntegerSql)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6038be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { "IsIntegerSql", {}, { ::i2c::type_of<::System::Data::Common::StorageType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionNode.IsSigned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Data::Common::StorageType)>(&::System::Data::ExpressionNode::IsSigned)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6038e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { "IsSigned", {}, { ::i2c::type_of<::System::Data::Common::StorageType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionNode.IsSignedSql
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Data::Common::StorageType)>(&::System::Data::ExpressionNode::IsSignedSql)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6038ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { "IsSignedSql", {}, { ::i2c::type_of<::System::Data::Common::StorageType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionNode.IsUnsigned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Data::Common::StorageType)>(&::System::Data::ExpressionNode::IsUnsigned)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6038e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { "IsUnsigned", {}, { ::i2c::type_of<::System::Data::Common::StorageType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionNode.IsUnsignedSql
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Data::Common::StorageType)>(&::System::Data::ExpressionNode::IsUnsignedSql)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6038ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { "IsUnsignedSql", {}, { ::i2c::type_of<::System::Data::Common::StorageType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionNode.IsNumeric
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Data::Common::StorageType)>(&::System::Data::ExpressionNode::IsNumeric)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6038f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { "IsNumeric", {}, { ::i2c::type_of<::System::Data::Common::StorageType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionNode.IsNumericSql
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Data::Common::StorageType)>(&::System::Data::ExpressionNode::IsNumericSql)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6039030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { "IsNumericSql", {}, { ::i2c::type_of<::System::Data::Common::StorageType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionNode.IsFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Data::Common::StorageType)>(&::System::Data::ExpressionNode::IsFloat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x603b818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { "IsFloat", {}, { ::i2c::type_of<::System::Data::Common::StorageType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionNode.IsFloatSql
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Data::Common::StorageType)>(&::System::Data::ExpressionNode::IsFloatSql)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x603b828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { "IsFloatSql", {}, { ::i2c::type_of<::System::Data::Common::StorageType>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataTable*& System::Data::ExpressionNode::__cordl_internal_get__table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr ::System::Data::DataTable* const& System::Data::ExpressionNode::__cordl_internal_get__table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr void System::Data::ExpressionNode::__cordl_internal_set__table(::System::Data::DataTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____table = value;
}
inline void System::Data::ExpressionNode::_ctor(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table);
}
inline ::System::IFormatProvider* System::Data::ExpressionNode::get_FormatProvider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { "get_FormatProvider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IFormatProvider*>(this, ___internal_method);
}
inline bool System::Data::ExpressionNode::get_IsSqlColumn() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ExpressionNode*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Data::DataTable* System::Data::ExpressionNode::get_table() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { "get_table", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*>(this, ___internal_method);
}
inline void System::Data::ExpressionNode::BindTable(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { "BindTable", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table);
}
inline void System::Data::ExpressionNode::Bind(::System::Data::DataTable* table, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ExpressionNode*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table, list);
}
inline ::System::Object* System::Data::ExpressionNode::Eval() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ExpressionNode*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* System::Data::ExpressionNode::Eval(::System::Data::DataRow* row, ::System::Data::DataRowVersion version) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ExpressionNode*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, row, version);
}
inline ::System::Object* System::Data::ExpressionNode::Eval(::ArrayW<int32_t> recordNos) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ExpressionNode*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, recordNos);
}
inline bool System::Data::ExpressionNode::IsConstant() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ExpressionNode*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::ExpressionNode::IsTableConstant() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ExpressionNode*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::ExpressionNode::HasLocalAggregate() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ExpressionNode*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::ExpressionNode::HasRemoteAggregate() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ExpressionNode*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Data::ExpressionNode* System::Data::ExpressionNode::Optimize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ExpressionNode*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::ExpressionNode*>(this, ___internal_method);
}
inline bool System::Data::ExpressionNode::DependsOn(::System::Data::DataColumn* column) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ExpressionNode*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, column);
}
inline bool System::Data::ExpressionNode::IsInteger(::System::Data::Common::StorageType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { "IsInteger", {}, { ::i2c::type_of<::System::Data::Common::StorageType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool System::Data::ExpressionNode::IsIntegerSql(::System::Data::Common::StorageType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { "IsIntegerSql", {}, { ::i2c::type_of<::System::Data::Common::StorageType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool System::Data::ExpressionNode::IsSigned(::System::Data::Common::StorageType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { "IsSigned", {}, { ::i2c::type_of<::System::Data::Common::StorageType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool System::Data::ExpressionNode::IsSignedSql(::System::Data::Common::StorageType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { "IsSignedSql", {}, { ::i2c::type_of<::System::Data::Common::StorageType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool System::Data::ExpressionNode::IsUnsigned(::System::Data::Common::StorageType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { "IsUnsigned", {}, { ::i2c::type_of<::System::Data::Common::StorageType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool System::Data::ExpressionNode::IsUnsignedSql(::System::Data::Common::StorageType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { "IsUnsignedSql", {}, { ::i2c::type_of<::System::Data::Common::StorageType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool System::Data::ExpressionNode::IsNumeric(::System::Data::Common::StorageType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { "IsNumeric", {}, { ::i2c::type_of<::System::Data::Common::StorageType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool System::Data::ExpressionNode::IsNumericSql(::System::Data::Common::StorageType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { "IsNumericSql", {}, { ::i2c::type_of<::System::Data::Common::StorageType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool System::Data::ExpressionNode::IsFloat(::System::Data::Common::StorageType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { "IsFloat", {}, { ::i2c::type_of<::System::Data::Common::StorageType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool System::Data::ExpressionNode::IsFloatSql(::System::Data::Common::StorageType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionNode*>(), { "IsFloatSql", {}, { ::i2c::type_of<::System::Data::Common::StorageType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline ::System::Data::ExpressionNode* System::Data::ExpressionNode::New_ctor(::System::Data::DataTable* table) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::ExpressionNode*>(table));
}
// Ctor Parameters []
constexpr ::System::Data::ExpressionNode::ExpressionNode() {}
