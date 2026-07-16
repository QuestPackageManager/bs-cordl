#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/CallInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__CallInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LightLambda_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::CallInstruction.get_ArgumentCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::CallInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::CallInstruction::get_ArgumentCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::CallInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::CallInstruction*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::CallInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::CallInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::CallInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f88654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::CallInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::CallInstruction*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::CallInstruction.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::CallInstruction* (*)(::System::Reflection::MethodInfo*)>(
    &::System::Linq::Expressions::Interpreter::CallInstruction::Create)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f88698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::CallInstruction*>(), { "Create", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::CallInstruction.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Linq::Expressions::Interpreter::CallInstruction* (*)(::System::Reflection::MethodInfo*, ::ArrayW<::System::Reflection::ParameterInfo*>)>(
        &::System::Linq::Expressions::Interpreter::CallInstruction::Create)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5f88700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::CallInstruction*>(),
                                                { "Create", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::CallInstruction.GetArrayAccessor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::CallInstruction* (*)(::System::Reflection::MethodInfo*, int32_t)>(
    &::System::Linq::Expressions::Interpreter::CallInstruction::GetArrayAccessor)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x5f88868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::CallInstruction*>(),
                                                             { "GetArrayAccessor", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::CallInstruction.ArrayItemSetter1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Array*, int32_t, ::System::Object*)>(&::System::Linq::Expressions::Interpreter::CallInstruction::ArrayItemSetter1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f88ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::CallInstruction*>(),
                                                             { "ArrayItemSetter1", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::CallInstruction.ArrayItemSetter2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Array*, int32_t, int32_t, ::System::Object*)>(&::System::Linq::Expressions::Interpreter::CallInstruction::ArrayItemSetter2)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f88d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::CallInstruction*>(),
                            { "ArrayItemSetter2", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::CallInstruction.ArrayItemSetter3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Array*, int32_t, int32_t, int32_t, ::System::Object*)>(
    &::System::Linq::Expressions::Interpreter::CallInstruction::ArrayItemSetter3)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f88d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Linq::Expressions::Interpreter::CallInstruction*>(),
            { "ArrayItemSetter3", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::CallInstruction.get_ConsumedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::CallInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::CallInstruction::get_ConsumedStack)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f88d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::CallInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::CallInstruction*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::CallInstruction.TryGetLightLambdaTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*, ::by_ref<::System::Linq::Expressions::Interpreter::LightLambda*>)>(
    &::System::Linq::Expressions::Interpreter::CallInstruction::TryGetLightLambdaTarget)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5f88d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::CallInstruction*>(),
                            { "TryGetLightLambdaTarget", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::System::Linq::Expressions::Interpreter::LightLambda*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::CallInstruction.InterpretLambdaInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::Linq::Expressions::Interpreter::CallInstruction::*)(::System::Linq::Expressions::Interpreter::LightLambda*, ::ArrayW<::System::Object*>)>(
        &::System::Linq::Expressions::Interpreter::CallInstruction::InterpretLambdaInvoke)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f88e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::CallInstruction*>(),
                            { "InterpretLambdaInvoke", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::LightLambda*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::CallInstruction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::CallInstruction::*)()>(&::System::Linq::Expressions::Interpreter::CallInstruction::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f88ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::CallInstruction*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t System::Linq::Expressions::Interpreter::CallInstruction::get_ArgumentCount() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::CallInstruction*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Linq::Expressions::Interpreter::CallInstruction::get_InstructionName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::CallInstruction*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::CallInstruction* System::Linq::Expressions::Interpreter::CallInstruction::Create(::System::Reflection::MethodInfo* info) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::CallInstruction*>(), { "Create", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::CallInstruction*>(nullptr, ___internal_method, info);
}
inline ::System::Linq::Expressions::Interpreter::CallInstruction* System::Linq::Expressions::Interpreter::CallInstruction::Create(::System::Reflection::MethodInfo* info,
                                                                                                                                  ::ArrayW<::System::Reflection::ParameterInfo*> parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::CallInstruction*>(),
                                              { "Create", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::CallInstruction*>(nullptr, ___internal_method, info, parameters);
}
inline ::System::Linq::Expressions::Interpreter::CallInstruction* System::Linq::Expressions::Interpreter::CallInstruction::GetArrayAccessor(::System::Reflection::MethodInfo* info,
                                                                                                                                            int32_t argumentCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::CallInstruction*>(),
                                                           { "GetArrayAccessor", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::CallInstruction*>(nullptr, ___internal_method, info, argumentCount);
}
inline void System::Linq::Expressions::Interpreter::CallInstruction::ArrayItemSetter1(::System::Array* array, int32_t index0, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::CallInstruction*>(),
                                                           { "ArrayItemSetter1", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, index0, value);
}
inline void System::Linq::Expressions::Interpreter::CallInstruction::ArrayItemSetter2(::System::Array* array, int32_t index0, int32_t index1, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::CallInstruction*>(),
                                       { "ArrayItemSetter2", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, index0, index1, value);
}
inline void System::Linq::Expressions::Interpreter::CallInstruction::ArrayItemSetter3(::System::Array* array, int32_t index0, int32_t index1, int32_t index2, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Linq::Expressions::Interpreter::CallInstruction*>(),
          { "ArrayItemSetter3", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, index0, index1, index2, value);
}
inline int32_t System::Linq::Expressions::Interpreter::CallInstruction::get_ConsumedStack() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::CallInstruction*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Linq::Expressions::Interpreter::CallInstruction::TryGetLightLambdaTarget(::System::Object* instance, ::by_ref<::System::Linq::Expressions::Interpreter::LightLambda*> lightLambda) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::CallInstruction*>(),
                          { "TryGetLightLambdaTarget", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::System::Linq::Expressions::Interpreter::LightLambda*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, instance, lightLambda);
}
inline ::System::Object* System::Linq::Expressions::Interpreter::CallInstruction::InterpretLambdaInvoke(::System::Linq::Expressions::Interpreter::LightLambda* targetLambda,
                                                                                                        ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::CallInstruction*>(),
                                       { "InterpretLambdaInvoke", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::LightLambda*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, targetLambda, args);
}
inline void System::Linq::Expressions::Interpreter::CallInstruction::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::CallInstruction*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::CallInstruction* System::Linq::Expressions::Interpreter::CallInstruction::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::CallInstruction*>());
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::CallInstruction::CallInstruction() {}
