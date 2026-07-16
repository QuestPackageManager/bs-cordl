#pragma once
// IWYU pragma private; include "System/Data/ChildForeignKeyConstraintEnumerator.hpp"
#include "System/Data/zzzz__ForeignKeyConstraintEnumerator_impl.hpp"
#include "System/Data/zzzz__ChildForeignKeyConstraintEnumerator_def.hpp"
#include "System/Data/zzzz__Constraint_def.hpp"
#include "System/Data/zzzz__DataSet_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
//  Writing Method size for method: ::System::Data::ChildForeignKeyConstraintEnumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ChildForeignKeyConstraintEnumerator::*)(::System::Data::DataSet*, ::System::Data::DataTable*)>(
    &::System::Data::ChildForeignKeyConstraintEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x601ac60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ChildForeignKeyConstraintEnumerator*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ChildForeignKeyConstraintEnumerator.IsValidCandidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::ChildForeignKeyConstraintEnumerator::*)(::System::Data::Constraint*)>(
    &::System::Data::ChildForeignKeyConstraintEnumerator::IsValidCandidate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x601ac84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ChildForeignKeyConstraintEnumerator*>(),
                                                                                          { ::i2c::class_of<::System::Data::ChildForeignKeyConstraintEnumerator*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataTable*& System::Data::ChildForeignKeyConstraintEnumerator::__cordl_internal_get__table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr ::System::Data::DataTable* const& System::Data::ChildForeignKeyConstraintEnumerator::__cordl_internal_get__table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr void System::Data::ChildForeignKeyConstraintEnumerator::__cordl_internal_set__table(::System::Data::DataTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____table = value;
}
inline void System::Data::ChildForeignKeyConstraintEnumerator::_ctor(::System::Data::DataSet* dataSet, ::System::Data::DataTable* inTable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ChildForeignKeyConstraintEnumerator*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Data::DataSet*>(), ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSet, inTable);
}
inline bool System::Data::ChildForeignKeyConstraintEnumerator::IsValidCandidate(::System::Data::Constraint* constraint) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ChildForeignKeyConstraintEnumerator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, constraint);
}
inline ::System::Data::ChildForeignKeyConstraintEnumerator* System::Data::ChildForeignKeyConstraintEnumerator::New_ctor(::System::Data::DataSet* dataSet, ::System::Data::DataTable* inTable) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::ChildForeignKeyConstraintEnumerator*>(dataSet, inTable));
}
// Ctor Parameters []
constexpr ::System::Data::ChildForeignKeyConstraintEnumerator::ChildForeignKeyConstraintEnumerator() {}
