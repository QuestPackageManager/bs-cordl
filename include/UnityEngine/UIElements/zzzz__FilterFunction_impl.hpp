#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FilterFunction.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__FixedBuffer4_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__FilterFunctionType_impl.hpp"
#include "UnityEngine/UIElements/zzzz__FilterParameter_impl.hpp"
#include "UnityEngine/UIElements/zzzz__FilterFunction_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__FixedBuffer4_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__FilterFunctionDefinition_def.hpp"
#include "UnityEngine/UIElements/zzzz__FilterFunctionType_def.hpp"
#include "UnityEngine/UIElements/zzzz__FilterParameter_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::FilterFunction.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::FilterFunctionType (::UnityEngine::UIElements::FilterFunction::*)()>(
    &::UnityEngine::UIElements::FilterFunction::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x727cfac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(), { "get_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterFunction.set_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FilterFunction::*)(::UnityEngine::UIElements::FilterFunctionType)>(
    &::UnityEngine::UIElements::FilterFunction::set_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x727cfb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(), { "set_type", {}, { ::i2c::type_of<::UnityEngine::UIElements::FilterFunctionType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterFunction.get_parameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Layout::FixedBuffer4_1<::UnityEngine::UIElements::FilterParameter> (::UnityEngine::UIElements::FilterFunction::*)()>(
    &::UnityEngine::UIElements::FilterFunction::get_parameters)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x727cfbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(), { "get_parameters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterFunction.get_parameterCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::FilterFunction::*)()>(&::UnityEngine::UIElements::FilterFunction::get_parameterCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x727cfcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(), { "get_parameterCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterFunction.get_customDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> (::UnityEngine::UIElements::FilterFunction::*)()>(
    &::UnityEngine::UIElements::FilterFunction::get_customDefinition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x727cfd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(), { "get_customDefinition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterFunction.set_customDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FilterFunction::*)(::UnityEngine::UIElements::FilterFunctionDefinition*)>(
    &::UnityEngine::UIElements::FilterFunction::set_customDefinition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x727cfdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(), { "set_customDefinition", {}, { ::i2c::type_of<::UnityEngine::UIElements::FilterFunctionDefinition*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterFunction.AddParameter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FilterFunction::*)(::UnityEngine::UIElements::FilterParameter)>(
    &::UnityEngine::UIElements::FilterFunction::AddParameter)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x727cfe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(), { "AddParameter", {}, { ::i2c::type_of<::UnityEngine::UIElements::FilterParameter>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterFunction.ClearParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FilterFunction::*)()>(&::UnityEngine::UIElements::FilterFunction::ClearParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x727d120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(), { "ClearParameters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterFunction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FilterFunction::*)(
    ::UnityEngine::UIElements::FilterFunctionType, ::UnityEngine::UIElements::Layout::FixedBuffer4_1<::UnityEngine::UIElements::FilterParameter>, int32_t)>(
    &::UnityEngine::UIElements::FilterFunction::_ctor)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x727d128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::UIElements::FilterFunctionType>(),
                                                    ::i2c::type_of<::UnityEngine::UIElements::Layout::FixedBuffer4_1<::UnityEngine::UIElements::FilterParameter>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterFunction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FilterFunction::*)(
    ::UnityEngine::UIElements::FilterFunctionDefinition*, ::UnityEngine::UIElements::Layout::FixedBuffer4_1<::UnityEngine::UIElements::FilterParameter>, int32_t)>(
    &::UnityEngine::UIElements::FilterFunction::_ctor)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0x727d32c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::UIElements::FilterFunctionDefinition*>(),
                                                    ::i2c::type_of<::UnityEngine::UIElements::Layout::FixedBuffer4_1<::UnityEngine::UIElements::FilterParameter>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterFunction.GetDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> (::UnityEngine::UIElements::FilterFunction::*)()>(
    &::UnityEngine::UIElements::FilterFunction::GetDefinition)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x727d30c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(), { "GetDefinition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterFunction.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::FilterFunction, ::UnityEngine::UIElements::FilterFunction)>(
    &::UnityEngine::UIElements::FilterFunction::op_Equality)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x727d8a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(),
                                                { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::FilterFunction>(), ::i2c::type_of<::UnityEngine::UIElements::FilterFunction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterFunction.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::FilterFunction, ::UnityEngine::UIElements::FilterFunction)>(
    &::UnityEngine::UIElements::FilterFunction::op_Inequality)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x727d9c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(),
                                         { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::UIElements::FilterFunction>(), ::i2c::type_of<::UnityEngine::UIElements::FilterFunction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterFunction.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::FilterFunction::*)(::UnityEngine::UIElements::FilterFunction)>(
    &::UnityEngine::UIElements::FilterFunction::Equals)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x727da10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::FilterFunction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterFunction.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::FilterFunction::*)(::System::Object*)>(&::UnityEngine::UIElements::FilterFunction::Equals)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x727da54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(), { ::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterFunction.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::FilterFunction::*)()>(&::UnityEngine::UIElements::FilterFunction::GetHashCode)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x727daf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(), { ::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterFunction.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::FilterFunction::*)()>(&::UnityEngine::UIElements::FilterFunction::ToString)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x727dbe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(), { ::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(), 3 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::FilterFunctionType UnityEngine::UIElements::FilterFunction::get_type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(), { "get_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FilterFunctionType>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::FilterFunction::set_type(::UnityEngine::UIElements::FilterFunctionType value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(), { "set_type", {}, { ::i2c::type_of<::UnityEngine::UIElements::FilterFunctionType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::Layout::FixedBuffer4_1<::UnityEngine::UIElements::FilterParameter> UnityEngine::UIElements::FilterFunction::get_parameters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(), { "get_parameters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Layout::FixedBuffer4_1<::UnityEngine::UIElements::FilterParameter>>(*this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::FilterFunction::get_parameterCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(), { "get_parameterCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> UnityEngine::UIElements::FilterFunction::get_customDefinition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(), { "get_customDefinition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition>>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::FilterFunction::set_customDefinition(::UnityEngine::UIElements::FilterFunctionDefinition* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(),
                                                                                         { "set_customDefinition", {}, { ::i2c::type_of<::UnityEngine::UIElements::FilterFunctionDefinition*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::FilterFunction::AddParameter(::UnityEngine::UIElements::FilterParameter p) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(), { "AddParameter", {}, { ::i2c::type_of<::UnityEngine::UIElements::FilterParameter>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, p);
}
inline void UnityEngine::UIElements::FilterFunction::ClearParameters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(), { "ClearParameters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::FilterFunction::_ctor(::UnityEngine::UIElements::FilterFunctionType type,
                                                           ::UnityEngine::UIElements::Layout::FixedBuffer4_1<::UnityEngine::UIElements::FilterParameter> parameters, int32_t paramCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::UIElements::FilterFunctionType>(),
                                                  ::i2c::type_of<::UnityEngine::UIElements::Layout::FixedBuffer4_1<::UnityEngine::UIElements::FilterParameter>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, type, parameters, paramCount);
}
inline void UnityEngine::UIElements::FilterFunction::_ctor(::UnityEngine::UIElements::FilterFunctionDefinition* customDefinition,
                                                           ::UnityEngine::UIElements::Layout::FixedBuffer4_1<::UnityEngine::UIElements::FilterParameter> parameters, int32_t paramCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::UIElements::FilterFunctionDefinition*>(),
                                                  ::i2c::type_of<::UnityEngine::UIElements::Layout::FixedBuffer4_1<::UnityEngine::UIElements::FilterParameter>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, customDefinition, parameters, paramCount);
}
inline ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> UnityEngine::UIElements::FilterFunction::GetDefinition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(), { "GetDefinition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition>>(*this, ___internal_method);
}
inline bool UnityEngine::UIElements::FilterFunction::op_Equality(::UnityEngine::UIElements::FilterFunction lhs, ::UnityEngine::UIElements::FilterFunction rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(),
                                              { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::FilterFunction>(), ::i2c::type_of<::UnityEngine::UIElements::FilterFunction>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::UIElements::FilterFunction::op_Inequality(::UnityEngine::UIElements::FilterFunction lhs, ::UnityEngine::UIElements::FilterFunction rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(),
                                              { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::UIElements::FilterFunction>(), ::i2c::type_of<::UnityEngine::UIElements::FilterFunction>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::UIElements::FilterFunction::Equals(::UnityEngine::UIElements::FilterFunction other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::FilterFunction>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::UIElements::FilterFunction::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::UIElements::FilterFunction::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::FilterFunction::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::FilterFunction>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::FilterFunction>"
constexpr UnityEngine::UIElements::FilterFunction::operator ::System::IEquatable_1<::UnityEngine::UIElements::FilterFunction>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::FilterFunction>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::FilterFunction>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::FilterFunction>* UnityEngine::UIElements::FilterFunction::i___System__IEquatable_1___UnityEngine__UIElements__FilterFunction_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::FilterFunction>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Type", ty: "::UnityEngine::UIElements::FilterFunctionType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Parameters", ty:
// "::UnityEngine::UIElements::Layout::FixedBuffer4_1<::UnityEngine::UIElements::FilterParameter>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ParameterCount", ty:
// "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_CustomDefinition", ty: "::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition>", modifiers: "",
// def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::FilterFunction::FilterFunction(::UnityEngine::UIElements::FilterFunctionType m_Type,
                                                                    ::UnityEngine::UIElements::Layout::FixedBuffer4_1<::UnityEngine::UIElements::FilterParameter> m_Parameters,
                                                                    int32_t m_ParameterCount, ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> m_CustomDefinition) noexcept {
  this->m_Type = m_Type;
  this->m_Parameters = m_Parameters;
  this->m_ParameterCount = m_ParameterCount;
  this->m_CustomDefinition = m_CustomDefinition;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::FilterFunction::FilterFunction() {}
