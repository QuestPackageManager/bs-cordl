#pragma once
// IWYU pragma private; include "System/Data/NameNode.hpp"
#include "System/Data/zzzz__ExpressionNode_impl.hpp"
#include "System/Data/zzzz__NameNode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/Data/zzzz__DataRowVersion_def.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__ExpressionNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::NameNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::NameNode::*)(::System::Data::DataTable*, ::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Data::NameNode::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x603c294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::NameNode*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::NameNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::NameNode::*)(::System::Data::DataTable*, ::StringW)>(&::System::Data::NameNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x603c760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::NameNode*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::NameNode.get_IsSqlColumn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::NameNode::*)()>(&::System::Data::NameNode::get_IsSqlColumn)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x603e154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::NameNode*>(), { ::i2c::class_of<::System::Data::NameNode*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::NameNode.Bind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::NameNode::*)(::System::Data::DataTable*, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>*)>(
    &::System::Data::NameNode::Bind)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x603e16c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::NameNode*>(), { ::i2c::class_of<::System::Data::NameNode*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::NameNode.Eval
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::NameNode::*)()>(&::System::Data::NameNode::Eval)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x603e3b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::NameNode*>(), { ::i2c::class_of<::System::Data::NameNode*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::NameNode.Eval
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::NameNode::*)(::System::Data::DataRow*, ::System::Data::DataRowVersion)>(&::System::Data::NameNode::Eval)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x603e3d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::NameNode*>(), { ::i2c::class_of<::System::Data::NameNode*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::NameNode.Eval
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::NameNode::*)(::ArrayW<int32_t>)>(&::System::Data::NameNode::Eval)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x603e47c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::NameNode*>(), { ::i2c::class_of<::System::Data::NameNode*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::NameNode.IsConstant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::NameNode::*)()>(&::System::Data::NameNode::IsConstant)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x603e4ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::NameNode*>(), { ::i2c::class_of<::System::Data::NameNode*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::NameNode.IsTableConstant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::NameNode::*)()>(&::System::Data::NameNode::IsTableConstant)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x603e4b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::NameNode*>(), { ::i2c::class_of<::System::Data::NameNode*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::NameNode.HasLocalAggregate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::NameNode::*)()>(&::System::Data::NameNode::HasLocalAggregate)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x603e4e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::NameNode*>(), { ::i2c::class_of<::System::Data::NameNode*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::NameNode.HasRemoteAggregate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::NameNode::*)()>(&::System::Data::NameNode::HasRemoteAggregate)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x603e50c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::NameNode*>(), { ::i2c::class_of<::System::Data::NameNode*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::NameNode.DependsOn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::NameNode::*)(::System::Data::DataColumn*)>(&::System::Data::NameNode::DependsOn)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x603e538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::NameNode*>(), { ::i2c::class_of<::System::Data::NameNode*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::NameNode.Optimize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::ExpressionNode* (::System::Data::NameNode::*)()>(&::System::Data::NameNode::Optimize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x603e580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::NameNode*>(), { ::i2c::class_of<::System::Data::NameNode*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::NameNode.ParseName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Data::NameNode::ParseName)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x603c014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::NameNode*>(), { "ParseName", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Data::NameNode::__cordl_internal_get__name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr ::StringW const& System::Data::NameNode::__cordl_internal_get__name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr void System::Data::NameNode::__cordl_internal_set__name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____name = value;
}
constexpr bool& System::Data::NameNode::__cordl_internal_get__found() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____found;
}
constexpr bool const& System::Data::NameNode::__cordl_internal_get__found() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____found;
}
constexpr void System::Data::NameNode::__cordl_internal_set__found(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____found = value;
}
constexpr ::System::Data::DataColumn*& System::Data::NameNode::__cordl_internal_get__column() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____column;
}
constexpr ::System::Data::DataColumn* const& System::Data::NameNode::__cordl_internal_get__column() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____column;
}
constexpr void System::Data::NameNode::__cordl_internal_set__column(::System::Data::DataColumn* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____column = value;
}
inline void System::Data::NameNode::_ctor(::System::Data::DataTable* table, ::ArrayW<char16_t> text, int32_t start, int32_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::NameNode*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table, text, start, pos);
}
inline void System::Data::NameNode::_ctor(::System::Data::DataTable* table, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::NameNode*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table, name);
}
inline bool System::Data::NameNode::get_IsSqlColumn() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::NameNode*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::NameNode::Bind(::System::Data::DataTable* table, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::NameNode*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table, list);
}
inline ::System::Object* System::Data::NameNode::Eval() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::NameNode*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* System::Data::NameNode::Eval(::System::Data::DataRow* row, ::System::Data::DataRowVersion version) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::NameNode*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, row, version);
}
inline ::System::Object* System::Data::NameNode::Eval(::ArrayW<int32_t> records) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::NameNode*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, records);
}
inline bool System::Data::NameNode::IsConstant() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::NameNode*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::NameNode::IsTableConstant() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::NameNode*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::NameNode::HasLocalAggregate() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::NameNode*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::NameNode::HasRemoteAggregate() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::NameNode*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::NameNode::DependsOn(::System::Data::DataColumn* column) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::NameNode*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, column);
}
inline ::System::Data::ExpressionNode* System::Data::NameNode::Optimize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::NameNode*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::ExpressionNode*>(this, ___internal_method);
}
inline ::StringW System::Data::NameNode::ParseName(::ArrayW<char16_t> text, int32_t start, int32_t pos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::NameNode*>(), { "ParseName", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, text, start, pos);
}
inline ::System::Data::NameNode* System::Data::NameNode::New_ctor(::System::Data::DataTable* table, ::ArrayW<char16_t> text, int32_t start, int32_t pos) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::NameNode*>(table, text, start, pos));
}
inline ::System::Data::NameNode* System::Data::NameNode::New_ctor(::System::Data::DataTable* table, ::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::NameNode*>(table, name));
}
// Ctor Parameters []
constexpr ::System::Data::NameNode::NameNode() {}
