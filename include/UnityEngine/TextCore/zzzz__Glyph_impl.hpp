#pragma once
// IWYU pragma private; include "UnityEngine\TextCore\Glyph.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/zzzz__GlyphClassDefinitionType_impl.hpp"
#include "UnityEngine/TextCore/zzzz__GlyphMetrics_impl.hpp"
#include "UnityEngine/TextCore/zzzz__GlyphRect_impl.hpp"
#include "UnityEngine/TextCore/zzzz__Glyph_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphMarshallingStruct_def.hpp"
#include "UnityEngine/TextCore/zzzz__GlyphMetrics_def.hpp"
#include "UnityEngine/TextCore/zzzz__GlyphRect_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Glyph.get_index
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::TextCore::Glyph::*)()>(&::UnityEngine::TextCore::Glyph::get_index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bbc4dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Glyph*>(), { "get_index", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Glyph.set_index
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Glyph::*)(uint32_t)>(&::UnityEngine::TextCore::Glyph::set_index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bbc4e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Glyph*>(), { "set_index", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Glyph.get_metrics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::GlyphMetrics (::UnityEngine::TextCore::Glyph::*)()>(&::UnityEngine::TextCore::Glyph::get_metrics)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6bbc4ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Glyph*>(), { "get_metrics", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Glyph.set_metrics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Glyph::*)(::UnityEngine::TextCore::GlyphMetrics)>(&::UnityEngine::TextCore::Glyph::set_metrics)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6bbc500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Glyph*>(), { "set_metrics", {}, { ::i2c::type_of<::UnityEngine::TextCore::GlyphMetrics>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Glyph.get_glyphRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::GlyphRect (::UnityEngine::TextCore::Glyph::*)()>(&::UnityEngine::TextCore::Glyph::get_glyphRect)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6bbc514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Glyph*>(), { "get_glyphRect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Glyph.set_glyphRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Glyph::*)(::UnityEngine::TextCore::GlyphRect)>(&::UnityEngine::TextCore::Glyph::set_glyphRect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bbc520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Glyph*>(), { "set_glyphRect", {}, { ::i2c::type_of<::UnityEngine::TextCore::GlyphRect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Glyph.get_scale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TextCore::Glyph::*)()>(&::UnityEngine::TextCore::Glyph::get_scale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bbc528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Glyph*>(), { "get_scale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Glyph.set_scale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Glyph::*)(float_t)>(&::UnityEngine::TextCore::Glyph::set_scale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bbc530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Glyph*>(), { "set_scale", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Glyph.get_atlasIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Glyph::*)()>(&::UnityEngine::TextCore::Glyph::get_atlasIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bbc538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Glyph*>(), { "get_atlasIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Glyph.set_atlasIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Glyph::*)(int32_t)>(&::UnityEngine::TextCore::Glyph::set_atlasIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bbc540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Glyph*>(), { "set_atlasIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Glyph._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Glyph::*)()>(&::UnityEngine::TextCore::Glyph::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6bbc548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Glyph*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Glyph._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Glyph::*)(::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct)>(&::UnityEngine::TextCore::Glyph::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6bbc55c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Glyph*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Glyph._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Glyph::*)(uint32_t, ::UnityEngine::TextCore::GlyphMetrics, ::UnityEngine::TextCore::GlyphRect, float_t, int32_t)>(
    &::UnityEngine::TextCore::Glyph::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6bbc5b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Glyph*>(), { ".ctor",
                                                                                  {},
                                                                                  { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::GlyphMetrics>(),
                                                                                    ::i2c::type_of<::UnityEngine::TextCore::GlyphRect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr uint32_t& UnityEngine::TextCore::Glyph::__cordl_internal_get_m_Index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Index;
}
constexpr uint32_t const& UnityEngine::TextCore::Glyph::__cordl_internal_get_m_Index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Index;
}
constexpr void UnityEngine::TextCore::Glyph::__cordl_internal_set_m_Index(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Index = value;
}
constexpr ::UnityEngine::TextCore::GlyphMetrics& UnityEngine::TextCore::Glyph::__cordl_internal_get_m_Metrics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Metrics;
}
constexpr ::UnityEngine::TextCore::GlyphMetrics const& UnityEngine::TextCore::Glyph::__cordl_internal_get_m_Metrics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Metrics;
}
constexpr void UnityEngine::TextCore::Glyph::__cordl_internal_set_m_Metrics(::UnityEngine::TextCore::GlyphMetrics value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Metrics = value;
}
constexpr ::UnityEngine::TextCore::GlyphRect& UnityEngine::TextCore::Glyph::__cordl_internal_get_m_GlyphRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphRect;
}
constexpr ::UnityEngine::TextCore::GlyphRect const& UnityEngine::TextCore::Glyph::__cordl_internal_get_m_GlyphRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlyphRect;
}
constexpr void UnityEngine::TextCore::Glyph::__cordl_internal_set_m_GlyphRect(::UnityEngine::TextCore::GlyphRect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GlyphRect = value;
}
constexpr float_t& UnityEngine::TextCore::Glyph::__cordl_internal_get_m_Scale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Scale;
}
constexpr float_t const& UnityEngine::TextCore::Glyph::__cordl_internal_get_m_Scale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Scale;
}
constexpr void UnityEngine::TextCore::Glyph::__cordl_internal_set_m_Scale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Scale = value;
}
constexpr int32_t& UnityEngine::TextCore::Glyph::__cordl_internal_get_m_AtlasIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasIndex;
}
constexpr int32_t const& UnityEngine::TextCore::Glyph::__cordl_internal_get_m_AtlasIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasIndex;
}
constexpr void UnityEngine::TextCore::Glyph::__cordl_internal_set_m_AtlasIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AtlasIndex = value;
}
constexpr ::UnityEngine::TextCore::GlyphClassDefinitionType& UnityEngine::TextCore::Glyph::__cordl_internal_get_m_ClassDefinitionType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClassDefinitionType;
}
constexpr ::UnityEngine::TextCore::GlyphClassDefinitionType const& UnityEngine::TextCore::Glyph::__cordl_internal_get_m_ClassDefinitionType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClassDefinitionType;
}
constexpr void UnityEngine::TextCore::Glyph::__cordl_internal_set_m_ClassDefinitionType(::UnityEngine::TextCore::GlyphClassDefinitionType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClassDefinitionType = value;
}
inline uint32_t UnityEngine::TextCore::Glyph::get_index() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Glyph*>(), { "get_index", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Glyph::set_index(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Glyph*>(), { "set_index", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::TextCore::GlyphMetrics UnityEngine::TextCore::Glyph::get_metrics() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Glyph*>(), { "get_metrics", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::GlyphMetrics>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Glyph::set_metrics(::UnityEngine::TextCore::GlyphMetrics value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Glyph*>(), { "set_metrics", {}, { ::i2c::type_of<::UnityEngine::TextCore::GlyphMetrics>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::TextCore::GlyphRect UnityEngine::TextCore::Glyph::get_glyphRect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Glyph*>(), { "get_glyphRect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::GlyphRect>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Glyph::set_glyphRect(::UnityEngine::TextCore::GlyphRect value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Glyph*>(), { "set_glyphRect", {}, { ::i2c::type_of<::UnityEngine::TextCore::GlyphRect>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::TextCore::Glyph::get_scale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Glyph*>(), { "get_scale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Glyph::set_scale(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Glyph*>(), { "set_scale", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::TextCore::Glyph::get_atlasIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Glyph*>(), { "get_atlasIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Glyph::set_atlasIndex(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Glyph*>(), { "set_atlasIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::TextCore::Glyph::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Glyph*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Glyph::_ctor(::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct glyphStruct) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Glyph*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, glyphStruct);
}
inline void UnityEngine::TextCore::Glyph::_ctor(uint32_t index, ::UnityEngine::TextCore::GlyphMetrics metrics, ::UnityEngine::TextCore::GlyphRect glyphRect, float_t scale, int32_t atlasIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Glyph*>(), { ".ctor",
                                                                                {},
                                                                                { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::GlyphMetrics>(),
                                                                                  ::i2c::type_of<::UnityEngine::TextCore::GlyphRect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, metrics, glyphRect, scale, atlasIndex);
}
inline ::UnityEngine::TextCore::Glyph* UnityEngine::TextCore::Glyph::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::Glyph*>());
}
inline ::UnityEngine::TextCore::Glyph* UnityEngine::TextCore::Glyph::New_ctor(::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct glyphStruct) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::Glyph*>(glyphStruct));
}
inline ::UnityEngine::TextCore::Glyph* UnityEngine::TextCore::Glyph::New_ctor(uint32_t index, ::UnityEngine::TextCore::GlyphMetrics metrics, ::UnityEngine::TextCore::GlyphRect glyphRect,
                                                                              float_t scale, int32_t atlasIndex) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::Glyph*>(index, metrics, glyphRect, scale, atlasIndex));
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Glyph::Glyph() {}
