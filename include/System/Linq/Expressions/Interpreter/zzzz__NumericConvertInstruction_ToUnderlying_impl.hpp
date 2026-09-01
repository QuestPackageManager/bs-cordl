#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\NumericConvertInstruction_ToUnderlying.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NumericConvertInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NumericConvertInstruction_ToUnderlying_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NumericConvertInstruction_ToUnderlying.get_InstructionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NumericConvertInstruction_ToUnderlying::*)()>(
    &::GlobalNamespace::NumericConvertInstruction_ToUnderlying::get_InstructionName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fbb500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NumericConvertInstruction_ToUnderlying*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::NumericConvertInstruction_ToUnderlying*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NumericConvertInstruction_ToUnderlying._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NumericConvertInstruction_ToUnderlying::*)(::System::TypeCode, bool)>(
    &::GlobalNamespace::NumericConvertInstruction_ToUnderlying::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fbb544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NumericConvertInstruction_ToUnderlying*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::TypeCode>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NumericConvertInstruction_ToUnderlying.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::NumericConvertInstruction_ToUnderlying::*)(::System::Object*)>(
    &::GlobalNamespace::NumericConvertInstruction_ToUnderlying::Convert)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5fbb550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NumericConvertInstruction_ToUnderlying*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::NumericConvertInstruction_ToUnderlying*>(), 11 }));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::NumericConvertInstruction_ToUnderlying::get_InstructionName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NumericConvertInstruction_ToUnderlying*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::NumericConvertInstruction_ToUnderlying::_ctor(::System::TypeCode to, bool isLiftedToNull) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NumericConvertInstruction_ToUnderlying*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::TypeCode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, to, isLiftedToNull);
}
inline ::System::Object* GlobalNamespace::NumericConvertInstruction_ToUnderlying::Convert(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NumericConvertInstruction_ToUnderlying*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj);
}
inline ::GlobalNamespace::NumericConvertInstruction_ToUnderlying* GlobalNamespace::NumericConvertInstruction_ToUnderlying::New_ctor(::System::TypeCode to, bool isLiftedToNull) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NumericConvertInstruction_ToUnderlying*>(to, isLiftedToNull));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NumericConvertInstruction_ToUnderlying::NumericConvertInstruction_ToUnderlying() {}
