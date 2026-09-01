#pragma once
// IWYU pragma private; include "System\Drawing\PointF.hpp"
#include "System/Drawing/zzzz__PointF_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Drawing::PointF.get_X
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Drawing::PointF::*)()>(&::System::Drawing::PointF::get_X)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60d54e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::PointF>(), { "get_X", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::PointF.get_Y
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Drawing::PointF::*)()>(&::System::Drawing::PointF::get_Y)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60d54e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::PointF>(), { "get_Y", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::PointF.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Drawing::PointF, ::System::Drawing::PointF)>(&::System::Drawing::PointF::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60d54f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Drawing::PointF>(), { "op_Equality", {}, { ::i2c::type_of<::System::Drawing::PointF>(), ::i2c::type_of<::System::Drawing::PointF>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::PointF.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Drawing::PointF::*)(::System::Object*)>(&::System::Drawing::PointF::Equals)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x60d5500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Drawing::PointF>(), { ::i2c::class_of<::System::Drawing::PointF>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::PointF.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Drawing::PointF::*)(::System::Drawing::PointF)>(&::System::Drawing::PointF::Equals)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x60d5584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::PointF>(), { "Equals", {}, { ::i2c::type_of<::System::Drawing::PointF>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::PointF.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Drawing::PointF::*)()>(&::System::Drawing::PointF::GetHashCode)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x60d559c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Drawing::PointF>(), { ::i2c::class_of<::System::Drawing::PointF>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::PointF.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Drawing::PointF::*)()>(&::System::Drawing::PointF::ToString)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x60d5620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Drawing::PointF>(), { ::i2c::class_of<::System::Drawing::PointF>(), 3 }));
    return ___internal_method;
  }
};
inline float_t System::Drawing::PointF::get_X() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::PointF>(), { "get_X", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t System::Drawing::PointF::get_Y() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::PointF>(), { "get_Y", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline bool System::Drawing::PointF::op_Equality(::System::Drawing::PointF left, ::System::Drawing::PointF right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Drawing::PointF>(), { "op_Equality", {}, { ::i2c::type_of<::System::Drawing::PointF>(), ::i2c::type_of<::System::Drawing::PointF>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool System::Drawing::PointF::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Drawing::PointF>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool System::Drawing::PointF::Equals(::System::Drawing::PointF other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::PointF>(), { "Equals", {}, { ::i2c::type_of<::System::Drawing::PointF>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t System::Drawing::PointF::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Drawing::PointF>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW System::Drawing::PointF::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Drawing::PointF>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::System::Drawing::PointF>"
constexpr System::Drawing::PointF::operator ::System::IEquatable_1<::System::Drawing::PointF>*() {
  return static_cast<::System::IEquatable_1<::System::Drawing::PointF>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::System::Drawing::PointF>"
constexpr ::System::IEquatable_1<::System::Drawing::PointF>* System::Drawing::PointF::i___System__IEquatable_1___System__Drawing__PointF_() {
  return static_cast<::System::IEquatable_1<::System::Drawing::PointF>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Drawing::PointF::PointF(float_t x, float_t y) noexcept {
  this->x = x;
  this->y = y;
}
// Ctor Parameters []
constexpr ::System::Drawing::PointF::PointF() {}
