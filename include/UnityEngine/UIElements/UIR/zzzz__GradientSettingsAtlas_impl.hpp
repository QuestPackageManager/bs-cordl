#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\UIR\GradientSettingsAtlas.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GradientSettingsAtlas_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Alloc_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BestFitAllocator_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GradientRemap_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GradientSettingsAtlas_def.hpp"
#include "UnityEngine/UIElements/zzzz__GradientSettings_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GradientSettingsAtlas_RawTexture.WriteRawInt2Packed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::GradientSettingsAtlas_RawTexture::*)(int32_t, int32_t, int32_t, int32_t)>(
    &::UnityEngine::UIElements::UIR::GradientSettingsAtlas_RawTexture::WriteRawInt2Packed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6cdd6d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GradientSettingsAtlas_RawTexture>(),
                                                { "WriteRawInt2Packed", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GradientSettingsAtlas_RawTexture.WriteRawFloat4Packed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::GradientSettingsAtlas_RawTexture::*)(float_t, float_t, float_t, float_t, int32_t, int32_t)>(
    &::UnityEngine::UIElements::UIR::GradientSettingsAtlas_RawTexture::WriteRawFloat4Packed)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6cdd620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GradientSettingsAtlas_RawTexture>(),
                            { "WriteRawFloat4Packed",
                              {},
                              { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIR::GradientSettingsAtlas_RawTexture::WriteRawInt2Packed(int32_t v0, int32_t v1, int32_t destX, int32_t destY) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GradientSettingsAtlas_RawTexture>(),
                                              { "WriteRawInt2Packed", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v0, v1, destX, destY);
}
inline void UnityEngine::UIElements::UIR::GradientSettingsAtlas_RawTexture::WriteRawFloat4Packed(float_t f0, float_t f1, float_t f2, float_t f3, int32_t destX, int32_t destY) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GradientSettingsAtlas_RawTexture>(),
                          { "WriteRawFloat4Packed",
                            {},
                            { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, f0, f1, f2, f3, destX, destY);
}
// Ctor Parameters [CppParam { name: "rgba", ty: "::ArrayW<::UnityEngine::Color32>", modifiers: "", def_value: Some("{}") }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::GradientSettingsAtlas_RawTexture::GradientSettingsAtlas_RawTexture(::ArrayW<::UnityEngine::Color32> rgba, int32_t width, int32_t height) noexcept {
  this->rgba = rgba;
  this->width = width;
  this->height = height;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::GradientSettingsAtlas_RawTexture::GradientSettingsAtlas_RawTexture() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GradientSettingsAtlas.get_length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)()>(&::UnityEngine::UIElements::UIR::GradientSettingsAtlas::get_length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cdcffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>(), { "get_length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GradientSettingsAtlas.get_disposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)()>(&::UnityEngine::UIElements::UIR::GradientSettingsAtlas::get_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cdd004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>(), { "get_disposed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GradientSettingsAtlas.set_disposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)(bool)>(&::UnityEngine::UIElements::UIR::GradientSettingsAtlas::set_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cdd00c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>(), { "set_disposed", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GradientSettingsAtlas.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)()>(&::UnityEngine::UIElements::UIR::GradientSettingsAtlas::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6cdd014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GradientSettingsAtlas.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)(bool)>(&::UnityEngine::UIElements::UIR::GradientSettingsAtlas::Dispose)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6cdd084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GradientSettingsAtlas._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)(int32_t)>(&::UnityEngine::UIElements::UIR::GradientSettingsAtlas::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6cdd108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GradientSettingsAtlas.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)()>(&::UnityEngine::UIElements::UIR::GradientSettingsAtlas::Reset)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6cdd114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GradientSettingsAtlas.get_atlas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)()>(
    &::UnityEngine::UIElements::UIR::GradientSettingsAtlas::get_atlas)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cdd1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>(), { "get_atlas", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GradientSettingsAtlas.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::Alloc (::UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)(int32_t)>(
    &::UnityEngine::UIElements::UIR::GradientSettingsAtlas::Add)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6cdd1dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>(), { "Add", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GradientSettingsAtlas.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)(
    ::UnityEngine::UIElements::UIR::Alloc, ::ArrayW<::UnityEngine::UIElements::GradientSettings>, ::UnityEngine::UIElements::UIR::GradientRemap*)>(
    &::UnityEngine::UIElements::UIR::GradientSettingsAtlas::Write)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x6cdd2bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>(),
                                                             { "Write",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::UIR::Alloc>(), ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::GradientSettings>>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::UIR::GradientRemap*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GradientSettingsAtlas.get_MustCommit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)()>(&::UnityEngine::UIElements::UIR::GradientSettingsAtlas::get_MustCommit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cdd758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>(), { "get_MustCommit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GradientSettingsAtlas.set_MustCommit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)(bool)>(&::UnityEngine::UIElements::UIR::GradientSettingsAtlas::set_MustCommit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cdd760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>(), { "set_MustCommit", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GradientSettingsAtlas.Commit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)()>(&::UnityEngine::UIElements::UIR::GradientSettingsAtlas::Commit)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6cdd768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>(), { "Commit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GradientSettingsAtlas.PrepareAtlas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)()>(&::UnityEngine::UIElements::UIR::GradientSettingsAtlas::PrepareAtlas)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6cdd7d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>(), { "PrepareAtlas", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::UIElements::UIR::GradientSettingsAtlas::__cordl_internal_get_m_Length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Length;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::GradientSettingsAtlas::__cordl_internal_get_m_Length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Length;
}
constexpr void UnityEngine::UIElements::UIR::GradientSettingsAtlas::__cordl_internal_set_m_Length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Length = value;
}
constexpr int32_t& UnityEngine::UIElements::UIR::GradientSettingsAtlas::__cordl_internal_get_m_ElemWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElemWidth;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::GradientSettingsAtlas::__cordl_internal_get_m_ElemWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElemWidth;
}
constexpr void UnityEngine::UIElements::UIR::GradientSettingsAtlas::__cordl_internal_set_m_ElemWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ElemWidth = value;
}
constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator*& UnityEngine::UIElements::UIR::GradientSettingsAtlas::__cordl_internal_get_m_Allocator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Allocator;
}
constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator* const& UnityEngine::UIElements::UIR::GradientSettingsAtlas::__cordl_internal_get_m_Allocator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Allocator;
}
constexpr void UnityEngine::UIElements::UIR::GradientSettingsAtlas::__cordl_internal_set_m_Allocator(::UnityEngine::UIElements::UIR::BestFitAllocator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Allocator = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& UnityEngine::UIElements::UIR::GradientSettingsAtlas::__cordl_internal_get_m_Atlas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Atlas;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& UnityEngine::UIElements::UIR::GradientSettingsAtlas::__cordl_internal_get_m_Atlas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Atlas;
}
constexpr void UnityEngine::UIElements::UIR::GradientSettingsAtlas::__cordl_internal_set_m_Atlas(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Atlas = value;
}
constexpr ::UnityEngine::UIElements::UIR::GradientSettingsAtlas_RawTexture& UnityEngine::UIElements::UIR::GradientSettingsAtlas::__cordl_internal_get_m_RawAtlas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RawAtlas;
}
constexpr ::UnityEngine::UIElements::UIR::GradientSettingsAtlas_RawTexture const& UnityEngine::UIElements::UIR::GradientSettingsAtlas::__cordl_internal_get_m_RawAtlas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RawAtlas;
}
constexpr void UnityEngine::UIElements::UIR::GradientSettingsAtlas::__cordl_internal_set_m_RawAtlas(::UnityEngine::UIElements::UIR::GradientSettingsAtlas_RawTexture value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RawAtlas = value;
}
constexpr bool& UnityEngine::UIElements::UIR::GradientSettingsAtlas::__cordl_internal_get__disposed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::UIR::GradientSettingsAtlas::__cordl_internal_get__disposed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::GradientSettingsAtlas::__cordl_internal_set__disposed_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed_k__BackingField = value;
}
constexpr bool& UnityEngine::UIElements::UIR::GradientSettingsAtlas::__cordl_internal_get__MustCommit_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MustCommit_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::UIR::GradientSettingsAtlas::__cordl_internal_get__MustCommit_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MustCommit_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::GradientSettingsAtlas::__cordl_internal_set__MustCommit_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MustCommit_k__BackingField = value;
}
inline void UnityEngine::UIElements::UIR::GradientSettingsAtlas::setStaticF_s_MarkerWrite(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerWrite", ::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::GradientSettingsAtlas::getStaticF_s_MarkerWrite() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerWrite", ::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>();
}
inline void UnityEngine::UIElements::UIR::GradientSettingsAtlas::setStaticF_s_MarkerCommit(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerCommit", ::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::GradientSettingsAtlas::getStaticF_s_MarkerCommit() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerCommit", ::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>();
}
inline void UnityEngine::UIElements::UIR::GradientSettingsAtlas::setStaticF_s_TextureCounter(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_TextureCounter", ::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::UIR::GradientSettingsAtlas::getStaticF_s_TextureCounter() {
  return ::cordl_internals::getStaticField<int32_t, "s_TextureCounter", ::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>();
}
inline int32_t UnityEngine::UIElements::UIR::GradientSettingsAtlas::get_length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>(), { "get_length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIR::GradientSettingsAtlas::get_disposed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>(), { "get_disposed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::GradientSettingsAtlas::set_disposed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>(), { "set_disposed", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::GradientSettingsAtlas::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::GradientSettingsAtlas::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void UnityEngine::UIElements::UIR::GradientSettingsAtlas::_ctor(int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, length);
}
inline void UnityEngine::UIElements::UIR::GradientSettingsAtlas::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::UIElements::UIR::GradientSettingsAtlas::get_atlas() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>(), { "get_atlas", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::Alloc UnityEngine::UIElements::UIR::GradientSettingsAtlas::Add(int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>(), { "Add", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::Alloc>(this, ___internal_method, count);
}
inline void UnityEngine::UIElements::UIR::GradientSettingsAtlas::Write(::UnityEngine::UIElements::UIR::Alloc alloc, ::ArrayW<::UnityEngine::UIElements::GradientSettings> settings,
                                                                       ::UnityEngine::UIElements::UIR::GradientRemap* remap) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>(),
                                                           { "Write",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::UIR::Alloc>(), ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::GradientSettings>>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::UIR::GradientRemap*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alloc, settings, remap);
}
inline bool UnityEngine::UIElements::UIR::GradientSettingsAtlas::get_MustCommit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>(), { "get_MustCommit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::GradientSettingsAtlas::set_MustCommit(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>(), { "set_MustCommit", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::GradientSettingsAtlas::Commit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>(), { "Commit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::GradientSettingsAtlas::PrepareAtlas() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>(), { "PrepareAtlas", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::GradientSettingsAtlas* UnityEngine::UIElements::UIR::GradientSettingsAtlas::New_ctor(int32_t length) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*>(length));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::UIR::GradientSettingsAtlas::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::UIR::GradientSettingsAtlas::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::GradientSettingsAtlas::GradientSettingsAtlas() {}
