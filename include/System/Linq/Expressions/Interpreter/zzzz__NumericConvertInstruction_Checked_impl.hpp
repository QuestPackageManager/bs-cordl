#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NumericConvertInstruction_Checked.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NumericConvertInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NumericConvertInstruction_Checked_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NumericConvertInstruction_Checked.get_InstructionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NumericConvertInstruction_Checked::*)()>(
    &::GlobalNamespace::NumericConvertInstruction_Checked::get_InstructionName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fb4ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NumericConvertInstruction_Checked*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::NumericConvertInstruction_Checked*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NumericConvertInstruction_Checked._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NumericConvertInstruction_Checked::*)(::System::TypeCode, ::System::TypeCode, bool)>(
    &::GlobalNamespace::NumericConvertInstruction_Checked::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fb5038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NumericConvertInstruction_Checked*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::TypeCode>(), ::i2c::type_of<::System::TypeCode>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NumericConvertInstruction_Checked.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::NumericConvertInstruction_Checked::*)(::System::Object*)>(
    &::GlobalNamespace::NumericConvertInstruction_Checked::Convert)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5fb5044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NumericConvertInstruction_Checked*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::NumericConvertInstruction_Checked*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NumericConvertInstruction_Checked.ConvertInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::NumericConvertInstruction_Checked::*)(int32_t)>(
    &::GlobalNamespace::NumericConvertInstruction_Checked::ConvertInt32)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5fb52bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NumericConvertInstruction_Checked*>(), { "ConvertInt32", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NumericConvertInstruction_Checked.ConvertInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::NumericConvertInstruction_Checked::*)(int64_t)>(
    &::GlobalNamespace::NumericConvertInstruction_Checked::ConvertInt64)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x5fb54dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NumericConvertInstruction_Checked*>(), { "ConvertInt64", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NumericConvertInstruction_Checked.ConvertUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::NumericConvertInstruction_Checked::*)(uint64_t)>(
    &::GlobalNamespace::NumericConvertInstruction_Checked::ConvertUInt64)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5fb574c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NumericConvertInstruction_Checked*>(), { "ConvertUInt64", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NumericConvertInstruction_Checked.ConvertDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::NumericConvertInstruction_Checked::*)(double_t)>(
    &::GlobalNamespace::NumericConvertInstruction_Checked::ConvertDouble)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x5fb59ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NumericConvertInstruction_Checked*>(), { "ConvertDouble", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::NumericConvertInstruction_Checked::get_InstructionName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NumericConvertInstruction_Checked*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::NumericConvertInstruction_Checked::_ctor(::System::TypeCode from, ::System::TypeCode to, bool isLiftedToNull) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NumericConvertInstruction_Checked*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::TypeCode>(), ::i2c::type_of<::System::TypeCode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to, isLiftedToNull);
}
inline ::System::Object* GlobalNamespace::NumericConvertInstruction_Checked::Convert(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NumericConvertInstruction_Checked*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj);
}
inline ::System::Object* GlobalNamespace::NumericConvertInstruction_Checked::ConvertInt32(int32_t obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NumericConvertInstruction_Checked*>(), { "ConvertInt32", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj);
}
inline ::System::Object* GlobalNamespace::NumericConvertInstruction_Checked::ConvertInt64(int64_t obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NumericConvertInstruction_Checked*>(), { "ConvertInt64", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj);
}
inline ::System::Object* GlobalNamespace::NumericConvertInstruction_Checked::ConvertUInt64(uint64_t obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NumericConvertInstruction_Checked*>(), { "ConvertUInt64", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj);
}
inline ::System::Object* GlobalNamespace::NumericConvertInstruction_Checked::ConvertDouble(double_t obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NumericConvertInstruction_Checked*>(), { "ConvertDouble", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj);
}
inline ::GlobalNamespace::NumericConvertInstruction_Checked* GlobalNamespace::NumericConvertInstruction_Checked::New_ctor(::System::TypeCode from, ::System::TypeCode to, bool isLiftedToNull) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NumericConvertInstruction_Checked*>(from, to, isLiftedToNull));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NumericConvertInstruction_Checked::NumericConvertInstruction_Checked() {}
