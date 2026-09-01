#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\NewInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NewInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::NewInstruction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::NewInstruction::*)(::System::Reflection::ConstructorInfo*, int32_t)>(
    &::System::Linq::Expressions::Interpreter::NewInstruction::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fb70e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NewInstruction*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Reflection::ConstructorInfo*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::NewInstruction.get_ConsumedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::NewInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::NewInstruction::get_ConsumedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb70f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NewInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NewInstruction*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::NewInstruction.get_ProducedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::NewInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::NewInstruction::get_ProducedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb70f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NewInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NewInstruction*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::NewInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::NewInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::NewInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fb7100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NewInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NewInstruction*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::NewInstruction.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::NewInstruction::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::System::Linq::Expressions::Interpreter::NewInstruction::Run)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5fb7144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NewInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NewInstruction*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::NewInstruction.GetArgs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Linq::Expressions::Interpreter::NewInstruction::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*, int32_t)>(&::System::Linq::Expressions::Interpreter::NewInstruction::GetArgs)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5fb7288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NewInstruction*>(),
                                                             { "GetArgs", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::InterpretedFrame*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::NewInstruction.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::NewInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::NewInstruction::ToString)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5fb740c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NewInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NewInstruction*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::ConstructorInfo*& System::Linq::Expressions::Interpreter::NewInstruction::__cordl_internal_get__constructor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____constructor;
}
constexpr ::System::Reflection::ConstructorInfo* const& System::Linq::Expressions::Interpreter::NewInstruction::__cordl_internal_get__constructor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____constructor;
}
constexpr void System::Linq::Expressions::Interpreter::NewInstruction::__cordl_internal_set__constructor(::System::Reflection::ConstructorInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____constructor = value;
}
constexpr int32_t& System::Linq::Expressions::Interpreter::NewInstruction::__cordl_internal_get__argumentCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____argumentCount;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::NewInstruction::__cordl_internal_get__argumentCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____argumentCount;
}
constexpr void System::Linq::Expressions::Interpreter::NewInstruction::__cordl_internal_set__argumentCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____argumentCount = value;
}
inline void System::Linq::Expressions::Interpreter::NewInstruction::_ctor(::System::Reflection::ConstructorInfo* constructor, int32_t argumentCount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NewInstruction*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Reflection::ConstructorInfo*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constructor, argumentCount);
}
inline int32_t System::Linq::Expressions::Interpreter::NewInstruction::get_ConsumedStack() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NewInstruction*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::NewInstruction::get_ProducedStack() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NewInstruction*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Linq::Expressions::Interpreter::NewInstruction::get_InstructionName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NewInstruction*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::NewInstruction::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NewInstruction*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline ::ArrayW<::System::Object*> System::Linq::Expressions::Interpreter::NewInstruction::GetArgs(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame, int32_t first) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::NewInstruction*>(),
                                                           { "GetArgs", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::InterpretedFrame*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, frame, first);
}
inline ::StringW System::Linq::Expressions::Interpreter::NewInstruction::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::NewInstruction*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::NewInstruction* System::Linq::Expressions::Interpreter::NewInstruction::New_ctor(::System::Reflection::ConstructorInfo* constructor,
                                                                                                                                  int32_t argumentCount) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::NewInstruction*>(constructor, argumentCount));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::NewInstruction::NewInstruction() {}
