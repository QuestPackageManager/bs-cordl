#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\ByRefUpdater.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ByRefUpdater_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InstructionList_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalVariables_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ByRefUpdater._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::ByRefUpdater::*)(int32_t)>(&::System::Linq::Expressions::Interpreter::ByRefUpdater::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fae62c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ByRefUpdater*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ByRefUpdater.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::ByRefUpdater::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::System::Object*)>(&::System::Linq::Expressions::Interpreter::ByRefUpdater::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ByRefUpdater*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::ByRefUpdater*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ByRefUpdater.UndefineTemps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::ByRefUpdater::*)(
    ::System::Linq::Expressions::Interpreter::InstructionList*, ::System::Linq::Expressions::Interpreter::LocalVariables*)>(&::System::Linq::Expressions::Interpreter::ByRefUpdater::UndefineTemps)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fae634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ByRefUpdater*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::ByRefUpdater*>(), 5 }));
    return ___internal_method;
  }
};
constexpr int32_t& System::Linq::Expressions::Interpreter::ByRefUpdater::__cordl_internal_get_ArgumentIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ArgumentIndex;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::ByRefUpdater::__cordl_internal_get_ArgumentIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ArgumentIndex;
}
constexpr void System::Linq::Expressions::Interpreter::ByRefUpdater::__cordl_internal_set_ArgumentIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ArgumentIndex = value;
}
inline void System::Linq::Expressions::Interpreter::ByRefUpdater::_ctor(int32_t argumentIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ByRefUpdater*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, argumentIndex);
}
inline void System::Linq::Expressions::Interpreter::ByRefUpdater::Update(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame, ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::ByRefUpdater*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame, value);
}
inline void System::Linq::Expressions::Interpreter::ByRefUpdater::UndefineTemps(::System::Linq::Expressions::Interpreter::InstructionList* instructions,
                                                                                ::System::Linq::Expressions::Interpreter::LocalVariables* locals) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::ByRefUpdater*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instructions, locals);
}
inline ::System::Linq::Expressions::Interpreter::ByRefUpdater* System::Linq::Expressions::Interpreter::ByRefUpdater::New_ctor(int32_t argumentIndex) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::ByRefUpdater*>(argumentIndex));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::ByRefUpdater::ByRefUpdater() {}
