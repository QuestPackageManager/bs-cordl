#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\IndexMethodByRefUpdater.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ByRefUpdater_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalDefinition_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__IndexMethodByRefUpdater_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InstructionList_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalDefinition_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalVariables_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::*)(
    ::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition>, ::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition>, ::System::Reflection::MethodInfo*, int32_t)>(
    &::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5faedfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition>>(),
                                                                                               ::i2c::type_of<::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition>>(),
                                                                                               ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::System::Object*)>(&::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::Update)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x5faee18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater.UndefineTemps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::*)(::System::Linq::Expressions::Interpreter::InstructionList*,
                                                                                                                                   ::System::Linq::Expressions::Interpreter::LocalVariables*)>(
    &::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::UndefineTemps)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5faf08c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::MethodInfo*& System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::__cordl_internal_get__indexer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indexer;
}
constexpr ::System::Reflection::MethodInfo* const& System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::__cordl_internal_get__indexer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indexer;
}
constexpr void System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::__cordl_internal_set__indexer(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____indexer = value;
}
constexpr ::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition>& System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::__cordl_internal_get__obj() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obj;
}
constexpr ::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> const& System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::__cordl_internal_get__obj() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obj;
}
constexpr void System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::__cordl_internal_set__obj(::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obj = value;
}
constexpr ::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition>& System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::__cordl_internal_get__args() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____args;
}
constexpr ::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition> const& System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::__cordl_internal_get__args() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____args;
}
constexpr void System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::__cordl_internal_set__args(::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____args = value;
}
inline void System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::_ctor(::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> obj,
                                                                                   ::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition> args, ::System::Reflection::MethodInfo* indexer,
                                                                                   int32_t argumentIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition>>(),
                                                                                             ::i2c::type_of<::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition>>(),
                                                                                             ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, args, indexer, argumentIndex);
}
inline void System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::Update(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame, value);
}
inline void System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::UndefineTemps(::System::Linq::Expressions::Interpreter::InstructionList* instructions,
                                                                                           ::System::Linq::Expressions::Interpreter::LocalVariables* locals) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instructions, locals);
}
inline ::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater*
System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::New_ctor(::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> obj,
                                                                          ::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition> args, ::System::Reflection::MethodInfo* indexer,
                                                                          int32_t argumentIndex) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater*>(obj, args, indexer, argumentIndex));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::IndexMethodByRefUpdater::IndexMethodByRefUpdater() {}
