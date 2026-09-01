#pragma once
// IWYU pragma private; include "System\Data\UniqueConstraint.hpp"
#include "System/Data/zzzz__Constraint_impl.hpp"
#include "System/Data/zzzz__DataKey_impl.hpp"
#include "System/Data/zzzz__UniqueConstraint_def.hpp"
#include "System/Data/zzzz__ConstraintCollection_def.hpp"
#include "System/Data/zzzz__Constraint_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/Data/zzzz__DataKey_def.hpp"
#include "System/Data/zzzz__DataRowAction_def.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
#include "System/Data/zzzz__DataSet_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__Index_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::UniqueConstraint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::UniqueConstraint::*)(::System::Data::DataColumn*)>(&::System::Data::UniqueConstraint::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6051a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::UniqueConstraint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::UniqueConstraint::*)(::StringW, ::ArrayW<::System::Data::DataColumn*>)>(&::System::Data::UniqueConstraint::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6051bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::UniqueConstraint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::UniqueConstraint::*)(::ArrayW<::System::Data::DataColumn*>)>(&::System::Data::UniqueConstraint::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6051c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::UniqueConstraint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::UniqueConstraint::*)(::StringW, ::ArrayW<::StringW>, bool)>(&::System::Data::UniqueConstraint::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6051c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::UniqueConstraint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::UniqueConstraint::*)(::StringW, ::ArrayW<::System::Data::DataColumn*>, bool)>(&::System::Data::UniqueConstraint::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6051c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::UniqueConstraint.get_ColumnNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Data::UniqueConstraint::*)()>(&::System::Data::UniqueConstraint::get_ColumnNames)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6051c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { "get_ColumnNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::UniqueConstraint.get_ConstraintIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::Index* (::System::Data::UniqueConstraint::*)()>(&::System::Data::UniqueConstraint::get_ConstraintIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6051c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { "get_ConstraintIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::UniqueConstraint.ConstraintIndexClear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::UniqueConstraint::*)()>(&::System::Data::UniqueConstraint::ConstraintIndexClear)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6051c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { "ConstraintIndexClear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::UniqueConstraint.ConstraintIndexInitialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::UniqueConstraint::*)()>(&::System::Data::UniqueConstraint::ConstraintIndexInitialize)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6051cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { "ConstraintIndexInitialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::UniqueConstraint.CheckState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::UniqueConstraint::*)()>(&::System::Data::UniqueConstraint::CheckState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6051ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { ::i2c::class_of<::System::Data::UniqueConstraint*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::UniqueConstraint.NonVirtualCheckState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::UniqueConstraint::*)()>(&::System::Data::UniqueConstraint::NonVirtualCheckState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6051cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { "NonVirtualCheckState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::UniqueConstraint.CheckCanAddToCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::UniqueConstraint::*)(::System::Data::ConstraintCollection*)>(&::System::Data::UniqueConstraint::CheckCanAddToCollection)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6051d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { ::i2c::class_of<::System::Data::UniqueConstraint*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::UniqueConstraint.CanBeRemovedFromCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::UniqueConstraint::*)(::System::Data::ConstraintCollection*, bool)>(
    &::System::Data::UniqueConstraint::CanBeRemovedFromCollection)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6051d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { ::i2c::class_of<::System::Data::UniqueConstraint*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::UniqueConstraint.CanEnableConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::UniqueConstraint::*)()>(&::System::Data::UniqueConstraint::CanEnableConstraint)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6051e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { ::i2c::class_of<::System::Data::UniqueConstraint*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::UniqueConstraint.IsConstraintViolated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::UniqueConstraint::*)()>(&::System::Data::UniqueConstraint::IsConstraintViolated)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x6051eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { ::i2c::class_of<::System::Data::UniqueConstraint*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::UniqueConstraint.CheckConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::UniqueConstraint::*)(::System::Data::DataRow*, ::System::Data::DataRowAction)>(
    &::System::Data::UniqueConstraint::CheckConstraint)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6052110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { ::i2c::class_of<::System::Data::UniqueConstraint*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::UniqueConstraint.ContainsColumn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::UniqueConstraint::*)(::System::Data::DataColumn*)>(&::System::Data::UniqueConstraint::ContainsColumn)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6052220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { ::i2c::class_of<::System::Data::UniqueConstraint*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::UniqueConstraint.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::Constraint* (::System::Data::UniqueConstraint::*)(::System::Data::DataSet*)>(&::System::Data::UniqueConstraint::Clone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x605222c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { ::i2c::class_of<::System::Data::UniqueConstraint*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::UniqueConstraint.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::Constraint* (::System::Data::UniqueConstraint::*)(::System::Data::DataSet*, bool)>(&::System::Data::UniqueConstraint::Clone)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x605223c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { ::i2c::class_of<::System::Data::UniqueConstraint*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::UniqueConstraint.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::UniqueConstraint* (::System::Data::UniqueConstraint::*)(::System::Data::DataTable*)>(&::System::Data::UniqueConstraint::Clone)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x605278c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { "Clone", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::UniqueConstraint.get_Columns
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Data::DataColumn*> (::System::Data::UniqueConstraint::*)()>(&::System::Data::UniqueConstraint::get_Columns)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6052c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { ::i2c::class_of<::System::Data::UniqueConstraint*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::UniqueConstraint.get_ColumnsReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Data::DataColumn*> (::System::Data::UniqueConstraint::*)()>(&::System::Data::UniqueConstraint::get_ColumnsReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6052218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { "get_ColumnsReference", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::UniqueConstraint.get_IsPrimaryKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::UniqueConstraint::*)()>(&::System::Data::UniqueConstraint::get_IsPrimaryKey)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6052c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { "get_IsPrimaryKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::UniqueConstraint.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::UniqueConstraint::*)(::StringW, ::ArrayW<::System::Data::DataColumn*>)>(&::System::Data::UniqueConstraint::Create)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6051b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { "Create", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::UniqueConstraint.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::UniqueConstraint::*)(::System::Object*)>(&::System::Data::UniqueConstraint::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6052c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { ::i2c::class_of<::System::Data::UniqueConstraint*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::UniqueConstraint.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::UniqueConstraint::*)()>(&::System::Data::UniqueConstraint::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6052d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { ::i2c::class_of<::System::Data::UniqueConstraint*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::UniqueConstraint.set_InCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::UniqueConstraint::*)(bool)>(&::System::Data::UniqueConstraint::set_InCollection)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6052d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { ::i2c::class_of<::System::Data::UniqueConstraint*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::UniqueConstraint.get_Key
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataKey (::System::Data::UniqueConstraint::*)()>(&::System::Data::UniqueConstraint::get_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6052d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { "get_Key", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::UniqueConstraint.get_Table
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataTable* (::System::Data::UniqueConstraint::*)()>(&::System::Data::UniqueConstraint::get_Table)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6052d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { ::i2c::class_of<::System::Data::UniqueConstraint*>(), 8 }));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataKey& System::Data::UniqueConstraint::__cordl_internal_get__key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____key;
}
constexpr ::System::Data::DataKey const& System::Data::UniqueConstraint::__cordl_internal_get__key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____key;
}
constexpr void System::Data::UniqueConstraint::__cordl_internal_set__key(::System::Data::DataKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____key = value;
}
constexpr ::System::Data::Index*& System::Data::UniqueConstraint::__cordl_internal_get__constraintIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____constraintIndex;
}
constexpr ::System::Data::Index* const& System::Data::UniqueConstraint::__cordl_internal_get__constraintIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____constraintIndex;
}
constexpr void System::Data::UniqueConstraint::__cordl_internal_set__constraintIndex(::System::Data::Index* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____constraintIndex = value;
}
constexpr bool& System::Data::UniqueConstraint::__cordl_internal_get__bPrimaryKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bPrimaryKey;
}
constexpr bool const& System::Data::UniqueConstraint::__cordl_internal_get__bPrimaryKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bPrimaryKey;
}
constexpr void System::Data::UniqueConstraint::__cordl_internal_set__bPrimaryKey(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bPrimaryKey = value;
}
constexpr ::StringW& System::Data::UniqueConstraint::__cordl_internal_get__constraintName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____constraintName;
}
constexpr ::StringW const& System::Data::UniqueConstraint::__cordl_internal_get__constraintName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____constraintName;
}
constexpr void System::Data::UniqueConstraint::__cordl_internal_set__constraintName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____constraintName = value;
}
constexpr ::ArrayW<::StringW>& System::Data::UniqueConstraint::__cordl_internal_get__columnNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnNames;
}
constexpr ::ArrayW<::StringW> const& System::Data::UniqueConstraint::__cordl_internal_get__columnNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnNames;
}
constexpr void System::Data::UniqueConstraint::__cordl_internal_set__columnNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____columnNames = value;
}
inline void System::Data::UniqueConstraint::_ctor(::System::Data::DataColumn* column) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column);
}
inline void System::Data::UniqueConstraint::_ctor(::StringW name, ::ArrayW<::System::Data::DataColumn*> columns) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, columns);
}
inline void System::Data::UniqueConstraint::_ctor(::ArrayW<::System::Data::DataColumn*> columns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, columns);
}
inline void System::Data::UniqueConstraint::_ctor(::StringW name, ::ArrayW<::StringW> columnNames, bool isPrimaryKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, columnNames, isPrimaryKey);
}
inline void System::Data::UniqueConstraint::_ctor(::StringW name, ::ArrayW<::System::Data::DataColumn*> columns, bool isPrimaryKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, columns, isPrimaryKey);
}
inline ::ArrayW<::StringW> System::Data::UniqueConstraint::get_ColumnNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { "get_ColumnNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::System::Data::Index* System::Data::UniqueConstraint::get_ConstraintIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { "get_ConstraintIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Index*>(this, ___internal_method);
}
inline void System::Data::UniqueConstraint::ConstraintIndexClear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { "ConstraintIndexClear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::UniqueConstraint::ConstraintIndexInitialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { "ConstraintIndexInitialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::UniqueConstraint::CheckState() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::UniqueConstraint*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::UniqueConstraint::NonVirtualCheckState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { "NonVirtualCheckState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::UniqueConstraint::CheckCanAddToCollection(::System::Data::ConstraintCollection* constraints) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::UniqueConstraint*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constraints);
}
inline bool System::Data::UniqueConstraint::CanBeRemovedFromCollection(::System::Data::ConstraintCollection* constraints, bool fThrowException) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::UniqueConstraint*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, constraints, fThrowException);
}
inline bool System::Data::UniqueConstraint::CanEnableConstraint() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::UniqueConstraint*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::UniqueConstraint::IsConstraintViolated() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::UniqueConstraint*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::UniqueConstraint::CheckConstraint(::System::Data::DataRow* row, ::System::Data::DataRowAction action) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::UniqueConstraint*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row, action);
}
inline bool System::Data::UniqueConstraint::ContainsColumn(::System::Data::DataColumn* column) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::UniqueConstraint*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, column);
}
inline ::System::Data::Constraint* System::Data::UniqueConstraint::Clone(::System::Data::DataSet* destination) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::UniqueConstraint*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Constraint*>(this, ___internal_method, destination);
}
inline ::System::Data::Constraint* System::Data::UniqueConstraint::Clone(::System::Data::DataSet* destination, bool ignorNSforTableLookup) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::UniqueConstraint*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Constraint*>(this, ___internal_method, destination, ignorNSforTableLookup);
}
inline ::System::Data::UniqueConstraint* System::Data::UniqueConstraint::Clone(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { "Clone", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::UniqueConstraint*>(this, ___internal_method, table);
}
inline ::ArrayW<::System::Data::DataColumn*> System::Data::UniqueConstraint::get_Columns() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::UniqueConstraint*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataColumn*>>(this, ___internal_method);
}
inline ::ArrayW<::System::Data::DataColumn*> System::Data::UniqueConstraint::get_ColumnsReference() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { "get_ColumnsReference", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataColumn*>>(this, ___internal_method);
}
inline bool System::Data::UniqueConstraint::get_IsPrimaryKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { "get_IsPrimaryKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::UniqueConstraint::Create(::StringW constraintName, ::ArrayW<::System::Data::DataColumn*> columns) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(),
                                                                                         { "Create", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constraintName, columns);
}
inline bool System::Data::UniqueConstraint::Equals(::System::Object* key2) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::UniqueConstraint*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key2);
}
inline int32_t System::Data::UniqueConstraint::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::UniqueConstraint*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Data::UniqueConstraint::set_InCollection(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::UniqueConstraint*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Data::DataKey System::Data::UniqueConstraint::get_Key() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::UniqueConstraint*>(), { "get_Key", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataKey>(this, ___internal_method);
}
inline ::System::Data::DataTable* System::Data::UniqueConstraint::get_Table() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::UniqueConstraint*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*>(this, ___internal_method);
}
inline ::System::Data::UniqueConstraint* System::Data::UniqueConstraint::New_ctor(::System::Data::DataColumn* column) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::UniqueConstraint*>(column));
}
inline ::System::Data::UniqueConstraint* System::Data::UniqueConstraint::New_ctor(::StringW name, ::ArrayW<::System::Data::DataColumn*> columns) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::UniqueConstraint*>(name, columns));
}
inline ::System::Data::UniqueConstraint* System::Data::UniqueConstraint::New_ctor(::ArrayW<::System::Data::DataColumn*> columns) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::UniqueConstraint*>(columns));
}
inline ::System::Data::UniqueConstraint* System::Data::UniqueConstraint::New_ctor(::StringW name, ::ArrayW<::StringW> columnNames, bool isPrimaryKey) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::UniqueConstraint*>(name, columnNames, isPrimaryKey));
}
inline ::System::Data::UniqueConstraint* System::Data::UniqueConstraint::New_ctor(::StringW name, ::ArrayW<::System::Data::DataColumn*> columns, bool isPrimaryKey) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::UniqueConstraint*>(name, columns, isPrimaryKey));
}
// Ctor Parameters []
constexpr ::System::Data::UniqueConstraint::UniqueConstraint() {}
