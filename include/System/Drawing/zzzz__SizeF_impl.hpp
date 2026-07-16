#pragma once
// IWYU pragma private; include "System/Drawing/SizeF.hpp"
#include "System/Drawing/zzzz__SizeF_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Drawing::SizeF.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Drawing::SizeF, ::System::Drawing::SizeF)>(&::System::Drawing::SizeF::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60d0898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Drawing::SizeF>(), { "op_Equality", {}, { ::i2c::type_of<::System::Drawing::SizeF>(), ::i2c::type_of<::System::Drawing::SizeF>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::SizeF.get_Width
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Drawing::SizeF::*)()>(&::System::Drawing::SizeF::get_Width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60d08a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::SizeF>(), { "get_Width", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::SizeF.get_Height
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Drawing::SizeF::*)()>(&::System::Drawing::SizeF::get_Height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60d08b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::SizeF>(), { "get_Height", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::SizeF.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Drawing::SizeF::*)(::System::Object*)>(&::System::Drawing::SizeF::Equals)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x60d08b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Drawing::SizeF>(), { ::i2c::class_of<::System::Drawing::SizeF>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::SizeF.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Drawing::SizeF::*)(::System::Drawing::SizeF)>(&::System::Drawing::SizeF::Equals)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x60d093c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::SizeF>(), { "Equals", {}, { ::i2c::type_of<::System::Drawing::SizeF>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::SizeF.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Drawing::SizeF::*)()>(&::System::Drawing::SizeF::GetHashCode)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x60d0954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Drawing::SizeF>(), { ::i2c::class_of<::System::Drawing::SizeF>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::SizeF.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Drawing::SizeF::*)()>(&::System::Drawing::SizeF::ToString)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x60d09d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Drawing::SizeF>(), { ::i2c::class_of<::System::Drawing::SizeF>(), 3 }));
    return ___internal_method;
  }
};
inline bool System::Drawing::SizeF::op_Equality(::System::Drawing::SizeF sz1, ::System::Drawing::SizeF sz2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Drawing::SizeF>(), { "op_Equality", {}, { ::i2c::type_of<::System::Drawing::SizeF>(), ::i2c::type_of<::System::Drawing::SizeF>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sz1, sz2);
}
inline float_t System::Drawing::SizeF::get_Width() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::SizeF>(), { "get_Width", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t System::Drawing::SizeF::get_Height() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::SizeF>(), { "get_Height", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline bool System::Drawing::SizeF::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Drawing::SizeF>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool System::Drawing::SizeF::Equals(::System::Drawing::SizeF other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::SizeF>(), { "Equals", {}, { ::i2c::type_of<::System::Drawing::SizeF>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t System::Drawing::SizeF::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Drawing::SizeF>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW System::Drawing::SizeF::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Drawing::SizeF>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::System::Drawing::SizeF>"
constexpr System::Drawing::SizeF::operator ::System::IEquatable_1<::System::Drawing::SizeF>*() {
  return static_cast<::System::IEquatable_1<::System::Drawing::SizeF>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::System::Drawing::SizeF>"
constexpr ::System::IEquatable_1<::System::Drawing::SizeF>* System::Drawing::SizeF::i___System__IEquatable_1___System__Drawing__SizeF_() {
  return static_cast<::System::IEquatable_1<::System::Drawing::SizeF>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "width", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "height", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Drawing::SizeF::SizeF(float_t width, float_t height) noexcept {
  this->width = width;
  this->height = height;
}
// Ctor Parameters []
constexpr ::System::Drawing::SizeF::SizeF() {}
