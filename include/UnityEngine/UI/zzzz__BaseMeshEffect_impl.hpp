#pragma once
// IWYU pragma private; include "UnityEngine\UI\BaseMeshEffect.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "UnityEngine/UI/zzzz__BaseMeshEffect_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/UI/zzzz__IMeshModifier_def.hpp"
#include "UnityEngine/UI/zzzz__VertexHelper_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::BaseMeshEffect.get_graphic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Graphic> (::UnityEngine::UI::BaseMeshEffect::*)()>(&::UnityEngine::UI::BaseMeshEffect::get_graphic)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6e13818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::BaseMeshEffect*>(), { "get_graphic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::BaseMeshEffect.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::BaseMeshEffect::*)()>(&::UnityEngine::UI::BaseMeshEffect::OnEnable)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6e138b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::BaseMeshEffect*>(), { ::i2c::class_of<::UnityEngine::UI::BaseMeshEffect*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::BaseMeshEffect.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::BaseMeshEffect::*)()>(&::UnityEngine::UI::BaseMeshEffect::OnDisable)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6e13954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::BaseMeshEffect*>(), { ::i2c::class_of<::UnityEngine::UI::BaseMeshEffect*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::BaseMeshEffect.OnDidApplyAnimationProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::BaseMeshEffect::*)()>(&::UnityEngine::UI::BaseMeshEffect::OnDidApplyAnimationProperties)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6e139f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::BaseMeshEffect*>(), { ::i2c::class_of<::UnityEngine::UI::BaseMeshEffect*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::BaseMeshEffect.ModifyMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::BaseMeshEffect::*)(::UnityEngine::Mesh*)>(&::UnityEngine::UI::BaseMeshEffect::ModifyMesh)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6e13a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::BaseMeshEffect*>(), { ::i2c::class_of<::UnityEngine::UI::BaseMeshEffect*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::BaseMeshEffect.ModifyMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::BaseMeshEffect::*)(::UnityEngine::UI::VertexHelper*)>(&::UnityEngine::UI::BaseMeshEffect::ModifyMesh)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::BaseMeshEffect*>(), { ::i2c::class_of<::UnityEngine::UI::BaseMeshEffect*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::BaseMeshEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::BaseMeshEffect::*)()>(&::UnityEngine::UI::BaseMeshEffect::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e13c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::BaseMeshEffect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Graphic>& UnityEngine::UI::BaseMeshEffect::__cordl_internal_get_m_Graphic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Graphic;
}
constexpr ::UnityW<::UnityEngine::UI::Graphic> const& UnityEngine::UI::BaseMeshEffect::__cordl_internal_get_m_Graphic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Graphic;
}
constexpr void UnityEngine::UI::BaseMeshEffect::__cordl_internal_set_m_Graphic(::UnityW<::UnityEngine::UI::Graphic> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Graphic = value;
}
inline ::UnityW<::UnityEngine::UI::Graphic> UnityEngine::UI::BaseMeshEffect::get_graphic() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::BaseMeshEffect*>(), { "get_graphic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Graphic>>(this, ___internal_method);
}
inline void UnityEngine::UI::BaseMeshEffect::OnEnable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::BaseMeshEffect*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::BaseMeshEffect::OnDisable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::BaseMeshEffect*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::BaseMeshEffect::OnDidApplyAnimationProperties() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::BaseMeshEffect*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::BaseMeshEffect::ModifyMesh(::UnityEngine::Mesh* mesh) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::BaseMeshEffect*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh);
}
inline void UnityEngine::UI::BaseMeshEffect::ModifyMesh(::UnityEngine::UI::VertexHelper* vh) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::BaseMeshEffect*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vh);
}
inline void UnityEngine::UI::BaseMeshEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::BaseMeshEffect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UI::BaseMeshEffect* UnityEngine::UI::BaseMeshEffect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::BaseMeshEffect*>());
}
/// @brief Convert operator to "::UnityEngine::UI::IMeshModifier"
constexpr UnityEngine::UI::BaseMeshEffect::operator ::UnityEngine::UI::IMeshModifier*() noexcept {
  return static_cast<::UnityEngine::UI::IMeshModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UI::IMeshModifier"
constexpr ::UnityEngine::UI::IMeshModifier* UnityEngine::UI::BaseMeshEffect::i___UnityEngine__UI__IMeshModifier() noexcept {
  return static_cast<::UnityEngine::UI::IMeshModifier*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::BaseMeshEffect::BaseMeshEffect() {}
