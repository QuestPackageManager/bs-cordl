#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\MethodInfoCallInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__CallInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__MethodInfoCallInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction.get_ArgumentCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction::get_ArgumentCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f8e6ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction::*)(::System::Reflection::MethodInfo*, int32_t)>(
    &::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f8e4f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction.get_ProducedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction::get_ProducedStack)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f8e6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction::Run)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x5f8e75c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction.GetArgs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*, int32_t, int32_t)>(&::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction::GetArgs)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5f8ea4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction*>(),
                                         { "GetArgs", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::InterpretedFrame*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction::ToString)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f8ebd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::MethodInfo*& System::Linq::Expressions::Interpreter::MethodInfoCallInstruction::__cordl_internal_get__target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____target;
}
constexpr ::System::Reflection::MethodInfo* const& System::Linq::Expressions::Interpreter::MethodInfoCallInstruction::__cordl_internal_get__target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____target;
}
constexpr void System::Linq::Expressions::Interpreter::MethodInfoCallInstruction::__cordl_internal_set__target(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____target = value;
}
constexpr int32_t& System::Linq::Expressions::Interpreter::MethodInfoCallInstruction::__cordl_internal_get__argumentCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____argumentCount;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::MethodInfoCallInstruction::__cordl_internal_get__argumentCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____argumentCount;
}
constexpr void System::Linq::Expressions::Interpreter::MethodInfoCallInstruction::__cordl_internal_set__argumentCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____argumentCount = value;
}
inline int32_t System::Linq::Expressions::Interpreter::MethodInfoCallInstruction::get_ArgumentCount() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::MethodInfoCallInstruction::_ctor(::System::Reflection::MethodInfo* target, int32_t argumentCount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, argumentCount);
}
inline int32_t System::Linq::Expressions::Interpreter::MethodInfoCallInstruction::get_ProducedStack() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::MethodInfoCallInstruction::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline ::ArrayW<::System::Object*> System::Linq::Expressions::Interpreter::MethodInfoCallInstruction::GetArgs(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame, int32_t first,
                                                                                                              int32_t skip) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction*>(),
                                       { "GetArgs", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::InterpretedFrame*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, frame, first, skip);
}
inline ::StringW System::Linq::Expressions::Interpreter::MethodInfoCallInstruction::ToString() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction* System::Linq::Expressions::Interpreter::MethodInfoCallInstruction::New_ctor(::System::Reflection::MethodInfo* target,
                                                                                                                                                        int32_t argumentCount) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction*>(target, argumentCount));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction::MethodInfoCallInstruction() {}
