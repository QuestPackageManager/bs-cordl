#pragma once
// IWYU pragma private; include "System\Drawing\Rectangle.hpp"
#include "System/Drawing/zzzz__Rectangle_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Drawing::Rectangle.get_X
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Drawing::Rectangle::*)()>(&::System::Drawing::Rectangle::get_X)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60d5738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Rectangle>(), { "get_X", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::Rectangle.get_Y
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Drawing::Rectangle::*)()>(&::System::Drawing::Rectangle::get_Y)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60d5740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Rectangle>(), { "get_Y", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::Rectangle.get_Width
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Drawing::Rectangle::*)()>(&::System::Drawing::Rectangle::get_Width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60d5748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Rectangle>(), { "get_Width", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::Rectangle.get_Height
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Drawing::Rectangle::*)()>(&::System::Drawing::Rectangle::get_Height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60d5750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Rectangle>(), { "get_Height", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::Rectangle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Drawing::Rectangle::*)(::System::Object*)>(&::System::Drawing::Rectangle::Equals)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x60d5758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Drawing::Rectangle>(), { ::i2c::class_of<::System::Drawing::Rectangle>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::Rectangle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Drawing::Rectangle::*)(::System::Drawing::Rectangle)>(&::System::Drawing::Rectangle::Equals)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x60d57f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Rectangle>(), { "Equals", {}, { ::i2c::type_of<::System::Drawing::Rectangle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::Rectangle.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Drawing::Rectangle, ::System::Drawing::Rectangle)>(&::System::Drawing::Rectangle::op_Equality)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x60d582c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Rectangle>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::System::Drawing::Rectangle>(), ::i2c::type_of<::System::Drawing::Rectangle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::Rectangle.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Drawing::Rectangle::*)()>(&::System::Drawing::Rectangle::GetHashCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x60d5854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Drawing::Rectangle>(), { ::i2c::class_of<::System::Drawing::Rectangle>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::Rectangle.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Drawing::Rectangle::*)()>(&::System::Drawing::Rectangle::ToString)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x60d58d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Drawing::Rectangle>(), { ::i2c::class_of<::System::Drawing::Rectangle>(), 3 }));
    return ___internal_method;
  }
};
inline int32_t System::Drawing::Rectangle::get_X() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Rectangle>(), { "get_X", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t System::Drawing::Rectangle::get_Y() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Rectangle>(), { "get_Y", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t System::Drawing::Rectangle::get_Width() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Rectangle>(), { "get_Width", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t System::Drawing::Rectangle::get_Height() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Rectangle>(), { "get_Height", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool System::Drawing::Rectangle::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Drawing::Rectangle>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool System::Drawing::Rectangle::Equals(::System::Drawing::Rectangle other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Rectangle>(), { "Equals", {}, { ::i2c::type_of<::System::Drawing::Rectangle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool System::Drawing::Rectangle::op_Equality(::System::Drawing::Rectangle left, ::System::Drawing::Rectangle right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Drawing::Rectangle>(), { "op_Equality", {}, { ::i2c::type_of<::System::Drawing::Rectangle>(), ::i2c::type_of<::System::Drawing::Rectangle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline int32_t System::Drawing::Rectangle::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Drawing::Rectangle>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW System::Drawing::Rectangle::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Drawing::Rectangle>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::System::Drawing::Rectangle>"
constexpr System::Drawing::Rectangle::operator ::System::IEquatable_1<::System::Drawing::Rectangle>*() {
  return static_cast<::System::IEquatable_1<::System::Drawing::Rectangle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::System::Drawing::Rectangle>"
constexpr ::System::IEquatable_1<::System::Drawing::Rectangle>* System::Drawing::Rectangle::i___System__IEquatable_1___System__Drawing__Rectangle_() {
  return static_cast<::System::IEquatable_1<::System::Drawing::Rectangle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "width",
// ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Drawing::Rectangle::Rectangle(int32_t x, int32_t y, int32_t width, int32_t height) noexcept {
  this->x = x;
  this->y = y;
  this->width = width;
  this->height = height;
}
// Ctor Parameters []
constexpr ::System::Drawing::Rectangle::Rectangle() {}
