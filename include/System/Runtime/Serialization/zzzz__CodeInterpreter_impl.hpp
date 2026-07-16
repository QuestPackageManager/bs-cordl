#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/CodeInterpreter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__CodeInterpreter_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::CodeInterpreter.ConvertValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Object*, ::System::Type*, ::System::Type*)>(&::System::Runtime::Serialization::CodeInterpreter::ConvertValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61765bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CodeInterpreter*>(),
                                                             { "ConvertValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CodeInterpreter.CanConvert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::TypeCode)>(&::System::Runtime::Serialization::CodeInterpreter::CanConvert)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x617681c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CodeInterpreter*>(), { "CanConvert", {}, { ::i2c::type_of<::System::TypeCode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CodeInterpreter.InternalConvert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Object*, ::System::Type*, ::System::Type*, bool)>(
    &::System::Runtime::Serialization::CodeInterpreter::InternalConvert)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x61765c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CodeInterpreter*>(),
                            { "InternalConvert", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CodeInterpreter.GetMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Reflection::MemberInfo*, ::System::Object*)>(&::System::Runtime::Serialization::CodeInterpreter::GetMember)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x617682c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CodeInterpreter*>(),
                                                             { "GetMember", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CodeInterpreter.SetMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Reflection::MemberInfo*, ::System::Object*, ::System::Object*)>(
    &::System::Runtime::Serialization::CodeInterpreter::SetMember)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6176928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CodeInterpreter*>(),
                                         { "SetMember", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline ::System::Object* System::Runtime::Serialization::CodeInterpreter::ConvertValue(::System::Object* arg, ::System::Type* source, ::System::Type* target) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CodeInterpreter*>(),
                                                           { "ConvertValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, arg, source, target);
}
inline bool System::Runtime::Serialization::CodeInterpreter::CanConvert(::System::TypeCode typeCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CodeInterpreter*>(), { "CanConvert", {}, { ::i2c::type_of<::System::TypeCode>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, typeCode);
}
inline ::System::Object* System::Runtime::Serialization::CodeInterpreter::InternalConvert(::System::Object* arg, ::System::Type* source, ::System::Type* target, bool isAddress) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CodeInterpreter*>(),
                          { "InternalConvert", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, arg, source, target, isAddress);
}
inline ::System::Object* System::Runtime::Serialization::CodeInterpreter::GetMember(::System::Reflection::MemberInfo* memberInfo, ::System::Object* instance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CodeInterpreter*>(),
                                                           { "GetMember", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, memberInfo, instance);
}
inline void System::Runtime::Serialization::CodeInterpreter::SetMember(::System::Reflection::MemberInfo* memberInfo, ::System::Object* instance, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CodeInterpreter*>(),
                                              { "SetMember", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, memberInfo, instance, value);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::CodeInterpreter::CodeInterpreter() {}
