#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\FieldByRefUpdater.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ByRefUpdater_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalDefinition_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__FieldByRefUpdater_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InstructionList_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalDefinition_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalVariables_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::FieldByRefUpdater._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::FieldByRefUpdater::*)(
    ::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition>, ::System::Reflection::FieldInfo*, int32_t)>(&::System::Linq::Expressions::Interpreter::FieldByRefUpdater::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5faea74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::FieldByRefUpdater*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition>>(),
                                                                                               ::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::FieldByRefUpdater.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::FieldByRefUpdater::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::System::Object*)>(&::System::Linq::Expressions::Interpreter::FieldByRefUpdater::Update)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5faea8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::FieldByRefUpdater*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::FieldByRefUpdater*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::FieldByRefUpdater.UndefineTemps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::FieldByRefUpdater::*)(::System::Linq::Expressions::Interpreter::InstructionList*,
                                                                                                                             ::System::Linq::Expressions::Interpreter::LocalVariables*)>(
    &::System::Linq::Expressions::Interpreter::FieldByRefUpdater::UndefineTemps)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5faeb3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::FieldByRefUpdater*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::FieldByRefUpdater*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition>& System::Linq::Expressions::Interpreter::FieldByRefUpdater::__cordl_internal_get__object() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____object;
}
constexpr ::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> const& System::Linq::Expressions::Interpreter::FieldByRefUpdater::__cordl_internal_get__object() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____object;
}
constexpr void System::Linq::Expressions::Interpreter::FieldByRefUpdater::__cordl_internal_set__object(::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____object = value;
}
constexpr ::System::Reflection::FieldInfo*& System::Linq::Expressions::Interpreter::FieldByRefUpdater::__cordl_internal_get__field() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____field;
}
constexpr ::System::Reflection::FieldInfo* const& System::Linq::Expressions::Interpreter::FieldByRefUpdater::__cordl_internal_get__field() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____field;
}
constexpr void System::Linq::Expressions::Interpreter::FieldByRefUpdater::__cordl_internal_set__field(::System::Reflection::FieldInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____field = value;
}
inline void System::Linq::Expressions::Interpreter::FieldByRefUpdater::_ctor(::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> obj,
                                                                             ::System::Reflection::FieldInfo* field, int32_t argumentIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::FieldByRefUpdater*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition>>(),
                                                                                             ::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, field, argumentIndex);
}
inline void System::Linq::Expressions::Interpreter::FieldByRefUpdater::Update(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame, ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::FieldByRefUpdater*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame, value);
}
inline void System::Linq::Expressions::Interpreter::FieldByRefUpdater::UndefineTemps(::System::Linq::Expressions::Interpreter::InstructionList* instructions,
                                                                                     ::System::Linq::Expressions::Interpreter::LocalVariables* locals) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::FieldByRefUpdater*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instructions, locals);
}
inline ::System::Linq::Expressions::Interpreter::FieldByRefUpdater*
System::Linq::Expressions::Interpreter::FieldByRefUpdater::New_ctor(::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> obj, ::System::Reflection::FieldInfo* field,
                                                                    int32_t argumentIndex) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::FieldByRefUpdater*>(obj, field, argumentIndex));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::FieldByRefUpdater::FieldByRefUpdater() {}
