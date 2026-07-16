#pragma once
// IWYU pragma private; include "UnityEngine/UI/PositionAsUV1.hpp"
#include "UnityEngine/UI/zzzz__BaseMeshEffect_impl.hpp"
#include "UnityEngine/UI/zzzz__PositionAsUV1_def.hpp"
#include "UnityEngine/UI/zzzz__VertexHelper_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::PositionAsUV1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::PositionAsUV1::*)()>(&::UnityEngine::UI::PositionAsUV1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e108fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::PositionAsUV1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::PositionAsUV1.ModifyMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::PositionAsUV1::*)(::UnityEngine::UI::VertexHelper*)>(&::UnityEngine::UI::PositionAsUV1::ModifyMesh)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6e10900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::PositionAsUV1*>(), { ::i2c::class_of<::UnityEngine::UI::PositionAsUV1*>(), 20 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::PositionAsUV1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::PositionAsUV1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::PositionAsUV1::ModifyMesh(::UnityEngine::UI::VertexHelper* vh) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::PositionAsUV1*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vh);
}
inline ::UnityEngine::UI::PositionAsUV1* UnityEngine::UI::PositionAsUV1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::PositionAsUV1*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::PositionAsUV1::PositionAsUV1() {}
