#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\Length.hpp"
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_impl.hpp"
#include "Unity/Properties/zzzz__Property_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__LengthUnit_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__LengthUnit_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Length_Unit::Length_Unit(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Length_Unit::Length_Unit() {}
constexpr ::UnityEngine::UIElements::Length_Unit UnityEngine::UIElements::Length_Unit::Pixel{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::Length_Unit UnityEngine::UIElements::Length_Unit::Percent{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::Length_Unit UnityEngine::UIElements::Length_Unit::Auto{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::Length_Unit UnityEngine::UIElements::Length_Unit::None{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::UIElements::Length.Percent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (*)(float_t)>(&::UnityEngine::UIElements::Length::Percent)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6c91220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length>(), { "Percent", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Length.Auto
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (*)()>(&::UnityEngine::UIElements::Length::Auto)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c91268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length>(), { "Auto", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Length.None
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (*)()>(&::UnityEngine::UIElements::Length::None)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c91294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length>(), { "None", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Length.get_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::Length::*)()>(&::UnityEngine::UIElements::Length::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c9129c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length>(), { "get_value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Length.set_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Length::*)(float_t)>(&::UnityEngine::UIElements::Length::set_value)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c912a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length>(), { "set_value", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Length.get_unit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::LengthUnit (::UnityEngine::UIElements::Length::*)()>(&::UnityEngine::UIElements::Length::get_unit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c912c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length>(), { "get_unit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Length.set_unit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Length::*)(::UnityEngine::UIElements::LengthUnit)>(&::UnityEngine::UIElements::Length::set_unit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c912cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length>(), { "set_unit", {}, { ::i2c::type_of<::UnityEngine::UIElements::LengthUnit>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Length.IsAuto
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::Length::*)()>(&::UnityEngine::UIElements::Length::IsAuto)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c912d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length>(), { "IsAuto", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Length.IsNone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::Length::*)()>(&::UnityEngine::UIElements::Length::IsNone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c912e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length>(), { "IsNone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Length._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Length::*)(float_t)>(&::UnityEngine::UIElements::Length::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6c912f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Length._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Length::*)(float_t, ::UnityEngine::UIElements::LengthUnit)>(&::UnityEngine::UIElements::Length::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6c91244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::UIElements::LengthUnit>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Length._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Length::*)(float_t, ::UnityEngine::UIElements::Length_Unit)>(&::UnityEngine::UIElements::Length::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6c91270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::UIElements::Length_Unit>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Length.op_Implicit___UnityEngine__UIElements__Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (*)(float_t)>(&::UnityEngine::UIElements::Length::op_Implicit___UnityEngine__UIElements__Length)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c91318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length>(), { "op_Implicit", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Length.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length)>(&::UnityEngine::UIElements::Length::op_Equality)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c8e2e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::Length>(), ::i2c::type_of<::UnityEngine::UIElements::Length>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Length.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length)>(&::UnityEngine::UIElements::Length::op_Inequality)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c91338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::UIElements::Length>(), ::i2c::type_of<::UnityEngine::UIElements::Length>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Length.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::Length::*)(::UnityEngine::UIElements::Length)>(&::UnityEngine::UIElements::Length::Equals)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6c91358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::Length>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Length.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::Length::*)(::System::Object*)>(&::UnityEngine::UIElements::Length::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c9137c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length>(), { ::i2c::class_of<::UnityEngine::UIElements::Length>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Length.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::Length::*)()>(&::UnityEngine::UIElements::Length::GetHashCode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6c8e6ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length>(), { ::i2c::class_of<::UnityEngine::UIElements::Length>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Length.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::Length::*)()>(&::UnityEngine::UIElements::Length::ToString)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x6c91410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length>(), { ::i2c::class_of<::UnityEngine::UIElements::Length>(), 3 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::Length::Percent(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length>(), { "Percent", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::Length::Auto() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length>(), { "Auto", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(nullptr, ___internal_method);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::Length::None() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length>(), { "None", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(nullptr, ___internal_method);
}
inline float_t UnityEngine::UIElements::Length::get_value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length>(), { "get_value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::Length::set_value(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length>(), { "set_value", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::LengthUnit UnityEngine::UIElements::Length::get_unit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length>(), { "get_unit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::LengthUnit>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::Length::set_unit(::UnityEngine::UIElements::LengthUnit value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length>(), { "set_unit", {}, { ::i2c::type_of<::UnityEngine::UIElements::LengthUnit>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::Length::IsAuto() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length>(), { "IsAuto", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::UIElements::Length::IsNone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length>(), { "IsNone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::Length::_ctor(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Length::_ctor(float_t value, ::UnityEngine::UIElements::LengthUnit unit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::UIElements::LengthUnit>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, unit);
}
inline void UnityEngine::UIElements::Length::_ctor(float_t value, ::UnityEngine::UIElements::Length_Unit unit) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::UIElements::Length_Unit>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, unit);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::Length::op_Implicit___UnityEngine__UIElements__Length(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length>(), { "op_Implicit", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::UIElements::Length::op_Equality(::UnityEngine::UIElements::Length lhs, ::UnityEngine::UIElements::Length rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::Length>(), ::i2c::type_of<::UnityEngine::UIElements::Length>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::UIElements::Length::op_Inequality(::UnityEngine::UIElements::Length lhs, ::UnityEngine::UIElements::Length rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::UIElements::Length>(), ::i2c::type_of<::UnityEngine::UIElements::Length>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::UIElements::Length::Equals(::UnityEngine::UIElements::Length other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::Length>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::UIElements::Length::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Length>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::UIElements::Length::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Length>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::Length::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Length>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::Length>"
constexpr UnityEngine::UIElements::Length::operator ::System::IEquatable_1<::UnityEngine::UIElements::Length>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::Length>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::Length>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::Length>* UnityEngine::UIElements::Length::i___System__IEquatable_1___UnityEngine__UIElements__Length_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::Length>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Value", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Unit", ty: "::UnityEngine::UIElements::Length_Unit", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Length::Length(float_t m_Value, ::UnityEngine::UIElements::Length_Unit m_Unit) noexcept {
  this->m_Value = m_Value;
  this->m_Unit = m_Unit;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Length::Length() {}
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_Length_ValueProperty.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::PropertyBag_Length_ValueProperty::*)()>(
    &::UnityEngine::UIElements::PropertyBag_Length_ValueProperty::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c917b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Length_ValueProperty*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Length_ValueProperty*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_Length_ValueProperty.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::PropertyBag_Length_ValueProperty::*)()>(
    &::UnityEngine::UIElements::PropertyBag_Length_ValueProperty::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c917c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Length_ValueProperty*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Length_ValueProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_Length_ValueProperty.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::PropertyBag_Length_ValueProperty::*)(::by_ref<::UnityEngine::UIElements::Length>)>(
    &::UnityEngine::UIElements::PropertyBag_Length_ValueProperty::GetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c917c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Length_ValueProperty*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Length_ValueProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_Length_ValueProperty.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PropertyBag_Length_ValueProperty::*)(::by_ref<::UnityEngine::UIElements::Length>, float_t)>(
    &::UnityEngine::UIElements::PropertyBag_Length_ValueProperty::SetValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c917d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Length_ValueProperty*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Length_ValueProperty*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_Length_ValueProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PropertyBag_Length_ValueProperty::*)()>(&::UnityEngine::UIElements::PropertyBag_Length_ValueProperty::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c916f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Length_ValueProperty*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::UIElements::PropertyBag_Length_ValueProperty::__cordl_internal_get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr ::StringW const& UnityEngine::UIElements::PropertyBag_Length_ValueProperty::__cordl_internal_get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr void UnityEngine::UIElements::PropertyBag_Length_ValueProperty::__cordl_internal_set__Name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Name_k__BackingField = value;
}
constexpr bool& UnityEngine::UIElements::PropertyBag_Length_ValueProperty::__cordl_internal_get__IsReadOnly_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsReadOnly_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::PropertyBag_Length_ValueProperty::__cordl_internal_get__IsReadOnly_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsReadOnly_k__BackingField;
}
constexpr void UnityEngine::UIElements::PropertyBag_Length_ValueProperty::__cordl_internal_set__IsReadOnly_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsReadOnly_k__BackingField = value;
}
inline ::StringW UnityEngine::UIElements::PropertyBag_Length_ValueProperty::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Length_ValueProperty*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::PropertyBag_Length_ValueProperty::get_IsReadOnly() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Length_ValueProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::PropertyBag_Length_ValueProperty::GetValue(::by_ref<::UnityEngine::UIElements::Length> container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Length_ValueProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, container);
}
inline void UnityEngine::UIElements::PropertyBag_Length_ValueProperty::SetValue(::by_ref<::UnityEngine::UIElements::Length> container, float_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Length_ValueProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
inline void UnityEngine::UIElements::PropertyBag_Length_ValueProperty::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Length_ValueProperty*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PropertyBag_Length_ValueProperty* UnityEngine::UIElements::PropertyBag_Length_ValueProperty::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PropertyBag_Length_ValueProperty*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PropertyBag_Length_ValueProperty::PropertyBag_Length_ValueProperty() {}
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_Length_UnitProperty.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::PropertyBag_Length_UnitProperty::*)()>(
    &::UnityEngine::UIElements::PropertyBag_Length_UnitProperty::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c917f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Length_UnitProperty*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Length_UnitProperty*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_Length_UnitProperty.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::PropertyBag_Length_UnitProperty::*)()>(
    &::UnityEngine::UIElements::PropertyBag_Length_UnitProperty::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c917f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Length_UnitProperty*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Length_UnitProperty*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_Length_UnitProperty.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::LengthUnit (::UnityEngine::UIElements::PropertyBag_Length_UnitProperty::*)(
    ::by_ref<::UnityEngine::UIElements::Length>)>(&::UnityEngine::UIElements::PropertyBag_Length_UnitProperty::GetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c91800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Length_UnitProperty*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Length_UnitProperty*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_Length_UnitProperty.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PropertyBag_Length_UnitProperty::*)(
    ::by_ref<::UnityEngine::UIElements::Length>, ::UnityEngine::UIElements::LengthUnit)>(&::UnityEngine::UIElements::PropertyBag_Length_UnitProperty::SetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c91808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Length_UnitProperty*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Length_UnitProperty*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropertyBag_Length_UnitProperty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PropertyBag_Length_UnitProperty::*)()>(&::UnityEngine::UIElements::PropertyBag_Length_UnitProperty::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c91754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Length_UnitProperty*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::UIElements::PropertyBag_Length_UnitProperty::__cordl_internal_get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr ::StringW const& UnityEngine::UIElements::PropertyBag_Length_UnitProperty::__cordl_internal_get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr void UnityEngine::UIElements::PropertyBag_Length_UnitProperty::__cordl_internal_set__Name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Name_k__BackingField = value;
}
constexpr bool& UnityEngine::UIElements::PropertyBag_Length_UnitProperty::__cordl_internal_get__IsReadOnly_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsReadOnly_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::PropertyBag_Length_UnitProperty::__cordl_internal_get__IsReadOnly_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsReadOnly_k__BackingField;
}
constexpr void UnityEngine::UIElements::PropertyBag_Length_UnitProperty::__cordl_internal_set__IsReadOnly_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsReadOnly_k__BackingField = value;
}
inline ::StringW UnityEngine::UIElements::PropertyBag_Length_UnitProperty::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Length_UnitProperty*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::PropertyBag_Length_UnitProperty::get_IsReadOnly() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Length_UnitProperty*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::LengthUnit UnityEngine::UIElements::PropertyBag_Length_UnitProperty::GetValue(::by_ref<::UnityEngine::UIElements::Length> container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Length_UnitProperty*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::LengthUnit>(this, ___internal_method, container);
}
inline void UnityEngine::UIElements::PropertyBag_Length_UnitProperty::SetValue(::by_ref<::UnityEngine::UIElements::Length> container, ::UnityEngine::UIElements::LengthUnit value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Length_UnitProperty*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
inline void UnityEngine::UIElements::PropertyBag_Length_UnitProperty::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropertyBag_Length_UnitProperty*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PropertyBag_Length_UnitProperty* UnityEngine::UIElements::PropertyBag_Length_UnitProperty::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PropertyBag_Length_UnitProperty*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PropertyBag_Length_UnitProperty::PropertyBag_Length_UnitProperty() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Length_PropertyBag._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Length_PropertyBag::*)()>(&::UnityEngine::UIElements::Length_PropertyBag::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6c915dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length_PropertyBag*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Length_PropertyBag::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Length_PropertyBag*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Length_PropertyBag* UnityEngine::UIElements::Length_PropertyBag::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Length_PropertyBag*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Length_PropertyBag::Length_PropertyBag() {}
