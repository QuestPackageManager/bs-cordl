#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Angle.hpp"
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_impl.hpp"
#include "Unity/Properties/zzzz__Property_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__AngleUnit_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Angle_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__AngleUnit_def.hpp"
#include "UnityEngine/UIElements/zzzz__Angle_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Angle_Unit::Angle_Unit(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Angle_Unit::Angle_Unit() {}
constexpr ::UnityEngine::UIElements::Angle_Unit UnityEngine::UIElements::Angle_Unit::Degree{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::Angle_Unit UnityEngine::UIElements::Angle_Unit::Gradian{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::Angle_Unit UnityEngine::UIElements::Angle_Unit::Radian{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::Angle_Unit UnityEngine::UIElements::Angle_Unit::Turn{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::UIElements::Angle_Unit UnityEngine::UIElements::Angle_Unit::None{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::UnityEngine::UIElements::Angle.None
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Angle (*)()>(&::UnityEngine::UIElements::Angle::None)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dd6dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Angle>(), { "None", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Angle.get_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::Angle::*)()>(&::UnityEngine::UIElements::Angle::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dd6dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Angle>(), { "get_value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Angle.set_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Angle::*)(float_t)>(&::UnityEngine::UIElements::Angle::set_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dd6de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Angle>(), { "set_value", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Angle.get_unit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::AngleUnit (::UnityEngine::UIElements::Angle::*)()>(&::UnityEngine::UIElements::Angle::get_unit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dd6de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Angle>(), { "get_unit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Angle.set_unit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Angle::*)(::UnityEngine::UIElements::AngleUnit)>(&::UnityEngine::UIElements::Angle::set_unit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dd6df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Angle>(), { "set_unit", {}, { ::i2c::type_of<::UnityEngine::UIElements::AngleUnit>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Angle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Angle::*)(float_t, ::UnityEngine::UIElements::AngleUnit)>(&::UnityEngine::UIElements::Angle::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6dd6df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Angle>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::UIElements::AngleUnit>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Angle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Angle::*)(float_t, ::UnityEngine::UIElements::Angle_Unit)>(&::UnityEngine::UIElements::Angle::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6dd6dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Angle>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::UIElements::Angle_Unit>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Angle.ToDegrees
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::Angle::*)()>(&::UnityEngine::UIElements::Angle::ToDegrees)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6dd6e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Angle>(), { "ToDegrees", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Angle.op_Implicit___UnityEngine__UIElements__Angle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Angle (*)(float_t)>(&::UnityEngine::UIElements::Angle::op_Implicit___UnityEngine__UIElements__Angle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dd6e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Angle>(), { "op_Implicit", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Angle.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::Angle, ::UnityEngine::UIElements::Angle)>(&::UnityEngine::UIElements::Angle::op_Equality)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6dd6e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Angle>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::Angle>(), ::i2c::type_of<::UnityEngine::UIElements::Angle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Angle.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::Angle, ::UnityEngine::UIElements::Angle)>(&::UnityEngine::UIElements::Angle::op_Inequality)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6dd6eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Angle>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::UIElements::Angle>(), ::i2c::type_of<::UnityEngine::UIElements::Angle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Angle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::Angle::*)(::UnityEngine::UIElements::Angle)>(&::UnityEngine::UIElements::Angle::Equals)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6dd6ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Angle>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::Angle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Angle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::Angle::*)(::System::Object*)>(&::UnityEngine::UIElements::Angle::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6dd6ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Angle>(), { ::i2c::class_of<::UnityEngine::UIElements::Angle>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Angle.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::Angle::*)()>(&::UnityEngine::UIElements::Angle::GetHashCode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6dd6f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Angle>(), { ::i2c::class_of<::UnityEngine::UIElements::Angle>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Angle.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::Angle::*)()>(&::UnityEngine::UIElements::Angle::ToString)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x6dd6fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Angle>(), { ::i2c::class_of<::UnityEngine::UIElements::Angle>(), 3 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::Angle UnityEngine::UIElements::Angle::None() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Angle>(), { "None", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Angle>(nullptr, ___internal_method);
}
inline float_t UnityEngine::UIElements::Angle::get_value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Angle>(), { "get_value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::Angle::set_value(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Angle>(), { "set_value", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::AngleUnit UnityEngine::UIElements::Angle::get_unit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Angle>(), { "get_unit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::AngleUnit>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::Angle::set_unit(::UnityEngine::UIElements::AngleUnit value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Angle>(), { "set_unit", {}, { ::i2c::type_of<::UnityEngine::UIElements::AngleUnit>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Angle::_ctor(float_t value, ::UnityEngine::UIElements::AngleUnit unit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Angle>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::UIElements::AngleUnit>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, unit);
}
inline void UnityEngine::UIElements::Angle::_ctor(float_t value, ::UnityEngine::UIElements::Angle_Unit unit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Angle>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::UIElements::Angle_Unit>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, unit);
}
inline float_t UnityEngine::UIElements::Angle::ToDegrees() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Angle>(), { "ToDegrees", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Angle UnityEngine::UIElements::Angle::op_Implicit___UnityEngine__UIElements__Angle(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Angle>(), { "op_Implicit", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Angle>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::UIElements::Angle::op_Equality(::UnityEngine::UIElements::Angle lhs, ::UnityEngine::UIElements::Angle rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Angle>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::Angle>(), ::i2c::type_of<::UnityEngine::UIElements::Angle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::UIElements::Angle::op_Inequality(::UnityEngine::UIElements::Angle lhs, ::UnityEngine::UIElements::Angle rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Angle>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::UIElements::Angle>(), ::i2c::type_of<::UnityEngine::UIElements::Angle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::UIElements::Angle::Equals(::UnityEngine::UIElements::Angle other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Angle>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::Angle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::UIElements::Angle::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Angle>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::UIElements::Angle::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Angle>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::Angle::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Angle>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::Angle>"
constexpr UnityEngine::UIElements::Angle::operator ::System::IEquatable_1<::UnityEngine::UIElements::Angle>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::Angle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::Angle>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::Angle>* UnityEngine::UIElements::Angle::i___System__IEquatable_1___UnityEngine__UIElements__Angle_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::Angle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Value", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Unit", ty: "::UnityEngine::UIElements::Angle_Unit", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::UIElements::Angle::Angle(float_t m_Value, ::UnityEngine::UIElements::Angle_Unit m_Unit) noexcept {
  this->m_Value = m_Value;
  this->m_Unit = m_Unit;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Angle::Angle() {}
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty::*)()>(
    &::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dd737c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty::*)()>(
    &::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dd7384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty::*)(::by_ref<::UnityEngine::UIElements::Angle>)>(
    &::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty::GetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dd738c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty::*)(::by_ref<::UnityEngine::UIElements::Angle>, float_t)>(
    &::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty::SetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dd7394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty::*)()>(&::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6dd72b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::UIElements::PropertyBag_Angle_ValueProperty::__cordl_internal_get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr ::StringW const& UnityEngine::UIElements::PropertyBag_Angle_ValueProperty::__cordl_internal_get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr void UnityEngine::UIElements::PropertyBag_Angle_ValueProperty::__cordl_internal_set__Name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Name_k__BackingField = value;
}
constexpr bool& UnityEngine::UIElements::PropertyBag_Angle_ValueProperty::__cordl_internal_get__IsReadOnly_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsReadOnly_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::PropertyBag_Angle_ValueProperty::__cordl_internal_get__IsReadOnly_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsReadOnly_k__BackingField;
}
constexpr void UnityEngine::UIElements::PropertyBag_Angle_ValueProperty::__cordl_internal_set__IsReadOnly_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsReadOnly_k__BackingField = value;
}
inline ::StringW UnityEngine::UIElements::PropertyBag_Angle_ValueProperty::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::PropertyBag_Angle_ValueProperty::get_IsReadOnly() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::PropertyBag_Angle_ValueProperty::GetValue(::by_ref<::UnityEngine::UIElements::Angle> container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, container);
}
inline void UnityEngine::UIElements::PropertyBag_Angle_ValueProperty::SetValue(::by_ref<::UnityEngine::UIElements::Angle> container, float_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
inline void UnityEngine::UIElements::PropertyBag_Angle_ValueProperty::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty* UnityEngine::UIElements::PropertyBag_Angle_ValueProperty::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PropertyBag_Angle_ValueProperty::PropertyBag_Angle_ValueProperty() {}
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty::*)()>(
    &::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dd739c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty::*)()>(
    &::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dd73a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::AngleUnit (::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty::*)(::by_ref<::UnityEngine::UIElements::Angle>)>(
    &::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty::GetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dd73ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty::*)(
    ::by_ref<::UnityEngine::UIElements::Angle>, ::UnityEngine::UIElements::AngleUnit)>(&::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty::SetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dd73b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty::*)()>(&::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6dd7318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::UIElements::PropertyBag_Angle_UnitProperty::__cordl_internal_get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr ::StringW const& UnityEngine::UIElements::PropertyBag_Angle_UnitProperty::__cordl_internal_get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr void UnityEngine::UIElements::PropertyBag_Angle_UnitProperty::__cordl_internal_set__Name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Name_k__BackingField = value;
}
constexpr bool& UnityEngine::UIElements::PropertyBag_Angle_UnitProperty::__cordl_internal_get__IsReadOnly_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsReadOnly_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::PropertyBag_Angle_UnitProperty::__cordl_internal_get__IsReadOnly_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsReadOnly_k__BackingField;
}
constexpr void UnityEngine::UIElements::PropertyBag_Angle_UnitProperty::__cordl_internal_set__IsReadOnly_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsReadOnly_k__BackingField = value;
}
inline ::StringW UnityEngine::UIElements::PropertyBag_Angle_UnitProperty::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::PropertyBag_Angle_UnitProperty::get_IsReadOnly() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::AngleUnit UnityEngine::UIElements::PropertyBag_Angle_UnitProperty::GetValue(::by_ref<::UnityEngine::UIElements::Angle> container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::AngleUnit>(this, ___internal_method, container);
}
inline void UnityEngine::UIElements::PropertyBag_Angle_UnitProperty::SetValue(::by_ref<::UnityEngine::UIElements::Angle> container, ::UnityEngine::UIElements::AngleUnit value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
inline void UnityEngine::UIElements::PropertyBag_Angle_UnitProperty::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty* UnityEngine::UIElements::PropertyBag_Angle_UnitProperty::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PropertyBag_Angle_UnitProperty::PropertyBag_Angle_UnitProperty() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Angle_PropertyBag._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Angle_PropertyBag::*)()>(&::UnityEngine::UIElements::Angle_PropertyBag::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6dd71a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Angle_PropertyBag*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Angle_PropertyBag::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Angle_PropertyBag*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Angle_PropertyBag* UnityEngine::UIElements::Angle_PropertyBag::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Angle_PropertyBag*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Angle_PropertyBag::Angle_PropertyBag() {}
