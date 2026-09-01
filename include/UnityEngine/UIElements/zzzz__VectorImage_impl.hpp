#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\VectorImage.hpp"
#include "UnityEngine/UIElements/zzzz__GradientSettings_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VectorImageVertex_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VectorImage_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::VectorImage.get_width
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::VectorImage::*)()>(&::UnityEngine::UIElements::VectorImage::get_width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cc936c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VectorImage*>(), { "get_width", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VectorImage.get_height
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::VectorImage::*)()>(&::UnityEngine::UIElements::VectorImage::get_height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cc9374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VectorImage*>(), { "get_height", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VectorImage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VectorImage::*)()>(&::UnityEngine::UIElements::VectorImage::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6cc937c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VectorImage*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::UIElements::VectorImage::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr int32_t const& UnityEngine::UIElements::VectorImage::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void UnityEngine::UIElements::VectorImage::__cordl_internal_set_version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& UnityEngine::UIElements::VectorImage::__cordl_internal_get_atlas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___atlas;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& UnityEngine::UIElements::VectorImage::__cordl_internal_get_atlas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___atlas;
}
constexpr void UnityEngine::UIElements::VectorImage::__cordl_internal_set_atlas(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___atlas = value;
}
constexpr ::ArrayW<::UnityEngine::UIElements::VectorImageVertex>& UnityEngine::UIElements::VectorImage::__cordl_internal_get_vertices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertices;
}
constexpr ::ArrayW<::UnityEngine::UIElements::VectorImageVertex> const& UnityEngine::UIElements::VectorImage::__cordl_internal_get_vertices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertices;
}
constexpr void UnityEngine::UIElements::VectorImage::__cordl_internal_set_vertices(::ArrayW<::UnityEngine::UIElements::VectorImageVertex> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vertices = value;
}
constexpr ::ArrayW<uint16_t>& UnityEngine::UIElements::VectorImage::__cordl_internal_get_indices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indices;
}
constexpr ::ArrayW<uint16_t> const& UnityEngine::UIElements::VectorImage::__cordl_internal_get_indices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indices;
}
constexpr void UnityEngine::UIElements::VectorImage::__cordl_internal_set_indices(::ArrayW<uint16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indices = value;
}
constexpr ::ArrayW<::UnityEngine::UIElements::GradientSettings>& UnityEngine::UIElements::VectorImage::__cordl_internal_get_settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settings;
}
constexpr ::ArrayW<::UnityEngine::UIElements::GradientSettings> const& UnityEngine::UIElements::VectorImage::__cordl_internal_get_settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settings;
}
constexpr void UnityEngine::UIElements::VectorImage::__cordl_internal_set_settings(::ArrayW<::UnityEngine::UIElements::GradientSettings> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___settings = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::VectorImage::__cordl_internal_get_size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::VectorImage::__cordl_internal_get_size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr void UnityEngine::UIElements::VectorImage::__cordl_internal_set_size(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___size = value;
}
inline float_t UnityEngine::UIElements::VectorImage::get_width() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VectorImage*>(), { "get_width", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::VectorImage::get_height() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VectorImage*>(), { "get_height", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VectorImage::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VectorImage*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VectorImage* UnityEngine::UIElements::VectorImage::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::VectorImage*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VectorImage::VectorImage() {}
