#pragma once
// IWYU pragma private; include "GlobalNamespace\ColorSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorSO.get_color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::ColorSO::*)()>(&::GlobalNamespace::ColorSO::get_color)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSO*>(), { ::i2c::class_of<::GlobalNamespace::ColorSO*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSO.op_Implicit___UnityEngine__Color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::GlobalNamespace::ColorSO*)>(&::GlobalNamespace::ColorSO::op_Implicit___UnityEngine__Color)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x36f7a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSO*>(), { "op_Implicit", {}, { ::i2c::type_of<::GlobalNamespace::ColorSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorSO::*)()>(&::GlobalNamespace::ColorSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36f6cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Color GlobalNamespace::ColorSO::get_color() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ColorSO*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::ColorSO::op_Implicit___UnityEngine__Color(::GlobalNamespace::ColorSO* c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSO*>(), { "op_Implicit", {}, { ::i2c::type_of<::GlobalNamespace::ColorSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, c);
}
inline void GlobalNamespace::ColorSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorSO* GlobalNamespace::ColorSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ColorSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorSO::ColorSO() {}
