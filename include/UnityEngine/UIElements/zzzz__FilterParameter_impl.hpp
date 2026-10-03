#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FilterParameter.hpp"
#include "UnityEngine/UIElements/zzzz__FilterParameterType_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/UIElements/zzzz__FilterParameter_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__FilterParameterType_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::FilterParameter.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::FilterParameterType (::UnityEngine::UIElements::FilterParameter::*)()>(
    &::UnityEngine::UIElements::FilterParameter::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x70b1d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterParameter>(), { "get_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterParameter.set_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FilterParameter::*)(::UnityEngine::UIElements::FilterParameterType)>(
    &::UnityEngine::UIElements::FilterParameter::set_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x70b1d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterParameter>(), { "set_type", {}, { ::i2c::type_of<::UnityEngine::UIElements::FilterParameterType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterParameter.get_floatValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::FilterParameter::*)()>(&::UnityEngine::UIElements::FilterParameter::get_floatValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x70b1d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterParameter>(), { "get_floatValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterParameter.set_floatValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FilterParameter::*)(float_t)>(&::UnityEngine::UIElements::FilterParameter::set_floatValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x70b1d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterParameter>(), { "set_floatValue", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterParameter.get_colorValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::UIElements::FilterParameter::*)()>(&::UnityEngine::UIElements::FilterParameter::get_colorValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x70b1d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterParameter>(), { "get_colorValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterParameter.set_colorValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::FilterParameter::*)(::UnityEngine::Color)>(&::UnityEngine::UIElements::FilterParameter::set_colorValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x70b1d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterParameter>(), { "set_colorValue", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterParameter.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::FilterParameter, ::UnityEngine::UIElements::FilterParameter)>(
    &::UnityEngine::UIElements::FilterParameter::op_Equality)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x70b1d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterParameter>(),
                                         { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::FilterParameter>(), ::i2c::type_of<::UnityEngine::UIElements::FilterParameter>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterParameter.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::FilterParameter, ::UnityEngine::UIElements::FilterParameter)>(
    &::UnityEngine::UIElements::FilterParameter::op_Inequality)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x70b1de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterParameter>(),
                                         { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::UIElements::FilterParameter>(), ::i2c::type_of<::UnityEngine::UIElements::FilterParameter>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterParameter.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::FilterParameter::*)(::System::Object*)>(&::UnityEngine::UIElements::FilterParameter::Equals)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x70b1e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterParameter>(), { ::i2c::class_of<::UnityEngine::UIElements::FilterParameter>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterParameter.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::FilterParameter::*)(::UnityEngine::UIElements::FilterParameter)>(
    &::UnityEngine::UIElements::FilterParameter::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x70b1f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterParameter>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::FilterParameter>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterParameter.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::FilterParameter::*)()>(&::UnityEngine::UIElements::FilterParameter::GetHashCode)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x70b1f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterParameter>(), { ::i2c::class_of<::UnityEngine::UIElements::FilterParameter>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FilterParameter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::FilterParameter::*)()>(&::UnityEngine::UIElements::FilterParameter::ToString)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x70b2028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterParameter>(), { ::i2c::class_of<::UnityEngine::UIElements::FilterParameter>(), 3 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::FilterParameterType UnityEngine::UIElements::FilterParameter::get_type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterParameter>(), { "get_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FilterParameterType>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::FilterParameter::set_type(::UnityEngine::UIElements::FilterParameterType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterParameter>(), { "set_type", {}, { ::i2c::type_of<::UnityEngine::UIElements::FilterParameterType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::FilterParameter::get_floatValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterParameter>(), { "get_floatValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::FilterParameter::set_floatValue(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterParameter>(), { "set_floatValue", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Color UnityEngine::UIElements::FilterParameter::get_colorValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterParameter>(), { "get_colorValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::FilterParameter::set_colorValue(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterParameter>(), { "set_colorValue", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::FilterParameter::op_Equality(::UnityEngine::UIElements::FilterParameter a, ::UnityEngine::UIElements::FilterParameter b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterParameter>(),
                                              { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::FilterParameter>(), ::i2c::type_of<::UnityEngine::UIElements::FilterParameter>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::UIElements::FilterParameter::op_Inequality(::UnityEngine::UIElements::FilterParameter a, ::UnityEngine::UIElements::FilterParameter b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterParameter>(),
                                       { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::UIElements::FilterParameter>(), ::i2c::type_of<::UnityEngine::UIElements::FilterParameter>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::UIElements::FilterParameter::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::FilterParameter>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool UnityEngine::UIElements::FilterParameter::Equals(::UnityEngine::UIElements::FilterParameter other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FilterParameter>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::FilterParameter>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t UnityEngine::UIElements::FilterParameter::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::FilterParameter>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::FilterParameter::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::FilterParameter>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::FilterParameter>"
constexpr UnityEngine::UIElements::FilterParameter::operator ::System::IEquatable_1<::UnityEngine::UIElements::FilterParameter>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::FilterParameter>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::FilterParameter>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::FilterParameter>* UnityEngine::UIElements::FilterParameter::i___System__IEquatable_1___UnityEngine__UIElements__FilterParameter_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::FilterParameter>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Type", ty: "::UnityEngine::UIElements::FilterParameterType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_FloatValue", ty:
// "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ColorValue", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::FilterParameter::FilterParameter(::UnityEngine::UIElements::FilterParameterType m_Type, float_t m_FloatValue, ::UnityEngine::Color m_ColorValue) noexcept {
  this->m_Type = m_Type;
  this->m_FloatValue = m_FloatValue;
  this->m_ColorValue = m_ColorValue;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::FilterParameter::FilterParameter() {}
