#pragma once
// IWYU pragma private; include "System\Data\ForeignKeyConstraintEnumerator.hpp"
#include "System/Data/zzzz__ConstraintEnumerator_impl.hpp"
#include "System/Data/zzzz__ForeignKeyConstraintEnumerator_def.hpp"
#include "System/Data/zzzz__Constraint_def.hpp"
#include "System/Data/zzzz__DataSet_def.hpp"
#include "System/Data/zzzz__ForeignKeyConstraint_def.hpp"
//  Writing Method size for method: ::System::Data::ForeignKeyConstraintEnumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ForeignKeyConstraintEnumerator::*)(::System::Data::DataSet*)>(&::System::Data::ForeignKeyConstraintEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x602037c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraintEnumerator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraintEnumerator.IsValidCandidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::ForeignKeyConstraintEnumerator::*)(::System::Data::Constraint*)>(
    &::System::Data::ForeignKeyConstraintEnumerator::IsValidCandidate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6020380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraintEnumerator*>(), { ::i2c::class_of<::System::Data::ForeignKeyConstraintEnumerator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ForeignKeyConstraintEnumerator.GetForeignKeyConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::ForeignKeyConstraint* (::System::Data::ForeignKeyConstraintEnumerator::*)()>(
    &::System::Data::ForeignKeyConstraintEnumerator::GetForeignKeyConstraint)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x60203fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraintEnumerator*>(), { "GetForeignKeyConstraint", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Data::ForeignKeyConstraintEnumerator::_ctor(::System::Data::DataSet* dataSet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraintEnumerator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSet);
}
inline bool System::Data::ForeignKeyConstraintEnumerator::IsValidCandidate(::System::Data::Constraint* constraint) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ForeignKeyConstraintEnumerator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, constraint);
}
inline ::System::Data::ForeignKeyConstraint* System::Data::ForeignKeyConstraintEnumerator::GetForeignKeyConstraint() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ForeignKeyConstraintEnumerator*>(), { "GetForeignKeyConstraint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::ForeignKeyConstraint*>(this, ___internal_method);
}
inline ::System::Data::ForeignKeyConstraintEnumerator* System::Data::ForeignKeyConstraintEnumerator::New_ctor(::System::Data::DataSet* dataSet) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::ForeignKeyConstraintEnumerator*>(dataSet));
}
// Ctor Parameters []
constexpr ::System::Data::ForeignKeyConstraintEnumerator::ForeignKeyConstraintEnumerator() {}
