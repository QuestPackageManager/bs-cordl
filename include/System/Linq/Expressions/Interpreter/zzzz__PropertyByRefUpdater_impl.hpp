#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\PropertyByRefUpdater.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ByRefUpdater_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalDefinition_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__PropertyByRefUpdater_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InstructionList_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalDefinition_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalVariables_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::PropertyByRefUpdater._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::PropertyByRefUpdater::*)(
    ::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition>, ::System::Reflection::PropertyInfo*, int32_t)>(
    &::System::Linq::Expressions::Interpreter::PropertyByRefUpdater::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5faebe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::PropertyByRefUpdater*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition>>(),
                                                                                               ::i2c::type_of<::System::Reflection::PropertyInfo*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::PropertyByRefUpdater.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::PropertyByRefUpdater::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::System::Object*)>(&::System::Linq::Expressions::Interpreter::PropertyByRefUpdater::Update)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5faebfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::PropertyByRefUpdater*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::PropertyByRefUpdater*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::PropertyByRefUpdater.UndefineTemps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::PropertyByRefUpdater::*)(::System::Linq::Expressions::Interpreter::InstructionList*,
                                                                                                                                ::System::Linq::Expressions::Interpreter::LocalVariables*)>(
    &::System::Linq::Expressions::Interpreter::PropertyByRefUpdater::UndefineTemps)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5faed54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::PropertyByRefUpdater*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::PropertyByRefUpdater*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition>& System::Linq::Expressions::Interpreter::PropertyByRefUpdater::__cordl_internal_get__object() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____object;
}
constexpr ::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> const& System::Linq::Expressions::Interpreter::PropertyByRefUpdater::__cordl_internal_get__object() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____object;
}
constexpr void System::Linq::Expressions::Interpreter::PropertyByRefUpdater::__cordl_internal_set__object(::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____object = value;
}
constexpr ::System::Reflection::PropertyInfo*& System::Linq::Expressions::Interpreter::PropertyByRefUpdater::__cordl_internal_get__property() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____property;
}
constexpr ::System::Reflection::PropertyInfo* const& System::Linq::Expressions::Interpreter::PropertyByRefUpdater::__cordl_internal_get__property() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____property;
}
constexpr void System::Linq::Expressions::Interpreter::PropertyByRefUpdater::__cordl_internal_set__property(::System::Reflection::PropertyInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____property = value;
}
inline void System::Linq::Expressions::Interpreter::PropertyByRefUpdater::_ctor(::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> obj,
                                                                                ::System::Reflection::PropertyInfo* property, int32_t argumentIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::PropertyByRefUpdater*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition>>(),
                                                                                             ::i2c::type_of<::System::Reflection::PropertyInfo*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, property, argumentIndex);
}
inline void System::Linq::Expressions::Interpreter::PropertyByRefUpdater::Update(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame, ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::PropertyByRefUpdater*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame, value);
}
inline void System::Linq::Expressions::Interpreter::PropertyByRefUpdater::UndefineTemps(::System::Linq::Expressions::Interpreter::InstructionList* instructions,
                                                                                        ::System::Linq::Expressions::Interpreter::LocalVariables* locals) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::PropertyByRefUpdater*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instructions, locals);
}
inline ::System::Linq::Expressions::Interpreter::PropertyByRefUpdater*
System::Linq::Expressions::Interpreter::PropertyByRefUpdater::New_ctor(::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> obj,
                                                                       ::System::Reflection::PropertyInfo* property, int32_t argumentIndex) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::PropertyByRefUpdater*>(obj, property, argumentIndex));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::PropertyByRefUpdater::PropertyByRefUpdater() {}
