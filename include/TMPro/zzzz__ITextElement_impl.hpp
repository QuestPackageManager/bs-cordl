#pragma once
// IWYU pragma private; include "TMPro/ITextElement.hpp"
#include "TMPro/zzzz__ITextElement_def.hpp"
#include "UnityEngine/UI/zzzz__CanvasUpdate_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::TMPro::ITextElement.get_sharedMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::TMPro::ITextElement::*)()>(&::TMPro::ITextElement::get_sharedMaterial)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::TMPro::ITextElement*>(), { ::i2c::class_of<::TMPro::ITextElement*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ITextElement.Rebuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::ITextElement::*)(::UnityEngine::UI::CanvasUpdate)>(&::TMPro::ITextElement::Rebuild)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::TMPro::ITextElement*>(), { ::i2c::class_of<::TMPro::ITextElement*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ITextElement.GetInstanceID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::TMPro::ITextElement::*)()>(&::TMPro::ITextElement::GetInstanceID)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::TMPro::ITextElement*>(), { ::i2c::class_of<::TMPro::ITextElement*>(), 2 }));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Material> TMPro::ITextElement::get_sharedMaterial() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::TMPro::ITextElement*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void TMPro::ITextElement::Rebuild(::UnityEngine::UI::CanvasUpdate update) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::TMPro::ITextElement*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, update);
}
inline int32_t TMPro::ITextElement::GetInstanceID() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::TMPro::ITextElement*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
