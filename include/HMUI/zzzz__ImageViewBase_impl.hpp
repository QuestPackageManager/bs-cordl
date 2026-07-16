#pragma once
// IWYU pragma private; include "HMUI/ImageViewBase.hpp"
#include "UnityEngine/UI/zzzz__Image_impl.hpp"
#include "HMUI/zzzz__ImageViewBase_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::HMUI::ImageViewBase.get_gradient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::ImageViewBase::*)()>(&::HMUI::ImageViewBase::get_gradient)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ImageViewBase*>(), { ::i2c::class_of<::HMUI::ImageViewBase*>(), 89 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageViewBase.set_gradient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ImageViewBase::*)(bool)>(&::HMUI::ImageViewBase::set_gradient)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ImageViewBase*>(), { ::i2c::class_of<::HMUI::ImageViewBase*>(), 90 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageViewBase.get_color0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::HMUI::ImageViewBase::*)()>(&::HMUI::ImageViewBase::get_color0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ImageViewBase*>(), { ::i2c::class_of<::HMUI::ImageViewBase*>(), 91 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageViewBase.set_color0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ImageViewBase::*)(::UnityEngine::Color)>(&::HMUI::ImageViewBase::set_color0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ImageViewBase*>(), { ::i2c::class_of<::HMUI::ImageViewBase*>(), 92 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageViewBase.get_color1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::HMUI::ImageViewBase::*)()>(&::HMUI::ImageViewBase::get_color1)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ImageViewBase*>(), { ::i2c::class_of<::HMUI::ImageViewBase*>(), 93 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageViewBase.set_color1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ImageViewBase::*)(::UnityEngine::Color)>(&::HMUI::ImageViewBase::set_color1)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ImageViewBase*>(), { ::i2c::class_of<::HMUI::ImageViewBase*>(), 94 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageViewBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ImageViewBase::*)()>(&::HMUI::ImageViewBase::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5888298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ImageViewBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool HMUI::ImageViewBase::get_gradient() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ImageViewBase*>(), 89 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HMUI::ImageViewBase::set_gradient(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ImageViewBase*>(), 90 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color HMUI::ImageViewBase::get_color0() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ImageViewBase*>(), 91 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void HMUI::ImageViewBase::set_color0(::UnityEngine::Color value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ImageViewBase*>(), 92 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color HMUI::ImageViewBase::get_color1() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ImageViewBase*>(), 93 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void HMUI::ImageViewBase::set_color1(::UnityEngine::Color value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ImageViewBase*>(), 94 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::ImageViewBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ImageViewBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::ImageViewBase* HMUI::ImageViewBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ImageViewBase*>());
}
// Ctor Parameters []
constexpr ::HMUI::ImageViewBase::ImageViewBase() {}
