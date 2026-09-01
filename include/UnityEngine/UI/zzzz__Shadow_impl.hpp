#pragma once
// IWYU pragma private; include "UnityEngine\UI\Shadow.hpp"
#include "UnityEngine/UI/zzzz__BaseMeshEffect_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UI/zzzz__Shadow_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UI/zzzz__VertexHelper_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__UIVertex_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::Shadow._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Shadow::*)()>(&::UnityEngine::UI::Shadow::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e13f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Shadow*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Shadow.get_effectColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::UI::Shadow::*)()>(&::UnityEngine::UI::Shadow::get_effectColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e13f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Shadow*>(), { "get_effectColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Shadow.set_effectColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Shadow::*)(::UnityEngine::Color)>(&::UnityEngine::UI::Shadow::set_effectColor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6e13f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Shadow*>(), { "set_effectColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Shadow.get_effectDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UI::Shadow::*)()>(&::UnityEngine::UI::Shadow::get_effectDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e14070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Shadow*>(), { "get_effectDistance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Shadow.set_effectDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Shadow::*)(::UnityEngine::Vector2)>(&::UnityEngine::UI::Shadow::set_effectDistance)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6e14078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Shadow*>(), { "set_effectDistance", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Shadow.get_useGraphicAlpha
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::Shadow::*)()>(&::UnityEngine::UI::Shadow::get_useGraphicAlpha)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1417c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Shadow*>(), { "get_useGraphicAlpha", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Shadow.set_useGraphicAlpha
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Shadow::*)(bool)>(&::UnityEngine::UI::Shadow::set_useGraphicAlpha)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6e14184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Shadow*>(), { "set_useGraphicAlpha", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Shadow.ApplyShadowZeroAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Shadow::*)(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::UnityEngine::Color32, int32_t, int32_t,
                                                                                           float_t, float_t)>(&::UnityEngine::UI::Shadow::ApplyShadowZeroAlloc)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x6e14240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Shadow*>(),
                                                             { "ApplyShadowZeroAlloc",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*>(), ::i2c::type_of<::UnityEngine::Color32>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Shadow.ApplyShadow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Shadow::*)(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::UnityEngine::Color32, int32_t, int32_t,
                                                                                           float_t, float_t)>(&::UnityEngine::UI::Shadow::ApplyShadow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e14534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Shadow*>(),
                                                             { "ApplyShadow",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*>(), ::i2c::type_of<::UnityEngine::Color32>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Shadow.ModifyMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Shadow::*)(::UnityEngine::UI::VertexHelper*)>(&::UnityEngine::UI::Shadow::ModifyMesh)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6e1453c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Shadow*>(), { ::i2c::class_of<::UnityEngine::UI::Shadow*>(), 20 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& UnityEngine::UI::Shadow::__cordl_internal_get_m_EffectColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EffectColor;
}
constexpr ::UnityEngine::Color const& UnityEngine::UI::Shadow::__cordl_internal_get_m_EffectColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EffectColor;
}
constexpr void UnityEngine::UI::Shadow::__cordl_internal_set_m_EffectColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EffectColor = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UI::Shadow::__cordl_internal_get_m_EffectDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EffectDistance;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UI::Shadow::__cordl_internal_get_m_EffectDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EffectDistance;
}
constexpr void UnityEngine::UI::Shadow::__cordl_internal_set_m_EffectDistance(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EffectDistance = value;
}
constexpr bool& UnityEngine::UI::Shadow::__cordl_internal_get_m_UseGraphicAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseGraphicAlpha;
}
constexpr bool const& UnityEngine::UI::Shadow::__cordl_internal_get_m_UseGraphicAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseGraphicAlpha;
}
constexpr void UnityEngine::UI::Shadow::__cordl_internal_set_m_UseGraphicAlpha(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseGraphicAlpha = value;
}
inline void UnityEngine::UI::Shadow::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Shadow*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Color UnityEngine::UI::Shadow::get_effectColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Shadow*>(), { "get_effectColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void UnityEngine::UI::Shadow::set_effectColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Shadow*>(), { "set_effectColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::UI::Shadow::get_effectDistance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Shadow*>(), { "get_effectDistance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::UI::Shadow::set_effectDistance(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Shadow*>(), { "set_effectDistance", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::Shadow::get_useGraphicAlpha() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Shadow*>(), { "get_useGraphicAlpha", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UI::Shadow::set_useGraphicAlpha(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Shadow*>(), { "set_useGraphicAlpha", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UI::Shadow::ApplyShadowZeroAlloc(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::UnityEngine::Color32 color, int32_t start, int32_t end, float_t x,
                                                          float_t y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Shadow*>(),
                                                           { "ApplyShadowZeroAlloc",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*>(), ::i2c::type_of<::UnityEngine::Color32>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, verts, color, start, end, x, y);
}
inline void UnityEngine::UI::Shadow::ApplyShadow(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::UnityEngine::Color32 color, int32_t start, int32_t end, float_t x,
                                                 float_t y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Shadow*>(),
                                                           { "ApplyShadow",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*>(), ::i2c::type_of<::UnityEngine::Color32>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, verts, color, start, end, x, y);
}
inline void UnityEngine::UI::Shadow::ModifyMesh(::UnityEngine::UI::VertexHelper* vh) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Shadow*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vh);
}
inline ::UnityEngine::UI::Shadow* UnityEngine::UI::Shadow::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::Shadow*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Shadow::Shadow() {}
