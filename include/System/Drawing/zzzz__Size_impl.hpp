#pragma once
// IWYU pragma private; include "System\Drawing\Size.hpp"
#include "System/Drawing/zzzz__Size_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Drawing::Size.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Drawing::Size, ::System::Drawing::Size)>(&::System::Drawing::Size::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60d5e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Drawing::Size>(), { "op_Equality", {}, { ::i2c::type_of<::System::Drawing::Size>(), ::i2c::type_of<::System::Drawing::Size>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::Size.get_Width
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Drawing::Size::*)()>(&::System::Drawing::Size::get_Width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60d5e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Size>(), { "get_Width", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::Size.get_Height
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Drawing::Size::*)()>(&::System::Drawing::Size::get_Height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60d5ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Size>(), { "get_Height", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::Size.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Drawing::Size::*)(::System::Object*)>(&::System::Drawing::Size::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x60d5ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Drawing::Size>(), { ::i2c::class_of<::System::Drawing::Size>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::Size.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Drawing::Size::*)(::System::Drawing::Size)>(&::System::Drawing::Size::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60d5f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Size>(), { "Equals", {}, { ::i2c::type_of<::System::Drawing::Size>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::Size.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Drawing::Size::*)()>(&::System::Drawing::Size::GetHashCode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x60d5f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Drawing::Size>(), { ::i2c::class_of<::System::Drawing::Size>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Drawing::Size.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Drawing::Size::*)()>(&::System::Drawing::Size::ToString)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x60d5f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Drawing::Size>(), { ::i2c::class_of<::System::Drawing::Size>(), 3 }));
    return ___internal_method;
  }
};
inline bool System::Drawing::Size::op_Equality(::System::Drawing::Size sz1, ::System::Drawing::Size sz2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Drawing::Size>(), { "op_Equality", {}, { ::i2c::type_of<::System::Drawing::Size>(), ::i2c::type_of<::System::Drawing::Size>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sz1, sz2);
}
inline int32_t System::Drawing::Size::get_Width() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Size>(), { "get_Width", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t System::Drawing::Size::get_Height() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Size>(), { "get_Height", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool System::Drawing::Size::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Drawing::Size>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool System::Drawing::Size::Equals(::System::Drawing::Size other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Drawing::Size>(), { "Equals", {}, { ::i2c::type_of<::System::Drawing::Size>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t System::Drawing::Size::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Drawing::Size>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW System::Drawing::Size::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Drawing::Size>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::System::Drawing::Size>"
constexpr System::Drawing::Size::operator ::System::IEquatable_1<::System::Drawing::Size>*() {
  return static_cast<::System::IEquatable_1<::System::Drawing::Size>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::System::Drawing::Size>"
constexpr ::System::IEquatable_1<::System::Drawing::Size>* System::Drawing::Size::i___System__IEquatable_1___System__Drawing__Size_() {
  return static_cast<::System::IEquatable_1<::System::Drawing::Size>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Drawing::Size::Size(int32_t width, int32_t height) noexcept {
  this->width = width;
  this->height = height;
}
// Ctor Parameters []
constexpr ::System::Drawing::Size::Size() {}
