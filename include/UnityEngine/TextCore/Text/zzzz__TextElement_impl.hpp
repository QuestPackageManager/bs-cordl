#pragma once
// IWYU pragma private; include "UnityEngine\TextCore\Text\TextElement.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextElementType_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextElement_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextElementType_def.hpp"
#include "UnityEngine/TextCore/zzzz__Glyph_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextElement.get_elementType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::TextElementType (::UnityEngine::TextCore::Text::TextElement::*)()>(
    &::UnityEngine::TextCore::Text::TextElement::get_elementType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c02ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextElement*>(), { "get_elementType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextElement.get_unicode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::TextCore::Text::TextElement::*)()>(&::UnityEngine::TextCore::Text::TextElement::get_unicode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bfe058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextElement*>(), { "get_unicode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextElement.set_unicode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextElement::*)(uint32_t)>(&::UnityEngine::TextCore::Text::TextElement::set_unicode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c02ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextElement*>(), { "set_unicode", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextElement.get_textAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextCore::Text::TextAsset> (::UnityEngine::TextCore::Text::TextElement::*)()>(
    &::UnityEngine::TextCore::Text::TextElement::get_textAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bff170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextElement*>(), { "get_textAsset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextElement.set_textAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextElement::*)(::UnityEngine::TextCore::Text::TextAsset*)>(
    &::UnityEngine::TextCore::Text::TextElement::set_textAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c003e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextElement*>(), { "set_textAsset", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextElement.get_glyph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Glyph* (::UnityEngine::TextCore::Text::TextElement::*)()>(&::UnityEngine::TextCore::Text::TextElement::get_glyph)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c02ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextElement*>(), { "get_glyph", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextElement.set_glyph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextElement::*)(::UnityEngine::TextCore::Glyph*)>(&::UnityEngine::TextCore::Text::TextElement::set_glyph)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c003e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextElement*>(), { "set_glyph", {}, { ::i2c::type_of<::UnityEngine::TextCore::Glyph*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextElement.get_glyphIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::TextCore::Text::TextElement::*)()>(&::UnityEngine::TextCore::Text::TextElement::get_glyphIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c003d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextElement*>(), { "get_glyphIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextElement.set_glyphIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextElement::*)(uint32_t)>(&::UnityEngine::TextCore::Text::TextElement::set_glyphIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c02ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextElement*>(), { "set_glyphIndex", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextElement.get_scale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TextCore::Text::TextElement::*)()>(&::UnityEngine::TextCore::Text::TextElement::get_scale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c02ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextElement*>(), { "get_scale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextElement.set_scale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextElement::*)(float_t)>(&::UnityEngine::TextCore::Text::TextElement::set_scale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c02ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextElement*>(), { "set_scale", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextElement._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextElement::*)()>(&::UnityEngine::TextCore::Text::TextElement::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c01300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextElement*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::TextCore::Text::TextElementType& UnityEngine::TextCore::Text::TextElement::__cordl_internal_get_m_ElementType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElementType;
}
constexpr ::UnityEngine::TextCore::Text::TextElementType const& UnityEngine::TextCore::Text::TextElement::__cordl_internal_get_m_ElementType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElementType;
}
constexpr void UnityEngine::TextCore::Text::TextElement::__cordl_internal_set_m_ElementType(::UnityEngine::TextCore::Text::TextElementType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ElementType = value;
}
constexpr uint32_t& UnityEngine::TextCore::Text::TextElement::__cordl_internal_get_m_Unicode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Unicode;
}
constexpr uint32_t const& UnityEngine::TextCore::Text::TextElement::__cordl_internal_get_m_Unicode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Unicode;
}
constexpr void UnityEngine::TextCore::Text::TextElement::__cordl_internal_set_m_Unicode(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Unicode = value;
}
constexpr ::UnityW<::UnityEngine::TextCore::Text::TextAsset>& UnityEngine::TextCore::Text::TextElement::__cordl_internal_get_m_TextAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextAsset;
}
constexpr ::UnityW<::UnityEngine::TextCore::Text::TextAsset> const& UnityEngine::TextCore::Text::TextElement::__cordl_internal_get_m_TextAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextAsset;
}
constexpr void UnityEngine::TextCore::Text::TextElement::__cordl_internal_set_m_TextAsset(::UnityW<::UnityEngine::TextCore::Text::TextAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TextAsset = value;
}
constexpr ::UnityEngine::TextCore::Glyph*& UnityEngine::TextCore::Text::TextElement::__cordl_internal_get_m_Glyph() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Glyph;
}
constexpr ::UnityEngine::TextCore::Glyph* const& UnityEngine::TextCore::Text::TextElement::__cordl_internal_get_m_Glyph() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Glyph;
}
constexpr void UnityEngine::TextCore::Text::TextElement::__cordl_internal_set_m_Glyph(::UnityEngine::TextCore::Glyph* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Glyph = value;
}
constexpr uint32_t& UnityEngine::TextCore::Text::TextElement::__cordl_internal_get_m_GlyphIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphIndex;
}
constexpr uint32_t const& UnityEngine::TextCore::Text::TextElement::__cordl_internal_get_m_GlyphIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphIndex;
}
constexpr void UnityEngine::TextCore::Text::TextElement::__cordl_internal_set_m_GlyphIndex(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GlyphIndex = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextElement::__cordl_internal_get_m_Scale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Scale;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextElement::__cordl_internal_get_m_Scale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Scale;
}
constexpr void UnityEngine::TextCore::Text::TextElement::__cordl_internal_set_m_Scale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Scale = value;
}
inline ::UnityEngine::TextCore::Text::TextElementType UnityEngine::TextCore::Text::TextElement::get_elementType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextElement*>(), { "get_elementType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextElementType>(this, ___internal_method);
}
inline uint32_t UnityEngine::TextCore::Text::TextElement::get_unicode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextElement*>(), { "get_unicode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextElement::set_unicode(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextElement*>(), { "set_unicode", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::TextCore::Text::TextAsset> UnityEngine::TextCore::Text::TextElement::get_textAsset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextElement*>(), { "get_textAsset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextCore::Text::TextAsset>>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextElement::set_textAsset(::UnityEngine::TextCore::Text::TextAsset* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextElement*>(), { "set_textAsset", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::TextCore::Glyph* UnityEngine::TextCore::Text::TextElement::get_glyph() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextElement*>(), { "get_glyph", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Glyph*>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextElement::set_glyph(::UnityEngine::TextCore::Glyph* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextElement*>(), { "set_glyph", {}, { ::i2c::type_of<::UnityEngine::TextCore::Glyph*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t UnityEngine::TextCore::Text::TextElement::get_glyphIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextElement*>(), { "get_glyphIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextElement::set_glyphIndex(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextElement*>(), { "set_glyphIndex", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::TextCore::Text::TextElement::get_scale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextElement*>(), { "get_scale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextElement::set_scale(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextElement*>(), { "set_scale", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::TextCore::Text::TextElement::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextElement*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::TextElement* UnityEngine::TextCore::Text::TextElement::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::Text::TextElement*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextElement::TextElement() {}
