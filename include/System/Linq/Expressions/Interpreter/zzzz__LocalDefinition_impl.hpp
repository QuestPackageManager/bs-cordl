#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\LocalDefinition.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalDefinition_def.hpp"
#include "System/Linq/Expressions/zzzz__ParameterExpression_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LocalDefinition._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LocalDefinition::*)(int32_t, ::System::Linq::Expressions::ParameterExpression*)>(
    &::System::Linq::Expressions::Interpreter::LocalDefinition::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fb3b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LocalDefinition>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Linq::Expressions::ParameterExpression*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LocalDefinition.get_Index
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::LocalDefinition::*)()>(
    &::System::Linq::Expressions::Interpreter::LocalDefinition::get_Index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb3b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LocalDefinition>(), { "get_Index", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LocalDefinition.get_Parameter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::ParameterExpression* (::System::Linq::Expressions::Interpreter::LocalDefinition::*)()>(
    &::System::Linq::Expressions::Interpreter::LocalDefinition::get_Parameter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb3b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LocalDefinition>(), { "get_Parameter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LocalDefinition.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Linq::Expressions::Interpreter::LocalDefinition::*)(::System::Object*)>(
    &::System::Linq::Expressions::Interpreter::LocalDefinition::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5fb3ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LocalDefinition>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::LocalDefinition>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LocalDefinition.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::LocalDefinition::*)()>(
    &::System::Linq::Expressions::Interpreter::LocalDefinition::GetHashCode)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5fb3c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LocalDefinition>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::LocalDefinition>(), 2 }));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::Interpreter::LocalDefinition::_ctor(int32_t localIndex, ::System::Linq::Expressions::ParameterExpression* parameter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LocalDefinition>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Linq::Expressions::ParameterExpression*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, localIndex, parameter);
}
inline int32_t System::Linq::Expressions::Interpreter::LocalDefinition::get_Index() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LocalDefinition>(), { "get_Index", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::Linq::Expressions::ParameterExpression* System::Linq::Expressions::Interpreter::LocalDefinition::get_Parameter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LocalDefinition>(), { "get_Parameter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::ParameterExpression*>(*this, ___internal_method);
}
inline bool System::Linq::Expressions::Interpreter::LocalDefinition::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::LocalDefinition>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t System::Linq::Expressions::Interpreter::LocalDefinition::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::LocalDefinition>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_Index_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Parameter_k__BackingField", ty:
// "::System::Linq::Expressions::ParameterExpression*", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Linq::Expressions::Interpreter::LocalDefinition::LocalDefinition(int32_t _Index_k__BackingField,
                                                                                     ::System::Linq::Expressions::ParameterExpression* _Parameter_k__BackingField) noexcept {
  this->_Index_k__BackingField = _Index_k__BackingField;
  this->_Parameter_k__BackingField = _Parameter_k__BackingField;
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::LocalDefinition::LocalDefinition() {}
