#pragma once
// IWYU pragma private; include "System\Data\Constraint.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__Constraint_def.hpp"
#include "System/Data/zzzz__ConstraintCollection_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/Data/zzzz__DataRowAction_def.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
#include "System/Data/zzzz__DataSet_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__PropertyCollection_def.hpp"
//  Writing Method size for method: ::System::Data::Constraint.get_ConstraintName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::Constraint::*)()>(&::System::Data::Constraint::get_ConstraintName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601d260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Constraint*>(), { ::i2c::class_of<::System::Data::Constraint*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Constraint.set_ConstraintName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Constraint::*)(::StringW)>(&::System::Data::Constraint::set_ConstraintName)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x601d268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Constraint*>(), { ::i2c::class_of<::System::Data::Constraint*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Constraint.get_SchemaName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::Constraint::*)()>(&::System::Data::Constraint::get_SchemaName)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x601d68c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Constraint*>(), { "get_SchemaName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Constraint.set_SchemaName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Constraint::*)(::StringW)>(&::System::Data::Constraint::set_SchemaName)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x601d6b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Constraint*>(), { "set_SchemaName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Constraint.get_InCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::Constraint::*)()>(&::System::Data::Constraint::get_InCollection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601d6c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Constraint*>(), { ::i2c::class_of<::System::Data::Constraint*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Constraint.set_InCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Constraint::*)(bool)>(&::System::Data::Constraint::set_InCollection)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x601d6cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Constraint*>(), { ::i2c::class_of<::System::Data::Constraint*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Constraint.get_Table
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataTable* (::System::Data::Constraint::*)()>(&::System::Data::Constraint::get_Table)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Constraint*>(), { ::i2c::class_of<::System::Data::Constraint*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Constraint.get_ExtendedProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::PropertyCollection* (::System::Data::Constraint::*)()>(&::System::Data::Constraint::get_ExtendedProperties)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x601d70c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Constraint*>(), { "get_ExtendedProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Constraint.ContainsColumn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::Constraint::*)(::System::Data::DataColumn*)>(&::System::Data::Constraint::ContainsColumn)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Constraint*>(), { ::i2c::class_of<::System::Data::Constraint*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Constraint.CanEnableConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::Constraint::*)()>(&::System::Data::Constraint::CanEnableConstraint)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Constraint*>(), { ::i2c::class_of<::System::Data::Constraint*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Constraint.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::Constraint* (::System::Data::Constraint::*)(::System::Data::DataSet*)>(&::System::Data::Constraint::Clone)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Constraint*>(), { ::i2c::class_of<::System::Data::Constraint*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Constraint.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::Constraint* (::System::Data::Constraint::*)(::System::Data::DataSet*, bool)>(&::System::Data::Constraint::Clone)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Constraint*>(), { ::i2c::class_of<::System::Data::Constraint*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Constraint.CheckConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Constraint::*)()>(&::System::Data::Constraint::CheckConstraint)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x601d778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Constraint*>(), { "CheckConstraint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Constraint.CheckCanAddToCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Constraint::*)(::System::Data::ConstraintCollection*)>(&::System::Data::Constraint::CheckCanAddToCollection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Constraint*>(), { ::i2c::class_of<::System::Data::Constraint*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Constraint.CanBeRemovedFromCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::Constraint::*)(::System::Data::ConstraintCollection*, bool)>(&::System::Data::Constraint::CanBeRemovedFromCollection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Constraint*>(), { ::i2c::class_of<::System::Data::Constraint*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Constraint.CheckConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Constraint::*)(::System::Data::DataRow*, ::System::Data::DataRowAction)>(&::System::Data::Constraint::CheckConstraint)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Constraint*>(), { ::i2c::class_of<::System::Data::Constraint*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Constraint.CheckState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Constraint::*)()>(&::System::Data::Constraint::CheckState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Constraint*>(), { ::i2c::class_of<::System::Data::Constraint*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Constraint.CheckStateForProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Constraint::*)()>(&::System::Data::Constraint::CheckStateForProperty)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x601d7cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Constraint*>(), { "CheckStateForProperty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Constraint.get__DataSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataSet* (::System::Data::Constraint::*)()>(&::System::Data::Constraint::get__DataSet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601d8c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Constraint*>(), { ::i2c::class_of<::System::Data::Constraint*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Constraint.IsConstraintViolated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::Constraint::*)()>(&::System::Data::Constraint::IsConstraintViolated)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Constraint*>(), { ::i2c::class_of<::System::Data::Constraint*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Constraint.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::Constraint::*)()>(&::System::Data::Constraint::ToString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x601d8cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::Constraint*>(), { ::i2c::class_of<::System::Data::Constraint*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Constraint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Constraint::*)()>(&::System::Data::Constraint::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x601d8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Constraint*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Data::Constraint::__cordl_internal_get__schemaName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schemaName;
}
constexpr ::StringW const& System::Data::Constraint::__cordl_internal_get__schemaName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schemaName;
}
constexpr void System::Data::Constraint::__cordl_internal_set__schemaName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____schemaName = value;
}
constexpr bool& System::Data::Constraint::__cordl_internal_get__inCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inCollection;
}
constexpr bool const& System::Data::Constraint::__cordl_internal_get__inCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inCollection;
}
constexpr void System::Data::Constraint::__cordl_internal_set__inCollection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inCollection = value;
}
constexpr ::System::Data::DataSet*& System::Data::Constraint::__cordl_internal_get__dataSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSet;
}
constexpr ::System::Data::DataSet* const& System::Data::Constraint::__cordl_internal_get__dataSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSet;
}
constexpr void System::Data::Constraint::__cordl_internal_set__dataSet(::System::Data::DataSet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataSet = value;
}
constexpr ::StringW& System::Data::Constraint::__cordl_internal_get__name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr ::StringW const& System::Data::Constraint::__cordl_internal_get__name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr void System::Data::Constraint::__cordl_internal_set__name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____name = value;
}
constexpr ::System::Data::PropertyCollection*& System::Data::Constraint::__cordl_internal_get__extendedProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extendedProperties;
}
constexpr ::System::Data::PropertyCollection* const& System::Data::Constraint::__cordl_internal_get__extendedProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extendedProperties;
}
constexpr void System::Data::Constraint::__cordl_internal_set__extendedProperties(::System::Data::PropertyCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____extendedProperties = value;
}
inline ::StringW System::Data::Constraint::get_ConstraintName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Constraint*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Data::Constraint::set_ConstraintName(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Constraint*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Data::Constraint::get_SchemaName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Constraint*>(), { "get_SchemaName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Data::Constraint::set_SchemaName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Constraint*>(), { "set_SchemaName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Data::Constraint::get_InCollection() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Constraint*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::Constraint::set_InCollection(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Constraint*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Data::DataTable* System::Data::Constraint::get_Table() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Constraint*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*>(this, ___internal_method);
}
inline ::System::Data::PropertyCollection* System::Data::Constraint::get_ExtendedProperties() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Constraint*>(), { "get_ExtendedProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::PropertyCollection*>(this, ___internal_method);
}
inline bool System::Data::Constraint::ContainsColumn(::System::Data::DataColumn* column) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Constraint*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, column);
}
inline bool System::Data::Constraint::CanEnableConstraint() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Constraint*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Data::Constraint* System::Data::Constraint::Clone(::System::Data::DataSet* destination) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Constraint*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Constraint*>(this, ___internal_method, destination);
}
inline ::System::Data::Constraint* System::Data::Constraint::Clone(::System::Data::DataSet* destination, bool ignoreNSforTableLookup) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Constraint*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Constraint*>(this, ___internal_method, destination, ignoreNSforTableLookup);
}
inline void System::Data::Constraint::CheckConstraint() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Constraint*>(), { "CheckConstraint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::Constraint::CheckCanAddToCollection(::System::Data::ConstraintCollection* constraint) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Constraint*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constraint);
}
inline bool System::Data::Constraint::CanBeRemovedFromCollection(::System::Data::ConstraintCollection* constraint, bool fThrowException) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Constraint*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, constraint, fThrowException);
}
inline void System::Data::Constraint::CheckConstraint(::System::Data::DataRow* row, ::System::Data::DataRowAction action) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Constraint*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row, action);
}
inline void System::Data::Constraint::CheckState() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Constraint*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::Constraint::CheckStateForProperty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Constraint*>(), { "CheckStateForProperty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Data::DataSet* System::Data::Constraint::get__DataSet() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Constraint*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataSet*>(this, ___internal_method);
}
inline bool System::Data::Constraint::IsConstraintViolated() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Constraint*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Data::Constraint::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::Constraint*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Data::Constraint::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::Constraint*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Data::Constraint* System::Data::Constraint::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::Constraint*>());
}
// Ctor Parameters []
constexpr ::System::Data::Constraint::Constraint() {}
