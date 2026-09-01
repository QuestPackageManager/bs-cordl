#pragma once
// IWYU pragma private; include "System\Drawing\Point.hpp"
#include "System/Drawing/zzzz__Point_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Drawing::Point.get_X
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Drawing::Point::*)()>(&::System::Drawing::Point::get_X)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60d52a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Point>(), { "get_X", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::Point.get_Y
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Drawing::Point::*)()>(&::System::Drawing::Point::get_Y)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60d52ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Point>(), { "get_Y", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::Point.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Drawing::Point, ::System::Drawing::Point)>(&::System::Drawing::Point::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60d52b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Drawing::Point>(), { "op_Equality", {}, { ::i2c::type_of<::System::Drawing::Point>(), ::i2c::type_of<::System::Drawing::Point>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::Point.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Drawing::Point::*)(::System::Object*)>(&::System::Drawing::Point::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x60d52c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Drawing::Point>(), { ::i2c::class_of<::System::Drawing::Point>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::Point.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Drawing::Point::*)(::System::Drawing::Point)>(&::System::Drawing::Point::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60d533c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Point>(), { "Equals", {}, { ::i2c::type_of<::System::Drawing::Point>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::Point.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Drawing::Point::*)()>(&::System::Drawing::Point::GetHashCode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x60d534c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Drawing::Point>(), { ::i2c::class_of<::System::Drawing::Point>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::Point.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Drawing::Point::*)()>(&::System::Drawing::Point::ToString)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x60d53b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Drawing::Point>(), { ::i2c::class_of<::System::Drawing::Point>(), 3 }));
    return ___internal_method;
  }
};
inline int32_t System::Drawing::Point::get_X() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Point>(), { "get_X", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t System::Drawing::Point::get_Y() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Point>(), { "get_Y", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool System::Drawing::Point::op_Equality(::System::Drawing::Point left, ::System::Drawing::Point right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Drawing::Point>(), { "op_Equality", {}, { ::i2c::type_of<::System::Drawing::Point>(), ::i2c::type_of<::System::Drawing::Point>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool System::Drawing::Point::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Drawing::Point>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool System::Drawing::Point::Equals(::System::Drawing::Point other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Point>(), { "Equals", {}, { ::i2c::type_of<::System::Drawing::Point>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t System::Drawing::Point::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Drawing::Point>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW System::Drawing::Point::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Drawing::Point>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::System::Drawing::Point>"
constexpr System::Drawing::Point::operator ::System::IEquatable_1<::System::Drawing::Point>*() {
  return static_cast<::System::IEquatable_1<::System::Drawing::Point>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::System::Drawing::Point>"
constexpr ::System::IEquatable_1<::System::Drawing::Point>* System::Drawing::Point::i___System__IEquatable_1___System__Drawing__Point_() {
  return static_cast<::System::IEquatable_1<::System::Drawing::Point>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Drawing::Point::Point(int32_t x, int32_t y) noexcept {
  this->x = x;
  this->y = y;
}
// Ctor Parameters []
constexpr ::System::Drawing::Point::Point() {}
