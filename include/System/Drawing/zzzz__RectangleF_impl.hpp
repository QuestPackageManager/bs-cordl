#pragma once
// IWYU pragma private; include "System\Drawing\RectangleF.hpp"
#include "System/Drawing/zzzz__RectangleF_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Drawing::RectangleF.get_X
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Drawing::RectangleF::*)()>(&::System::Drawing::RectangleF::get_X)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60d5a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::RectangleF>(), { "get_X", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::RectangleF.get_Y
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Drawing::RectangleF::*)()>(&::System::Drawing::RectangleF::get_Y)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60d5aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::RectangleF>(), { "get_Y", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::RectangleF.get_Width
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Drawing::RectangleF::*)()>(&::System::Drawing::RectangleF::get_Width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60d5aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::RectangleF>(), { "get_Width", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::RectangleF.get_Height
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Drawing::RectangleF::*)()>(&::System::Drawing::RectangleF::get_Height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60d5ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::RectangleF>(), { "get_Height", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::RectangleF.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Drawing::RectangleF::*)(::System::Object*)>(&::System::Drawing::RectangleF::Equals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x60d5abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Drawing::RectangleF>(), { ::i2c::class_of<::System::Drawing::RectangleF>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::RectangleF.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Drawing::RectangleF::*)(::System::Drawing::RectangleF)>(&::System::Drawing::RectangleF::Equals)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x60d5b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::RectangleF>(), { "Equals", {}, { ::i2c::type_of<::System::Drawing::RectangleF>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::RectangleF.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Drawing::RectangleF, ::System::Drawing::RectangleF)>(&::System::Drawing::RectangleF::op_Equality)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x60d5b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::RectangleF>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::System::Drawing::RectangleF>(), ::i2c::type_of<::System::Drawing::RectangleF>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::RectangleF.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Drawing::RectangleF::*)()>(&::System::Drawing::RectangleF::GetHashCode)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x60d5bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Drawing::RectangleF>(), { ::i2c::class_of<::System::Drawing::RectangleF>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::RectangleF.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Drawing::RectangleF::*)()>(&::System::Drawing::RectangleF::ToString)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x60d5cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Drawing::RectangleF>(), { ::i2c::class_of<::System::Drawing::RectangleF>(), 3 }));
    return ___internal_method;
  }
};
inline float_t System::Drawing::RectangleF::get_X() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::RectangleF>(), { "get_X", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t System::Drawing::RectangleF::get_Y() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::RectangleF>(), { "get_Y", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t System::Drawing::RectangleF::get_Width() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::RectangleF>(), { "get_Width", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t System::Drawing::RectangleF::get_Height() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::RectangleF>(), { "get_Height", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline bool System::Drawing::RectangleF::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Drawing::RectangleF>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool System::Drawing::RectangleF::Equals(::System::Drawing::RectangleF other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::RectangleF>(), { "Equals", {}, { ::i2c::type_of<::System::Drawing::RectangleF>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool System::Drawing::RectangleF::op_Equality(::System::Drawing::RectangleF left, ::System::Drawing::RectangleF right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::RectangleF>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::System::Drawing::RectangleF>(), ::i2c::type_of<::System::Drawing::RectangleF>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline int32_t System::Drawing::RectangleF::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Drawing::RectangleF>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW System::Drawing::RectangleF::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Drawing::RectangleF>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::System::Drawing::RectangleF>"
constexpr System::Drawing::RectangleF::operator ::System::IEquatable_1<::System::Drawing::RectangleF>*() {
  return static_cast<::System::IEquatable_1<::System::Drawing::RectangleF>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::System::Drawing::RectangleF>"
constexpr ::System::IEquatable_1<::System::Drawing::RectangleF>* System::Drawing::RectangleF::i___System__IEquatable_1___System__Drawing__RectangleF_() {
  return static_cast<::System::IEquatable_1<::System::Drawing::RectangleF>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "width",
// ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "height", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Drawing::RectangleF::RectangleF(float_t x, float_t y, float_t width, float_t height) noexcept {
  this->x = x;
  this->y = y;
  this->width = width;
  this->height = height;
}
// Ctor Parameters []
constexpr ::System::Drawing::RectangleF::RectangleF() {}
