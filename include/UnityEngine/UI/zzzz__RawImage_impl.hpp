#pragma once
// IWYU pragma private; include "UnityEngine\UI\RawImage.hpp"
#include "UnityEngine/UI/zzzz__MaskableGraphic_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/UI/zzzz__RawImage_def.hpp"
#include "UnityEngine/UI/zzzz__VertexHelper_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::RawImage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::RawImage::*)()>(&::UnityEngine::UI::RawImage::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e02114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::RawImage*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::RawImage.get_mainTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (::UnityEngine::UI::RawImage::*)()>(&::UnityEngine::UI::RawImage::get_mainTexture)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6e0213c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::RawImage*>(), { ::i2c::class_of<::UnityEngine::UI::RawImage*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::RawImage.get_texture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (::UnityEngine::UI::RawImage::*)()>(&::UnityEngine::UI::RawImage::get_texture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e0229c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::RawImage*>(), { "get_texture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::RawImage.set_texture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::RawImage::*)(::UnityEngine::Texture*)>(&::UnityEngine::UI::RawImage::set_texture)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6e022a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::RawImage*>(), { "set_texture", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::RawImage.get_uvRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::UnityEngine::UI::RawImage::*)()>(&::UnityEngine::UI::RawImage::get_uvRect)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e02354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::RawImage*>(), { "get_uvRect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::RawImage.set_uvRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::RawImage::*)(::UnityEngine::Rect)>(&::UnityEngine::UI::RawImage::set_uvRect)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6e02360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::RawImage*>(), { "set_uvRect", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::RawImage.SetNativeSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::RawImage::*)()>(&::UnityEngine::UI::RawImage::SetNativeSize)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x6e023ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::RawImage*>(), { ::i2c::class_of<::UnityEngine::UI::RawImage*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::RawImage.OnPopulateMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::RawImage::*)(::UnityEngine::UI::VertexHelper*)>(&::UnityEngine::UI::RawImage::OnPopulateMesh)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x6e0266c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::RawImage*>(), { ::i2c::class_of<::UnityEngine::UI::RawImage*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::RawImage.OnDidApplyAnimationProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::RawImage::*)()>(&::UnityEngine::UI::RawImage::OnDidApplyAnimationProperties)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e02d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::RawImage*>(), { ::i2c::class_of<::UnityEngine::UI::RawImage*>(), 13 }));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Texture>& UnityEngine::UI::RawImage::__cordl_internal_get_m_Texture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Texture;
}
constexpr ::UnityW<::UnityEngine::Texture> const& UnityEngine::UI::RawImage::__cordl_internal_get_m_Texture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Texture;
}
constexpr void UnityEngine::UI::RawImage::__cordl_internal_set_m_Texture(::UnityW<::UnityEngine::Texture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Texture = value;
}
constexpr ::UnityEngine::Rect& UnityEngine::UI::RawImage::__cordl_internal_get_m_UVRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UVRect;
}
constexpr ::UnityEngine::Rect const& UnityEngine::UI::RawImage::__cordl_internal_get_m_UVRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UVRect;
}
constexpr void UnityEngine::UI::RawImage::__cordl_internal_set_m_UVRect(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UVRect = value;
}
inline void UnityEngine::UI::RawImage::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::RawImage*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::UI::RawImage::get_mainTexture() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::RawImage*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::UI::RawImage::get_texture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::RawImage*>(), { "get_texture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(this, ___internal_method);
}
inline void UnityEngine::UI::RawImage::set_texture(::UnityEngine::Texture* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::RawImage*>(), { "set_texture", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rect UnityEngine::UI::RawImage::get_uvRect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::RawImage*>(), { "get_uvRect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline void UnityEngine::UI::RawImage::set_uvRect(::UnityEngine::Rect value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::RawImage*>(), { "set_uvRect", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UI::RawImage::SetNativeSize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::RawImage*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::RawImage::OnPopulateMesh(::UnityEngine::UI::VertexHelper* vh) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::RawImage*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vh);
}
inline void UnityEngine::UI::RawImage::OnDidApplyAnimationProperties() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::RawImage*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UI::RawImage* UnityEngine::UI::RawImage::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::RawImage*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::RawImage::RawImage() {}
