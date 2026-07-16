#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/Dimension.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__Dimension_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__Dimension_def.hpp"
#include "UnityEngine/UIElements/zzzz__Angle_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "UnityEngine/UIElements/zzzz__TimeValue_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleSheets::Dimension_Unit::Dimension_Unit(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::Dimension_Unit::Dimension_Unit() {}
constexpr ::UnityEngine::UIElements::StyleSheets::Dimension_Unit UnityEngine::UIElements::StyleSheets::Dimension_Unit::Unitless{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::StyleSheets::Dimension_Unit UnityEngine::UIElements::StyleSheets::Dimension_Unit::Pixel{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::StyleSheets::Dimension_Unit UnityEngine::UIElements::StyleSheets::Dimension_Unit::Percent{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::StyleSheets::Dimension_Unit UnityEngine::UIElements::StyleSheets::Dimension_Unit::Second{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::UIElements::StyleSheets::Dimension_Unit UnityEngine::UIElements::StyleSheets::Dimension_Unit::Millisecond{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::UIElements::StyleSheets::Dimension_Unit UnityEngine::UIElements::StyleSheets::Dimension_Unit::Degree{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::UIElements::StyleSheets::Dimension_Unit UnityEngine::UIElements::StyleSheets::Dimension_Unit::Gradian{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::UIElements::StyleSheets::Dimension_Unit UnityEngine::UIElements::StyleSheets::Dimension_Unit::Radian{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::UIElements::StyleSheets::Dimension_Unit UnityEngine::UIElements::StyleSheets::Dimension_Unit::Turn{ static_cast<int32_t>(0x8) };
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Dimension._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StyleSheets::Dimension::*)(float_t, ::UnityEngine::UIElements::StyleSheets::Dimension_Unit)>(
    &::UnityEngine::UIElements::StyleSheets::Dimension::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6d0ee20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Dimension>(),
                                                             { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Dimension_Unit>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Dimension.ToLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (::UnityEngine::UIElements::StyleSheets::Dimension::*)()>(
    &::UnityEngine::UIElements::StyleSheets::Dimension::ToLength)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6d0ee2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Dimension>(), { "ToLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Dimension.ToTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::TimeValue (::UnityEngine::UIElements::StyleSheets::Dimension::*)()>(
    &::UnityEngine::UIElements::StyleSheets::Dimension::ToTime)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6d0ee60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Dimension>(), { "ToTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Dimension.ToAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Angle (::UnityEngine::UIElements::StyleSheets::Dimension::*)()>(
    &::UnityEngine::UIElements::StyleSheets::Dimension::ToAngle)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6d0ee74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Dimension>(), { "ToAngle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Dimension.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::StyleSheets::Dimension, ::UnityEngine::UIElements::StyleSheets::Dimension)>(
    &::UnityEngine::UIElements::StyleSheets::Dimension::op_Equality)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6d0eea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Dimension>(),
                            { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Dimension>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Dimension>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Dimension.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::Dimension::*)(::UnityEngine::UIElements::StyleSheets::Dimension)>(
    &::UnityEngine::UIElements::StyleSheets::Dimension::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6d0eec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Dimension>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Dimension>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Dimension.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::Dimension::*)(::System::Object*)>(&::UnityEngine::UIElements::StyleSheets::Dimension::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6d0eee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Dimension>(), { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Dimension>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Dimension.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::StyleSheets::Dimension::*)()>(&::UnityEngine::UIElements::StyleSheets::Dimension::GetHashCode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6d0ef6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Dimension>(), { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Dimension>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Dimension.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::StyleSheets::Dimension::*)()>(&::UnityEngine::UIElements::StyleSheets::Dimension::ToString)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6d0ef9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Dimension>(), { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Dimension>(), 3 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StyleSheets::Dimension::_ctor(float_t value, ::UnityEngine::UIElements::StyleSheets::Dimension_Unit unit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Dimension>(),
                                                           { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Dimension_Unit>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, unit);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::StyleSheets::Dimension::ToLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Dimension>(), { "ToLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::TimeValue UnityEngine::UIElements::StyleSheets::Dimension::ToTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Dimension>(), { "ToTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TimeValue>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Angle UnityEngine::UIElements::StyleSheets::Dimension::ToAngle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Dimension>(), { "ToAngle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Angle>(*this, ___internal_method);
}
inline bool UnityEngine::UIElements::StyleSheets::Dimension::op_Equality(::UnityEngine::UIElements::StyleSheets::Dimension lhs, ::UnityEngine::UIElements::StyleSheets::Dimension rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Dimension>(),
                          { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Dimension>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Dimension>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::UIElements::StyleSheets::Dimension::Equals(::UnityEngine::UIElements::StyleSheets::Dimension other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Dimension>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::Dimension>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::UIElements::StyleSheets::Dimension::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Dimension>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::UIElements::StyleSheets::Dimension::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Dimension>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::StyleSheets::Dimension::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::Dimension>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleSheets::Dimension>"
constexpr UnityEngine::UIElements::StyleSheets::Dimension::operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleSheets::Dimension>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::StyleSheets::Dimension>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleSheets::Dimension>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleSheets::Dimension>*
UnityEngine::UIElements::StyleSheets::Dimension::i___System__IEquatable_1___UnityEngine__UIElements__StyleSheets__Dimension_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::StyleSheets::Dimension>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "unit", ty: "::UnityEngine::UIElements::StyleSheets::Dimension_Unit", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "float_t", modifiers:
// "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleSheets::Dimension::Dimension(::UnityEngine::UIElements::StyleSheets::Dimension_Unit unit, float_t value) noexcept {
  this->unit = unit;
  this->value = value;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::Dimension::Dimension() {}
