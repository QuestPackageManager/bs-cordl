#pragma once
// IWYU pragma private; include "TMPro\TMP_TextElement.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__TextElementType_impl.hpp"
#include "TMPro/zzzz__TMP_TextElement_def.hpp"
#include "TMPro/zzzz__TMP_Asset_def.hpp"
#include "TMPro/zzzz__TextElementType_def.hpp"
#include "UnityEngine/TextCore/zzzz__Glyph_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_TextElement.get_elementType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::TextElementType (::TMPro::TMP_TextElement::*)()>(&::TMPro::TMP_TextElement::get_elementType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69a54b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextElement*>(), { "get_elementType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextElement.get_unicode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::TMPro::TMP_TextElement::*)()>(&::TMPro::TMP_TextElement::get_unicode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69a54c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextElement*>(), { "get_unicode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextElement.set_unicode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_TextElement::*)(uint32_t)>(&::TMPro::TMP_TextElement::set_unicode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69a54c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextElement*>(), { "set_unicode", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextElement.get_textAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TMPro::TMP_Asset> (::TMPro::TMP_TextElement::*)()>(&::TMPro::TMP_TextElement::get_textAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69a54d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextElement*>(), { "get_textAsset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextElement.set_textAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_TextElement::*)(::TMPro::TMP_Asset*)>(&::TMPro::TMP_TextElement::set_textAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69a54d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextElement*>(), { "set_textAsset", {}, { ::i2c::type_of<::TMPro::TMP_Asset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextElement.get_glyph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Glyph* (::TMPro::TMP_TextElement::*)()>(&::TMPro::TMP_TextElement::get_glyph)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69a54e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextElement*>(), { "get_glyph", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextElement.set_glyph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_TextElement::*)(::UnityEngine::TextCore::Glyph*)>(&::TMPro::TMP_TextElement::set_glyph)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69a54e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextElement*>(), { "set_glyph", {}, { ::i2c::type_of<::UnityEngine::TextCore::Glyph*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextElement.get_glyphIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::TMPro::TMP_TextElement::*)()>(&::TMPro::TMP_TextElement::get_glyphIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69a54f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextElement*>(), { "get_glyphIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextElement.set_glyphIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_TextElement::*)(uint32_t)>(&::TMPro::TMP_TextElement::set_glyphIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69a54f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextElement*>(), { "set_glyphIndex", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextElement.get_scale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::TMPro::TMP_TextElement::*)()>(&::TMPro::TMP_TextElement::get_scale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69a5500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextElement*>(), { "get_scale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextElement.set_scale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_TextElement::*)(float_t)>(&::TMPro::TMP_TextElement::set_scale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69a5508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextElement*>(), { "set_scale", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_TextElement._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_TextElement::*)()>(&::TMPro::TMP_TextElement::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69a2124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextElement*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::TMPro::TextElementType& TMPro::TMP_TextElement::__cordl_internal_get_m_ElementType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElementType;
}
constexpr ::TMPro::TextElementType const& TMPro::TMP_TextElement::__cordl_internal_get_m_ElementType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElementType;
}
constexpr void TMPro::TMP_TextElement::__cordl_internal_set_m_ElementType(::TMPro::TextElementType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ElementType = value;
}
constexpr uint32_t& TMPro::TMP_TextElement::__cordl_internal_get_m_Unicode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Unicode;
}
constexpr uint32_t const& TMPro::TMP_TextElement::__cordl_internal_get_m_Unicode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Unicode;
}
constexpr void TMPro::TMP_TextElement::__cordl_internal_set_m_Unicode(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Unicode = value;
}
constexpr ::UnityW<::TMPro::TMP_Asset>& TMPro::TMP_TextElement::__cordl_internal_get_m_TextAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextAsset;
}
constexpr ::UnityW<::TMPro::TMP_Asset> const& TMPro::TMP_TextElement::__cordl_internal_get_m_TextAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextAsset;
}
constexpr void TMPro::TMP_TextElement::__cordl_internal_set_m_TextAsset(::UnityW<::TMPro::TMP_Asset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TextAsset = value;
}
constexpr ::UnityEngine::TextCore::Glyph*& TMPro::TMP_TextElement::__cordl_internal_get_m_Glyph() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Glyph;
}
constexpr ::UnityEngine::TextCore::Glyph* const& TMPro::TMP_TextElement::__cordl_internal_get_m_Glyph() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Glyph;
}
constexpr void TMPro::TMP_TextElement::__cordl_internal_set_m_Glyph(::UnityEngine::TextCore::Glyph* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Glyph = value;
}
constexpr uint32_t& TMPro::TMP_TextElement::__cordl_internal_get_m_GlyphIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphIndex;
}
constexpr uint32_t const& TMPro::TMP_TextElement::__cordl_internal_get_m_GlyphIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphIndex;
}
constexpr void TMPro::TMP_TextElement::__cordl_internal_set_m_GlyphIndex(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GlyphIndex = value;
}
constexpr float_t& TMPro::TMP_TextElement::__cordl_internal_get_m_Scale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Scale;
}
constexpr float_t const& TMPro::TMP_TextElement::__cordl_internal_get_m_Scale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Scale;
}
constexpr void TMPro::TMP_TextElement::__cordl_internal_set_m_Scale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Scale = value;
}
inline ::TMPro::TextElementType TMPro::TMP_TextElement::get_elementType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextElement*>(), { "get_elementType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::TextElementType>(this, ___internal_method);
}
inline uint32_t TMPro::TMP_TextElement::get_unicode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextElement*>(), { "get_unicode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void TMPro::TMP_TextElement::set_unicode(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextElement*>(), { "set_unicode", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::TMPro::TMP_Asset> TMPro::TMP_TextElement::get_textAsset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextElement*>(), { "get_textAsset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_Asset>>(this, ___internal_method);
}
inline void TMPro::TMP_TextElement::set_textAsset(::TMPro::TMP_Asset* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextElement*>(), { "set_textAsset", {}, { ::i2c::type_of<::TMPro::TMP_Asset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::TextCore::Glyph* TMPro::TMP_TextElement::get_glyph() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextElement*>(), { "get_glyph", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Glyph*>(this, ___internal_method);
}
inline void TMPro::TMP_TextElement::set_glyph(::UnityEngine::TextCore::Glyph* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextElement*>(), { "set_glyph", {}, { ::i2c::type_of<::UnityEngine::TextCore::Glyph*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t TMPro::TMP_TextElement::get_glyphIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextElement*>(), { "get_glyphIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void TMPro::TMP_TextElement::set_glyphIndex(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextElement*>(), { "set_glyphIndex", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t TMPro::TMP_TextElement::get_scale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextElement*>(), { "get_scale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void TMPro::TMP_TextElement::set_scale(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextElement*>(), { "set_scale", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void TMPro::TMP_TextElement::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_TextElement*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TMPro::TMP_TextElement* TMPro::TMP_TextElement::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::TMP_TextElement*>());
}
// Ctor Parameters []
constexpr ::TMPro::TMP_TextElement::TMP_TextElement() {}
