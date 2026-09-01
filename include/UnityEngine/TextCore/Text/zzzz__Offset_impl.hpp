#pragma once
// IWYU pragma private; include "UnityEngine\TextCore\Text\Offset.hpp"
#include "UnityEngine/TextCore/Text/zzzz__Offset_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::Offset.get_left
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TextCore::Text::Offset::*)()>(&::UnityEngine::TextCore::Text::Offset::get_left)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c07970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::Offset>(), { "get_left", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::Offset.get_right
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TextCore::Text::Offset::*)()>(&::UnityEngine::TextCore::Text::Offset::get_right)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c07978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::Offset>(), { "get_right", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::Offset.get_top
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TextCore::Text::Offset::*)()>(&::UnityEngine::TextCore::Text::Offset::get_top)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c07980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::Offset>(), { "get_top", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::Offset.get_bottom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TextCore::Text::Offset::*)()>(&::UnityEngine::TextCore::Text::Offset::get_bottom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c07988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::Offset>(), { "get_bottom", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::Offset.get_zero
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::Offset (*)()>(&::UnityEngine::TextCore::Text::Offset::get_zero)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6c07990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::Offset>(), { "get_zero", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::Offset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::Offset::*)(float_t, float_t, float_t, float_t)>(&::UnityEngine::TextCore::Text::Offset::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c079f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::Offset>(),
                                                             { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::Offset.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::TextCore::Text::Offset, ::UnityEngine::TextCore::Text::Offset)>(&::UnityEngine::TextCore::Text::Offset::op_Equality)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6c079fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::Offset>(),
                                                { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::Offset>(), ::i2c::type_of<::UnityEngine::TextCore::Text::Offset>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::Offset.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::Offset (*)(::UnityEngine::TextCore::Text::Offset, float_t)>(
    &::UnityEngine::TextCore::Text::Offset::op_Multiply)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c07a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::Offset>(), { "op_Multiply", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::Offset>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::Offset.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::Offset::*)()>(&::UnityEngine::TextCore::Text::Offset::GetHashCode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c07a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::Offset>(), { ::i2c::class_of<::UnityEngine::TextCore::Text::Offset>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::Offset.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::Offset::*)(::System::Object*)>(&::UnityEngine::TextCore::Text::Offset::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6c07a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::Offset>(), { ::i2c::class_of<::UnityEngine::TextCore::Text::Offset>(), 0 }));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::Offset::setStaticF_k_ZeroOffset(::UnityEngine::TextCore::Text::Offset value) {
  ::cordl_internals::setStaticField<::UnityEngine::TextCore::Text::Offset, "k_ZeroOffset", ::UnityEngine::TextCore::Text::Offset>(std::forward<::UnityEngine::TextCore::Text::Offset>(value));
}
inline ::UnityEngine::TextCore::Text::Offset UnityEngine::TextCore::Text::Offset::getStaticF_k_ZeroOffset() {
  return ::cordl_internals::getStaticField<::UnityEngine::TextCore::Text::Offset, "k_ZeroOffset", ::UnityEngine::TextCore::Text::Offset>();
}
inline float_t UnityEngine::TextCore::Text::Offset::get_left() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::Offset>(), { "get_left", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::TextCore::Text::Offset::get_right() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::Offset>(), { "get_right", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::TextCore::Text::Offset::get_top() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::Offset>(), { "get_top", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::TextCore::Text::Offset::get_bottom() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::Offset>(), { "get_bottom", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::Offset UnityEngine::TextCore::Text::Offset::get_zero() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::Offset>(), { "get_zero", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::Offset>(nullptr, ___internal_method);
}
inline void UnityEngine::TextCore::Text::Offset::_ctor(float_t left, float_t right, float_t top, float_t bottom) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::Offset>(),
                                                           { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, left, right, top, bottom);
}
inline bool UnityEngine::TextCore::Text::Offset::op_Equality(::UnityEngine::TextCore::Text::Offset lhs, ::UnityEngine::TextCore::Text::Offset rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::Offset>(),
                                              { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::Offset>(), ::i2c::type_of<::UnityEngine::TextCore::Text::Offset>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline ::UnityEngine::TextCore::Text::Offset UnityEngine::TextCore::Text::Offset::op_Multiply(::UnityEngine::TextCore::Text::Offset a, float_t b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::Offset>(), { "op_Multiply", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::Offset>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::Offset>(nullptr, ___internal_method, a, b);
}
inline int32_t UnityEngine::TextCore::Text::Offset::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::Text::Offset>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::TextCore::Text::Offset::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::Text::Offset>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
// Ctor Parameters [CppParam { name: "m_Left", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Right", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_Top", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Bottom", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::Offset::Offset(float_t m_Left, float_t m_Right, float_t m_Top, float_t m_Bottom) noexcept {
  this->m_Left = m_Left;
  this->m_Right = m_Right;
  this->m_Top = m_Top;
  this->m_Bottom = m_Bottom;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::Offset::Offset() {}
