#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/NamedValue.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__PrimitiveValue_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__NamedValue_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__PrimitiveValue_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::NamedValue.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Utilities::NamedValue::*)()>(&::UnityEngine::InputSystem::Utilities::NamedValue::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x650046c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(), { "get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::NamedValue.set_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Utilities::NamedValue::*)(::StringW)>(&::UnityEngine::InputSystem::Utilities::NamedValue::set_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6500474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::NamedValue.get_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::PrimitiveValue (::UnityEngine::InputSystem::Utilities::NamedValue::*)()>(
    &::UnityEngine::InputSystem::Utilities::NamedValue::get_value)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x650047c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(), { "get_value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::NamedValue.set_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Utilities::NamedValue::*)(::UnityEngine::InputSystem::Utilities::PrimitiveValue)>(
    &::UnityEngine::InputSystem::Utilities::NamedValue::set_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6500488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(),
                                                                                           { "set_value", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::PrimitiveValue>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::NamedValue.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TypeCode (::UnityEngine::InputSystem::Utilities::NamedValue::*)()>(&::UnityEngine::InputSystem::Utilities::NamedValue::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6500490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(), { "get_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::NamedValue.ConvertTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::NamedValue (::UnityEngine::InputSystem::Utilities::NamedValue::*)(::System::TypeCode)>(
    &::UnityEngine::InputSystem::Utilities::NamedValue::ConvertTo)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6500498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(), { "ConvertTo", {}, { ::i2c::type_of<::System::TypeCode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::NamedValue.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Utilities::NamedValue::*)()>(&::UnityEngine::InputSystem::Utilities::NamedValue::ToString)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x65003b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(), { ::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::NamedValue.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::NamedValue::*)(::UnityEngine::InputSystem::Utilities::NamedValue)>(
    &::UnityEngine::InputSystem::Utilities::NamedValue::Equals)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x65006dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::NamedValue>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::NamedValue.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::NamedValue::*)(::System::Object*)>(&::UnityEngine::InputSystem::Utilities::NamedValue::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x650079c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(), { ::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::NamedValue.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::Utilities::NamedValue::*)()>(&::UnityEngine::InputSystem::Utilities::NamedValue::GetHashCode)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6500830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(), { ::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::NamedValue.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::Utilities::NamedValue, ::UnityEngine::InputSystem::Utilities::NamedValue)>(
    &::UnityEngine::InputSystem::Utilities::NamedValue::op_Equality)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x65008d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(),
                            { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::NamedValue>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::NamedValue>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::NamedValue.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::Utilities::NamedValue, ::UnityEngine::InputSystem::Utilities::NamedValue)>(
    &::UnityEngine::InputSystem::Utilities::NamedValue::op_Inequality)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6500904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(),
                            { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::NamedValue>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::NamedValue>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::NamedValue.ParseMultiple
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::InputSystem::Utilities::NamedValue> (*)(::StringW)>(&::UnityEngine::InputSystem::Utilities::NamedValue::ParseMultiple)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x65001c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(), { "ParseMultiple", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::NamedValue.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::NamedValue (*)(::StringW)>(&::UnityEngine::InputSystem::Utilities::NamedValue::Parse)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6500c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::NamedValue.ParseParameter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::NamedValue (*)(::StringW, ::by_ref<int32_t>)>(
    &::UnityEngine::InputSystem::Utilities::NamedValue::ParseParameter)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x6500938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(),
                                                                                           { "ParseParameter", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::NamedValue.ApplyToObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Utilities::NamedValue::*)(::System::Object*)>(
    &::UnityEngine::InputSystem::Utilities::NamedValue::ApplyToObject)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x6501004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(), { "ApplyToObject", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::InputSystem::Utilities::NamedValue::get_name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Utilities::NamedValue::set_name(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue UnityEngine::InputSystem::Utilities::NamedValue::get_value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(), { "get_value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::PrimitiveValue>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Utilities::NamedValue::set_value(::UnityEngine::InputSystem::Utilities::PrimitiveValue value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(),
                                                                                         { "set_value", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::PrimitiveValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::TypeCode UnityEngine::InputSystem::Utilities::NamedValue::get_type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(), { "get_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TypeCode>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::NamedValue UnityEngine::InputSystem::Utilities::NamedValue::ConvertTo(::System::TypeCode type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(), { "ConvertTo", {}, { ::i2c::type_of<::System::TypeCode>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::NamedValue>(*this, ___internal_method, type);
}
template <typename TValue> inline ::UnityEngine::InputSystem::Utilities::NamedValue UnityEngine::InputSystem::Utilities::NamedValue::From(::StringW name, TValue value) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(),
                                                                                              { "From", { ::i2c::class_of<TValue>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<TValue>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::NamedValue>(nullptr, ___internal_method, name, value);
}
inline ::StringW UnityEngine::InputSystem::Utilities::NamedValue::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Utilities::NamedValue::Equals(::UnityEngine::InputSystem::Utilities::NamedValue other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::NamedValue>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::InputSystem::Utilities::NamedValue::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::InputSystem::Utilities::NamedValue::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Utilities::NamedValue::op_Equality(::UnityEngine::InputSystem::Utilities::NamedValue left, ::UnityEngine::InputSystem::Utilities::NamedValue right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(),
                          { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::NamedValue>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::NamedValue>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool UnityEngine::InputSystem::Utilities::NamedValue::op_Inequality(::UnityEngine::InputSystem::Utilities::NamedValue left, ::UnityEngine::InputSystem::Utilities::NamedValue right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(),
                          { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::NamedValue>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::NamedValue>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline ::ArrayW<::UnityEngine::InputSystem::Utilities::NamedValue> UnityEngine::InputSystem::Utilities::NamedValue::ParseMultiple(::StringW parameterString) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(), { "ParseMultiple", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::InputSystem::Utilities::NamedValue>>(nullptr, ___internal_method, parameterString);
}
inline ::UnityEngine::InputSystem::Utilities::NamedValue UnityEngine::InputSystem::Utilities::NamedValue::Parse(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::NamedValue>(nullptr, ___internal_method, str);
}
inline ::UnityEngine::InputSystem::Utilities::NamedValue UnityEngine::InputSystem::Utilities::NamedValue::ParseParameter(::StringW parameterString, ::by_ref<int32_t> index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(),
                                                                                         { "ParseParameter", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::NamedValue>(nullptr, ___internal_method, parameterString, index);
}
inline void UnityEngine::InputSystem::Utilities::NamedValue::ApplyToObject(::System::Object* instance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(), { "ApplyToObject", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance);
}
template <typename TParameterList> inline void UnityEngine::InputSystem::Utilities::NamedValue::ApplyAllToObject(::System::Object* instance, TParameterList parameters) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::NamedValue>(),
                                                           { "ApplyAllToObject", { ::i2c::class_of<TParameterList>() }, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<TParameterList>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParameterList>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, instance, parameters);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::NamedValue>"
constexpr UnityEngine::InputSystem::Utilities::NamedValue::operator ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::NamedValue>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::NamedValue>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::NamedValue>"
constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::NamedValue>*
UnityEngine::InputSystem::Utilities::NamedValue::i___System__IEquatable_1___UnityEngine__InputSystem__Utilities__NamedValue_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::NamedValue>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_name_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_value_k__BackingField", ty:
// "::UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Utilities::NamedValue::NamedValue(::StringW _name_k__BackingField, ::UnityEngine::InputSystem::Utilities::PrimitiveValue _value_k__BackingField) noexcept {
  this->_name_k__BackingField = _name_k__BackingField;
  this->_value_k__BackingField = _value_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::NamedValue::NamedValue() {}
