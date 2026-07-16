#pragma once
// IWYU pragma private; include "System/Reflection/CustomAttributeTypedArgument.hpp"
#include "System/Reflection/zzzz__CustomAttributeTypedArgument_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::CustomAttributeTypedArgument._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::CustomAttributeTypedArgument::*)(::System::Object*)>(&::System::Reflection::CustomAttributeTypedArgument::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b83570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeTypedArgument>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeTypedArgument._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::CustomAttributeTypedArgument::*)(::System::Type*, ::System::Object*)>(
    &::System::Reflection::CustomAttributeTypedArgument::_ctor)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5b7c6a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeTypedArgument>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeTypedArgument.get_ArgumentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::CustomAttributeTypedArgument::*)()>(
    &::System::Reflection::CustomAttributeTypedArgument::get_ArgumentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b83678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeTypedArgument>(), { "get_ArgumentType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeTypedArgument.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Reflection::CustomAttributeTypedArgument::*)()>(&::System::Reflection::CustomAttributeTypedArgument::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b83680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeTypedArgument>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeTypedArgument.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::CustomAttributeTypedArgument::*)(::System::Object*)>(&::System::Reflection::CustomAttributeTypedArgument::Equals)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b83688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeTypedArgument>(), { ::i2c::class_of<::System::Reflection::CustomAttributeTypedArgument>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeTypedArgument.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Reflection::CustomAttributeTypedArgument::*)()>(&::System::Reflection::CustomAttributeTypedArgument::GetHashCode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b836fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeTypedArgument>(), { ::i2c::class_of<::System::Reflection::CustomAttributeTypedArgument>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeTypedArgument.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::CustomAttributeTypedArgument, ::System::Reflection::CustomAttributeTypedArgument)>(
    &::System::Reflection::CustomAttributeTypedArgument::op_Equality)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b83760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeTypedArgument>(),
                            { "op_Equality", {}, { ::i2c::type_of<::System::Reflection::CustomAttributeTypedArgument>(), ::i2c::type_of<::System::Reflection::CustomAttributeTypedArgument>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeTypedArgument.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::CustomAttributeTypedArgument, ::System::Reflection::CustomAttributeTypedArgument)>(
    &::System::Reflection::CustomAttributeTypedArgument::op_Inequality)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b837dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeTypedArgument>(),
                            { "op_Inequality", {}, { ::i2c::type_of<::System::Reflection::CustomAttributeTypedArgument>(), ::i2c::type_of<::System::Reflection::CustomAttributeTypedArgument>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeTypedArgument.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::CustomAttributeTypedArgument::*)()>(&::System::Reflection::CustomAttributeTypedArgument::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8385c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeTypedArgument>(), { ::i2c::class_of<::System::Reflection::CustomAttributeTypedArgument>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeTypedArgument.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::CustomAttributeTypedArgument::*)(bool)>(&::System::Reflection::CustomAttributeTypedArgument::ToString)> {
  constexpr static std::size_t size = 0x948;
  constexpr static std::size_t addrs = 0x5b82c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeTypedArgument>(), { "ToString", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeTypedArgument.CanonicalizeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Object*)>(&::System::Reflection::CustomAttributeTypedArgument::CanonicalizeValue)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b835f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeTypedArgument>(), { "CanonicalizeValue", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline void System::Reflection::CustomAttributeTypedArgument::_ctor(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeTypedArgument>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void System::Reflection::CustomAttributeTypedArgument::_ctor(::System::Type* argumentType, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeTypedArgument>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, argumentType, value);
}
inline ::System::Type* System::Reflection::CustomAttributeTypedArgument::get_ArgumentType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeTypedArgument>(), { "get_ArgumentType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(*this, ___internal_method);
}
inline ::System::Object* System::Reflection::CustomAttributeTypedArgument::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeTypedArgument>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline bool System::Reflection::CustomAttributeTypedArgument::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::CustomAttributeTypedArgument>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t System::Reflection::CustomAttributeTypedArgument::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::CustomAttributeTypedArgument>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool System::Reflection::CustomAttributeTypedArgument::op_Equality(::System::Reflection::CustomAttributeTypedArgument left, ::System::Reflection::CustomAttributeTypedArgument right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeTypedArgument>(),
                          { "op_Equality", {}, { ::i2c::type_of<::System::Reflection::CustomAttributeTypedArgument>(), ::i2c::type_of<::System::Reflection::CustomAttributeTypedArgument>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool System::Reflection::CustomAttributeTypedArgument::op_Inequality(::System::Reflection::CustomAttributeTypedArgument left, ::System::Reflection::CustomAttributeTypedArgument right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeTypedArgument>(),
                          { "op_Inequality", {}, { ::i2c::type_of<::System::Reflection::CustomAttributeTypedArgument>(), ::i2c::type_of<::System::Reflection::CustomAttributeTypedArgument>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline ::StringW System::Reflection::CustomAttributeTypedArgument::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::CustomAttributeTypedArgument>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW System::Reflection::CustomAttributeTypedArgument::ToString(bool typed) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeTypedArgument>(), { "ToString", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, typed);
}
inline ::System::Object* System::Reflection::CustomAttributeTypedArgument::CanonicalizeValue(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeTypedArgument>(), { "CanonicalizeValue", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_ArgumentType_k__BackingField", ty: "::System::Type*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Value_k__BackingField", ty: "::System::Object*",
// modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::CustomAttributeTypedArgument::CustomAttributeTypedArgument(::System::Type* _ArgumentType_k__BackingField, ::System::Object* _Value_k__BackingField) noexcept {
  this->_ArgumentType_k__BackingField = _ArgumentType_k__BackingField;
  this->_Value_k__BackingField = _Value_k__BackingField;
}
// Ctor Parameters []
constexpr ::System::Reflection::CustomAttributeTypedArgument::CustomAttributeTypedArgument() {}
