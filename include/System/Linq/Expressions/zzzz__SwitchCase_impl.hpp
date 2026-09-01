#pragma once
// IWYU pragma private; include "System\Linq\Expressions\SwitchCase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/zzzz__SwitchCase_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::SwitchCase.get_TestValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* (
    ::System::Linq::Expressions::SwitchCase::*)()>(&::System::Linq::Expressions::SwitchCase::get_TestValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f8953c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::SwitchCase*>(), { "get_TestValues", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::SwitchCase.get_Body
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::SwitchCase::*)()>(&::System::Linq::Expressions::SwitchCase::get_Body)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f89544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::SwitchCase*>(), { "get_Body", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*&
System::Linq::Expressions::SwitchCase::__cordl_internal_get__TestValues_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TestValues_k__BackingField;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* const&
System::Linq::Expressions::SwitchCase::__cordl_internal_get__TestValues_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TestValues_k__BackingField;
}
constexpr void
System::Linq::Expressions::SwitchCase::__cordl_internal_set__TestValues_k__BackingField(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____TestValues_k__BackingField = value;
}
constexpr ::System::Linq::Expressions::Expression*& System::Linq::Expressions::SwitchCase::__cordl_internal_get__Body_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Body_k__BackingField;
}
constexpr ::System::Linq::Expressions::Expression* const& System::Linq::Expressions::SwitchCase::__cordl_internal_get__Body_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Body_k__BackingField;
}
constexpr void System::Linq::Expressions::SwitchCase::__cordl_internal_set__Body_k__BackingField(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Body_k__BackingField = value;
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* System::Linq::Expressions::SwitchCase::get_TestValues() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::SwitchCase*>(), { "get_TestValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::SwitchCase::get_Body() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::SwitchCase*>(), { "get_Body", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::SwitchCase::SwitchCase() {}
