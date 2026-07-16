#pragma once
// IWYU pragma private; include "UnityEngine/UI/Outline.hpp"
#include "UnityEngine/UI/zzzz__Shadow_impl.hpp"
#include "UnityEngine/UI/zzzz__Outline_def.hpp"
#include "UnityEngine/UI/zzzz__VertexHelper_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::Outline._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Outline::*)()>(&::UnityEngine::UI::Outline::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e10684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Outline*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Outline.ModifyMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Outline::*)(::UnityEngine::UI::VertexHelper*)>(&::UnityEngine::UI::Outline::ModifyMesh)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x6e106a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Outline*>(), { ::i2c::class_of<::UnityEngine::UI::Outline*>(), 20 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::Outline::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Outline*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Outline::ModifyMesh(::UnityEngine::UI::VertexHelper* vh) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Outline*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vh);
}
inline ::UnityEngine::UI::Outline* UnityEngine::UI::Outline::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::Outline*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Outline::Outline() {}
