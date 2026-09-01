#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\DelegateHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__DelegateHelpers_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__DelegateHelpers_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::DelegateHelpers___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::DelegateHelpers___c::*)()>(
    &::System::Linq::Expressions::Interpreter::DelegateHelpers___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fc09ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::DelegateHelpers___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::DelegateHelpers___c._MakeDelegate_b__1_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Linq::Expressions::Interpreter::DelegateHelpers___c::*)(::System::Type*)>(
    &::System::Linq::Expressions::Interpreter::DelegateHelpers___c::_MakeDelegate_b__1_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5fc09b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::DelegateHelpers___c*>(), { "<MakeDelegate>b__1_0", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::Interpreter::DelegateHelpers___c::setStaticF___9(::System::Linq::Expressions::Interpreter::DelegateHelpers___c* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::DelegateHelpers___c*, "<>9", ::System::Linq::Expressions::Interpreter::DelegateHelpers___c*>(
      std::forward<::System::Linq::Expressions::Interpreter::DelegateHelpers___c*>(value));
}
inline ::System::Linq::Expressions::Interpreter::DelegateHelpers___c* System::Linq::Expressions::Interpreter::DelegateHelpers___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::DelegateHelpers___c*, "<>9", ::System::Linq::Expressions::Interpreter::DelegateHelpers___c*>();
}
inline void System::Linq::Expressions::Interpreter::DelegateHelpers___c::setStaticF___9__1_0(::System::Func_2<::System::Type*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Type*, bool>*, "<>9__1_0", ::System::Linq::Expressions::Interpreter::DelegateHelpers___c*>(
      std::forward<::System::Func_2<::System::Type*, bool>*>(value));
}
inline ::System::Func_2<::System::Type*, bool>* System::Linq::Expressions::Interpreter::DelegateHelpers___c::getStaticF___9__1_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Type*, bool>*, "<>9__1_0", ::System::Linq::Expressions::Interpreter::DelegateHelpers___c*>();
}
inline void System::Linq::Expressions::Interpreter::DelegateHelpers___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::DelegateHelpers___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Linq::Expressions::Interpreter::DelegateHelpers___c::_MakeDelegate_b__1_0(::System::Type* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::DelegateHelpers___c*>(), { "<MakeDelegate>b__1_0", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
inline ::System::Linq::Expressions::Interpreter::DelegateHelpers___c* System::Linq::Expressions::Interpreter::DelegateHelpers___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::DelegateHelpers___c*>());
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::DelegateHelpers___c::DelegateHelpers___c() {}
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::DelegateHelpers.MakeDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::ArrayW<::System::Type*>)>(&::System::Linq::Expressions::Interpreter::DelegateHelpers::MakeDelegate)> {
  constexpr static std::size_t size = 0x7a4;
  constexpr static std::size_t addrs = 0x5fb0060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::DelegateHelpers*>(), { "MakeDelegate", {}, { ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
    return ___internal_method;
  }
};
inline ::System::Type* System::Linq::Expressions::Interpreter::DelegateHelpers::MakeDelegate(::ArrayW<::System::Type*> types) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::DelegateHelpers*>(), { "MakeDelegate", {}, { ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, types);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::DelegateHelpers::DelegateHelpers() {}
