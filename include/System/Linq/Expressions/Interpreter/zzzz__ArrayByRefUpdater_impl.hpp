#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\ArrayByRefUpdater.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ByRefUpdater_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalDefinition_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ArrayByRefUpdater_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InstructionList_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalDefinition_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalVariables_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ArrayByRefUpdater._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::ArrayByRefUpdater::*)(::System::Linq::Expressions::Interpreter::LocalDefinition,
                                                                                                                             ::System::Linq::Expressions::Interpreter::LocalDefinition, int32_t)>(
    &::System::Linq::Expressions::Interpreter::ArrayByRefUpdater::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fae850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ArrayByRefUpdater*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Linq::Expressions::Interpreter::LocalDefinition>(),
                                                                 ::i2c::type_of<::System::Linq::Expressions::Interpreter::LocalDefinition>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ArrayByRefUpdater.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::ArrayByRefUpdater::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::System::Object*)>(&::System::Linq::Expressions::Interpreter::ArrayByRefUpdater::Update)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5fae860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ArrayByRefUpdater*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::ArrayByRefUpdater*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ArrayByRefUpdater.UndefineTemps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::ArrayByRefUpdater::*)(::System::Linq::Expressions::Interpreter::InstructionList*,
                                                                                                                             ::System::Linq::Expressions::Interpreter::LocalVariables*)>(
    &::System::Linq::Expressions::Interpreter::ArrayByRefUpdater::UndefineTemps)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5fae918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ArrayByRefUpdater*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::ArrayByRefUpdater*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::Interpreter::LocalDefinition& System::Linq::Expressions::Interpreter::ArrayByRefUpdater::__cordl_internal_get__array() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____array;
}
constexpr ::System::Linq::Expressions::Interpreter::LocalDefinition const& System::Linq::Expressions::Interpreter::ArrayByRefUpdater::__cordl_internal_get__array() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____array;
}
constexpr void System::Linq::Expressions::Interpreter::ArrayByRefUpdater::__cordl_internal_set__array(::System::Linq::Expressions::Interpreter::LocalDefinition value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____array = value;
}
constexpr ::System::Linq::Expressions::Interpreter::LocalDefinition& System::Linq::Expressions::Interpreter::ArrayByRefUpdater::__cordl_internal_get__index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr ::System::Linq::Expressions::Interpreter::LocalDefinition const& System::Linq::Expressions::Interpreter::ArrayByRefUpdater::__cordl_internal_get__index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr void System::Linq::Expressions::Interpreter::ArrayByRefUpdater::__cordl_internal_set__index(::System::Linq::Expressions::Interpreter::LocalDefinition value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index = value;
}
inline void System::Linq::Expressions::Interpreter::ArrayByRefUpdater::_ctor(::System::Linq::Expressions::Interpreter::LocalDefinition array,
                                                                             ::System::Linq::Expressions::Interpreter::LocalDefinition index, int32_t argumentIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ArrayByRefUpdater*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Linq::Expressions::Interpreter::LocalDefinition>(),
                                                               ::i2c::type_of<::System::Linq::Expressions::Interpreter::LocalDefinition>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index, argumentIndex);
}
inline void System::Linq::Expressions::Interpreter::ArrayByRefUpdater::Update(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame, ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::ArrayByRefUpdater*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame, value);
}
inline void System::Linq::Expressions::Interpreter::ArrayByRefUpdater::UndefineTemps(::System::Linq::Expressions::Interpreter::InstructionList* instructions,
                                                                                     ::System::Linq::Expressions::Interpreter::LocalVariables* locals) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::ArrayByRefUpdater*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instructions, locals);
}
inline ::System::Linq::Expressions::Interpreter::ArrayByRefUpdater* System::Linq::Expressions::Interpreter::ArrayByRefUpdater::New_ctor(::System::Linq::Expressions::Interpreter::LocalDefinition array,
                                                                                                                                        ::System::Linq::Expressions::Interpreter::LocalDefinition index,
                                                                                                                                        int32_t argumentIndex) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::ArrayByRefUpdater*>(array, index, argumentIndex));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::ArrayByRefUpdater::ArrayByRefUpdater() {}
