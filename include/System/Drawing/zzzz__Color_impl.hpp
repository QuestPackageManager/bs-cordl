#pragma once
// IWYU pragma private; include "System\Drawing\Color.hpp"
#include "System/Drawing/zzzz__Color_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Drawing::Color.get_R
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::System::Drawing::Color::*)()>(&::System::Drawing::Color::get_R)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x60d4d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Color>(), { "get_R", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::Color.get_G
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::System::Drawing::Color::*)()>(&::System::Drawing::Color::get_G)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x60d4d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Color>(), { "get_G", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::Color.get_B
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::System::Drawing::Color::*)()>(&::System::Drawing::Color::get_B)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60d4dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Color>(), { "get_B", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::Color.get_A
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::System::Drawing::Color::*)()>(&::System::Drawing::Color::get_A)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x60d4dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Color>(), { "get_A", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::Color.get_IsKnownColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Drawing::Color::*)()>(&::System::Drawing::Color::get_IsKnownColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60d4dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Color>(), { "get_IsKnownColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::Color.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Drawing::Color::*)()>(&::System::Drawing::Color::get_Name)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x60d4ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Color>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::Color.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Drawing::Color::*)()>(&::System::Drawing::Color::get_Value)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x60d4d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Color>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::Color.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Drawing::Color::*)()>(&::System::Drawing::Color::ToString)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x60d4e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Drawing::Color>(), { ::i2c::class_of<::System::Drawing::Color>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::Color.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Drawing::Color, ::System::Drawing::Color)>(&::System::Drawing::Color::op_Equality)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x60d50e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Drawing::Color>(), { "op_Equality", {}, { ::i2c::type_of<::System::Drawing::Color>(), ::i2c::type_of<::System::Drawing::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::Color.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Drawing::Color::*)(::System::Object*)>(&::System::Drawing::Color::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x60d5128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Drawing::Color>(), { ::i2c::class_of<::System::Drawing::Color>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::Color.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Drawing::Color::*)(::System::Drawing::Color)>(&::System::Drawing::Color::Equals)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x60d51bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Color>(), { "Equals", {}, { ::i2c::type_of<::System::Drawing::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::Color.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Drawing::Color::*)()>(&::System::Drawing::Color::GetHashCode)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x60d5200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Drawing::Color>(), { ::i2c::class_of<::System::Drawing::Color>(), 2 }));
    return ___internal_method;
  }
};
inline uint8_t System::Drawing::Color::get_R() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Color>(), { "get_R", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline uint8_t System::Drawing::Color::get_G() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Color>(), { "get_G", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline uint8_t System::Drawing::Color::get_B() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Color>(), { "get_B", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline uint8_t System::Drawing::Color::get_A() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Color>(), { "get_A", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline bool System::Drawing::Color::get_IsKnownColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Color>(), { "get_IsKnownColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::StringW System::Drawing::Color::get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Color>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline int64_t System::Drawing::Color::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Color>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline ::StringW System::Drawing::Color::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Drawing::Color>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool System::Drawing::Color::op_Equality(::System::Drawing::Color left, ::System::Drawing::Color right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Drawing::Color>(), { "op_Equality", {}, { ::i2c::type_of<::System::Drawing::Color>(), ::i2c::type_of<::System::Drawing::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool System::Drawing::Color::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Drawing::Color>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool System::Drawing::Color::Equals(::System::Drawing::Color other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Color>(), { "Equals", {}, { ::i2c::type_of<::System::Drawing::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t System::Drawing::Color::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Drawing::Color>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::System::Drawing::Color>"
constexpr System::Drawing::Color::operator ::System::IEquatable_1<::System::Drawing::Color>*() {
  return static_cast<::System::IEquatable_1<::System::Drawing::Color>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::System::Drawing::Color>"
constexpr ::System::IEquatable_1<::System::Drawing::Color>* System::Drawing::Color::i___System__IEquatable_1___System__Drawing__Color_() {
  return static_cast<::System::IEquatable_1<::System::Drawing::Color>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "knownColor", ty: "int16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "state", ty: "int16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Drawing::Color::Color(::StringW name, int64_t value, int16_t knownColor, int16_t state) noexcept {
  this->name = name;
  this->value = value;
  this->knownColor = knownColor;
  this->state = state;
}
// Ctor Parameters []
constexpr ::System::Drawing::Color::Color() {}
