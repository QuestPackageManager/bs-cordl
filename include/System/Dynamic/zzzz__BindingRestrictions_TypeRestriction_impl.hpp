#pragma once
// IWYU pragma private; include "System/Dynamic/BindingRestrictions_TypeRestriction.hpp"
#include "System/Dynamic/zzzz__BindingRestrictions_impl.hpp"
#include "System/Dynamic/zzzz__BindingRestrictions_TypeRestriction_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BindingRestrictions_TypeRestriction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BindingRestrictions_TypeRestriction::*)(::System::Linq::Expressions::Expression*, ::System::Type*)>(
    &::GlobalNamespace::BindingRestrictions_TypeRestriction::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5fbc394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BindingRestrictions_TypeRestriction*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BindingRestrictions_TypeRestriction.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BindingRestrictions_TypeRestriction::*)(::System::Object*)>(
    &::GlobalNamespace::BindingRestrictions_TypeRestriction::Equals)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5fbcd44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BindingRestrictions_TypeRestriction*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BindingRestrictions_TypeRestriction*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BindingRestrictions_TypeRestriction.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BindingRestrictions_TypeRestriction::*)()>(&::GlobalNamespace::BindingRestrictions_TypeRestriction::GetHashCode)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5fbce14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BindingRestrictions_TypeRestriction*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BindingRestrictions_TypeRestriction*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BindingRestrictions_TypeRestriction.GetExpression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::GlobalNamespace::BindingRestrictions_TypeRestriction::*)()>(
    &::GlobalNamespace::BindingRestrictions_TypeRestriction::GetExpression)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5fbce68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BindingRestrictions_TypeRestriction*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BindingRestrictions_TypeRestriction*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::Expression*& GlobalNamespace::BindingRestrictions_TypeRestriction::__cordl_internal_get__expression() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expression;
}
constexpr ::System::Linq::Expressions::Expression* const& GlobalNamespace::BindingRestrictions_TypeRestriction::__cordl_internal_get__expression() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expression;
}
constexpr void GlobalNamespace::BindingRestrictions_TypeRestriction::__cordl_internal_set__expression(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____expression = value;
}
constexpr ::System::Type*& GlobalNamespace::BindingRestrictions_TypeRestriction::__cordl_internal_get__type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr ::System::Type* const& GlobalNamespace::BindingRestrictions_TypeRestriction::__cordl_internal_get__type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr void GlobalNamespace::BindingRestrictions_TypeRestriction::__cordl_internal_set__type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____type = value;
}
inline void GlobalNamespace::BindingRestrictions_TypeRestriction::_ctor(::System::Linq::Expressions::Expression* parameter, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BindingRestrictions_TypeRestriction*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameter, type);
}
inline bool GlobalNamespace::BindingRestrictions_TypeRestriction::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BindingRestrictions_TypeRestriction*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::BindingRestrictions_TypeRestriction::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BindingRestrictions_TypeRestriction*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* GlobalNamespace::BindingRestrictions_TypeRestriction::GetExpression() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BindingRestrictions_TypeRestriction*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method);
}
inline ::GlobalNamespace::BindingRestrictions_TypeRestriction* GlobalNamespace::BindingRestrictions_TypeRestriction::New_ctor(::System::Linq::Expressions::Expression* parameter,
                                                                                                                              ::System::Type* type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BindingRestrictions_TypeRestriction*>(parameter, type));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BindingRestrictions_TypeRestriction::BindingRestrictions_TypeRestriction() {}
