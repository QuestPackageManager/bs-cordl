#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Vector2Mask.hpp"
#include "UnityEngine/ProBuilder/zzzz__Vector2Mask_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vector2Mask.get_x
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ProBuilder::Vector2Mask::*)()>(&::UnityEngine::ProBuilder::Vector2Mask::get_x)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66f5cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector2Mask>(), { "get_x", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vector2Mask.get_y
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ProBuilder::Vector2Mask::*)()>(&::UnityEngine::ProBuilder::Vector2Mask::get_y)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66f5d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector2Mask>(), { "get_y", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vector2Mask._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Vector2Mask::*)(::UnityEngine::Vector3, float_t)>(&::UnityEngine::ProBuilder::Vector2Mask::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x66f5d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector2Mask>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vector2Mask._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Vector2Mask::*)(uint8_t)>(&::UnityEngine::ProBuilder::Vector2Mask::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66f5d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector2Mask>(), { ".ctor", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vector2Mask.op_Implicit___UnityEngine__Vector2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::ProBuilder::Vector2Mask)>(
    &::UnityEngine::ProBuilder::Vector2Mask::op_Implicit___UnityEngine__Vector2)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x66f5d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector2Mask>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vector2Mask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vector2Mask.op_Implicit___UnityEngine__ProBuilder__Vector2Mask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Vector2Mask (*)(::UnityEngine::Vector2)>(
    &::UnityEngine::ProBuilder::Vector2Mask::op_Implicit___UnityEngine__ProBuilder__Vector2Mask)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x66f5dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector2Mask>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vector2Mask.op_BitwiseOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Vector2Mask (*)(::UnityEngine::ProBuilder::Vector2Mask, ::UnityEngine::ProBuilder::Vector2Mask)>(
    &::UnityEngine::ProBuilder::Vector2Mask::op_BitwiseOr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66f5de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector2Mask>(),
                                                { "op_BitwiseOr", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vector2Mask>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vector2Mask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vector2Mask.op_BitwiseAnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Vector2Mask (*)(::UnityEngine::ProBuilder::Vector2Mask, ::UnityEngine::ProBuilder::Vector2Mask)>(
    &::UnityEngine::ProBuilder::Vector2Mask::op_BitwiseAnd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66f5dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector2Mask>(),
                                                { "op_BitwiseAnd", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vector2Mask>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vector2Mask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vector2Mask.op_ExclusiveOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Vector2Mask (*)(::UnityEngine::ProBuilder::Vector2Mask, ::UnityEngine::ProBuilder::Vector2Mask)>(
    &::UnityEngine::ProBuilder::Vector2Mask::op_ExclusiveOr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66f5df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector2Mask>(),
                                                { "op_ExclusiveOr", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vector2Mask>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vector2Mask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vector2Mask.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::ProBuilder::Vector2Mask, float_t)>(&::UnityEngine::ProBuilder::Vector2Mask::op_Multiply)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x66f5dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector2Mask>(),
                                                             { "op_Multiply", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vector2Mask>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::Vector2Mask::setStaticF_XY(::UnityEngine::ProBuilder::Vector2Mask value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::Vector2Mask, "XY", ::UnityEngine::ProBuilder::Vector2Mask>(std::forward<::UnityEngine::ProBuilder::Vector2Mask>(value));
}
inline ::UnityEngine::ProBuilder::Vector2Mask UnityEngine::ProBuilder::Vector2Mask::getStaticF_XY() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::Vector2Mask, "XY", ::UnityEngine::ProBuilder::Vector2Mask>();
}
inline float_t UnityEngine::ProBuilder::Vector2Mask::get_x() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector2Mask>(), { "get_x", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::ProBuilder::Vector2Mask::get_y() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector2Mask>(), { "get_y", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Vector2Mask::_ctor(::UnityEngine::Vector3 v, float_t epsilon) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector2Mask>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v, epsilon);
}
inline void UnityEngine::ProBuilder::Vector2Mask::_ctor(uint8_t mask) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector2Mask>(), { ".ctor", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mask);
}
inline ::UnityEngine::Vector2 UnityEngine::ProBuilder::Vector2Mask::op_Implicit___UnityEngine__Vector2(::UnityEngine::ProBuilder::Vector2Mask mask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector2Mask>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vector2Mask>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, mask);
}
inline ::UnityEngine::ProBuilder::Vector2Mask UnityEngine::ProBuilder::Vector2Mask::op_Implicit___UnityEngine__ProBuilder__Vector2Mask(::UnityEngine::Vector2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector2Mask>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Vector2Mask>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::ProBuilder::Vector2Mask UnityEngine::ProBuilder::Vector2Mask::op_BitwiseOr(::UnityEngine::ProBuilder::Vector2Mask left, ::UnityEngine::ProBuilder::Vector2Mask right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector2Mask>(),
                                              { "op_BitwiseOr", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vector2Mask>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vector2Mask>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Vector2Mask>(nullptr, ___internal_method, left, right);
}
inline ::UnityEngine::ProBuilder::Vector2Mask UnityEngine::ProBuilder::Vector2Mask::op_BitwiseAnd(::UnityEngine::ProBuilder::Vector2Mask left, ::UnityEngine::ProBuilder::Vector2Mask right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector2Mask>(),
                                              { "op_BitwiseAnd", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vector2Mask>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vector2Mask>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Vector2Mask>(nullptr, ___internal_method, left, right);
}
inline ::UnityEngine::ProBuilder::Vector2Mask UnityEngine::ProBuilder::Vector2Mask::op_ExclusiveOr(::UnityEngine::ProBuilder::Vector2Mask left, ::UnityEngine::ProBuilder::Vector2Mask right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector2Mask>(),
                                              { "op_ExclusiveOr", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vector2Mask>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vector2Mask>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Vector2Mask>(nullptr, ___internal_method, left, right);
}
inline ::UnityEngine::Vector2 UnityEngine::ProBuilder::Vector2Mask::op_Multiply(::UnityEngine::ProBuilder::Vector2Mask mask, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector2Mask>(), { "op_Multiply", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vector2Mask>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, mask, value);
}
// Ctor Parameters [CppParam { name: "m_Mask", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::Vector2Mask::Vector2Mask(uint8_t m_Mask) noexcept {
  this->m_Mask = m_Mask;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Vector2Mask::Vector2Mask() {}
