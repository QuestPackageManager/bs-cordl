#pragma once
// IWYU pragma private; include "System/Dynamic/BindingRestrictions_CustomRestriction.hpp"
#include "System/Dynamic/zzzz__BindingRestrictions_impl.hpp"
#include "System/Dynamic/zzzz__BindingRestrictions_CustomRestriction_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BindingRestrictions_CustomRestriction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BindingRestrictions_CustomRestriction::*)(::System::Linq::Expressions::Expression*)>(
    &::GlobalNamespace::BindingRestrictions_CustomRestriction::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5fbc740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BindingRestrictions_CustomRestriction*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BindingRestrictions_CustomRestriction.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BindingRestrictions_CustomRestriction::*)(::System::Object*)>(
    &::GlobalNamespace::BindingRestrictions_CustomRestriction::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5fbcc90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BindingRestrictions_CustomRestriction*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BindingRestrictions_CustomRestriction*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BindingRestrictions_CustomRestriction.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BindingRestrictions_CustomRestriction::*)()>(
    &::GlobalNamespace::BindingRestrictions_CustomRestriction::GetHashCode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fbcd0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BindingRestrictions_CustomRestriction*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BindingRestrictions_CustomRestriction*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BindingRestrictions_CustomRestriction.GetExpression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::GlobalNamespace::BindingRestrictions_CustomRestriction::*)()>(
    &::GlobalNamespace::BindingRestrictions_CustomRestriction::GetExpression)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fbcd3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BindingRestrictions_CustomRestriction*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BindingRestrictions_CustomRestriction*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::Expression*& GlobalNamespace::BindingRestrictions_CustomRestriction::__cordl_internal_get__expression() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expression;
}
constexpr ::System::Linq::Expressions::Expression* const& GlobalNamespace::BindingRestrictions_CustomRestriction::__cordl_internal_get__expression() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expression;
}
constexpr void GlobalNamespace::BindingRestrictions_CustomRestriction::__cordl_internal_set__expression(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____expression = value;
}
inline void GlobalNamespace::BindingRestrictions_CustomRestriction::_ctor(::System::Linq::Expressions::Expression* expression) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BindingRestrictions_CustomRestriction*>(), { ".ctor", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expression);
}
inline bool GlobalNamespace::BindingRestrictions_CustomRestriction::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BindingRestrictions_CustomRestriction*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::BindingRestrictions_CustomRestriction::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BindingRestrictions_CustomRestriction*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* GlobalNamespace::BindingRestrictions_CustomRestriction::GetExpression() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BindingRestrictions_CustomRestriction*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method);
}
inline ::GlobalNamespace::BindingRestrictions_CustomRestriction* GlobalNamespace::BindingRestrictions_CustomRestriction::New_ctor(::System::Linq::Expressions::Expression* expression) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BindingRestrictions_CustomRestriction*>(expression));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BindingRestrictions_CustomRestriction::BindingRestrictions_CustomRestriction() {}
