#pragma once
// IWYU pragma private; include "System\Dynamic\BindingRestrictions_InstanceRestriction.hpp"
#include "System/Dynamic/zzzz__BindingRestrictions_impl.hpp"
#include "System/Dynamic/zzzz__BindingRestrictions_InstanceRestriction_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BindingRestrictions_InstanceRestriction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BindingRestrictions_InstanceRestriction::*)(::System::Linq::Expressions::Expression*, ::System::Object*)>(
    &::GlobalNamespace::BindingRestrictions_InstanceRestriction::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5fc1e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BindingRestrictions_InstanceRestriction*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BindingRestrictions_InstanceRestriction.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BindingRestrictions_InstanceRestriction::*)(::System::Object*)>(
    &::GlobalNamespace::BindingRestrictions_InstanceRestriction::Equals)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5fc26e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BindingRestrictions_InstanceRestriction*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BindingRestrictions_InstanceRestriction*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BindingRestrictions_InstanceRestriction.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BindingRestrictions_InstanceRestriction::*)()>(
    &::GlobalNamespace::BindingRestrictions_InstanceRestriction::GetHashCode)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5fc277c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BindingRestrictions_InstanceRestriction*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BindingRestrictions_InstanceRestriction*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BindingRestrictions_InstanceRestriction.GetExpression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::GlobalNamespace::BindingRestrictions_InstanceRestriction::*)()>(
    &::GlobalNamespace::BindingRestrictions_InstanceRestriction::GetExpression)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x5fc27c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BindingRestrictions_InstanceRestriction*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BindingRestrictions_InstanceRestriction*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::Expression*& GlobalNamespace::BindingRestrictions_InstanceRestriction::__cordl_internal_get__expression() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expression;
}
constexpr ::System::Linq::Expressions::Expression* const& GlobalNamespace::BindingRestrictions_InstanceRestriction::__cordl_internal_get__expression() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expression;
}
constexpr void GlobalNamespace::BindingRestrictions_InstanceRestriction::__cordl_internal_set__expression(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____expression = value;
}
constexpr ::System::Object*& GlobalNamespace::BindingRestrictions_InstanceRestriction::__cordl_internal_get__instance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instance;
}
constexpr ::System::Object* const& GlobalNamespace::BindingRestrictions_InstanceRestriction::__cordl_internal_get__instance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instance;
}
constexpr void GlobalNamespace::BindingRestrictions_InstanceRestriction::__cordl_internal_set__instance(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____instance = value;
}
inline void GlobalNamespace::BindingRestrictions_InstanceRestriction::_ctor(::System::Linq::Expressions::Expression* parameter, ::System::Object* instance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BindingRestrictions_InstanceRestriction*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameter, instance);
}
inline bool GlobalNamespace::BindingRestrictions_InstanceRestriction::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BindingRestrictions_InstanceRestriction*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::BindingRestrictions_InstanceRestriction::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BindingRestrictions_InstanceRestriction*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* GlobalNamespace::BindingRestrictions_InstanceRestriction::GetExpression() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BindingRestrictions_InstanceRestriction*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method);
}
inline ::GlobalNamespace::BindingRestrictions_InstanceRestriction* GlobalNamespace::BindingRestrictions_InstanceRestriction::New_ctor(::System::Linq::Expressions::Expression* parameter,
                                                                                                                                      ::System::Object* instance) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BindingRestrictions_InstanceRestriction*>(parameter, instance));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BindingRestrictions_InstanceRestriction::BindingRestrictions_InstanceRestriction() {}
