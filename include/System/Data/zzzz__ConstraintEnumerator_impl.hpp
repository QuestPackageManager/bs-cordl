#pragma once
// IWYU pragma private; include "System/Data/ConstraintEnumerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__ConstraintEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Data/zzzz__Constraint_def.hpp"
#include "System/Data/zzzz__DataSet_def.hpp"
//  Writing Method size for method: ::System::Data::ConstraintEnumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ConstraintEnumerator::*)(::System::Data::DataSet*)>(&::System::Data::ConstraintEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x601a820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintEnumerator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintEnumerator.GetNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::ConstraintEnumerator::*)()>(&::System::Data::ConstraintEnumerator::GetNext)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x601a860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintEnumerator*>(), { "GetNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintEnumerator.GetConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::Constraint* (::System::Data::ConstraintEnumerator::*)()>(&::System::Data::ConstraintEnumerator::GetConstraint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601ab4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintEnumerator*>(), { "GetConstraint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintEnumerator.IsValidCandidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::ConstraintEnumerator::*)(::System::Data::Constraint*)>(&::System::Data::ConstraintEnumerator::IsValidCandidate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601ab54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::ConstraintEnumerator*>(), { ::i2c::class_of<::System::Data::ConstraintEnumerator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ConstraintEnumerator.get_CurrentObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::Constraint* (::System::Data::ConstraintEnumerator::*)()>(&::System::Data::ConstraintEnumerator::get_CurrentObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601ab5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintEnumerator*>(), { "get_CurrentObject", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IEnumerator*& System::Data::ConstraintEnumerator::__cordl_internal_get__tables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tables;
}
constexpr ::System::Collections::IEnumerator* const& System::Data::ConstraintEnumerator::__cordl_internal_get__tables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tables;
}
constexpr void System::Data::ConstraintEnumerator::__cordl_internal_set__tables(::System::Collections::IEnumerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tables = value;
}
constexpr ::System::Collections::IEnumerator*& System::Data::ConstraintEnumerator::__cordl_internal_get__constraints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____constraints;
}
constexpr ::System::Collections::IEnumerator* const& System::Data::ConstraintEnumerator::__cordl_internal_get__constraints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____constraints;
}
constexpr void System::Data::ConstraintEnumerator::__cordl_internal_set__constraints(::System::Collections::IEnumerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____constraints = value;
}
constexpr ::System::Data::Constraint*& System::Data::ConstraintEnumerator::__cordl_internal_get__currentObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentObject;
}
constexpr ::System::Data::Constraint* const& System::Data::ConstraintEnumerator::__cordl_internal_get__currentObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentObject;
}
constexpr void System::Data::ConstraintEnumerator::__cordl_internal_set__currentObject(::System::Data::Constraint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentObject = value;
}
inline void System::Data::ConstraintEnumerator::_ctor(::System::Data::DataSet* dataSet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintEnumerator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSet);
}
inline bool System::Data::ConstraintEnumerator::GetNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintEnumerator*>(), { "GetNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Data::Constraint* System::Data::ConstraintEnumerator::GetConstraint() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintEnumerator*>(), { "GetConstraint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Constraint*>(this, ___internal_method);
}
inline bool System::Data::ConstraintEnumerator::IsValidCandidate(::System::Data::Constraint* constraint) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::ConstraintEnumerator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, constraint);
}
inline ::System::Data::Constraint* System::Data::ConstraintEnumerator::get_CurrentObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ConstraintEnumerator*>(), { "get_CurrentObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Constraint*>(this, ___internal_method);
}
inline ::System::Data::ConstraintEnumerator* System::Data::ConstraintEnumerator::New_ctor(::System::Data::DataSet* dataSet) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::ConstraintEnumerator*>(dataSet));
}
// Ctor Parameters []
constexpr ::System::Data::ConstraintEnumerator::ConstraintEnumerator() {}
